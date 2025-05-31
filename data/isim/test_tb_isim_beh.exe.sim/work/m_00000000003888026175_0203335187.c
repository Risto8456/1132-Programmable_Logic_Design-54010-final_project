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
static const char *ng0 = "D:/Xilinx/project/final_project/test_reverse_hex.v";
static int ng1[] = {0, 0};
static int ng2[] = {4, 0};
static int ng3[] = {1, 0};
static int ng4[] = {3, 0};
static int ng5[] = {2, 0};



static void Always_10_0(char *t0)
{
    char t7[8];
    char t8[8];
    char t23[8];
    char t25[8];
    char t26[8];
    char t30[8];
    char t32[8];
    char t33[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    unsigned int t51;
    int t52;
    char *t53;
    unsigned int t54;
    int t55;
    int t56;
    char *t57;
    unsigned int t58;
    int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    int t63;

LAB0:    t1 = (t0 + 2984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(10, ng0);
    t2 = (t0 + 3552);
    *((int *)t2) = 1;
    t3 = (t0 + 3016);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(10, ng0);

LAB5:    xsi_set_current_line(11, ng0);
    xsi_set_current_line(11, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1904);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB6:    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 472);
    t6 = *((char **)t5);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_divide(t7, 32, t6, 32, t5, 32);
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t4, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    goto LAB2;

LAB7:    xsi_set_current_line(11, ng0);

LAB9:    xsi_set_current_line(12, ng0);
    xsi_set_current_line(12, ng0);
    t15 = ((char*)((ng1)));
    t16 = (t0 + 2064);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 32);

LAB10:    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t7, 0, 8);
    xsi_vlog_signed_less(t7, 32, t4, 32, t5, 32);
    t6 = (t7 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t7);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 1904);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(12, ng0);

LAB13:    xsi_set_current_line(13, ng0);
    t9 = (t0 + 1184U);
    t15 = *((char **)t9);
    t9 = (t0 + 1144U);
    t16 = (t9 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 472);
    t19 = *((char **)t18);
    t18 = (t0 + 1904);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t21, 32, t22, 32);
    t24 = ((char*)((ng2)));
    memset(t25, 0, 8);
    xsi_vlog_signed_multiply(t25, 32, t23, 32, t24, 32);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t19, 32, t25, 32);
    t27 = (t0 + 2064);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    xsi_vlog_signed_add(t30, 32, t26, 32, t29, 32);
    xsi_vlog_generic_get_index_select_value(t8, 1, t15, t17, 2, t30, 32, 1);
    t31 = (t0 + 1744);
    t34 = (t0 + 1744);
    t35 = (t34 + 72U);
    t36 = *((char **)t35);
    t37 = (t0 + 1744);
    t38 = (t37 + 64U);
    t39 = *((char **)t38);
    t40 = (t0 + 1904);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    xsi_vlog_generic_convert_array_indices(t32, t33, t36, t39, 2, 1, t42, 32, 1);
    t44 = (t0 + 1744);
    t45 = (t44 + 72U);
    t46 = *((char **)t45);
    t47 = (t0 + 2064);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    xsi_vlog_generic_convert_bit_index(t43, t46, 2, t49, 32, 1);
    t50 = (t32 + 4);
    t51 = *((unsigned int *)t50);
    t52 = (!(t51));
    t53 = (t33 + 4);
    t54 = *((unsigned int *)t53);
    t55 = (!(t54));
    t56 = (t52 && t55);
    t57 = (t43 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (!(t58));
    t60 = (t56 && t59);
    if (t60 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(12, ng0);
    t2 = (t0 + 2064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_add(t7, 32, t4, 32, t5, 32);
    t6 = (t0 + 2064);
    xsi_vlogvar_assign_value(t6, t7, 0, 0, 32);
    goto LAB10;

LAB14:    t61 = *((unsigned int *)t33);
    t62 = *((unsigned int *)t43);
    t63 = (t61 + t62);
    xsi_vlogvar_assign_value(t31, t8, 0, t63, 1);
    goto LAB15;

}

static void Cont_19_1(char *t0)
{
    char t3[8];
    char t6[8];
    char t17[8];
    char t28[8];
    char t39[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
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
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;

LAB0:    t1 = (t0 + 3232U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1744);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 1744);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 1744);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng4)));
    xsi_vlog_generic_get_array_select_value(t6, 4, t5, t9, t12, 2, 1, t13, 32, 1);
    t14 = (t0 + 1744);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t18 = (t0 + 1744);
    t19 = (t18 + 72U);
    t20 = *((char **)t19);
    t21 = (t0 + 1744);
    t22 = (t21 + 64U);
    t23 = *((char **)t22);
    t24 = ((char*)((ng5)));
    xsi_vlog_generic_get_array_select_value(t17, 4, t16, t20, t23, 2, 1, t24, 32, 1);
    t25 = (t0 + 1744);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t29 = (t0 + 1744);
    t30 = (t29 + 72U);
    t31 = *((char **)t30);
    t32 = (t0 + 1744);
    t33 = (t32 + 64U);
    t34 = *((char **)t33);
    t35 = ((char*)((ng3)));
    xsi_vlog_generic_get_array_select_value(t28, 4, t27, t31, t34, 2, 1, t35, 32, 1);
    t36 = (t0 + 1744);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t40 = (t0 + 1744);
    t41 = (t40 + 72U);
    t42 = *((char **)t41);
    t43 = (t0 + 1744);
    t44 = (t43 + 64U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng1)));
    xsi_vlog_generic_get_array_select_value(t39, 4, t38, t42, t45, 2, 1, t46, 32, 1);
    xsi_vlogtype_concat(t3, 16, 16, 4U, t39, 4, t28, 4, t17, 4, t6, 4);
    t47 = (t0 + 3648);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t51, 0, 8);
    t52 = 65535U;
    t53 = t52;
    t54 = (t3 + 4);
    t55 = *((unsigned int *)t3);
    t52 = (t52 & t55);
    t56 = *((unsigned int *)t54);
    t53 = (t53 & t56);
    t57 = (t51 + 4);
    t58 = *((unsigned int *)t51);
    *((unsigned int *)t51) = (t58 | t52);
    t59 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t59 | t53);
    xsi_driver_vfirst_trans(t47, 0, 15);
    t60 = (t0 + 3568);
    *((int *)t60) = 1;

LAB1:    return;
}


extern void work_m_00000000003888026175_0203335187_init()
{
	static char *pe[] = {(void *)Always_10_0,(void *)Cont_19_1};
	xsi_register_didat("work_m_00000000003888026175_0203335187", "isim/test_tb_isim_beh.exe.sim/work/m_00000000003888026175_0203335187.didat");
	xsi_register_executes(pe);
}
