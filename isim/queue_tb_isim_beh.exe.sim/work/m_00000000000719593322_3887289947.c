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
static const char *ng0 = "D:/Xilinx/project/final_project/queue_tb.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {5U, 0U};
static const char *ng8 = "queue_tb.vcd";



static int sp_write(char *t1, char *t2)
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
    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
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

LAB6:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t4 = (t1 + 3912);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3592);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(37, ng0);
    t4 = (t1 + 4072);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t1 + 3752);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    xsi_set_current_line(38, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3272);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3592);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3752);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 4);
    goto LAB4;

}

static int sp_read_one(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
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

LAB6:    xsi_set_current_line(46, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 3432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t4 = (t2 + 88U);
    t5 = *((char **)t4);
    t6 = (t5 + 16U);
    xsi_wp_set_status(t6, 1);
    *((char **)t3) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(48, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t1 + 3432);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB4;

}

static void Always_24_0(char *t0)
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

LAB0:    t1 = (t0 + 4992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4800);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 2952);
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
    t24 = (t0 + 2952);
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

static void Initial_27_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 5240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);

LAB4:    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3112);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3592);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(29, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3752);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(30, ng0);
    t2 = (t0 + 5048);
    xsi_process_wait(t2, 35000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(30, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3112);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB1;

}

static void Initial_53_2(char *t0)
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

LAB0:    t1 = (t0 + 5488U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 6120);
    *((int *)t2) = 1;
    t3 = (t0 + 5520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng4)));
    t4 = (t0 + 5296);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3912);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4072);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB8:    t9 = (t0 + 5392);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB10:    if (t17 != 0)
        goto LAB11;

LAB6:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB7:    t18 = (t0 + 5392);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 5296);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng5)));
    t3 = ((char*)((ng5)));
    t4 = (t0 + 5296);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3912);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4072);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB14:    t9 = (t0 + 5392);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB16:    if (t17 != 0)
        goto LAB17;

LAB12:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB13:    t18 = (t0 + 5392);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 5296);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = ((char*)((ng3)));
    t4 = (t0 + 5296);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3912);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4072);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB20:    t9 = (t0 + 5392);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB22:    if (t17 != 0)
        goto LAB23;

LAB18:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB19:    t18 = (t0 + 5392);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 5296);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng6)));
    t3 = ((char*)((ng6)));
    t4 = (t0 + 5296);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3912);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4072);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB26:    t9 = (t0 + 5392);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB28:    if (t17 != 0)
        goto LAB29;

LAB24:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB25:    t18 = (t0 + 5392);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 5296);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5296);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB9:;
LAB11:    t9 = (t0 + 5488U);
    *((char **)t9) = &&LAB8;
    goto LAB1;

LAB15:;
LAB17:    t9 = (t0 + 5488U);
    *((char **)t9) = &&LAB14;
    goto LAB1;

LAB21:;
LAB23:    t9 = (t0 + 5488U);
    *((char **)t9) = &&LAB20;
    goto LAB1;

LAB27:;
LAB29:    t9 = (t0 + 5488U);
    *((char **)t9) = &&LAB26;
    goto LAB1;

LAB30:    xsi_set_current_line(61, ng0);
    t3 = (t0 + 5296);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB33:    t6 = (t0 + 5392);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t17 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB35:    if (t17 != 0)
        goto LAB36;

LAB31:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB32:    t14 = (t0 + 5392);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 5296);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t18);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 5296);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB34:;
LAB36:    t6 = (t0 + 5488U);
    *((char **)t6) = &&LAB33;
    goto LAB1;

LAB37:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 5296);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB40:    t6 = (t0 + 5392);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t17 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB42:    if (t17 != 0)
        goto LAB43;

LAB38:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB39:    t14 = (t0 + 5392);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 5296);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t18);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5296);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB41:;
LAB43:    t6 = (t0 + 5488U);
    *((char **)t6) = &&LAB40;
    goto LAB1;

LAB44:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 5296);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB47:    t6 = (t0 + 5392);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t17 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB49:    if (t17 != 0)
        goto LAB50;

LAB45:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB46:    t14 = (t0 + 5392);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 5296);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t18);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5296);
    xsi_process_wait(t2, 40000LL);
    *((char **)t1) = &&LAB51;
    goto LAB1;

LAB48:;
LAB50:    t6 = (t0 + 5488U);
    *((char **)t6) = &&LAB47;
    goto LAB1;

LAB51:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 5296);
    t4 = (t0 + 1280);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);

LAB54:    t6 = (t0 + 5392);
    t7 = *((char **)t6);
    t8 = (t7 + 80U);
    t9 = *((char **)t8);
    t10 = (t9 + 272U);
    t11 = *((char **)t10);
    t12 = (t11 + 0U);
    t13 = *((char **)t12);
    t17 = ((int  (*)(char *, char *))t13)(t0, t7);

LAB56:    if (t17 != 0)
        goto LAB57;

LAB52:    t7 = (t0 + 1280);
    xsi_vlog_subprogram_popinvocation(t7);

LAB53:    t14 = (t0 + 5392);
    t15 = *((char **)t14);
    t14 = (t0 + 1280);
    t16 = (t0 + 5296);
    t18 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t18);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng7)));
    t3 = ((char*)((ng7)));
    t4 = (t0 + 5296);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 3912);
    xsi_vlogvar_assign_value(t7, t2, 0, 0, 4);
    t8 = (t0 + 4072);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 4);

LAB60:    t9 = (t0 + 5392);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);

LAB62:    if (t17 != 0)
        goto LAB63;

LAB58:    t10 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t10);

LAB59:    t18 = (t0 + 5392);
    t19 = *((char **)t18);
    t18 = (t0 + 848);
    t20 = (t0 + 5296);
    t21 = 0;
    xsi_delete_subprogram_invocation(t18, t19, t0, t20, t21);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5296);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB55:;
LAB57:    t6 = (t0 + 5488U);
    *((char **)t6) = &&LAB54;
    goto LAB1;

LAB61:;
LAB63:    t9 = (t0 + 5488U);
    *((char **)t9) = &&LAB60;
    goto LAB1;

LAB64:    xsi_set_current_line(67, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Initial_71_3(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(71, ng0);

LAB2:    xsi_set_current_line(72, ng0);
    xsi_vcd_dumpfile(ng8);
    xsi_set_current_line(73, ng0);
    t1 = ((char*)((ng2)));
    xsi_vcd_dumpvars_args(*((unsigned int *)t1), t0, (char)109, t0, (char)101);

LAB1:    return;
}


extern void work_m_00000000000719593322_3887289947_init()
{
	static char *pe[] = {(void *)Always_24_0,(void *)Initial_27_1,(void *)Initial_53_2,(void *)Initial_71_3};
	static char *se[] = {(void *)sp_write,(void *)sp_read_one};
	xsi_register_didat("work_m_00000000000719593322_3887289947", "isim/queue_tb_isim_beh.exe.sim/work/m_00000000000719593322_3887289947.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
