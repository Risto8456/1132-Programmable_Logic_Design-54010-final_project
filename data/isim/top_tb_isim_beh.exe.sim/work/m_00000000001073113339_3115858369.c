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
static const char *ng0 = "D:/Xilinx/project/final_project/top_tb.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {9U, 0U};
static const char *ng12 = "top_tb.vcd";



static int sp_send_cust(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 1392);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(75, ng0);

LAB5:    xsi_set_current_line(76, ng0);
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

LAB6:    xsi_set_current_line(77, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3704);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t4 = (t1 + 4184);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3864);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(79, ng0);
    t4 = (t1 + 4344);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 4024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(80, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(81, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3704);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3864);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(83, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 4024);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB4;

}

static void Always_59_0(char *t0)
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

LAB0:    t1 = (t0 + 5264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5072);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);
    t4 = (t0 + 3384);
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
    t24 = (t0 + 3384);
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

static void Initial_62_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 5512U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(62, ng0);

LAB4:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3384);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3704);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 4024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5320);
    xsi_process_wait(t2, 35000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3544);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_88_2(char *t0)
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
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 5760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);

LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 6360);
    *((int *)t2) = 1;
    t3 = (t0 + 5792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5568);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5568);
    t5 = (t0 + 1392);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB9:    t9 = (t0 + 5664);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB11:    if (t17 != 0)
        goto LAB12;

LAB7:    t10 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t10);

LAB8:    t18 = (t0 + 5664);
    t19 = *((char **)t18);
    t18 = (t0 + 1392);
    t20 = (t0 + 5568);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5568);
    t5 = (t0 + 1392);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB15:    t9 = (t0 + 5664);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB17:    if (t17 != 0)
        goto LAB18;

LAB13:    t10 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t10);

LAB14:    t18 = (t0 + 5664);
    t19 = *((char **)t18);
    t18 = (t0 + 1392);
    t20 = (t0 + 5568);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5568);
    t5 = (t0 + 1392);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB21:    t9 = (t0 + 5664);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB23:    if (t17 != 0)
        goto LAB24;

LAB19:    t10 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t10);

LAB20:    t18 = (t0 + 5664);
    t19 = *((char **)t18);
    t18 = (t0 + 1392);
    t20 = (t0 + 5568);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5568);
    t5 = (t0 + 1392);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB27:    t9 = (t0 + 5664);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB29:    if (t17 != 0)
        goto LAB30;

LAB25:    t10 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t10);

LAB26:    t18 = (t0 + 5664);
    t19 = *((char **)t18);
    t18 = (t0 + 1392);
    t20 = (t0 + 5568);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng8)));
    t3 = ((char*)((ng8)));
    t4 = (t0 + 5568);
    t5 = (t0 + 1392);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB33:    t9 = (t0 + 5664);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB35:    if (t17 != 0)
        goto LAB36;

LAB31:    t10 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t10);

LAB32:    t18 = (t0 + 5664);
    t19 = *((char **)t18);
    t18 = (t0 + 1392);
    t20 = (t0 + 5568);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng9)));
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5568);
    t5 = (t0 + 1392);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB39:    t9 = (t0 + 5664);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB41:    if (t17 != 0)
        goto LAB42;

LAB37:    t10 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t10);

LAB38:    t18 = (t0 + 5664);
    t19 = *((char **)t18);
    t18 = (t0 + 1392);
    t20 = (t0 + 5568);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(103, ng0);
    t2 = ((char*)((ng10)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5568);
    t5 = (t0 + 1392);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB45:    t9 = (t0 + 5664);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB47:    if (t17 != 0)
        goto LAB48;

LAB43:    t10 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t10);

LAB44:    t18 = (t0 + 5664);
    t19 = *((char **)t18);
    t18 = (t0 + 1392);
    t20 = (t0 + 5568);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 5568);
    xsi_process_wait(t2, 500000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB10:;
LAB12:    t9 = (t0 + 5760U);
    *((char **)t9) = &&LAB9;
    goto LAB1;

LAB16:;
LAB18:    t9 = (t0 + 5760U);
    *((char **)t9) = &&LAB15;
    goto LAB1;

LAB22:;
LAB24:    t9 = (t0 + 5760U);
    *((char **)t9) = &&LAB21;
    goto LAB1;

LAB28:;
LAB30:    t9 = (t0 + 5760U);
    *((char **)t9) = &&LAB27;
    goto LAB1;

LAB34:;
LAB36:    t9 = (t0 + 5760U);
    *((char **)t9) = &&LAB33;
    goto LAB1;

LAB40:;
LAB42:    t9 = (t0 + 5760U);
    *((char **)t9) = &&LAB39;
    goto LAB1;

LAB46:;
LAB48:    t9 = (t0 + 5760U);
    *((char **)t9) = &&LAB45;
    goto LAB1;

LAB49:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5568);
    t5 = (t0 + 1392);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB52:    t9 = (t0 + 5664);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB54:    if (t17 != 0)
        goto LAB55;

LAB50:    t10 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t10);

LAB51:    t18 = (t0 + 5664);
    t19 = *((char **)t18);
    t18 = (t0 + 1392);
    t20 = (t0 + 5568);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng11)));
    t3 = ((char*)((ng9)));
    t4 = (t0 + 5568);
    t5 = (t0 + 1392);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 4184);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4344);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB58:    t9 = (t0 + 5664);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB60:    if (t17 != 0)
        goto LAB61;

LAB56:    t10 = (t0 + 1392);
    xsi_vlog_subprogram_popinvocation(t10);

LAB57:    t18 = (t0 + 5664);
    t19 = *((char **)t18);
    t18 = (t0 + 1392);
    t20 = (t0 + 5568);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 5568);
    xsi_process_wait(t2, 1000000LL);
    *((char **)t1) = &&LAB62;
    goto LAB1;

LAB53:;
LAB55:    t9 = (t0 + 5760U);
    *((char **)t9) = &&LAB52;
    goto LAB1;

LAB59:;
LAB61:    t9 = (t0 + 5760U);
    *((char **)t9) = &&LAB58;
    goto LAB1;

LAB62:    xsi_set_current_line(111, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Initial_115_3(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(115, ng0);

LAB2:    xsi_set_current_line(116, ng0);
    xsi_vcd_dumpfile(ng12);
    xsi_set_current_line(117, ng0);
    t1 = ((char*)((ng2)));
    xsi_vcd_dumpvars_args(*((unsigned int *)t1), t0, (char)109, t0, (char)101);

LAB1:    return;
}


extern void work_m_00000000001073113339_3115858369_init()
{
	static char *pe[] = {(void *)Always_59_0,(void *)Initial_62_1,(void *)Initial_88_2,(void *)Initial_115_3};
	static char *se[] = {(void *)sp_send_cust};
	xsi_register_didat("work_m_00000000001073113339_3115858369", "isim/top_tb_isim_beh.exe.sim/work/m_00000000001073113339_3115858369.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
