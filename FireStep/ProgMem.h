#ifndef PROGMEM_H
#define PROGMEM_H

#ifdef CMAKE
#include <cstring>
#include <cstdio>
#endif

#ifdef ARDUINO
#define strcmp_PS(a,b) strcmp_P(b,a)
#else
#define PROGMEM
#define strcpy_P(dst,src) strcpy(dst,src)
#define strlen_P(src) strlen(src)
#define strcmp_PS(a,b) strcmp(a,b)
#define pgm_read_byte_near(src) (*(const char *)(src))
#endif

#include "Status.h"
#include "JsonCommand.h"

namespace firestep {

const char *prog_src(const char *name);
Status prog_dump(const char *name);
Status prog_load_cmd(const char *name, JsonCommand &jcmd);

extern const char OP_1[];
extern const char OP_2[];
extern const char OP_3[];
extern const char OP_4[];
extern const char OP_a1[];
extern const char OP_a2[];
extern const char OP_a3[];
extern const char OP_a[];
extern const char OP_aa[];
extern const char OP_ah[];
extern const char OP_angle[];
extern const char OP_app[];
extern const char OP_as[];
extern const char OP_ax[];
extern const char OP_ay[];
extern const char OP_az[];
extern const char OP_b[];
extern const char OP_bx[];
extern const char OP_by[];
extern const char OP_bz[];
extern const char OP_c[];
extern const char OP_cal[];
extern const char OP_cal_fpd_bed_coarse[];
extern const char OP_cal_fpd_bed_fine[];
extern const char OP_cal_fpd_bed_medium[];
extern const char OP_cal_fpd_home_coarse[];
extern const char OP_cal_fpd_home_fine[];
extern const char OP_cal_fpd_home_medium[];
extern const char OP_cala1[];
extern const char OP_cala2[];
extern const char OP_cala3[];
extern const char OP_calbx[];
extern const char OP_calby[];
extern const char OP_calbz[];
extern const char OP_calge[];
extern const char OP_calgr1[];
extern const char OP_calgr2[];
extern const char OP_calgr3[];
extern const char OP_calgr[];
extern const char OP_calha[];
extern const char OP_calhe[];
extern const char OP_calho[];
extern const char OP_calsv[];
extern const char OP_calzc[];
extern const char OP_calzr[];
extern const char OP_cb[];
extern const char OP_cg[];
extern const char OP_ch[];
extern const char OP_cmt[];
extern const char OP_cr[];
extern const char OP_d[];
extern const char OP_db[];
extern const char OP_dbg[];
extern const char OP_dbgfr[];
extern const char OP_dbglp[];
extern const char OP_dbgtc[];
extern const char OP_dh[];
extern const char OP_dim[];
extern const char OP_dim_fpd[];
extern const char OP_dim_fpd_400[];
extern const char OP_dim_lc_200[];
extern const char OP_dim_lc_400[];
extern const char OP_dim_tw_200[];
extern const char OP_dim_tw_400[];
extern const char OP_dimbx[];
extern const char OP_dimby[];
extern const char OP_dimbz[];
extern const char OP_dime[];
extern const char OP_dimf[];
extern const char OP_dimgr1[];
extern const char OP_dimgr2[];
extern const char OP_dimgr3[];
extern const char OP_dimgr[];
extern const char OP_dimha1[];
extern const char OP_dimha2[];
extern const char OP_dimha3[];
extern const char OP_dimha[];
extern const char OP_dimhp[];
extern const char OP_dimhz[];
extern const char OP_dimmi[];
extern const char OP_dimpd[];
extern const char OP_dimre[];
extern const char OP_dimrf[];
extern const char OP_dimsa[];
extern const char OP_dimspa[];
extern const char OP_dimspr[];
extern const char OP_dimst[];
extern const char OP_dl[];
extern const char OP_dp[];
extern const char OP_dpy[];
extern const char OP_dpycb[];
extern const char OP_dpycg[];
extern const char OP_dpycr[];
extern const char OP_dpydl[];
extern const char OP_dpyds[];
extern const char OP_ds[];
extern const char OP_dvs[];
extern const char OP_e[];
extern const char OP_eep[];
extern const char OP_en[];
extern const char OP_eu[];
extern const char OP_f[];
extern const char OP_fpd_axis_probe[];
extern const char OP_fpd_hex_probe[];
extern const char OP_fr[];
extern const char OP_ge[];
extern const char OP_git[];
extern const char OP_gr1[];
extern const char OP_gr2[];
extern const char OP_gr3[];
extern const char OP_gr[];
extern const char OP_gr[];
extern const char OP_ha1[];
extern const char OP_ha2[];
extern const char OP_ha3[];
extern const char OP_ha[];
extern const char OP_he[];
extern const char OP_help[];
extern const char OP_ho[];
extern const char OP_hom[];
extern const char OP_hp[];
extern const char OP_hz[];
extern const char OP_hzl[];
extern const char OP_id[];
extern const char OP_idl[];
extern const char OP_io[];
extern const char OP_ip[];
extern const char OP_is[];
extern const char OP_jp[];
extern const char OP_lb[];
extern const char OP_lh[];
extern const char OP_lm[];
extern const char OP_ln[];
extern const char OP_lp[];
extern const char OP_m1[];
extern const char OP_m2[];
extern const char OP_m3[];
extern const char OP_m4[];
extern const char OP_m5[];
extern const char OP_m6[];
extern const char OP_m7[];
extern const char OP_m8[];
extern const char OP_m9[];
extern const char OP_ma[];
extern const char OP_mi[];
extern const char OP_mov[];
extern const char OP_mova1[];
extern const char OP_mova2[];
extern const char OP_mova3[];
extern const char OP_movaa[];
extern const char OP_movangle[];
extern const char OP_movrx[];
extern const char OP_movry[];
extern const char OP_movrz[];
extern const char OP_movwp[];
extern const char OP_movxm[];
extern const char OP_movxr[];
extern const char OP_movym[];
extern const char OP_movyr[];
extern const char OP_movzb[];
extern const char OP_movzm[];
extern const char OP_movzr[];
extern const char OP_mrk[];
extern const char OP_mrka1[];
extern const char OP_mrka2[];
extern const char OP_mrka3[];
extern const char OP_mrkax[];
extern const char OP_mrkay[];
extern const char OP_mrkaz[];
extern const char OP_mrkm1[];
extern const char OP_mrkm2[];
extern const char OP_mrkm3[];
extern const char OP_mrkm4[];
extern const char OP_mrkm5[];
extern const char OP_mrkm6[];
extern const char OP_mrkm7[];
extern const char OP_mrkm8[];
extern const char OP_mrkm9[];
extern const char OP_mrkwp[];
extern const char OP_msg[];
extern const char OP_mv[];
extern const char OP_n[];
extern const char OP_om[];
extern const char OP_pb[];
extern const char OP_pc[];
extern const char OP_pd[];
extern const char OP_pe[];
extern const char OP_pgm[];
extern const char OP_pgmd[];
extern const char OP_pgmx[];
extern const char OP_ph[];
extern const char OP_pi[];
extern const char OP_pm[];
extern const char OP_pn[];
extern const char OP_po[];
extern const char OP_pp[];
extern const char OP_prb[];
extern const char OP_prbd[];
extern const char OP_prbip[];
extern const char OP_prbpb[];
extern const char OP_prbpn[];
extern const char OP_prbsd[];
extern const char OP_prbx[];
extern const char OP_prby[];
extern const char OP_prbz[];
extern const char OP_prx[];
extern const char OP_ps[];
extern const char OP_pu[];
extern const char OP_r[];
extern const char OP_re[];
extern const char OP_rf[];
extern const char OP_rv[];
extern const char OP_rx[];
extern const char OP_ry[];
extern const char OP_rz[];
extern const char OP_sa[];
extern const char OP_sc[];
extern const char OP_sd[];
extern const char OP_sg[];
extern const char OP_sp[];
extern const char OP_spa[];
extern const char OP_spr[];
extern const char OP_st[];
extern const char OP_sv[];
extern const char OP_sys[];
extern const char OP_sysah[];
extern const char OP_sysas[];
extern const char OP_sysch[];
extern const char OP_sysdb[];
extern const char OP_syseu[];
extern const char OP_sysfr[];
extern const char OP_syshp[];
extern const char OP_sysjp[];
extern const char OP_syslh[];
extern const char OP_syslp[];
extern const char OP_sysmv[];
extern const char OP_sysom[];
extern const char OP_syspb[];
extern const char OP_syspc[];
extern const char OP_syspi[];
extern const char OP_syspu[];
extern const char OP_syssd[];
extern const char OP_systc[];
extern const char OP_systo[];
extern const char OP_systv[];
extern const char OP_sysv[];
extern const char OP_tc[];
extern const char OP_test1[];
extern const char OP_test2[];
extern const char OP_test[];
extern const char OP_tm[];
extern const char OP_tn[];
extern const char OP_to[];
extern const char OP_tp[];
extern const char OP_ts[];
extern const char OP_tst[];
extern const char OP_tstph[];
extern const char OP_tstrv[];
extern const char OP_tstsp[];
extern const char OP_tv[];
extern const char OP_ud[];
extern const char OP_us[];
extern const char OP_v[];
extern const char OP_ver[];
extern const char OP_wp[];
extern const char OP_x[];
extern const char OP_xm[];
extern const char OP_xr[];
extern const char OP_y[];
extern const char OP_ym[];
extern const char OP_yr[];
extern const char OP_z[];
extern const char OP_zb[];
extern const char OP_zc[];
extern const char OP_zm[];
extern const char OP_zr[];

} // namespace firestep


////////////////////// PROGMEM_H //////////////
#endif
