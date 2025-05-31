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
static const char *ng0 = "D:/Xilinx/project/final_project/dispatcher.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {1, 0};



static void Always_42_0(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    int t37;

LAB0:    t1 = (t0 + 4376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4696);
    *((int *)t2) = 1;
    t3 = (t0 + 4408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t5 = (t0 + 1776U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(50, ng0);

LAB14:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 4184);
    xsi_process_wait(t2, 2000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(45, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);

LAB12:    goto LAB2;

LAB15:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 3, 0LL);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1936U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t2) == 0)
        goto LAB16;

LAB18:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB19:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB20;

LAB21:
LAB22:    goto LAB12;

LAB16:    *((unsigned int *)t4) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(56, ng0);

LAB23:    t12 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t12, &&LAB24);
    t13 = (t0 + 4184);
    xsi_vlog_namedbase_pushprocess(t12, t13);

LAB25:    xsi_set_current_line(57, ng0);
    xsi_set_current_line(57, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 3456);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);

LAB26:    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = (t0 + 904);
    t12 = *((char **)t6);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t5, 32, t12, 32);
    t6 = (t4 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB27;

LAB28:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB24:    t3 = (t0 + 4184);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB22;

LAB27:    xsi_set_current_line(57, ng0);

LAB29:    xsi_set_current_line(58, ng0);
    t13 = (t0 + 2416U);
    t19 = *((char **)t13);
    t13 = (t0 + 2376U);
    t20 = (t13 + 72U);
    t23 = *((char **)t20);
    t24 = (t0 + 3456);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    xsi_vlog_generic_get_index_select_value(t22, 1, t19, t23, 2, t26, 32, 1);
    memset(t21, 0, 8);
    t27 = (t22 + 4);
    t14 = *((unsigned int *)t27);
    t15 = (~(t14));
    t16 = *((unsigned int *)t22);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB33;

LAB31:    if (*((unsigned int *)t27) == 0)
        goto LAB30;

LAB32:    t28 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t28) = 1;

LAB33:    t29 = (t21 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t21);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB34;

LAB35:
LAB36:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3456);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t5, 32, t6, 32);
    t12 = (t0 + 3456);
    xsi_vlogvar_assign_value(t12, t4, 0, 0, 32);
    goto LAB26;

LAB30:    *((unsigned int *)t21) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(58, ng0);

LAB37:    xsi_set_current_line(59, ng0);
    t35 = ((char*)((ng3)));
    t36 = (t0 + 2816);
    xsi_vlogvar_wait_assign_value(t36, t35, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2976);
    t5 = (t0 + 2976);
    t6 = (t5 + 72U);
    t12 = *((char **)t6);
    t13 = (t0 + 3456);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    xsi_vlog_generic_convert_bit_index(t4, t12, 2, t20, 32, 1);
    t23 = (t4 + 4);
    t7 = *((unsigned int *)t23);
    t37 = (!(t7));
    if (t37 == 1)
        goto LAB38;

LAB39:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2096U);
    t3 = *((char **)t2);
    t2 = (t0 + 3136);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2256U);
    t3 = *((char **)t2);
    t2 = (t0 + 3296);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(63, ng0);
    goto LAB24;

LAB38:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB39;

LAB40:    goto LAB36;

}


extern void work_m_00000000004175413836_4239297023_init()
{
	static char *pe[] = {(void *)Always_42_0};
	xsi_register_didat("work_m_00000000004175413836_4239297023", "isim/top_tb_isim_beh.exe.sim/work/m_00000000004175413836_4239297023.didat");
	xsi_register_executes(pe);
}
