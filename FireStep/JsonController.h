#ifndef JSONCONTROLLER_H
#define JSONCONTROLLER_H

#include "version.h"
#include "Arduino.h"
#include "Thread.h"
#include "Status.h"
#include "Machine.h"
#include "JsonCommand.h"
#include "DeltaCalculator.h"

namespace firestep {

typedef class JsonController {
private:
    Status initializeStrokeArray(JsonCommand &jcmd, JsonObject& stroke,
                                 const char *key, MotorIndex iMotor, int16_t &slen);
    Status processRawSteps(Quad<StepCoord> &steps);
protected:
    Machine &machine;

protected:
	int axisOf(char c);
    void sendResponse(JsonCommand& jcmd, Status status);
    Status initializeStroke(JsonCommand &jcmd, JsonObject& stroke);
    Status initializeHome(JsonCommand& jcmd, JsonObject& jobj, const char* key, bool clear);
    Status initializeProbe(JsonCommand& jcmd, JsonObject& jobj, const char* key, bool clear);
    Status processAxis(JsonCommand &jcmd, JsonObject& jobj, const char* key, char group);
    Status processDisplay(JsonCommand& jcmd, JsonObject& jobj, const char* key);
    Status processHome(JsonCommand& jcmd, JsonObject& jobj, const char* key);
    Status processIOPin(JsonCommand& jcmd, JsonObject& jobj, const char* key);
    Status processIO(JsonCommand& jcmd, JsonObject& jobj, const char* key);
    Status processEEPROMValue(JsonCommand& jcmd, JsonObject& jobj,
                              const char* key, const char *addr);
    Status processEEPROM(JsonCommand& jcmd, JsonObject& jobj, const char* key);
    virtual Status processProbe(JsonCommand& jcmd, JsonObject& jobj, const char* key);
    Status processMotor(JsonCommand &jcmd, JsonObject& jobj, const char* key, char group);
    Status processPin(JsonObject& jobj, const char *key,
                      PinType &pin, int16_t mode, int16_t value = LOW);
    virtual Status processPosition(JsonCommand &jcmd, JsonObject& jobj, const char* key);

    Status processStroke(JsonCommand &jcmd, JsonObject& jobj, const char* key);
    Status processSys(JsonCommand& jcmd, JsonObject& jobj, const char* key);
    Status processTest(JsonCommand& jcmd, JsonObject& jobj, const char* key);
    Status traverseStroke(JsonCommand &jcmd, JsonObject &stroke);
    Status processObj(JsonCommand& jcmd, JsonObject&jobj);

    Status initializeProbe_MTO_FPD(JsonCommand& jcmd, JsonObject& jobj, const char* key, bool clear);
    Status processProbe_MTO_FPD(JsonCommand& jcmd, JsonObject& jobj, const char* key);
    Status processPosition_MTO_FPD(JsonCommand &jcmd, JsonObject& jobj, const char* key);
    Status finalizeProbe_MTO_FPD(JsonCommand& jcmd, JsonObject& jobj, const char* key);
    Status processDimension_MTO_FPD(JsonCommand& jcmd, JsonObject& jobj, const char* key);

public:
    JsonController(Machine& machine);
public:
	JsonController& operator=(JsonController& that);
    Status process(JsonCommand& jcmd);
    Status cancel(JsonCommand &jcmd, Status cause);
} JsonController;

typedef class PHMoveTo {
private:
    int32_t nLoops;
    Quad<PH5TYPE> destination;
    int16_t nSegs;
    Machine &machine;

private:
    Status execute(JsonCommand& jcmd, JsonObject *pjobj);

public:
    PHMoveTo(Machine& machine);
    Status process(JsonCommand& jcmd, JsonObject& jobj, const char* key);
}PHMoveTo;

} // namespace firestep

#endif
