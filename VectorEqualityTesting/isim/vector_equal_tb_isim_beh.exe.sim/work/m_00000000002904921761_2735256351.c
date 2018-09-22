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
static const char *ng0 = "vector_equal(0x%h,0x%h) = 0b%b";
static const char *ng1 = "C:/Users/pauly/Desktop/VectorEqualityTesting/vector_equal_tb.v";
static unsigned int ng2[] = {2864434397U, 0U};
static unsigned int ng3[] = {2853293277U, 0U};
static unsigned int ng4[] = {1166557U, 0U};
static unsigned int ng5[] = {2864434176U, 0U};

void Monitor_30_2(char *);
void Monitor_30_2(char *);


static void Monitor_30_2_Func(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 1448);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t0 + 1608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 1048U);
    t8 = *((char **)t7);
    xsi_vlogfile_write(1, 0, 3, ng0, 4, t0, (char)118, t3, 32, (char)118, t6, 32, (char)118, t8, 4);

LAB1:    return;
}

static void Initial_18_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng1);

LAB4:    xsi_set_current_line(20, ng1);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(21, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(22, ng1);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(23, ng1);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(24, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(25, ng1);
    t2 = (t0 + 2336);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(26, ng1);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1448);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(27, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB1;

}

static void Initial_29_1(char *t0)
{

LAB0:    xsi_set_current_line(29, ng1);

LAB2:    xsi_set_current_line(30, ng1);
    Monitor_30_2(t0);

LAB1:    return;
}

void Monitor_30_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 2832);
    t2 = (t0 + 3344);
    xsi_vlogfile_monitor((void *)Monitor_30_2_Func, t1, t2);

LAB1:    return;
}


extern void work_m_00000000002904921761_2735256351_init()
{
	static char *pe[] = {(void *)Initial_18_0,(void *)Initial_29_1,(void *)Monitor_30_2};
	xsi_register_didat("work_m_00000000002904921761_2735256351", "isim/vector_equal_tb_isim_beh.exe.sim/work/m_00000000002904921761_2735256351.didat");
	xsi_register_executes(pe);
}
