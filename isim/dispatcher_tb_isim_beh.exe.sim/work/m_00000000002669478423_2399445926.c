/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Xilinx/project/final_project/dispatcher_tb.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {7U, 0U};
static unsigned int ng4[] = {10U, 0U};
static unsigned int ng5[] = {3U, 0U};
static unsigned int ng6[] = {11U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {12U, 0U};
static unsigned int ng10[] = {4U, 0U};
static unsigned int ng11[] = {5U, 0U};
static unsigned int ng12[] = {13U, 0U};
static unsigned int ng13[] = {1U, 0U};
static const char *ng14 = "dispatcher_tb.vcd";



static int sp_load_data(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(59, ng0);

LAB5:    xsi_set_current_line(60, ng0);
    t5 = (t2 + 88U);
    t6 = *((char **)t5);
    t7 = (t6 + 0U);
    xsi_wp_set_status(t7, 1);
    *((char **)t3) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(61, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3640);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t4 = (t1 + 4280);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3800);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t4 = (t1 + 4440);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3960);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(61, ng0);
    t4 = (t1 + 4600);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4120);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 3);
    xsi_set_current_line(62, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(63, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(64, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3640);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

}

static void Always_27_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 5520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 5328);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 3320);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 3320);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Initial_30_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 5768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);

LAB4:    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3480);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3640);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3800);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3960);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 4120);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 5576);
    xsi_process_wait(t2, 35000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 3480);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_37_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 6016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);

LAB4:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 6584);
    *((int *)t2) = 1;
    t3 = (t0 + 6048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = ((char*)((ng3)));
    t5 = (t0 + 5824);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 4280);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 5);
    t9 = (t0 + 4440);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 5);
    t10 = (t0 + 4600);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);

LAB8:    t11 = (t0 + 5920);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB10:    if (t19 != 0)
        goto LAB11;

LAB6:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB7:    t20 = (t0 + 5920);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 5824);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng7)));
    t4 = ((char*)((ng8)));
    t5 = (t0 + 5824);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 4280);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 5);
    t9 = (t0 + 4440);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 5);
    t10 = (t0 + 4600);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);

LAB14:    t11 = (t0 + 5920);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB16:    if (t19 != 0)
        goto LAB17;

LAB12:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB13:    t20 = (t0 + 5920);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 5824);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng10)));
    t4 = ((char*)((ng11)));
    t5 = (t0 + 5824);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 4280);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 5);
    t9 = (t0 + 4440);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 5);
    t10 = (t0 + 4600);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);

LAB20:    t11 = (t0 + 5920);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB22:    if (t19 != 0)
        goto LAB23;

LAB18:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB19:    t20 = (t0 + 5920);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 5824);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng12)));
    t3 = ((char*)((ng13)));
    t4 = ((char*)((ng5)));
    t5 = (t0 + 5824);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t5, 0, t0, t6, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t6, t7);
    t8 = (t0 + 4280);
    xsi_vlogvar_assign_value(t8, t2, 0, 0, 5);
    t9 = (t0 + 4440);
    xsi_vlogvar_assign_value(t9, t3, 0, 0, 5);
    t10 = (t0 + 4600);
    xsi_vlogvar_assign_value(t10, t4, 0, 0, 3);

LAB26:    t11 = (t0 + 5920);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);

LAB28:    if (t19 != 0)
        goto LAB29;

LAB24:    t12 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t12);

LAB25:    t20 = (t0 + 5920);
    t21 = *((char **)t20);
    t20 = (t0 + 848);
    t22 = (t0 + 5824);
    t23 = 0;
    xsi_delete_subprogram_invocation(t20, t21, t0, t22, t23);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5824);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB9:;
LAB11:    t11 = (t0 + 6016U);
    *((char **)t11) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t11 = (t0 + 6016U);
    *((char **)t11) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t11 = (t0 + 6016U);
    *((char **)t11) = &&LAB20;
    goto LAB1;

LAB27:;
LAB29:    t11 = (t0 + 6016U);
    *((char **)t11) = &&LAB26;
    goto LAB1;

LAB30:    xsi_set_current_line(52, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Initial_69_3(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(69, ng0);

LAB2:    xsi_set_current_line(70, ng0);
    xsi_vcd_dumpfile(ng14);
    xsi_set_current_line(71, ng0);
    t1 = ((char*)((ng1)));
    xsi_vcd_dumpvars_args(*((unsigned int *)t1), t0, (char)109, t0, (char)101);

LAB1:    return;
}


extern void work_m_00000000002669478423_2399445926_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Initial_30_1,(void *)Initial_37_2,(void *)Initial_69_3};
	static char *se[] = {(void *)sp_load_data};
	xsi_register_didat("work_m_00000000002669478423_2399445926", "isim/dispatcher_tb_isim_beh.exe.sim/work/m_00000000002669478423_2399445926.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
