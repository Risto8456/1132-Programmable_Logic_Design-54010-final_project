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
static const char *ng0 = "D:/Xilinx/project/final_project/test_reverse_hex_genvar_tb.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {43981U, 0U};
static unsigned int ng3[] = {44271U, 0U};



static int sp_load_data(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 984);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(19, ng0);

LAB5:    xsi_set_current_line(20, ng0);
    t5 = (t1 + 2176);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t1 + 2016);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 16);
    xsi_set_current_line(20, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 100000LL);
    *((char **)t3) = &&LAB6;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB6:    xsi_set_current_line(21, ng0);
    t6 = ((char*)((ng1)));
    t7 = (t1 + 2016);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 16);
    goto LAB4;

}

static void Initial_25_0(char *t0)
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
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 3096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);

LAB4:    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2904);
    t4 = (t0 + 984);
    t5 = xsi_create_subprogram_invocation(t3, 0, t0, t4, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t4, t5);
    t6 = (t0 + 2176);
    xsi_vlogvar_assign_value(t6, t2, 0, 0, 16);

LAB7:    t7 = (t0 + 3000);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB9:    if (t15 != 0)
        goto LAB10;

LAB5:    t8 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t8);

LAB6:    t16 = (t0 + 3000);
    t17 = *((char **)t16);
    t16 = (t0 + 984);
    t18 = (t0 + 2904);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 2904);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB11;

LAB1:    return;
LAB8:;
LAB10:    t7 = (t0 + 3096U);
    *((char **)t7) = &&LAB7;
    goto LAB1;

LAB11:    xsi_set_current_line(28, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 2904);
    t5 = (t0 + 984);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);
    t7 = (t0 + 2176);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 16);

LAB14:    t8 = (t0 + 3000);
    t9 = *((char **)t8);
    t10 = (t9 + 80U);
    t11 = *((char **)t10);
    t12 = (t11 + 272U);
    t13 = *((char **)t12);
    t14 = (t13 + 0U);
    t16 = *((char **)t14);
    t15 = ((int  (*)(char *, char *))t16)(t0, t9);

LAB16:    if (t15 != 0)
        goto LAB17;

LAB12:    t9 = (t0 + 984);
    xsi_vlog_subprogram_popinvocation(t9);

LAB13:    t17 = (t0 + 3000);
    t18 = *((char **)t17);
    t17 = (t0 + 984);
    t19 = (t0 + 2904);
    t20 = 0;
    xsi_delete_subprogram_invocation(t17, t18, t0, t19, t20);
    goto LAB1;

LAB15:;
LAB17:    t8 = (t0 + 3096U);
    *((char **)t8) = &&LAB14;
    goto LAB1;

}


extern void work_m_00000000002968484719_4267391039_init()
{
	static char *pe[] = {(void *)Initial_25_0};
	static char *se[] = {(void *)sp_load_data};
	xsi_register_didat("work_m_00000000002968484719_4267391039", "isim/test_reverse_hex_genvar_tb_isim_beh.exe.sim/work/m_00000000002968484719_4267391039.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
