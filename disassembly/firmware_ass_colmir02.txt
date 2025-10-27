int32_t sub_44e(int32_t arg1)
{
    /* unimplemented  {vtbl.8 d20, {d15}, d0} */
    /* jump -> arg1 */
}

int32_t sub_460(int16_t* arg1, int32_t arg2, int32_t* arg3)
{
    if (arg2 == 0x78)
        return sub_128a8(arg1, arg2, arg3);
    
    if (arg2 != 0x73)
        return 0;
    
    return sub_13b48(arg1, arg2, arg3);
}

int32_t sub_47a(int32_t arg1)
{
    j_sub_12a38();
    return arg1;
}

void sub_526(int32_t arg1)
{
    if (!arg1)
        *0x200484 = 0x64;
    else if (arg1 == 1)
        *0x200484 = 0xc8;
    else if (arg1 == 2)
        *0x200484 = 0x1f4;
    else if (arg1 == 3)
        *0x200484 = 0x3e8;
}

int32_t sub_54e()
{
    int32_t r2 = *0x20d618;
    
    if (!r2)
        return;
    
    /* jump -> r2 */
}

int32_t sub_80a(int32_t arg1, int32_t arg2)
{
    bool v;
    
    if (!v)
        /* tailcall */
        return sub_814();
    
    0xff7eee30(0x20865c, 0x20, 8);  /* "117" */
    int32_t arg_0 = 0x5e;
    int32_t r3_1 = 0xff7eee30(0x208658, 0x40, 1, 0x83daac);
    sub_1146c(*0x208658, *0x20865c, 0x20, r3_1);  /* "117" */
    sub_97c();
    
    while (true)
    {
        arg_0 = 0x65;
        char arg_4;
        
        if (0xff7eef82(*0x208658, &arg_4, 0xffffffff, 0x83daac))
        {
            uint32_t r0_5 = arg_4;
            
            if (r0_5 == 2)
            {
                arg_0 = 0x6a;
                int32_t arg_8;
                int32_t r0_7;
                int32_t r2_1;
                int32_t r3_2;
                r0_7 = 0xff7eef82(*0x20865c, &arg_8, 0, 0x83daac);
                
                if (r0_7)
                    sub_5944(arg_8, arg2, r2_1, r3_2);
            }
            else
                sub_11504(r0_5);
        }
    }
}

uint32_t sub_814()
{
    int32_t* r4 = *0x20dc24;
    int32_t* r2 = *0x20dc28;
    int32_t r0_1 = *r2 + *r4;
    *r2 = r0_1;
    void* r4_1 = &r4[1];
    void* r2_1 = &r2[1];
    
    if (r4_1 >= 0x20dc24)
        r4_1 = 0x20db48;
    else if (r2_1 >= 0x20dc24)
        r2_1 = 0x20db48;
    
    *0x20dc24 = r4_1;
    *0x20dc28 = r2_1;
    return r0_1 << 1 >> 1;
}

void sub_84c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __noreturn
{
    int32_t var_10 = arg3;
    int32_t var_14 = arg2;
    int32_t var_18 = arg1;
    0xff7eee30(0x20865c, 0x20, 8, 0x83daac, 0x5d, var_14, var_10, arg4);  /* "117" */
    int32_t r3 = 0xff7eee30(0x208658, 0x40, 1, 0x83daac, 0x5e);
    sub_1146c(*0x208658, *0x20865c, 0x20, r3);  /* "117" */
    sub_97c();
    
    while (true)
    {
        if (0xff7eef82(*0x208658, &var_14, 0xffffffff, 0x83daac, 0x65))
        {
            uint32_t r0_3 = var_14;
            
            if (r0_3 == 2)
            {
                int32_t r0_5;
                int32_t r2;
                int32_t r3_1;
                r0_5 = 0xff7eef82(*0x20865c, &var_10, 0, 0x83daac, 0x6a);
                
                if (r0_5)
                    sub_5944(var_10, arg4, r2, r3_1);
            }
            else
                sub_11504(r0_3);
        }
    }
}

int32_t sub_8c6()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return 0xff7ef4b8(0x208654, &data_940, 0x8247fd, 0, 0x400, 2);
}

int32_t sub_8e0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_14 = arg4;
    int32_t var_18_1 = arg3;
    var_14 = 2;
    int32_t var_18 = 0x48;
    int32_t r1_2;
    
    if (!0xff7eef26(*0x20865c, arg1, 0, 0x83da94, 0x48, var_14))
        r1_2 = 0x8800000;
    else
    {
        var_18 = 0x4d;
        
        if (0xff7eef26(*0x208658, &var_14, 0, 0x83da94, 0x4d))
            return 1;
        
        r1_2 = 0x8800024;
    }
    
    0xff7e1af8(0x23103000, r1_2, 0);
    return 0;
}

uint32_t sub_94c()
{
    if (!sub_320e())
    {
        0xff81b968(0x2087ac, 0xa4);
        *0x2087ac = 0xa1b2c3e5;
        sub_322e();
    }
    
    *0x208852 = *0x2087b9;
    sub_1788(0, 0x208850);
    return sub_7846();
}

int32_t sub_97c()
{
    sub_6b04();
    return sub_6bee(0x82a851);
}

int32_t sub_9b4()
{
    sub_110c();
    sub_5b00();
    sub_8c6();
    sub_12e4();
    sub_139c();
    return sub_6eb4();
}

uint32_t sub_a1e(int32_t arg1 @ r4, int32_t arg2, int32_t arg3, int32_t arg4)
{
    bool v;
    
    if (v)
    {
        do
        {
            if (!0xff81b7f8())
                return arg1;
            
            arg1 += 1;
        } while (arg1 < 3);
        
        return 3;
    }
    
    int32_t result = arg1;
    int32_t* sp;
    
    if (!v)
    {
        int32_t var_8 = arg1;
        sp = &var_8;
        
        if (arg1 >= 3)
            return 0;
        
        if (0xff81b7f8(*(0x24 * arg1 + 0x2083d8), 0x208877, 8))
        {
            0xff81b898(*(0x24 * arg1 + 0x2083e4), *(0x24 * arg1 + 0x2083dc), 
                *(0x24 * arg1 + 0x2083f0));
            0xff81b898(*(0x24 * arg1 + 0x2083e8), *(0x24 * arg1 + 0x2083e0), 
                *(0x24 * arg1 + 0x2083f4));
            0xff81b964(*(0x24 * arg1 + 0x2083ec), *(0x24 * arg1 + 0x2083f8));
            0xff81b898(0x208877, *(0x24 * arg1 + 0x2083d8), 8);
        }
        
        result = 1;
    }
    
    *sp;
    return result;
}

uint32_t sub_a72()
{
    for (int32_t i = 0; i < 3; i += 1)
    {
        if (!0xff81b7f8(*(i * 0x24 + 0x2083d8), 0x208877, 8))
            return i;
    }
    
    return 3;
}

int32_t sub_aa4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    0xff7e46e8(arg1, &var_10);
    int32_t r1_2 = var_10 & 0xfbffffff;
    var_10 = r1_2;
    return 0xff7e4678(arg1, r1_2);
}

int32_t sub_bce(int32_t arg1)
{
    0xff7e1af8(0x23103103, 0x88001f4, 1, arg1);
    int32_t r1;
    
    r1 = !arg1 ? 0xd5 : 0xd4;
    
    return 0xff7dc2ec(3, r1);
}

int32_t sub_bf4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r4 = 0;
    0xff7ede4e(0x20039c, 0, 2, *0x200500 << 0x1c >> 0x1f, arg4);  /* "_250117" */  /* "0117" */
    int32_t result;
    
    while (true)
    {
        result = arg3 - r4;
        
        if (result < 0x10)  /* "RY02_3.00.33_250117" */
            break;
        
        0xff7e2a3c(arg1 + r4, arg2 + r4);
        r4 += 0x10;  /* "RY02_3.00.33_250117" */
    }
    
    return result;
}

int32_t sub_c24(int32_t arg1, char* arg2)
{
    int32_t result = 0;
    
    if (!arg2)
        result = 0x1e4;
    else
    {
        char* r0;
        
        if (arg1 != 0xfffe)
            r0 = 0xff7e4b32();
        else
            r0 = 0xff7e4108(5, 0xfffe);
        
        if (!r0)
            result = 0x1f3;
        else
            *arg2 = *r0;
    }
    
    0xff7e1af8(0x23103102, 0x8800218, 1, result);
    return result;
}

int32_t sub_c66(int32_t arg1, int32_t* arg2, int32_t* arg3, int32_t arg4)
{
    int32_t result = 0;
    
    if (!arg3)
        result = 0x20d;
    else if (!arg2)
        result = 0x213;
    else
    {
        void* r0;
        
        if (arg1 != 0xfffe)
            r0 = 0xff7e4b32(arg1);
        else
            r0 = 0xff7e4108(5);
        
        if (!r0)
            result = 0x221;
        else if (arg1 == 0x2790)
        {
            *arg2 = *(r0 + 0x194);
            *arg3 = 0;
        }
        else if (arg1 == 0xfffe || arg1 - 0x2791 < 0xa)
        {
            *arg2 = *(r0 + 0x60);
            *arg3 = 0;
        }
        else
            result = 0x232;
    }
    
    0xff7e1af8(0x23103102, 0x8800244, 1, result, arg4);
    return result;
}

int32_t sub_cde(int16_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_18_1 = r3;
    int32_t var_1c_1 = arg3;
    int32_t var_20_1 = arg2;
    uint32_t r4 = 0;
    int32_t result = 0;
    
    if (!(arg2 << 0x1f))  /* "0117" */
    {
        for (int32_t i = 0; arg2 >> 1 > i; i += 1)
        {
            uint32_t r7_1 = *arg1;
            arg1 = &arg1[1];
            r4 ^= r7_1;
        }
        
        r4 = RORW(r4 >> 0x10, 0x10) << 0x10 | RORW(r4, 0x10);  /* "RY02_3.00.33_250117" */
        
        if (r4 != arg3)
            result = 0x260;
    }
    else
        result = 0x251;
    
    0xff7e1af8(0x23103102, 0x8800270, 4, arg2, r4, arg3, result);
    return result;
}

int32_t sub_d24()
{
    0xff7e1af8(0x23103103, 0x88002c0, 0);
    int32_t result = 0xff7e498c(0x800000, 0x208444);
    
    if (!result)
        return result;
    
    0xff7e1af8(0x23103103, 0x88002e8, 1, *0x208444);
    return 1;
}

uint32_t sub_d56()
{
    uint32_t result = *0x208444;
    
    if (result == 0xff)
        return result;
    
    return 0xff7e4966(result);
}

int32_t sub_d66(int32_t arg1, int32_t arg2)
{
    int32_t i = 0;
    int32_t r0_1;
    
    if (arg1 != 0xfffe)
        r0_1 = 0xff7e4be4(arg1, 0xfffe);
    else
        r0_1 = 0xff7e4108(5, 0xfffe);
    
    int32_t result;
    
    if (!r0_1)
        result = 0x29a;
    else
    {
        do
        {
            sub_d24();
            sub_fcc(r0_1 + arg2);
            sub_d56();
            result = sub_100e(arg1, arg2, 0x1000);
            
            if (!result)
                break;
            
            i += 1;
        } while (i < 3);
    }
    
    0xff7e1af8(0x23103102, 0x8800318, 2, i, result, arg1, arg2);
    return result;
}

int32_t sub_ef4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    /* tailcall */
    return sub_f42();
}

int32_t sub_f42(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    0xff7e1af8(0x23103102, 0x88003f8, 1, arg1);
    return arg1;
}

uint32_t sub_f5a(int32_t arg1)
{
    sub_d24();
    0xff81ad6a(arg1);
    return sub_d56();
}

int32_t sub_f6e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_1c_1 = arg3;
    int32_t var_20_1 = arg2;
    int32_t r5 = 0;
    int32_t result = 0;
    int32_t r0_1;
    int32_t r1;
    
    if (arg1 != 0xfffe)
        r0_1 = 0xff7e4be4(arg1, 0xfffe);
    else
    {
        r1 = 0x1000000;
        r0_1 = 0xff7e4108(5, 0xfffe) | 0x1000000;
    }
    
    int32_t r4 = r0_1;
    
    if (!r4)
        r5 = 1;
    else
    {
        if (!0xff7e4bca(r0_1, r1))
            r4 += arg2;
        
        result = 0xff7e4aac(r4);
        
        if (!result)
            r5 = 3;
        else
            sub_f5a(r4);
    }
    
    0xff7e1af8(0x23103102, 0x8800414, 3, result, r4, r5, arg4);
    return result;
}

int32_t sub_fcc(int32_t arg1)
{
    int32_t r3;
    int32_t var_10_1 = r3;
    int32_t result = 0xff7e41f0(2, arg1);
    0xff7e1af8(0x23103102, 0x8800074, 2, arg1, result);
    return result;
}

int32_t sub_100e(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_1c = arg2;
    int32_t var_20 = arg1;
    int32_t i = 0;
    int32_t result = 0;
    int32_t r4 = 0;
    int32_t var_30;
    
    if (!(arg3 << 0x1e))  /* "50117" */
    {
        if (arg1 != 0xfffe)
            arg2 = arg1 - 0x2790;
        
        if (arg1 == 0xfffe || arg2 < 0xb)
        {
            int32_t r0_2;
            
            if (arg1 != 0xfffe)
                r0_2 = 0xff7e4be4(arg1, arg2);
            else
                r0_2 = 0xff7e4108(5, arg2);
            
            r4 = r0_2 + var_1c;
            
            if (r0_2 == -(var_1c))
                result = 0xc3;
            else
            {
                uint32_t r0_5 = arg3 >> 2;
                uint32_t var_2c_1 = r0_5;
                
                for (; r0_5 > i; i += 1)
                {
                    if (!0xff7e46e8(r4, &var_30))
                    {
                        result = 0xd5;
                        break;
                    }
                    
                    if (var_30 != 0xffffffff)
                    {
                        result = 0xce;
                        break;
                    }
                    
                    r4 += 4;
                    r0_5 = var_2c_1;
                }
            }
        }
        else
            result = 0xb4;
    }
    else
        result = 0xad;
    
    var_30 = arg3;
    0xff7e1af8(0x23103102, 0x88000ec, 4, arg1, var_30, r4, result);
    return result;
}

int32_t sub_1096(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, int32_t* arg5)
{
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    *arg5 = 0;
    int32_t r0_1;
    
    if (!arg4)
        r0_1 = 2;
    else
    {
        int32_t r0;
        
        if (arg1 != 0xfffe)
            r0 = 0xff7e4c56();
        else
            r0 = 0xff7e418a(5, 0xfffe);
        
        if (arg2 || *(arg4 + 8) + 0x400 <= r0)
        {
            if (arg2 + arg3 <= r0)
                return 1;
            
            0xff7e1af8(0x23103100, 0x8800134, 3, arg2, arg3, r0, arg4);
            r0_1 = 5;
        }
        else
            r0_1 = 4;
    }
    
    *arg5 = r0_1;
    return 0;
}

int32_t sub_110c()
{
    sub_fc34(0x10000, 0x20004000, 1);
    void var_44;
    sub_10926(&var_44);
    int16_t var_3a = 0;
    int32_t var_38 = 0x4c4b3ff;
    int16_t var_3c = 1;
    sub_1084c(0x40002064, &var_44);
    char var_50 = 8;
    int32_t var_4c = 3;
    char var_48 = 1;
    sub_f5a8(&var_50);
    sub_10958(0x40002064, 1);
    sub_10940(0x40002064, 1);
    return 0x40002064;
}

int32_t sub_116c()
{
    int32_t result = *0x208894;
    
    if (!result)
        return result;
    
    return 0xff7ef3d8(result);
}

int32_t sub_117c()
{
    int32_t result = *0x2098ac;
    
    if (result)
    {
        int32_t r0 = *0x2098ac;
        *0x2098ac = 0;
        *0x2087b0 += r0;
        int32_t __saved_r1;
        sub_1f9e(&__saved_r1, sub_183e());
        int32_t r1_3;
        result = sub_12b2a(*0x2087b0, 0x3c);
        
        if (!r1_3)
        {
            sub_25a4();
            
            if (*0x208852 == 1)
            {
                int32_t r0_6 = *0x2087b0;
                int32_t r1_4 = sub_12b2a(sub_12b2a(r0_6, 0x3c), 0x3c);
                
                if (*0x208850 == 3)
                {
                    if (!sub_12b2a(r0_6, 0x3c * *0x2086f0))
                        sub_bb42();
                    
                    if (r1_4 == 0x20)  /* "117" */
                        sub_b8b8();
                    else if (!r1_4)
                        sub_c0e8();
                    
                    if (!sub_12b3e(r1_4, 0x1e))  /* "50117" */
                        sub_bf48();
                }
                
                if (!r1_4)
                {
                    sub_bbd8();
                    sub_315a();
                }
                
                sub_8f00();
            }
            
            int32_t r1_9;
            result = sub_12b2a(*0x2087b0, &data_15180);
            
            if (!r1_9)
                return sub_8fa0();
        }
    }
    
    return result;
}

int32_t sub_122c()
{
    sub_cd30();
    sub_bbb8();
    int32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_a8f6();
    sub_2df2(r0, r1, r2, r3);
    sub_3d06();
    sub_1e3c();
    sub_7cfc();
    return sub_aa14();
}

int32_t sub_12e4()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return 0xff7ef4b8(0x208890, &data_1324, 0x825209, 0, 0xe00, 1);
}

uint32_t sub_1318(int32_t arg1, int32_t arg2, int32_t arg3, void* arg4, void* arg5 @ r4, void* arg6 @ r6, int32_t arg7 @ r7)
{
    uint32_t result_1 = *(arg5 + 4);
    *(arg2 + result_1) = arg2;
    *(arg6 + 0x34) = arg2;  /* "_V3.0" */
    *(arg4 + 0x14) = arg7;  /* "_3.00.33_250117" */
    *(arg6 + 1) = result_1;
    uint32_t result_2 = result_1;
    uint32_t result = result_1;
    *0x208898 = result;
    uint32_t r2 = *result_1[2];
    *0x208899 = r2;
    
    if (!result)
        return sub_a94e(result_1, arg2, r2, arg4);
    
    if (result == 3)
        return sub_b574(result_1, arg2);
    
    if (result == 5)
        result = result_1;
    
    return result;
}

int32_t sub_139c()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return 0xff7ef4b8(0x20889c, &data_13e8, 0x825315, 0, 0xa00, 2);
}

int32_t sub_13b8(int32_t arg1)
{
    int32_t r3;
    int32_t var_8 = r3;
    int32_t result = *0x2088a0;
    
    if (result)
    {
        var_8 = 0x23;
        int32_t lr;
        result = 0xff7eef26(result, arg1, 0, 0x83daba, 0x23, lr);
        
        if (result)
            return 1;
    }
    
    return result;
}

int32_t sub_13ec()
{
    if (*0x20b850)
        sub_7a3a();
    
    sub_a50a();
    sub_bb90();
    return sub_cd42();
}

int32_t sub_1410()
{
    sub_91ea();
    return sub_a4e6();
}

int32_t j_sub_1410()
{
    /* tailcall */
    return sub_1410();
}

int32_t sub_141e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_5b9a(arg1, arg2, arg3, arg4);
    return sub_720c(r0, r1, r2, r3);
}

uint32_t sub_142a(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return sub_71ec(arg1, arg2, arg3, arg4);
}

int32_t sub_1432()
{
    0xff81b91a(0x2086c4, 0xe8, 0xff);
    *0x2086c6 = *0x2086c6 >> 1 << 1 & 0xcb;
    *0x2086d4 = 0x1388;
    *0x2086d8 = 0x493e0;
    *0x2086dc = 0xbb8;
    *0x2086e0 = 0x78;
    *0x2086e2 = 0x1e0;
    int32_t r2 = *0x83dad8;
    *0x2086e8 = *0x83dadc;
    *0x2086e4 = r2;
    *0x2086f0 = 0x1e;  /* "50117" */
    *0x2086f1 = *0x2086f1 >> 1 << 1 & 0xf1;
    *0x20878c = 1;
    sub_9070();
    sub_3146();
    sub_bbe0();
    sub_91fc();
    return j_sub_7fd8();
}

uint32_t sub_14a2()
{
    uint32_t result = *0x208852;
    
    if (result != 1)
        return result;
    
    sub_3146();
    sub_bbd8();
    return sub_8e4e();
}

int32_t sub_14ba()
{
    *0x208850 = 1;
    uint32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_357e(0x1e, 2, 3, 2);  /* "50117" */
    sub_141e(r0, r1, r2, r3);
    sub_13ec();
    sub_14a2();
    sub_31aa();
    sub_322e();
    int32_t r0_1 = sub_187c();
    
    while (true)
    {
        uint32_t r0_4 = sub_36ca();
        int32_t r0_3;
        
        if (r0_4)
            r0_3 = sub_187c() - r0_1;
        
        if (!r0_4 || r0_3 > 0x7d0)  /* "17 10:58:10 2022" */
            return sub_302a();
        
        0xff7ef196(0x64);
    }
}

uint32_t sub_150c()
{
    if (*0x208850 != 1)
        return 0x208850;
    
    *0x208850 = 3;
    int32_t r0_2;
    int32_t r1_1;
    int32_t r2_1;
    int32_t r3_1;
    
    if (*0x208852 == 1)
        r0_2 = sub_1410();
    else
        r0_2 = sub_a4e6();
    
    return sub_71ec(r0_2, r1_1, r2_1, r3_1);
}

int32_t sub_1530()
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_13ec();
    int32_t r0_1;
    int32_t r1_1;
    int32_t r2_1;
    int32_t r3_1;
    r0_1 = sub_5b9a(r0, r1, r2, r3);
    sub_720c(r0_1, r1_1, r2_1, r3_1);
    sub_14a2();
    sub_31aa();
    sub_322e();
    return sub_6bcc(0x7d0);  /* "17 10:58:10 2022" */
}

int32_t sub_1554()
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_13ec();
    int32_t r0_1;
    int32_t r1_1;
    int32_t r2_1;
    int32_t r3_1;
    r0_1 = sub_5b9a(r0, r1, r2, r3);
    sub_720c(r0_1, r1_1, r2_1, r3_1);
    sub_317e();
    sub_31aa();
    *0x208850 = 5;
    *0x2087b0 = 0;
    *0x2087b4 = 0;
    *0x2087b9 = 0;
    sub_322e();
    sub_bbe0();
    sub_91fc();
    j_sub_7fd8();
    sub_1828();
    return sub_6bcc(0x3e8);
}

void* sub_1598()
{
    return sub_909e();
}

uint32_t sub_15a0()
{
    return *0x2087be;
}

void sub_15a6(char arg1)
{
    *0x2087be = arg1;
}

uint32_t sub_15ac()
{
    return *0x2086f1 << 0x1f >> 0x1f;  /* "0117" */
}

void sub_15b8(uint32_t arg1)
{
    uint32_t r1 = *0x2086f1;
    
    if (r1 << 0x1f >> 0x1f != arg1)  /* "0117" */
        *0x2086f1 = r1 >> 1 << 1 | (arg1 << 0x1f >> 0x1f);  /* "0117" */
}

void sub_15d4(int32_t arg1)
{
    uint32_t r1 = *0x2086f1;
    
    if (r1 << 0x1e >> 0x1f != arg1)  /* "50117" */  /* "0117" */
    {
        *0x2086f1 = (r1 & 0xfd) | arg1 << 0x1f >> 0x1e;  /* "50117" */  /* "0117" */
        sub_315a();
    }
}

uint32_t sub_15f6()
{
    return *0x2086f1 << 0x1e >> 0x1f;  /* "50117" */  /* "0117" */
}

uint32_t sub_1602()
{
    return *0x2086f1 << 0x1d >> 0x1f;  /* "250117" */  /* "0117" */
}

char sub_160e(int32_t arg1)
{
    char result = arg1 << 2;
    *0x2086f1 = (*0x2086f1 & 0xfb) | result;
    return result;
}

uint32_t sub_1620()
{
    return *0x2086c6 << 0x1b >> 0x1f;  /* "3_250117" */  /* "0117" */
}

uint32_t sub_162a()
{
    uint32_t result = sub_1620();
    
    if (!result)
    {
        result = 0x2086c4;
        *0x2086c6 |= 0x10;  /* "RY02_3.00.33_250117" */
    }
    
    return result;
}

int32_t sub_1640()
{
    return *0x2086ec;
}

void sub_1646(int32_t arg1)
{
    *0x2086ec = arg1;
}

void sub_164c(uint32_t arg1)
{
    if (arg1)
        arg1 = 1;
    
    uint32_t r1 = *0x2086c6;
    
    if (r1 << 0x1d >> 0x1f != arg1)  /* "250117" */  /* "0117" */
        *0x2086c6 = (r1 & 0xfb) | (arg1 << 0x1f >> 0x1d);  /* "250117" */  /* "0117" */
}

uint32_t sub_166c()
{
    return *0x2086c6 << 0x1d >> 0x1f;  /* "250117" */  /* "0117" */
}

uint32_t sub_1676(int32_t arg1, char arg2, char arg3, char arg4)
{
    if (arg1)
        arg1 = 1;
    
    *0x2086e4 = arg1;
    *0x2086e5 = arg2;
    uint32_t r1 = arg3;
    *0x2086e6 = r1;
    uint32_t r2 = arg4;
    *0x2086e7 = r2;
    return sub_14cc4(arg1, r1, r2);
}

int32_t sub_1694()
{
    return *0x2086d4;
}

int32_t sub_169a()
{
    return *0x2086d8;
}

int32_t sub_16a0()
{
    return *0x2086dc;
}

void sub_16a6(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    if (arg1 < 0x64)
        return;
    
    if (*0x2086d4 != arg1 || *0x2086d8 != arg2 || *0x2086dc != arg3)
    {
        *0x2086d4 = arg1;
        *0x2086d8 = arg2;
        *0x2086dc = arg3;
    }
    
    sub_9070();
}

void sub_16ca(int32_t arg1, int32_t arg2)
{
    if (arg1 >= 5 && arg2 >= 5 && (*0x2086e0 != arg1 || *0x2086e2 != arg2))
    {
        *0x2086e0 = arg1;
        *0x2086e2 = arg2;
    }
}

uint32_t sub_16e6()
{
    return *0x2086f1 << 0x1c >> 0x1f;  /* "_250117" */  /* "0117" */
}

char sub_16f2(int32_t arg1)
{
    char result = arg1 << 3;
    *0x2086f1 = (*0x2086f1 & 0xf7) | result;
    return result;
}

uint32_t sub_1704()
{
    return *0x2086f2 << 0x1e >> 0x1e;  /* "50117" */
}

void sub_1710(char arg1)
{
    *0x2086f2 = arg1;
}

int32_t sub_1738()
{
    int32_t r4 = *0x40000130;
    int32_t r1_1 = 0x3c - sub_12b2a(*0x2087b0, 0x3c);
    int32_t r0_2;
    
    if (!*0x2001ec)
        r0_2 = 0x8000;
    else
        r0_2 = 0x7d00;
    
    sub_18c6(0, r4 + r0_2 * r1_1);
    *0x2087b4 = *0x40000130;
    *0x2098ac = 0;
    sub_fada(0x10000, 1);
    sub_fb02(1);
    return sub_fac2(1);
}

int32_t sub_1788(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_8 = r3;
    int32_t r2;
    int32_t var_c_1 = r2;
    int32_t var_10 = arg2;
    sub_f9fe();
    sub_fab8(0);
    sub_fada(0x10000, 0);
    var_10 = 0xd;
    int32_t var_c = 3;
    var_8 = 1;
    sub_f5a8(&var_10);
    sub_fb14(1);
    return sub_1738();
}

int32_t sub_17be()
{
    if (sub_fb68(0x10000) == 1)
    {
        *0x2098ac += 0x3c - sub_12b2a(*0x2087b0, 0x3c);
        *0x2087b4 = *0x40000130;
        sub_116c();
        int32_t r0_5;
        
        if (!*0x2001ec)
            r0_5 = 0x8000;
        else
            r0_5 = 0x7d00;
        
        sub_18c6(0, *0x40000110 + 0x3c * r0_5);
        sub_fbc4(0);
    }
    
    int32_t result = sub_fb68(0x200);
    
    if (result != 1)
        return result;
    
    return sub_fbe4();
}

int32_t sub_1828()
{
    *0x2087b0 = 0;
    return 0;
}

void sub_1830(int32_t arg1)
{
    if (*0x2087b0 == arg1)
        return;
    
    *0x2087b0 = arg1;
    /* tailcall */
    return sub_1738();
}

int32_t sub_183e()
{
    int32_t r0 = *0x40000130;
    int32_t r2 = *0x2087b4;
    int32_t r1 = 0x7d00;
    uint32_t r3 = *0x2001ec;
    int32_t r0_1;
    
    if (r2 >= r0)
    {
        if (!r3)
            r1 = 0x8000;
        
        r0_1 = r0 - r2 - 1;
    }
    else
    {
        if (!r3)
            r1 = 0x8000;
        
        r0_1 = r0 - r2;
    }
    
    int32_t r0_3 = sub_12b2a(r0_1, r1);
    return *0x2087b0 + r0_3 + *0x2098ac;
}

int32_t sub_187c()
{
    int32_t r1_1;
    
    if (!*0x2001ec)
        r1_1 = 0x8000;
    else
        r1_1 = 0x7d00;
    
    return sub_12b2a(0x3e8 * *0x40000130, r1_1);
}

int32_t sub_18a0()
{
    return sub_183e() + 0x386cd300;
}

void sub_18ac(int32_t arg1, int32_t* arg2)
{
    if (!arg1 || arg1 == 0xffffffff)
        return;
    
    arg1 = arg1 <= 0x386d4380 ? 0 : arg1 - 0x386d4380;
    
    *arg2 = arg1;
}

int32_t sub_18c6(int32_t arg1, int32_t arg2)
{
    return sub_f9d8((arg1 << 2) + 0x40000110, arg2);
}

int32_t sub_18f0()
{
    *0x2098b2 = 0;
    *0x2098b4 = 0;
    return 0x2098b2;
}

int32_t sub_18fa()
{
    if (*0x208664 == 2)
        return 0x88;
    
    return 0x77;
}

int32_t sub_190a()
{
    if (*0x208664 == 1)
        return 0x88;
    
    return 0x77;
}

int32_t sub_191a(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 1;
    *var_c[3] = 1;
    sub_6650(&result);
    return result;
}

int32_t sub_1936(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x90;
    *var_c[3] = 0x90;
    sub_6650(&result);
    return result;
}

int32_t sub_1952(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x91;
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

int32_t sub_1978() __pure
{
    return;
}

int32_t sub_197a() __pure
{
    return;
}

int32_t sub_197c() __pure
{
    return;
}

int32_t sub_197e()
{
    return sub_3704(0x2098bc, 0x82592d, 0x3e8, 1);
}

int32_t sub_1992(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x94;
    *var_c[3] = 0x94;
    sub_6650(&result);
    *0x2098b2 = 1;
    sub_197e();
    return result;
}

int32_t sub_19b8(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x95;
    *var_c[3] = 0x95;
    sub_6650(&result);
    *0x2098b3 = 0;
    *0x2098b2 = 3;
    sub_197e();
    return result;
}

int32_t sub_19e0(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x96;
    *var_c[3] = 0x96;
    sub_6650(&result);
    *0x2098b3 = 0;
    *0x2098b2 = 4;
    sub_197e();
    return result;
}

int32_t sub_1a08() __pure
{
    return;
}

int32_t sub_1a0a() __pure
{
    return;
}

int32_t sub_1a0c(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = arg1;
    *var_c[3] = arg1;
    sub_6650(&result);
    return result;
}

int32_t j_sub_1a0c()
{
    /* tailcall */
    return sub_1a0c(0x98);
}

int32_t sub_1a2a() __pure
{
    return;
}

int32_t j_sub_1a0c()
{
    /* tailcall */
    return sub_1a0c(0x9a);
}

int32_t sub_1a30(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x9b;
    *result[1] = sub_18fa();
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

int32_t sub_1a5e(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x9c;
    *var_c[3] = 0x9c;
    sub_6650(&result);
    sub_3730(0x2098c0);
    sub_cd22();
    sub_14ba();
    return result;
}

int32_t sub_1af6(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    int32_t r0 = sub_26c6();
    result = 0xa0;
    *result[1] = sub_2cd6();
    char r1_1;
    
    if (!sub_a242())
        r1_1 = 0;
    else
        r1_1 = 0x23;
    
    *result[2] = r1_1;
    char r1_2;
    
    if (!sub_c2d2())
        r1_2 = 0;
    else
        r1_2 = 0x21;  /* "17" */
    
    *result[3] = r1_2;
    var_14 = sub_26ac();
    *var_14[1] = r0 >> 8;
    *var_14[2] = r0;
    *var_14[3] = *0x2086b0;
    uint32_t r0_7 = *0x208474;
    var_10 = r0_7 >> 8;
    *var_10[1] = r0_7;
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

uint32_t sub_1b6c()
{
    return *0x2098b0;
}

uint32_t sub_1b74()
{
    int32_t var_30 = 0;
    int32_t var_2c = 0;
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    var_30 = 0xa1;
    int32_t r0 = sub_b744();
    int32_t r3 = *0x2086a8;
    int32_t r2 = *0x2086ac;
    *var_30[1] = 1;
    *var_30[2] = r0 >> 8;
    *var_30[3] = r0;
    var_2c = r2 >> 8;
    *var_2c[1] = r2;
    *var_2c[2] = r3 >> 8;
    uint32_t r1_1 = *0x2086b0;
    *var_2c[3] = r3;
    var_28 = r1_1 >> 8;
    *var_28[1] = r1_1;
    char r0_4;
    
    r0_4 = !r1_1 ? 0 : 1;
    
    *var_28[2] = r0_4;
    *var_24[3] = sub_3764(&var_30, 0xf);
    sub_6650(&var_30);
    int32_t r0_8 = sub_b73c();
    uint32_t r6_1 = *0x20869e;
    uint32_t r2_1 = *0x2086a0;
    uint32_t r1_2 = *0x2086a2;
    *var_30[1] = 2;
    *var_30[2] = r0_8 >> 8;
    *var_30[3] = r0_8;
    var_2c = r2_1 >> 8;
    *var_2c[1] = r2_1;
    *var_2c[2] = r6_1 >> 8;
    *var_2c[3] = r6_1;
    var_28 = r1_2 >> 8;
    *var_28[1] = r1_2;
    char r0_12;
    
    r0_12 = !r1_2 ? 0 : 1;
    
    *var_28[2] = r0_12;
    
    if (*0x2098b0 == 4)
        *var_28[2] = 0;
    
    *var_24[3] = sub_3764(&var_30, 0xf);
    sub_6650(&var_30);
    uint16_t var_1c = 0;
    uint16_t var_18 = 0;
    uint16_t var_20 = 0;
    sub_a58c(&var_1c, &var_18, &var_20, 1);
    *var_30[1] = 3;
    uint32_t r0_18 = var_1c;
    *var_30[2] = r0_18 >> 8;
    *var_30[3] = r0_18;
    uint32_t r0_19 = var_18;
    var_2c = r0_19 >> 8;
    *var_2c[1] = r0_19;
    uint32_t r0_20 = var_20;
    *var_2c[2] = r0_20 >> 8;
    *var_2c[3] = r0_20;
    var_28 = 0;
    *var_28[1] = 0;
    *var_28[2] = 0;
    *var_24[3] = sub_3764(&var_30, 0xf);
    int32_t r2_6 = sub_6650(&var_30);
    uint32_t result = *0x2098b0;
    
    if (result != 4)
    {
        uint32_t r1_4 = *0x2086c2;
        uint32_t r1_5;
        
        if (r1_4 == 1 || r1_4 == 3)
        {
            r1_5 = *0x2086a2;
            
            if (r1_5)
            {
                r1_5 = *0x2086b0;
                
                if (!r1_5)
                    goto label_1cc8;
                
                *0x2098b1 = 0;
                r1_5 = 3;
                *0x2086c2 = 3;
            label_1c9a:
                sub_b540(0x40, r1_5, r2_6);
                *0x2098b0 = 0;
                sub_3730(0x2098c0);
                return sub_31aa();
            }
            
        label_1cc8:
            result = *0x2098b1 + 1;
            *0x2098b1 = result;
            
            if (result >= 0x78)
            {
            label_1cd0:
                *0x2098b1 = 0;
                sub_b540(0x40, r1_5, r2_6);
                *0x2098b0 = 0;
                return sub_3730(0x2098c0);
            }
        }
        else
        {
            r1_5 = *0x2086a2;
            
            if (r1_5 && *0x2086b0)
            {
                *0x2098b1 = 0;
                goto label_1c9a;
            }
            
            result = *0x2098b1 + 1;
            *0x2098b1 = result;
            
            if (result >= 0x78)
                goto label_1cd0;
            
            if (r1_5 && !*0x2086b0 && result >= 0x3c)
            {
                result = 0x3e8;
                *0x2086b0 = 0x3e8;
            }
        }
    }
    
    return result;
}

uint32_t sub_1d32(void* arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    uint32_t r0 = *(arg1 + 1);
    
    if (r0 == 1)
    {
        sub_317e();
        sub_bbe0();
        sub_91fc();
        j_sub_7fd8();
        sub_1828();
        *0x2086a8 = 0;
        *0x2086ac = 0;
        *0x2086b0 = 0;
        *0x20869e = 0;
        *0x2086a0 = 0;
        *0x2086a2 = 0;
        sub_e9b4();
        int32_t r1;
        int32_t r2;
        r1 = sub_31aa();
        sub_b55a(0x40, r1, r2);
        *0x2098b0 = *(arg1 + 2);
        *0x2086c2 = 1;
        sub_3704(0x2098c0, 0x825b25, 0x3e8, 1);
        return sub_1b74();
    }
    
    int32_t r0_6;
    
    if (r0 == 2)
        r0_6 = 0x40;
    else
    {
        if (r0 == 3)
            return sub_1b74();
        
        arg2 = 0x800;
        char r0_7;
        
        if (r0 == 4)
        {
            sub_b55a(0x800, 0x800, arg3);
            r0_7 = 4;
        label_1e0a:
            *0x2098b0 = r0_7;
            sub_3704(0x2098c0, 0x825b25, 0x3e8, 1);
            return sub_1b74();
        }
        
        if (r0 != 5)
        {
            if (r0 != 6)
            {
                *0x2098b0 = 0;
                var_28 = 0xa1;
                *var_28[1] = 0xff;
                *var_1c[3] = sub_3764(&var_28, 0xf);
                return sub_6650(&var_28);
            }
            
            *0x2086a8 = 0;
            *0x2086ac = 0;
            *0x2086b0 = 0;
            *0x20869e = 0;
            *0x2086a0 = 0;
            *0x2086a2 = 0;
            sub_b724();
            sub_e9b4();
            int32_t r1_1;
            int32_t r2_1;
            r1_1 = sub_31aa();
            sub_b55a(0x40, r1_1, r2_1);
            r0_7 = *(arg1 + 2);
            goto label_1e0a;
        }
        
        r0_6 = 0x800;
    }
    
    sub_b540(r0_6, arg2, arg3);
    *0x2098b0 = 0;
    return sub_3730(0x2098c0);
}

int32_t sub_1e24() __pure
{
    return;
}

int32_t sub_1e26()
{
    if (!*0x2098b4 && *0x2098b2 == 1)
        *0x2098b2 = 2;
    
    return 0x2098b2;
}

int32_t sub_1e3c()
{
    sub_3704(0x2098b8, 0x825dd5, 0x7d0, 0);  /* "17 10:58:10 2022" */
    sub_18f0();
    return 0x2098b2;
}

int32_t sub_1e54()
{
    return sub_3730(0x2098bc);
}

uint32_t sub_1e60()
{
    return *0x208664;
}

int32_t sub_1e78(int32_t arg1)
{
    if (sub_12b2a(arg1, 0x190))
    {
        int32_t r1_2;
        
        if (!(arg1 << 0x1e))  /* "50117" */
            r1_2 = sub_12b2a(arg1, 0x64);
        
        if (arg1 << 0x1e || !r1_2)  /* "50117" */
            return 0;
    }
    
    return 1;
}

int32_t sub_1ea0(int32_t arg1, int32_t arg2)
{
    if (arg2 == 2)
    {
        if (!sub_1e78(arg1 + 0x7d0))  /* "17 10:58:10 2022" */
            return 0x1c;  /* "_250117" */
        
        return 0x1d;  /* "250117" */
    }
    
    if (arg2 > 7)
    {
        if (arg2 << 0x1f)  /* "0117" */
            return 0x1e;  /* "50117" */
    }
    else if (!(arg2 << 0x1f))  /* "0117" */
        return 0x1e;  /* "50117" */
    
    return 0x1f;  /* "0117" */
}

uint32_t sub_1ed2(char* arg1)
{
    uint32_t i = 0;
    uint32_t r0 = *arg1;
    uint32_t i_1 = 1;
    int16_t r5 = 0;
    
    if (r0 > 0x63)
        r0 = 0x63;
    
    *arg1 = r0;
    uint32_t r1 = arg1[1];
    
    if (r1 > 0xc)
        r1 = 0xc;
    
    arg1[1] = r1;
    int32_t r0_1 = sub_1ea0(r0, r1);
    uint32_t r0_2 = arg1[2];
    
    if (r0_1 < r0_2)
        r0_2 = sub_1ea0(*arg1, arg1[1]);
    
    arg1[2] = r0_2;
    
    for (; *arg1 > i; i = i + 1)
    {
        int16_t r0_6;
        
        if (!sub_1e78(i + 0x7d0))  /* "17 10:58:10 2022" */
            r0_6 = 0x16d;
        else
            r0_6 = 0x16e;
        
        r5 += r0_6;
    }
    
    for (; arg1[1] > i_1; i_1 = i_1 + 1)
        r5 += sub_1ea0(*arg1, i_1);
    
    return arg1[2] + r5;
}

int32_t sub_1f4e(int32_t arg1, int32_t arg2)
{
    int32_t r0_1;
    
    if (!sub_1e78(arg1))
        r0_1 = 0x83dae0;
    else
        r0_1 = 0x83db10;
    
    return *((arg2 << 2) + r0_1 - 4);
}

int32_t sub_1f6c(char arg1, char arg2, char arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = arg1;
    *var_8[1] = arg2;
    *var_8[2] = arg3;
    return sub_12b2a(sub_1ed2(&var_8) + 4, 7) + 1;
}

int32_t sub_1f88(char* arg1, char* arg2)
{
    return sub_1ed2(arg1) - sub_1ed2(arg2);
}

int32_t sub_1f9e(int32_t arg1, int32_t arg2)
{
    int32_t var_18 = arg2;
    int32_t i = arg2;
    uint32_t r5 = 0x7d0;  /* "17 10:58:10 2022" */
    
    while (sub_223e(r5) <= i)
    {
        i -= sub_223e(r5);
        r5 = r5 + 1;
    }
    
    uint32_t r6 = 1;
    
    while (sub_1f4e(r5, r6) <= i)
    {
        i -= sub_1f4e(r5, r6);
        r6 = r6 + 1;
    }
    
    char r0_9;
    int32_t r1_2;
    r0_9 = sub_12b2a(i, &data_15180);
    char r0_11;
    int32_t r1_3;
    r0_11 = sub_12b2a(r1_2, 0xe10);
    char r0_13;
    char r1_4;
    r0_13 = sub_12b2a(r1_3, 0x3c);
    char var_28 = r5 + 0x30;  /* "RY02_V3.0" */
    char var_27 = r6;
    char var_26 = r0_9 + 1;
    char var_25 = r0_11;
    char var_24 = r0_13;
    char var_23 = r1_4;
    return 0xff81b898(arg1, &var_28, 6);
}

int32_t sub_201e(char* arg1, int32_t arg2, int32_t arg3)
{
    int32_t result = arg3;
    sub_1f9e(&result, &data_15180 * (sub_1ed2(arg1) - arg2 - 1));
    return result;
}

int32_t sub_2038(char* arg1, char* arg2)
{
    return sub_2228(arg1) - sub_2228(arg2);
}

int32_t sub_204c(int32_t arg1, char* arg2, char* arg3)
{
    int32_t r3;
    int32_t var_18_1 = r3;
    int32_t r0_3 = &data_15180 * (sub_1ed2(arg2) - 1);
    int32_t i = 0xe10 * arg1 + 0xe10 * arg2[3] + 0x3c * arg2[4] + arg2[5] + r0_3;
    uint32_t r5_2 = 0x7d0;  /* "17 10:58:10 2022" */
    
    while (sub_223e(r5_2) <= i)
    {
        i -= sub_223e(r5_2);
        r5_2 = r5_2 + 1;
    }
    
    uint32_t r7 = 1;
    
    while (sub_1f4e(r5_2, r7) <= i)
    {
        i -= sub_1f4e(r5_2, r7);
        r7 = r7 + 1;
    }
    
    char r0_15;
    int32_t r1_5;
    r0_15 = sub_12b2a(i, &data_15180);
    int32_t r0_17;
    int32_t r1_6;
    r0_17 = sub_12b2a(r1_5, 0xe10);
    char result;
    char r1_7;
    result = sub_12b2a(r1_6, 0x3c);
    *arg3 = r5_2 + 0x30;  /* "RY02_V3.0" */
    arg3[1] = r7;
    arg3[2] = r0_15 + 1;
    arg3[3] = r0_17;
    arg3[4] = result;
    arg3[5] = r1_7;
    return result;
}

int32_t sub_20ec(char* arg1)
{
    uint32_t r0_3;
    
    if (!sub_1ed2(arg1))
        r0_3 = sub_1ed2(arg1);
    else
        r0_3 = sub_1ed2(arg1) - 1;
    
    return 0xe10 * arg1[3] + 0x3c * arg1[4] + arg1[5] + &data_15180 * r0_3;
}

int32_t sub_2122() __pure
{
    return;
}

int32_t sub_2124(int32_t arg1)
{
    return sub_1f9e(arg1, sub_183e());
}

int32_t sub_2136(char* arg1)
{
    char r0_2;
    int32_t r1_1;
    r0_2 = sub_12b2a(sub_12b2a(sub_183e(), &data_15180), 0xe10);
    *arg1 = r0_2;
    char result;
    char r1_2;
    result = sub_12b2a(r1_1, 0x3c);
    arg1[1] = result;
    arg1[2] = r1_2;
    return result;
}

uint32_t sub_215e(char* arg1)
{
    return sub_1ed2(arg1) - 1;
}

uint32_t sub_216a()
{
    return sub_12b2a(sub_183e(), &data_15180);
}

int32_t sub_217a()
{
    return sub_12b2a(sub_12b2a(sub_183e(), 0x3c), 0x5a0);
}

int32_t sub_2192()
{
    return sub_12b2a(sub_12b2a(sub_183e(), &data_15180) + 5, 7) + 1;
}

int32_t sub_21aa(int32_t arg1)
{
    return sub_12b2a(sub_12b2a(arg1, &data_15180) + 5, 7) + 1;
}

int32_t sub_21be(int32_t arg1, char* arg2)
{
    int32_t i = &data_15180 * arg1;
    uint32_t r5 = 0x7d0;  /* "17 10:58:10 2022" */
    
    while (sub_223e(r5) <= i)
    {
        i -= sub_223e(r5);
        r5 = r5 + 1;
    }
    
    uint32_t r6 = 1;
    
    while (sub_1f4e(r5, r6) <= i)
    {
        i -= sub_1f4e(r5, r6);
        r6 = r6 + 1;
    }
    
    char r0_9 = sub_12b2a(i, &data_15180);
    *arg2 = r5 + 0x30;  /* "RY02_V3.0" */
    arg2[1] = r6;
    arg2[2] = r0_9 + 1;
    return r0_9 + 1;
}

void sub_221a(int32_t arg1) __pure
{
    return;
}

int32_t sub_2228(char* arg1)
{
    return 0xe10 * *arg1 + 0x3c * arg1[1] + arg1[2];
}

int32_t sub_223e(int32_t arg1)
{
    if (!sub_1e78(arg1))
        return 0x1e13380;
    
    return 0x1e28500;
}

int32_t sub_2260()
{
    sub_f6bc(0x20, 1, 1, 1, 0, 0);  /* "117" */
    (*0x20011c)(0x3e8);
    sub_f6bc(0x20, 1, 1, 0, 0, 1);  /* "117" */
    sub_f69e(0x20, 0x5a);  /* "117" */
    sub_fc34(0xc000100, 0x21000000, 1);
    int32_t var_28;
    sub_10464(&var_28);
    var_28 = sub_104aa(0x20);  /* "117" */
    char var_24 = 0;
    char var_23 = 1;
    char var_22 = 1;
    char var_21 = 0;
    sub_103ac(&var_28);
    char var_18 = 0x1d;  /* "250117" */
    int32_t var_14 = 3;
    char var_10 = 1;
    sub_f5a8(&var_18);
    sub_10498(sub_104aa(0x20), 1);  /* "117" */
    sub_1047e(sub_104aa(0x20), 1);  /* "117" */
    sub_10490(sub_104aa(0x20));  /* "117" */
    sub_10498(sub_104aa(0x20), 0);  /* "117" */
    return sub_f790(0x20, 1, 0);  /* "117" */
}

int32_t sub_2314()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    sub_10498(sub_104aa(0x20), 1);  /* "117" */
    sub_1047e(sub_104aa(0x20), 0);  /* "117" */
    sub_10490(sub_104aa(0x20));  /* "117" */
    sub_f6bc(0x20, 1, 1, 1, 0, 0);  /* "117" */
    (*0x200120)(1);
    sub_f6bc(0x20, 1, 1, 0, 0, 1);  /* "117" */
    return sub_2260();
}

int32_t sub_236a()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return sub_f6bc(0x20, 1, 1, 1, 0, 0);  /* "117" */
}

int32_t sub_2380()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return sub_f6bc(0x20, 0, 1, 0, 0, 1);  /* "117" */
}

int32_t sub_2398()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return sub_f6bc(0x20, 1, 1, 0, 0, 1);  /* "117" */
}

uint32_t sub_23ae()
{
    return *0x208445;
}

int32_t sub_23b4()
{
    if (j_sub_f7f6(0x20) != 1)  /* "117" */
        return 0;
    
    j_sub_2dd8();
    return 1;
}

int32_t sub_23cc()
{
    sub_10498(sub_104aa(0x20), 1);  /* "117" */
    sub_1047e(sub_104aa(0x20), 0);  /* "117" */
    j_sub_2dd8();
    sub_10490(sub_104aa(0x20));  /* "117" */
    sub_10498(sub_104aa(0x20), 0);  /* "117" */
    int32_t result = sub_104aa(0x20);  /* "117" */
    sub_1047e(result, 1);
    return result;
}

uint32_t sub_240e(int32_t arg1, int32_t arg2, int32_t arg3, uint32_t arg4)
{
    int32_t lr;
    int32_t var_4 = lr;
    int32_t r5;
    int32_t var_8 = r5;
    int32_t r4;
    int32_t var_c = r4;
    uint32_t result_2 = arg4;
    int32_t* sp = &result_2;
    sub_107ea(3, 1);
    sub_106a6(0x40010000, 2, 1);
    int32_t i;
    
    do
        i = sub_10818(0x40010000, 0x10);  /* "RY02_3.00.33_250117" */
     while (i != 1);
    uint32_t r0 = sub_10746(0x40010000, 0);
    int32_t r3 = sub_106a6(0x40010000, 2, 0);
    sub_10828(0x40010000, 0x10);  /* "RY02_3.00.33_250117" */
    uint32_t result;
    
    if (!*0x2098c4)
    {
        int32_t r0_6;
        int32_t r1_1;
        r0_6 = j_sub_134d8(r0);
        int32_t r0_7;
        int32_t r1_2;
        r0_7 = sub_13530(r0_6, r1_1, 0xbc01a36e, 0x3fd01205);
        int32_t r0_8;
        int32_t r1_3;
        r0_8 = sub_12f96(r0_7, r1_2, 0xf837b4a2, 0x40405cc2);
        uint32_t result_1 =
            sub_13984(sub_19964(j_sub_139b4(sub_13490(r0_8, r1_3)), 0x409b406a, 0x409b406a));
        result = result_1;
        result_2 = result_1;
        0xff7e1af8(0x23103002, 0x880049c, 2, r0, result_2);
    }
    else
    {
        result_2 = 0;
        sp = &var_8;
        result = sub_13984(sub_19964(sub_126f8(2, r0, &result_2, 0x409b406a, r3, result_2), 
            0x409b406a, 0x409b406a));
    }
    
    *sp;
    sp[1];
    sp[2];
    return result;
}

uint32_t sub_24b2()
{
    uint32_t r6 = 0;
    uint32_t r5 = 0xffffffff;
    int32_t r7 = 0;
    int32_t var_40[0xb];
    uint32_t r0_1;
    int32_t (* r1)[0xb];
    int32_t r2;
    uint32_t r3;
    r0_1 = 0xff81b968(&var_40, 0x28);
    
    for (uint32_t i = 0; i < 0xa; i = i + 1)
    {
        r0_1 = sub_240e(r0_1, r1, r2, r3);
        r2 = i << 2;
        r1 = &var_40;
        *(&var_40 + r2) = r0_1;
        
        if (r0_1 > r6)
            r6 = r0_1;
        
        if (r0_1 < r5)
            r5 = r0_1;
        
        r7 += r0_1;
    }
    
    return (r7 - (r6 + r5)) >> 3;
}

uint32_t sub_24f0(int32_t arg1)
{
    int16_t var_28[0xe];
    0xff7dc2f8(&var_28, 0x83db68, 0x18);  /* "0.33_250117" */
    
    if (var_28[0] <= arg1)
        return 0x64;
    
    int32_t r4_1 = 1;
    
    while (var_28[r4_1] > arg1)
    {
        r4_1 += 1;
        
        if (r4_1 >= 0xb)
            return 0;
    }
    
    uint32_t r0_3 = var_28[r4_1];
    int32_t r0_7 = sub_12b3e(0xa * (arg1 - r0_3), *(&var_28[r4_1] - 2) - r0_3) + 0x64 - 0xa * r4_1;
    
    if (r0_7 > 0x64)
        r0_7 = 0x64;
    else if (r0_7 < 0)
        r0_7 = 0;
    
    return r0_7;
}

int32_t sub_2558()
{
    int16_t r0 = sub_24b2();
    *0x2098ce = r0;
    uint32_t r0_2 = sub_24f0(r0);
    uint32_t r4 = r0_2;
    
    if (r0_2 > 0x64)
        r4 = 0x64;
    
    if (sub_2e56() != 3 && *0x2098d8 >= 0x64)
        *0x2098d8 = 0x63;
    
    if (*0x2087b8 - r4 + 0x14 > 0x28)  /* "_3.00.33_250117" */
    {
        uint32_t r0_8 = sub_2d88();
        
        if (!r0_8)
        {
            *0x2098d8 = r4;
            *0x2087b8 = r4;
            return r0_8;
        }
    }
    
    char r0_9 = *0x2087b8;
    *0x2098d8 = r0_9;
    return r0_9;
}

int32_t sub_25a4()
{
    int16_t r0 = sub_24b2();
    *0x2098ce = r0;
    uint32_t r0_2 = sub_24f0(r0);
    
    if (!(*0x2098cc << 0x1f))  /* "0117" */
    {
        uint32_t r1_5 = *0x2098d8;
        
        if (r1_5 > r0_2)
        {
            if (r1_5)
            {
                r1_5 -= 1;
                *0x2098d8 = r1_5;
            }
            
            *0x2087b8 = r1_5;
            sub_529c(0xc);
            
            if (!*0x2098d8 && sub_1b6c() != 4)
                sub_14ba();
        }
        else if (r1_5 < 0x1e && r0_2 > 0x3c)  /* "50117" */
        {
            *0x2098d8 = r1_5 + 1;
            *0x2087b8 = r1_5 + 1;
            sub_529c(0xc);
        }
    }
    else
    {
        uint32_t r4_1 = *0x2098d8;
        uint32_t r0_10;
        
        if (r4_1 < r0_2)
        {
            uint32_t r0_4;
            int32_t r1_2;
            r0_4 = j_sub_134d8(*0x2098c6);
            int32_t r0_5;
            int32_t r1_3;
            r0_5 = sub_12f7c(r0_4, r1_2, 0x7eb50295, 0x409940a5);
            uint32_t r0_7 = sub_13490(r0_5, r1_3);
            *0x2098c6 = r0_7;
            
            if (r0_7 >= 0x3e8)
            {
                char r0_8;
                int16_t r1_4;
                r0_8 = sub_12b2a(r0_7, 0x3e8);
                r0_10 = r0_8 + r4_1;
                *0x2098d8 = r0_10;
                *0x2098c6 = r1_4;
            label_2616:
                
                if (r0_10 > 0x64)
                {
                    r0_10 = 0x64;
                    *0x2098d8 = 0x64;
                }
                
                *0x2087b8 = r0_10;
                *0x2098da = 0;
                sub_529c(0xc);
            }
        }
        else if (r4_1 != 0x64 && r4_1 > 0x32)  /* "02_V3.0" */
        {
            uint32_t r0_13 = *0x2098da + 1;
            *0x2098da = r0_13;
            
            if (r0_13 >= 5)
            {
                r0_10 = r4_1 + 1;
                *0x2098d8 = r0_10;
                goto label_2616;
            }
        }
    }
    
    return sub_116c();
}

uint32_t sub_26ac()
{
    uint32_t result = *0x2098d8;
    
    if (result <= 0x64)
        return result;
    
    return 0x64;
}

int32_t sub_26b8(char arg1)
{
    *0x2098d8 = arg1;
    return sub_529c(0xc);
}

int32_t sub_26c6()
{
    return *0x2098ce;
}

int32_t sub_26ce()
{
    sub_f6bc(0x17, 1, 1, 2, 0, 0);  /* "00.33_250117" */
    sub_f69e(0x17, 0);  /* "00.33_250117" */
    sub_10530();
    sub_fc34(0xc000001, 0x61000000, 1);
    int32_t var_78;
    sub_10654(&var_78);
    
    for (uint32_t i = 0; i < 0x10; )  /* "RY02_3.00.33_250117" */
    {
        void* r3_2 = (i << 1) + &var_78;
        i = i + 1;
        *(r3_2 + 0x1c) = 3;  /* "_250117" */
    }
    
    int16_t var_3c = 0xffff;
    var_78 = 0xe;
    sub_10540(0x40010000, &var_78);
    sub_10736(0x40010000, 0x10, 1);  /* "RY02_3.00.33_250117" */
    *0x2098c4 = sub_12530();
    return 0xff81b964(0x2098cc, 0x10);  /* "RY02_3.00.33_250117" */
}

int32_t sub_274e()
{
    return sub_3704(0x2098c8, 0x826509, 0x190, 0);
}

int32_t sub_2762()
{
    sub_f6bc(0x17, 1, 1, 2, 0, 0);  /* "00.33_250117" */
    sub_f69e(0x17, 0);  /* "00.33_250117" */
    sub_10530();
    sub_fc34(0xc000001, 0x61000000, 1);
    int32_t var_78;
    sub_10654(&var_78);
    
    for (uint32_t i = 0; i < 0x10; )  /* "RY02_3.00.33_250117" */
    {
        void* r3_2 = (i << 1) + &var_78;
        i = i + 1;
        *(r3_2 + 0x1c) = 3;  /* "_250117" */
    }
    
    int16_t var_3c = 0xffff;
    var_78 = 0xe;
    sub_10540(0x40010000, &var_78);
    sub_10736(0x40010000, 0x10, 1);  /* "RY02_3.00.33_250117" */
    return sub_12530();
}

int32_t sub_27d2()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return sub_f6bc(0x17, 0, 0, 2, 0, 0);  /* "00.33_250117" */
}

int32_t sub_27e8()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return sub_f6bc(0x17, 1, 0, 2, 0, 0);  /* "00.33_250117" */
}

uint32_t sub_27fe()
{
    return *0x208446;
}

int32_t sub_2804()
{
    sub_26ce();
    sub_2260();
    sub_7760(0x83db40);
    return sub_7760(0x83db54);
}

uint32_t sub_281e()
{
    return *0x2098cc << 0x1f >> 0x1f;  /* "0117" */
}

int32_t sub_2828(int32_t arg1)
{
    *0x2098cc = *0x2098cc >> 1 << 1 | arg1 << 0x1f >> 0x1f;  /* "0117" */
    return sub_529c(0xc);
}

int32_t sub_2842()
{
    if (*0x2098d8 == 0x64)
        return 1;
    
    return 0;
}

int32_t sub_286c(int32_t arg1, char* arg2)
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t result = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        result = sub_b524(7, arg1, arg2, 1);
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

int32_t sub_289a(int32_t arg1, int32_t arg2)
{
    int32_t var_14 = arg2;
    int32_t var_18 = arg1;
    int32_t result = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        result = sub_b458(7, arg1, &var_14, 1);
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

uint32_t sub_28c6(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    sub_286c(arg1, &var_18);
    uint32_t r1_1 = (var_18 & ~(arg2 << arg3)) | arg4 << arg3;
    var_18 = r1_1;
    sub_289a(arg1, r1_1);
    return var_18;
}

uint32_t sub_28f4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    sub_286c(arg1, &var_10);
    return (var_10 & arg2) >> arg3;
}

uint32_t sub_290e(int32_t arg1)
{
    return sub_28c6(0, 0xf, 4, sub_12b3e(arg1 - 0xf28, 0x50));
}

uint32_t sub_2928(int32_t arg1)
{
    return sub_28c6(0, 0xf, 0, sub_12b3e(arg1 - 0x32, 0x1e));  /* "50117" */  /* "02_V3.0" */
}

int32_t sub_2940(int32_t arg1)
{
    int32_t entry_r3;
    
    if (arg1 <= 8)
        entry_r3 = 0;
    else if (arg1 - 9 <= 3)
        entry_r3 = 1;
    else if (arg1 - 0xd <= 3)
        entry_r3 = 2;
    else if (arg1 > 0x10)  /* "RY02_3.00.33_250117" */
        entry_r3 = 3;
    
    /* tailcall */
    return sub_28c6(1, 3, 6, entry_r3);
}

int32_t sub_296e(int32_t arg1)
{
    int32_t r3;
    
    r3 = arg1 > 2 ? 1 : 0;
    
    /* tailcall */
    return sub_28c6(1, 1, 5, r3);
}

int32_t sub_2980()
{
    /* tailcall */
    return sub_28c6(1, 1, 4, 1);
}

int32_t sub_298a(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    /* tailcall */
    return sub_28c6(1, 1, 3, r3);
}

uint32_t sub_299c(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 0x960)
        r3 = 0;
    else if (arg1 < 0xbd6)
        r3 = sub_12b3e(arg1 - 0x960, 0x5a);
    else
        r3 = 7;
    
    return sub_28c6(1, 7, 0, r3);
}

int32_t sub_29ca()
{
    /* tailcall */
    return sub_28c6(2, 1, 7, 1);
}

int32_t sub_29d4()
{
    /* tailcall */
    return sub_28c6(2, 1, 6, 1);
}

int32_t sub_29de(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 8)
        r3 = 0;
    else if (arg1 < 0x200)
        r3 = (((arg1 - 8) >> 0x1f >> 0x1d) + arg1 - 8) << 0x15 >> 0x18;
            /* "3.00.33_250117" */  /* "0.33_250117" */  /* "250117" */  /* "0117" */
    else
        r3 = 0x3f;
    
    /* tailcall */
    return sub_28c6(2, 0x3f, 0, r3);
}

uint32_t sub_2a06(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 0xc8)
        r3 = 0;
    else if (arg1 < 0xc80)
        r3 = sub_12b3e(arg1 - 0xc8, 0xc8);
    else
        r3 = 0xf;
    
    return sub_28c6(3, 0xf, 4, r3);
}

int32_t sub_2a32(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 1)
        r3 = 0;
    else if (arg1 < 0x1f)  /* "0117" */
        r3 = (((arg1 - 1) >> 0x1f) + arg1 - 1) << 0x17 >> 0x18;
            /* "00.33_250117" */  /* "0.33_250117" */  /* "0117" */
    else
        r3 = 0xf;
    
    /* tailcall */
    return sub_28c6(3, 0xf, 0, r3);
}

uint32_t sub_2a54(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 0xe10)
        r3 = 0;
    else if (arg1 < 0x11c1)
        r3 = sub_12b3e(arg1 - 0xe10, 0xf);
    else
        r3 = 0x3f;
    
    return sub_28c6(4, 0x3f, 2, r3);
}

int32_t sub_2a82(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    /* tailcall */
    return sub_28c6(4, 1, 1, r3);
}

int32_t sub_2a94(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    /* tailcall */
    return sub_28c6(4, 1, 0, r3);
}

int32_t sub_2aa6(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(5, 1, 7, r3);
}

int32_t sub_2ab8(int32_t arg1)
{
    int32_t r3;
    
    if (!arg1)
        r3 = 0;
    else if (arg1 <= 0x28)
        r3 = 1;
    else if (arg1 - 0x29 > 0x27)
        r3 = 3;
    else
        r3 = 2;
    
    /* tailcall */
    return sub_28c6(5, 3, 5, r3);
}

int32_t sub_2adc()
{
    /* tailcall */
    return sub_28c6(5, 1, 4, 1);
}

int32_t sub_2ae6(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(5, 1, 3, r3);
}

int32_t sub_2af8(int32_t arg1)
{
    int32_t r3;
    
    if (arg1 <= 3)
        r3 = 0;
    else if (arg1 - 6 > 2)
        r3 = 1;
    else
        r3 = 2;
    
    /* tailcall */
    return sub_28c6(5, 3, 1, r3);
}

int32_t sub_2b14(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(5, 1, 0, r3);
}

int32_t sub_2b26(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(6, 1, 7, r3);
}

int32_t sub_2b38(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(6, 1, 6, r3);
}

int32_t sub_2b4a(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(6, 1, 4, r3);
}

int32_t sub_2b5c(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(6, 1, 3, r3);
}

int32_t sub_2b6e(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(6, 1, 2, r3);
}

int32_t sub_2b80(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(6, 1, 2, r3);
}

int32_t sub_2b92(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(6, 1, 0, r3);
}

int32_t sub_2ba4(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    /* tailcall */
    return sub_28c6(7, 1, 7, r3);
}

int32_t sub_2bb6(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    /* tailcall */
    return sub_28c6(7, 1, 6, r3);
}

int32_t sub_2bc8(int32_t arg1)
{
    int32_t r3;
    
    if (arg1 <= 0x3c)
        r3 = 0;
    else if (arg1 - 0x3d <= 0x13)  /* "2_3.00.33_250117" */
        r3 = 1;
    else if (arg1 - 0x51 > 0x13)  /* "2_3.00.33_250117" */
        r3 = 3;
    else
        r3 = 2;
    
    /* tailcall */
    return sub_28c6(7, 3, 4, r3);
}

uint32_t sub_2bf0(int32_t arg1)
{
    uint32_t r3;
    
    if (arg1 <= 0x1068)
        r3 = 0;
    else if (arg1 < 0x1356)
        r3 = sub_12b3e(arg1 - 0x1068, 0x32);  /* "02_V3.0" */
    else
        r3 = 0xf;
    
    return sub_28c6(7, 0xf, 0, r3);
}

int32_t sub_2c20(int32_t arg1)
{
    int32_t r3;
    
    if (arg1 <= 1)
        r3 = 0;
    else if (arg1 <= 2)
        r3 = 1;
    else if (arg1 - 3 <= 1)
        r3 = 2;
    else if (arg1 - 5 > 3)
        r3 = 1;
    else
        r3 = 3;
    
    /* tailcall */
    return sub_28c6(9, 3, 6, r3);
}

int32_t sub_2c4a(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    /* tailcall */
    return sub_28c6(0xa, 1, 4, r3);
}

uint32_t sub_2c76(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    return sub_28c6(0xa, 1, 3, r3);
}

uint32_t sub_2c8e(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 0 : 1;
    
    return sub_28c6(0xa, 1, 2, r3);
}

uint32_t sub_2ca6(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    return sub_28c6(0xa, 1, 1, r3);
}

uint32_t sub_2cbe(int32_t arg1)
{
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    return sub_28c6(0xa, 1, 0, r3);
}

uint32_t sub_2cd6()
{
    return *0x2098dc;
}

int32_t sub_2cdc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    
    for (uint32_t i = 0; i < 3; i = i + 1)
    {
        if (!(sub_286c(8, &var_10) << 0x18 >> 0x18) && var_10 << 0x1e < 0)  /* "0.33_250117" */
                /* "50117" */
            return 0;
    }
    
    return 1;
}

uint32_t sub_2d0c()
{
    sub_2aa6(0);
    sub_2ab8(0);
    sub_290e(0x11f8);
    sub_2928(0x1f4);
    sub_299c(0xac8);
    sub_29de(0x10);  /* "RY02_3.00.33_250117" */
    sub_2a06(0x7d0);  /* "17 10:58:10 2022" */
    sub_2ba4(0);
    sub_2a32(3);
    sub_2a54(0x1068);
    sub_2a94(1);
    sub_2a82(0);
    sub_2adc();
    sub_2af8(5);
    sub_2b26(0);
    sub_2bf0(0x1194);
    return sub_2c8e(1);
}

int32_t sub_2d7c(int32_t arg1)
{
    *0x2098de = arg1;
    return sub_2828(arg1);
}

uint32_t sub_2d88()
{
    return *0x2098de;
}

int32_t sub_2d8e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r4 = 0;
    var_18 = 0xff;
    
    while (sub_286c(8, &var_18) << 0x18 >> 0x18)  /* "0.33_250117" */
    {
        (*0x20011c)(0x2710);
        r4 = r4 + 1;
        
        if (r4 >= 5)
            return 0;
    }
    
    uint32_t r0_6 = (var_18 & 0x18) >> 3;  /* "0.33_250117" */
    var_18 = r0_6;
    
    if (arg1 != r0_6)
        return 2;
    
    return 1;
}

int32_t sub_2dd8()
{
    if (*0x2098df)
        return 0x2098dc;
    
    *0x2098df = 1;
    return sub_116c();
}

int32_t j_sub_2dd8()
{
    /* tailcall */
    return sub_2dd8();
}

int32_t sub_2df2(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    uint32_t i = 0;
    var_10 = 0xff;
    
    do
    {
        int32_t r0;
        int32_t r1_1;
        int32_t r2;
        int32_t r3;
        r0 = sub_286c(0xa, &var_10);
        
        if (!(r0 << 0x18 >> 0x18) && var_10 >> 4 == 0xe)  /* "0.33_250117" */
        {
            uint32_t r0_6 = var_10 >> 4;
            *0x2098dc = r0_6;
            int32_t r0_8;
            
            if (!sub_2cdc(r0_6, r1_1, r2, r3))
                r0_8 = 1;
            else
                r0_8 = 0;
            
            sub_2d7c(r0_8);
            *0x2098dd = 0;
            sub_29ca();
            sub_3704(0x2098ec, 0x826d89, 0x64, 1);
            break;
        }
        
        i = i + 1;
    } while (i < 5);
    
    return sub_274e();
}

uint32_t sub_2e56()
{
    return *0x2098e1;
}

uint32_t sub_2e5c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0xff;
    uint32_t result = sub_286c(8, &var_10) << 0x18 >> 0x18;  /* "0.33_250117" */
    
    if (!result)
    {
        result = (var_10 & 0x18) >> 3;  /* "0.33_250117" */
        var_10 = result;
        *0x2098e1 = result;
        
        if (!result)
            return sub_35fe(1, 0xff, 0xa);
        
        if (result == 1 || result == 2)
        {
            if (*0x2098e0)
                return sub_35fe(1, 1, 0x7d0);  /* "17 10:58:10 2022" */
            
            if (sub_26ac() == 0x64)
                sub_26b8(0x63);
            
        label_2ea4:
            return sub_35fe(1, 2, 0x7d0);  /* "17 10:58:10 2022" */
        }
        
        if (result == 3)
        {
            if (sub_26ac() < 0x64)
                goto label_2ea4;
            
            sub_35fe(1, 1, 0x7d0);  /* "17 10:58:10 2022" */
            *0x2098e0 = 1;
            return 1;
        }
    }
    
    return result;
}

int32_t sub_2edc()
{
    sub_2d0c();
    sub_2c8e(1);
    *0x2098dd = 0;
    return 0;
}

uint32_t sub_2ef0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r0 = *0x2098df;
    
    if (r0)
    {
        *0x2098df = 0;
        uint32_t r0_2;
        
        if (*0x2098de)
            r0_2 = *0x2098dd;
        
        int32_t r0_12;
        
        if (!*0x2098de || !r0_2)
        {
            sub_150c();
            var_18 = 0xff;
            
            for (uint32_t i = 5; i; )
            {
                int32_t r0_4;
                int32_t r1_2;
                int32_t r2_1;
                int32_t r3_2;
                r0_4 = sub_286c(8, &var_18);
                
                if (!(r0_4 << 0x18 >> 0x18))  /* "0.33_250117" */
                {
                    uint32_t r0_7 = *0x2098dd;
                    
                    if (!r0_7)
                    {
                        *0x2098dd = 1;
                        uint32_t r0_8;
                        int32_t r1_3;
                        int32_t r2_2;
                        int32_t r3_3;
                        r0_8 = sub_2d0c();
                        r0_7 = sub_2cdc(r0_8, r1_3, r2_2, r3_3);
                        
                        if (!r0_7)
                        {
                            sub_298a(1);
                            sub_bb90();
                            r0_7 = sub_3704(0x2098ec, 0x826d89, 0x3e8, 1);
                        }
                    }
                    
                    int32_t r0_9;
                    int32_t r1_4;
                    int32_t r2_3;
                    int32_t r3_4;
                    r0_9 = sub_2cdc(r0_7, r1_2, r2_1, r3_2);
                    uint32_t r0_10;
                    
                    if (!r0_9)
                    {
                        r0_10 = sub_2d8e(0, r1_4, r2_3, r3_4);
                        
                        if (r0_10 == 2)
                        {
                            sub_36d2();
                            sub_ea1e();
                            sub_e1f8();
                            *0x2098e8 = sub_187c();
                            sub_2d7c(1);
                            r0_10 = sub_35fe(1, 2, 0x7d0);  /* "17 10:58:10 2022" */
                        }
                    }
                    else
                    {
                        sub_3730(0x2098ec);
                        sub_2edc();
                        sub_2d7c(0);
                        *0x2098e0 = 0;
                        r0_10 = *0x208447;
                        
                        if (r0_10 == 1)
                            r0_10 = sub_357e(0x1e, 1, 3, 2);  /* "50117" */
                    }
                    
                    *0x208447 = 0;
                    return r0_10;
                }
                
                i = (i - 1) << 0x18 >> 0x18;  /* "0.33_250117" */
                
                if (!i)
                    sub_3730(0x2098ec);
                
                r0_12 = 0xff7ef196(0xa);
            }
            
            return r0_12;
        }
        
        int32_t r0_3;
        int32_t r1;
        int32_t r2;
        int32_t r3;
        r0_3 = sub_2cdc(r0_2, arg2, arg3, arg4);
        
        if (!r0_3)
        {
            sub_2e5c(r0_3, r1, r2, r3);
            r0_12 = *0x2098e4 + 1;
            *0x2098e4 = r0_12;
            return r0_12;
        }
        
        sub_2d7c(0);
        r0 = sub_35fe(1, 0, 0xa);
        *0x2098e4 = 0;
    }
    
    return r0;
}

int32_t sub_3002(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    int32_t r3;
    
    r3 = !arg1 ? 1 : 0;
    
    sub_28c6(6, 1, 5, r3);
    var_10 = 0;
    return sub_286c(6, &var_10);
}

int32_t sub_302a()
{
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r1 = sub_2d0c();
    sub_3002(0, r1, r2, r3);
    *0x2098df = 0;
    return 0;
}

int32_t sub_3064(int32_t arg1)
{
    0xff7ef444(*0x2088a4, 0x1f4);
    0xff7e41f0(2, arg1);
    return 0xff7ef46c(*0x2088a4);
}

int32_t sub_30a4(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_18 = r3;
    0xff7ef444(*0x2088a4, 0x1f4);
    0xff7e4650(arg2, arg3, arg1);
    return 0xff7ef46c(*0x2088a4);
}

int32_t sub_30ca(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_18 = r3;
    0xff7ef444(*0x2088a4, 0x1f4);
    0xff7e46c0(arg2, arg3, arg1);
    return 0xff7ef46c(*0x2088a4);
}

uint32_t sub_30f0()
{
    uint32_t result = *0x2098f0;
    
    if (result == 1)
        return result;
    
    return 0;
}

int32_t sub_30fc(int32_t arg1, int32_t arg2, int16_t arg3)
{
    sub_30a4(arg2, arg1, arg3);
    return 0;
}

int32_t sub_3118()
{
    0xff7e3b6e(0x2086c4, 0, 0xe8);
    
    if (*0x2086c4 == 4)
        return 1;
    
    return 0;
}

int32_t sub_3134()
{
    int32_t result = sub_3118();
    
    if (result == 1)
        return result;
    
    sub_1432();
    return 0;
}

int32_t sub_3146()
{
    *0x2086c4 = 4;
    return 0xff7e3b82(0x2086c4, 0, 0xe8);
}

int32_t sub_315a()
{
    void var_f0;
    0xff7e3b6e(&var_f0, 0, 0xe8);
    int32_t result = 0xff81b7f8(&var_f0, 0x2086c4, 0xe8);
    
    if (!result)
        return result;
    
    return sub_3146();
}

int32_t sub_317e()
{
    void var_404;
    0xff81b968(&var_404, 0x3fc);
    int32_t var_408 = *0x83db80;
    return 0xff7e3b82(&var_408, 0, 0xe8);
}

int32_t sub_31aa()
{
    *0x208660 = 3;
    return 0xff7e3b82(0x208660, 0x400, 0x64);
}

int32_t sub_31e6()
{
    void var_204;
    0xff81b968(&var_204, 0x1fc);
    int32_t var_208 = *0x83db84;
    return 0xff7e3b82(&var_208, 0x400, 0x64);
}

int32_t sub_320e()
{
    0xff7e3b6e(0x2087ac, 0x600, 0xa4);
    
    if (*0x2087ac == 0xa1b2c3e5)
        return 1;
    
    return 0;
}

int32_t sub_322e()
{
    *0x2087ac = 0xa1b2c3e5;
    return 0xff7e3b82(0x2087ac, 0x600, 0xa4);
}

int32_t sub_3244()
{
    void var_208;
    0xff81b968(&var_208, 0x200);
    return 0xff7e3b82(&var_208, 0x600, 0xa4);
}

int32_t sub_3262(int32_t* arg1)
{
    int32_t* r4 = *arg1;
    int32_t r0 = sub_12b2a(0x1000, *(arg1 + 0xa));
    int32_t r6 = 0;
    int32_t result;
    
    while (true)
    {
        result = arg1[1];
        
        if (result <= r6)
            break;
        
        int32_t* r0_1 = r4;
        
        for (int32_t i = 0; i < r0; i += 1)
        {
            if (*r0_1 != 0xffffffff)
            {
                sub_3064(r4);
                break;
            }
            
            r0_1 += *(arg1 + 0xa);
        }
        
        r4 = &r4[0x400];
        r6 += 0x1000;
    }
    
    return result;
}

int32_t* sub_32a6(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t* var_20 = arg1;
    int32_t* r0_1 = *arg2;
    
    if (*r0_1 == arg3)
        return r0_1;
    
    int32_t* r4_1 = *arg1;
    int32_t* r0_2 = &data_0;
    void* r1_1 = &data_0;
    
    while (true)
    {
        if (arg1[1] <= r1_1)
        {
            if (!r0_2)
            {
                sub_3262(arg1);
                r0_2 = *arg1;
            }
            
            uint32_t r6_2 = arg1[2];
            r4_1 = r0_2;
            int32_t r1_3 = sub_12b2a(r0_2, r6_2);
            uint32_t r0_4 = *(arg1 + 0xa);
            
            if (sub_12b2a(r1_3, r0_4) == sub_12b2a(r6_2, r0_4) - 1)
            {
                int32_t* r1_6 = *arg1;
                int32_t* r0_11 = r0_4 + r4_1;
                
                if (r1_6 + arg1[1] <= r0_11)
                    r0_11 = r1_6;
                
                if (*r0_11 != 0xffffffff)
                {
                    if (r6_2 != 0x1000)
                    {
                        uint32_t r5_5 = r0_11 << 0x14 >> 0x14;  /* "_3.00.33_250117" */
                        void* r7_2 = r0_11 - r5_5;
                        0xff81b898(0x2088ac, r7_2, 0x1000);
                        0xff81b91a(r5_5 + 0x2088ac, r6_2, 0xff);
                        sub_3064(r7_2);
                        sub_30fc(r7_2, 0x2088ac, 0x1000);
                    }
                    else
                        sub_3064(r0_11);
                }
            }
            
            break;
        }
        
        int32_t r3_1 = *r4_1;
        
        if (r3_1 == arg3)
            break;
        
        if (!r0_2 && r3_1 == 0xffffffff)
            r0_2 = r4_1;
        
        uint32_t r3_3 = *(arg1 + 0xa);
        r4_1 += r3_3;
        r1_1 += r3_3;
    }
    
    *arg2 = r4_1;
    return r4_1;
}

int32_t sub_3372(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t* var_20 = arg2;
    int32_t r2 = var_1c;
    int32_t result = r2 + 1;
    
    if (r2 != 0xffffffff)
    {
        int32_t* r0_1 = sub_32a6(arg1, arg2, r2);
        
        if (*r0_1 == 0xffffffff)
            sub_30fc(r0_1, &var_1c, 4);
        
        void* r1_1 = r0_1 + arg4;
        int32_t r0_5 = 0;
        int32_t r2_1 = arg6;
        
        while (true)
        {
            void* r0_13;
            
            if (r0_5 >= r2_1)
                r0_13 = r1_1;
            else if (*(r1_1 + r0_5) == 0xff)
            {
                r0_5 += 1;
                continue;
            }
            else
            {
                result = 0xff81b7f8(r1_1, arg5);
                
                if (!result)
                    break;
                
                uint32_t r7_3 = r0_1 << 0x14 >> 0x14;  /* "_3.00.33_250117" */
                void* r5_2 = r0_1 - r7_3;
                0xff81b898(0x2088ac, r5_2, 0x1000);
                uint32_t r0_8 = *(arg1 + 0xa);
                
                if (r0_8 > arg4)
                    0xff81b91a(r7_3 + 0x2088ac + arg4, r0_8 - arg4, 0xff);
                
                sub_3064(r5_2);
                sub_30fc(r5_2, 0x2088ac, 0x1000);
                r2_1 = arg6;
                r0_13 = r1_1;
            }
            
            return sub_30fc(r0_13, arg5, r2_1);
        }
    }
    
    return result;
}

void* sub_3404(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    if (*arg2 == arg3)
        return arg2;
    
    void* r5_1 = *arg1;
    void* r0_1;
    
    if (r5_1 >= arg2 || r5_1 + arg1[1] <= arg2)
        r0_1 = r5_1 + (arg1[1] >> 1);
    else
        r0_1 = arg2 - *(arg1 + 0xa);
    
    int32_t i = 0;
    uint32_t r4_2;
    
    for (void* r6_1 = arg1[1]; r6_1 > i; i += r4_2)
    {
        if (*r0_1 == arg3)
            return r0_1;
        
        r4_2 = *(arg1 + 0xa);
        r0_1 -= r4_2;
        
        if (r5_1 > r0_1)
            r0_1 += r6_1;
    }
    
    return 0;
}

void sub_344c(int32_t* arg1, int32_t** arg2)
{
    int32_t r3 = 0;
    
    for (int32_t* i = *arg1; arg1[1] > i; i += *(arg1 + 0xa))
    {
        int32_t r4_1 = *i;
        
        if (r3)
        {
            if (r4_1 == 0xffffffff)
                break;
            
            *arg2 = i;
        }
        else if (r4_1 == 0xffffffff)
            i += arg1[2] - *(arg1 + 0xa);
        else
        {
            r3 = 1;
            *arg2 = i;
        }
    }
}

int32_t sub_3498(int32_t arg1)
{
    sub_3730(0x2098fc);
    
    if (arg1 == 0xff)
        sub_e1f8();
    else
    {
        uint32_t r0_1;
        int32_t r2_2;
        
        if (!arg1)
        {
            r2_2 = 0;
            r0_1 = 0;
        }
        else
        {
            r0_1 = arg1 << 0x1f >> 0x1f;  /* "0117" */
            r2_2 = arg1 & 2;
            
            if (arg1 == 4 || arg1 == 8)
            {
                *0x209900 = arg1;
                *0x2098f4 = 0;
                *0x2098f5 = 0;
            }
        }
        
        sub_d020(r0_1, 0x29, r2_2, 0x29);
    }
    
    return 0;
}

uint32_t sub_34e6()
{
    uint32_t r1 = *0x209904;
    uint32_t result = *0x209906 - 1;
    
    if (r1 == 1)
    {
        *0x209906 = result;
        
        if (!result)
        {
        label_351a:
            *0x209904 = 0;
            sub_3498(0xff);
            result = sub_3730(0x2098f8);
            *0x209908 = 0;
        }
    }
    else
    {
        if (r1 == 3)
        {
            *0x209906 = result;
            
            if (result)
                return result;
            
            char* r0_2 = *0x209910;
            uint32_t r1_1 = *r0_2;
            *0x209910 = &r0_2[1];
            uint32_t r0_4 = *0x209907;
            
            if (r1_1 != 0xff)
            {
                if (r1_1 << 0x18 >= 0)  /* "0.33_250117" */
                    *0x209906 = r1_1 << 0x19 >> 0x19;  /* ".33_250117" */
                else
                {
                    *0x209906 = r1_1 << 0x19 >> 0x19;  /* ".33_250117" */
                    r0_4 = 0;
                }
                
                return sub_3498(r0_4);
            }
            
            uint32_t r1_5 = (*0x209905 - 1) << 0x18 >> 0x18;  /* "0.33_250117" */
            *0x209905 = r1_5;
            
            if (!r1_5)
                goto label_351a;
            
            char* r1_6 = *0x20990c;
            *0x209910 = r1_6;
            *0x209906 = *r1_6 << 0x19 >> 0x19;  /* ".33_250117" */
            *0x209910 = &r1_6[1];
            return sub_3498(r0_4);
        }
        
        sub_3498(0xff);
        result = sub_3730(0x2098f8);
        *0x209908 = 0;
        *0x209904 = 0;
    }
    
    return result;
}

uint32_t sub_357e(int32_t arg1, int32_t arg2, int32_t arg3, char arg4)
{
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    int32_t var_24 = arg1;
    uint32_t result = *0x209908;
    
    if (result <= arg1)
    {
        result = *0x209904;
        
        if (result)
        {
            sub_3498(0xff);
            result = sub_3730(0x2098f8);
        }
        
        int32_t r0;
        
        if (arg3 == 1)
        {
            r0 = 0x83db88;
        label_35b4:
            *0x209910 = r0;
            *0x209908 = arg1;
            *0x209907 = arg2;
            *0x209905 = arg4;
            char* r0_2 = *0x209910;
            *0x20990c = r0_2;
            uint32_t r1 = *r0_2;
            *0x209910 = &r0_2[1];
            *0x209906 = r1 << 0x19 >> 0x19;  /* ".33_250117" */
            int32_t r0_7;
            
            r0_7 = r1 << 0x18 >= 0 ? arg2 : 0;  /* "0.33_250117" */
            
            sub_3498(r0_7);
            *0x209904 = 3;
            return sub_3704(0x2098f8, 0x827497, 0x64, 1);
        }
        
        if (arg3 == 2)
        {
            r0 = 0x83db8e;
            goto label_35b4;
        }
        
        if (arg3 == 3)
        {
            r0 = 0x83db8b;
            goto label_35b4;
        }
    }
    
    return result;
}

uint32_t sub_35fe(int32_t arg1, int32_t arg2, int32_t arg3)
{
    uint32_t result = *0x209908;
    int32_t r4 = arg3;
    
    if (result <= arg1)
    {
        if (*0x209904)
            sub_3730(0x2098f8);
        
        sub_3704(0x2098f8, 0x827497, 0x64, 1);
        sub_3498(arg2);
        *0x209904 = 1;
        
        if (r4 < 0x64)
            r4 = 0x64;
        
        *0x209908 = arg1;
        *0x209906 = sub_12b2a(r4, 0x64);
        result = 2;
        *0x208448 = 2;
    }
    
    return result;
}

int32_t sub_3650(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    sub_35fe(arg1, arg2, arg4);
    char r1;
    
    if (arg3 == 3)
        r1 = 4;
    else if (arg3 == 2)
        r1 = 1;
    else
        r1 = 2;
    
    *0x208448 = r1;
    return 0x208448;
}

uint32_t sub_3672()
{
    uint8_t r1 = *0x208448 << 1;
    char r0_1 = *0x2098f4;
    
    if (!*0x2098f5)
    {
        uint32_t r0_10 = r1 + r0_1;
        *0x2098f4 = r0_10;
        
        if (r0_10 >= 0x5a)
            *0x2098f5 = 1;
    }
    else
    {
        uint32_t r0_3 = r0_1 - r1;
        *0x2098f4 = r0_3;
        
        if (r0_3 <= 0xa)
            *0x2098f5 = 0;
    }
    
    if (*0x209900 << 0x1d < 0)  /* "250117" */
        *0x2098f4;
    
    uint32_t result = *0x209900 << 0x1c;  /* "_250117" */
    
    if (result < 0)
    {
        *0x2098f4;
        result = 0;
    }
    
    return result;
}

uint32_t sub_36ca()
{
    return *0x209904;
}

int32_t sub_36d2()
{
    if (*0x209904)
        sub_3730(0x2098f8);
    
    *0x209904 = 0;
    *0x209908 = 0;
    return sub_3498(0xff);
}

int32_t sub_3704(int32_t* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c_1 = arg4;
    int32_t var_10_1 = arg3;
    
    if (*arg1)
        return 0xff7ef6e4(arg1, arg3);
    
    0xff7ef684(arg1, "qc_timer_restart", 1, arg3, arg4, arg2);
    return 0xff7ef6c0(arg1);
}

int32_t sub_3730(int32_t* arg1)
{
    int32_t result = *arg1;
    
    if (!result)
        return result;
    
    0xff7ef70c(arg1);
    return 0xff7ef730(arg1);
}

int32_t sub_375c() __pure
{
    return;
}

int32_t sub_375e() __pure
{
    return;
}

int32_t sub_3760() __pure
{
    return;
}

int32_t sub_3762() __pure
{
    return;
}

uint32_t sub_3764(char* arg1, int32_t arg2)
{
    int16_t r3 = 0;
    
    for (int32_t i = 0; i < arg2; i += 1)
    {
        uint16_t r4_1 = *arg1;
        arg1 = &arg1[1];
        r3 += r4_1;
    }
    
    return r3;
}

int32_t sub_377e()
{
    int32_t var_30 = 0;
    int32_t var_2c = 0;
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    uint32_t r4 = 0;
    int32_t r7 = *0x20b8b8;
    int32_t r6 = *0x20b8a8;
    void* var_20 = 0x20b890;
    uint32_t r5 = *0x20b8a0;
    uint32_t r0_1 = *0x20b89e;
    
    if (sub_cd0c() == 2)
        r4 = sub_cd12();
    
    if (r4 - 0x28 >= 0xb5)
        r4 = 0;
    
    var_30 = 0x78;
    *var_30[1] = *(var_20 + 2);
    
    if (sub_281e())
        *var_30[2] = 3;
    else
    {
        uint32_t r0_9 = *0x20b850;
        
        if (r0_9 == 1)
            *var_30[2] = 2;
        else if (r0_9 == 2)
            *var_30[2] = 1;
        else
            *var_30[2] = 3;
    }
    
    *var_30[3] = r0_1 >> 8;
    var_2c = r0_1;
    *var_2c[1] = r4;
    *var_2c[2] = r7 >> 0x10;  /* "RY02_3.00.33_250117" */
    *var_2c[3] = r7 >> 8;
    var_28 = r7;
    *var_28[1] = r5 >> 0x10;  /* "RY02_3.00.33_250117" */
    *var_28[2] = r5 >> 8;
    *var_28[3] = r5;
    var_24 = r6 >> 0x10;  /* "RY02_3.00.33_250117" */
    *var_24[1] = r6 >> 8;
    *var_24[2] = r6;
    *var_24[3] = sub_3764(&var_30, 0xf);
    return sub_6650(&var_30);
}

int32_t sub_382c()
{
    if (*0x20b850)
        return sub_377e();
    
    sub_377e();
    return 0xff7ef70c(0x209924);
}

int32_t sub_3848()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return 0xff7ef684(0x209924, &data_3b90, 1, 0x3e8, 1, 0x8277dd);
}

uint32_t sub_3862()
{
    int32_t lr;
    int32_t var_4 = lr;
    int32_t r7;
    int32_t var_8 = r7;
    int32_t r6;
    int32_t var_c = r6;
    int32_t r5;
    int32_t var_10 = r5;
    int32_t r4;
    int32_t var_14 = r4;
    void* r4_1 = 0x209914;
    uint32_t result = *0x20991e;
    int32_t* r1 = result - 1;
    int32_t var_28;
    int32_t* sp = &var_28;
    int32_t var_24;
    
    if (r1 <= 0x3b)
    {
        if (!sub_ccfc() && *0x20991e > 6)
        {
            *0x209916 = 1;
            var_28 = 0;
            var_24 = 0;
            int32_t var_20_1 = 0;
            int32_t var_1c_1 = 0;
            var_28 = 0x69;
            *var_28[1] = *0x20991c;
            *var_28[2] = 1;
            *var_28[3] = 0;
            *var_1c_1[3] = sub_3764(&var_28, 0xf);
            int32_t r1_1;
            int32_t r2;
            r1_1 = sub_6650(&var_28);
            *0x209916 = 0;
            uint32_t r0_6 = *0x20991c;
            int32_t r0_7;
            
            if (r0_6 == 3)
                r0_7 = 0x20;  /* "117" */
            else if (r0_6 == 9)
                r0_7 = 0x400;
            else if (r0_6 == 0xa)
                r0_7 = 0x100;
            else if (r0_6 == 8)
                r0_7 = 0x200;
            else
                r0_7 = 1;
            
            sub_b540(r0_7, r1_1, r2);
            r1 = 0xff7ef70c(0x209920);
        }
        
        result = *0x20991e;
        
        if (result > 0x32)  /* "02_V3.0" */
        {
            result = *0x209916;
            
            if (result != 1)
            {
                result = sub_cd0c();
                
                if (result == 2)
                {
                    var_28 = 0;
                    var_24 = 0;
                    int32_t var_20_2 = 0;
                    int32_t var_1c_2 = 0;
                    var_28 = 0x69;
                    uint32_t r0_8 = *0x20991c;
                    *var_28[1] = r0_8;
                    *var_28[2] = 0;
                    
                    if (r0_8 == 3)
                    {
                        *var_28[3] = sub_b810();
                        var_24 = 1;
                    label_3986:
                        
                        if (*(sp + 3))
                            goto label_39a6;
                        
                        goto label_398c;
                    }
                    
                    if (r0_8 == 8)
                    {
                        uint32_t r0_12 = sub_bec0();
                        *var_28[3] = r0_12;
                        
                        if (r0_12 - 0x14 < 0x2e)  /* "_3.00.33_250117" */
                            goto label_3986;
                        
                    label_3980:
                        *var_28[3] = sub_12b3e(sub_814(), 0x14) + 0x1e;
                            /* "_3.00.33_250117" */  /* "50117" */
                        goto label_3986;
                    }
                    
                    if (r0_8 == 9)
                    {
                        r4_1 = sub_c17c(sub_b810(), 0x209914, 0, r1);
                        sp = &var_24;
                        *var_24[3] = sub_c1dc();
                        goto label_3986;
                    }
                    
                    if (r0_8 == 0xa)
                    {
                        uint32_t r0_16 = sub_c060();
                        *var_28[3] = r0_16;
                        
                        if (r0_16 - 0x1e < 0x15)  /* "3.00.33_250117" */  /* "50117" */
                            goto label_3986;
                        
                        if (r0_16)
                            goto label_3980;
                    }
                    else
                    {
                        uint32_t r0_9 = sub_cd12();
                        *var_28[3] = r0_9;
                        
                        if (r0_9 - 0x28 < 0xb5)
                            goto label_3986;
                        
                        *var_28[3] = 0;
                    }
                    
                label_398c:
                    
                    if (*(r4_1 + 8) != 0xa)
                    {
                        uint32_t r0_21 = sub_814();
                        *(sp + 3) = r0_21 - (((r0_21 >> 0x1f >> 0x1e) + r0_21) >> 2 << 2) + 0x5f;
                            /* "50117" */  /* "0117" */
                    label_39a6:
                        uint32_t r0_24 = *(r4_1 + 8);
                        
                        if ((r0_24 == 5 || r0_24 == 2) && *(r4_1 + 0xa) >= 0x33)  /* "2_V3.0" */
                        {
                            if (!*(r4_1 + 3))
                            {
                                *(r4_1 + 3) = 1;
                                sub_bd82(*(sp + 3), &sp[1], sp + 5);
                            }
                            else
                                sub_bc3c(&sp[1], sp + 5);
                        }
                    }
                    
                    *(sp + 0xf) = sub_3764(sp, 0xf);
                    result = sub_6650(sp);
                }
            }
        }
    }
    else if (result >= 0x3b)
    {
        uint32_t r0_32 = *0x20991c;
        int32_t entry_r2;
        
        if (r0_32 == 0xa)
        {
            var_28 = 0;
            var_24 = 0;
            int32_t var_20_3 = 0;
            int32_t var_1c_3 = 0;
            var_28 = 0x69;
            *var_28[1] = r0_32;
            *var_28[2] = 0;
            uint32_t r0_33 = sub_c060();
            *var_28[3] = r0_33;
            
            if (*0x20991e >= 0x65 && !r0_33)
                *var_28[3] = sub_12b3e(sub_814(), 0x14) + 0x1e;
                    /* "_3.00.33_250117" */  /* "50117" */
            
            uint32_t r0_35 = *var_28[3];
            
            if (r0_35 - 0x1e >= 0x15 && r0_35)  /* "3.00.33_250117" */  /* "50117" */
                *var_28[3] = sub_12b3e(sub_814(), 0x14) + 0x1e;
                    /* "_3.00.33_250117" */  /* "50117" */
            
            *var_1c_3[3] = sub_3764(&var_28, 0xf);
            entry_r2 = sub_6650(&var_28);
            r1 = &var_28;
            result = *var_28[3];
        }
        
        if (r0_32 != 0xa || result)
        {
            *0x209916 = 0;
            uint32_t r0_40 = *0x20991c;
            int32_t r0_41;
            
            if (r0_40 == 3)
                r0_41 = 0x20;  /* "117" */
            else if (r0_40 == 9)
                r0_41 = 0x400;
            else if (r0_40 == 0xa)
                r0_41 = 0x100;
            else if (r0_40 == 8)
                r0_41 = 0x200;
            else
                r0_41 = 1;
            
            sub_b540(r0_41, r1, entry_r2);
            sub_c0de();
            result = 0xff7ef70c(0x209920);
        }
    }
    sp[5];
    sp[6];
    sp[7];
    sp[8];
    return result;
}

uint32_t sub_3aa2()
{
    uint32_t r2 = *0x20991d;
    uint32_t result = 0x16;  /* ".00.33_250117" */
    uint32_t r1 = *0x20991e;
    int32_t var_28;
    
    if (r2 == 1)
    {
        if (r1 - 1 > 0x13)  /* "2_3.00.33_250117" */
        {
            *0x20991e = 0x16;  /* ".00.33_250117" */
            int32_t var_1c_2;
            
            if (!sub_ccfc())
            {
                int32_t r0_24;
                int32_t r1_6;
                int32_t r2_2;
                r0_24 = sub_139fc(sub_cd12() + sub_12b3e(sub_814(), 3) - 1);
                *0x209928 = r0_24;
                *0x209919 = 1;
                sub_b540(1, r1_6, r2_2);
                var_28 = 0;
                int32_t var_24_3 = 0;
                int32_t var_20_3 = 0;
                var_1c_2 = 0;
                var_28 = 0x69;
                *var_28[1] = *0x20991c;
                *var_28[2] = 1;
                *var_28[3] = sub_13984(*0x209928);
                *var_1c_2[3] = sub_3764(&var_28, 0xf);
                int32_t r1_7;
                int32_t r2_3;
                r1_7 = sub_6650(&var_28);
                result = *0x20991a + 1;
                *0x20991a = result;
                
                if (result >= 0x3c)
                {
                    *0x20991a = 0;
                    sub_b540(1, r1_7, r2_3);
                    *0x20991e = 0;
                    0xff7ef70c(0x209920);
                    *var_28[2] = 2;
                label_3c5c:
                    *var_1c_2[3] = sub_3764(&var_28, 0xf);
                    return sub_6650(&var_28);
                }
            }
            else
            {
                *0x20991a = 0x38;  /* "0" */
                result = *0x209919;
                
                if (!result)
                {
                    result = *0x209918 + 1;
                    *0x209918 = result;
                    
                    if (result >= 2)
                    {
                        *0x209918 = 0;
                        result = sub_cd0c();
                        
                        if (result == 2)
                        {
                            int32_t r0_18 = sub_139fc(sub_cd12() + sub_12b3e(sub_814(), 3) - 1);
                            *0x209928 = r0_18;
                            var_28 = 0;
                            int32_t var_24_2 = 0;
                            int32_t var_20_2 = 0;
                            var_1c_2 = 0;
                            var_28 = 0x69;
                            *var_28[1] = *0x20991c;
                            *var_28[2] = 0;
                            *var_28[3] = sub_13984(r0_18);
                            goto label_3c5c;
                        }
                        
                        *0x209928 = 0;
                    }
                }
                else if (result == 1)
                {
                    *0x20991e = 0;
                    return sub_b55a(result, r1 - 1, r2);
                }
            }
        }
        else
        {
            if (!sub_ccfc() && *0x20991e > 6)
            {
                *0x20991e = 0;
                *0x20991a = 0;
                *0x209918 = 0;
                *0x209919 = 1;
                sub_b540(1, r1 - 1, r2);
                0xff7ef70c(0x209920);
                int32_t r0_6 = sub_139fc(sub_cd12() + sub_12b3e(sub_814(), 3) - 1);
                *0x209928 = r0_6;
                var_28 = 0;
                int32_t var_24_1 = 0;
                int32_t var_20_1 = 0;
                int32_t var_1c_1 = 0;
                var_28 = 0x69;
                *var_28[1] = *0x20991c;
                *var_28[2] = 2;
                *var_28[3] = sub_13984(r0_6);
                *var_1c_1[3] = sub_3764(&var_28, 0xf);
                sub_6650(&var_28);
            }
            
            result = *0x20991e;
            
            if (result == 0x14)  /* "_3.00.33_250117" */
            {
                *0x20991a = 0;
                *0x209919 = 0;
                *0x209918 = 0;
            }
        }
    }
    else if (r2 == 3)
    {
        *0x20991a = 0;
        
        if (r1 > 0x14)  /* "_3.00.33_250117" */
            *0x20991e = 0x16;  /* ".00.33_250117" */
        else
            *0x20991e = 0;
        
        *0x20991d = 1;
        result = sub_ccfc();
        
        if (!result)
        {
            *0x20991e = 0;
            *0x20991a = 0;
            *0x209918 = 0;
            *0x209919 = 1;
            sub_b540(1, r1, r2);
            0xff7ef70c(0x209920);
            int32_t r0_40 = sub_139fc(sub_cd12() + sub_12b3e(sub_814(), 3) - 1);
            *0x209928 = r0_40;
            var_28 = 0;
            int32_t var_24_4 = 0;
            int32_t var_20_4 = 0;
            int32_t var_1c_3 = 0;
            var_28 = 0x69;
            *var_28[1] = *0x20991c;
            *var_28[2] = 2;
            *var_28[3] = sub_13984(r0_40);
            *var_1c_3[3] = sub_3764(&var_28, 0xf);
            return sub_6650(&var_28);
        }
    }
    return result;
}

int32_t sub_3b8c(int32_t arg1, char arg2, int32_t arg3, void* arg4, void* arg5 @ r4, void* arg6 @ r5, void* arg7 @ r6, int32_t arg8 @ r7, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12)
{
    *(arg4 + 0x1f) = arg6;  /* "0117" */
    *(arg5 + 1) = arg2;
    char r2 = *(arg7 + 0x14);  /* "_3.00.33_250117" */
    *(arg6 + 0x74) = arg7;
    *(arg4 + 0xd) = arg8;
    *(arg7 + 0x74);
    *(arg7 + 0x11) = r2;  /* "Y02_3.00.33_250117" */
    *(arg4 + 0x44) = arg8;
    *(arg5 + 0x11) = arg2;  /* "Y02_3.00.33_250117" */
    *(arg6 + 0x44) = *(arg5 + arg6);
    int32_t r0_6 = sub_139fc(sub_cd12() + sub_12b3e(sub_814(), 3) - 1);
    *(arg5 + 0x14) = r0_6;  /* "_3.00.33_250117" */
    void* arg_0 = arg6;
    void* arg_4 = arg6;
    void* arg_8 = arg6;
    void* arg_c = arg6;
    arg_0 = arg7;
    *arg_0[1] = *(arg5 + 8);
    *arg_0[2] = arg6;
    *arg_0[3] = sub_13984(r0_6);
    *arg_c[3] = sub_3764(&arg_0, 0xf);
    return sub_6650(&arg_0);
}

uint32_t sub_3cce()
{
    *0x20991e += 1;
    
    if (*0x20991c == 6)
        return sub_3aa2();
    
    return sub_3862();
}

int32_t sub_3cec()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return 0xff7ef684(0x209920, "m_heart_rate_timer_id", 1, 0x1f4, 1, 0x827c7f);
}

int32_t sub_3d06()
{
    sub_3cec();
    return sub_3848();
}

uint32_t sub_3d12(char arg1, int32_t arg2, uint32_t arg3)
{
    uint32_t i = arg3;
    int32_t r5 = arg2;
    uint32_t result;
    
    do
    {
        int32_t var_28 = 0;
        int32_t var_24_1 = 0;
        int32_t var_20_1 = 0;
        int32_t var_1c_1 = 0;
        char r0;
        
        r0 = i <= 0xe ? i : 0xe;
        
        uint32_t r7_1 = r0;
        var_28 = arg1;
        0xff81b898(&*var_28[1], r5, r7_1);
        *var_1c_1[3] = sub_3764(&var_28, 0xf);
        sub_6650(&var_28);
        r5 += r7_1;
        result = i - r7_1;
        i = result << 0x10 >> 0x10;  /* "RY02_3.00.33_250117" */
    } while (i);
    
    return result;
}

int32_t sub_3d60(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t var_14_1 = arg2;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    
    if (arg2)
        arg1 |= 0x80;
    
    result = arg1;
    *var_c[3] = arg1;
    sub_6650(&result);
    return result;
}

int32_t sub_3d82(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t var_14_1 = arg2;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = arg1;
    *result[1] = arg2;
    *var_c[3] = arg1 + arg2;
    sub_6650(&result);
    return result;
}

int32_t sub_3da0()
{
    sub_357e(0x14, 1, 1, 2);  /* "_3.00.33_250117" */
    return sub_3d60(0x10, 0);  /* "RY02_3.00.33_250117" */
}

void* sub_3db8(void* arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    void* result = arg1;
    result = &data_0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    void** r0_6;
    
    if (*(arg1 + 1) == 1)
    {
        result = 0xa;
        *result[1] = 1;
        *result[2] = 0;
        *result[3] = sub_166c();
        *var_14[3] = sub_3764(&result, 0xf);
        r0_6 = &result;
    }
    else
    {
        sub_164c(*(arg1 + 3));
        sub_9070();
        uint32_t r2_1 = *(arg1 + 6);
        
        if (r2_1)
            sub_1676(*(arg1 + 4), *(arg1 + 5), r2_1, *(arg1 + 7));
        
        result = 0xa;
        *result[1] = 2;
        *result[2] = *(arg1 + 2);
        *result[3] = *(arg1 + 3);
        *var_14[3] = sub_3764(&result, 0xf);
        r0_6 = &result;
    }
    
    sub_6650(r0_6);
    return result;
}

int32_t sub_3e2e(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x2b;
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

uint32_t sub_3e54(void* arg1)
{
    uint32_t r0 = sub_5b94();
    uint32_t r1;
    
    r1 = r0 <= 0x32 ? 0x14 : r0;  /* "_3.00.33_250117" */  /* "02_V3.0" */
    
    sub_3d82(0x2f, r1);
    char var_20 = sub_6830(*(arg1 + 1));
    char var_1f = sub_6830(*(arg1 + 2));
    char var_1e = sub_6830(*(arg1 + 3));
    char var_1d = sub_6830(*(arg1 + 4));
    char var_1c = sub_6830(*(arg1 + 5));
    char var_1b = sub_6830(*(arg1 + 6));
    
    if (!sub_1620())
        sub_162a();
    
    int32_t r0_14 = sub_183e();
    int32_t r0_16 = sub_20ec(&var_20);
    
    if (r0_14 != r0_16)
    {
        if (!*0x208852)
        {
            sub_1830(sub_20ec(&var_20));
            *0x208852 = 1;
            *0x2087b9 = 1;
            sub_1598();
            j_sub_1410();
        }
        else
        {
            int32_t r0_19 = sub_12b2a(r0_14, 0x384);
            
            if (r0_19 == sub_12b2a(r0_16, 0x384))
                sub_1830(r0_16);
            else if (r0_16 > r0_14)
            {
                sub_1830(0x384 * (r0_19 + 1));
                sub_8f00();
                sub_1830(r0_16);
                sub_1598();
            }
            else if (r0_14 - r0_16 > 2)
            {
                sub_1830(r0_16);
                sub_1598();
            }
        }
    }
    
    int32_t var_30 = 0;
    int32_t var_2c = 0;
    int32_t var_28 = 0;
    *var_30[3] |= 2;
    var_28 = 1;
    *var_28[2] = 0x20;  /* "117" */
    int16_t var_24;
    *var_24[1] = *0[1] | 0x10 | 0x20;  /* "RY02_3.00.33_250117" */  /* "117" */
    
    if (*(arg1 + 7) != 0xff)
        sub_1646(sub_183e());
    
    return sub_3d12(1, &var_30, 0xe);
}

int32_t sub_3f7a(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 3;
    *result[1] = sub_26ac();
    
    if (sub_281e())
        *result[2] = 1;
    
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

int32_t sub_3fb6(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    char r0 = arg1 | 0x80;
    result = r0;
    *result[1] = 0xee;
    *var_c[3] = r0 - 0x12;  /* "02_3.00.33_250117" */
    sub_6650(&result);
    return result;
}

int32_t sub_3fda(void* arg1)
{
    int32_t var_30 = 0;
    int32_t var_2c = 0;
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    var_30 = 0xce;
    uint32_t r4 = *(arg1 + 1);
    uint32_t r7 = *(arg1 + 2);
    uint32_t r6 = *(arg1 + 3);
    uint32_t r5 = *(arg1 + 4);
    char var_20;
    0xff81b898(&var_20, arg1 + 5, 0xa);
    
    if (r4 == 1)
        sub_b524(r7, r6, &var_20, r5);
    else if (r4 == 2)
        sub_b458(r7, r6, &var_20, r5);
    
    0xff81b898(&*var_30[1], &var_20, r5);
    *var_24[3] = sub_3764(&var_30, 0xf);
    return sub_6650(&var_30);
}

void* sub_406e(void* arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    void* result = arg1;
    result = &data_0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0xcd;
    
    if (*(arg1 + 1) == 1)
    {
        *(arg1 + 2);
        0xff81b898(&*result[1]);
    }
    
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

int32_t sub_40c0(int32_t arg1)
{
    0xff81b898((*0x20992e << 4) + 0x209930, arg1, 0x10);  /* "RY02_3.00.33_250117" */
    uint32_t r0_4 = *0x20992e;
    int16_t r0_5;
    
    r0_5 = r0_4 < 9 ? r0_4 + 1 : 0;
    
    *0x20992e = r0_5;
    return sub_116c();
}

uint32_t sub_40ec(char* arg1)
{
    uint32_t r2_6 = arg1[8] + (arg1[7] << 8);
    uint32_t r3_6 = (arg1[6] << 0x10) + (arg1[5] << 0x18);
        /* "RY02_3.00.33_250117" */  /* "0.33_250117" */
    uint32_t r2_7 = r2_6 + r3_6;
    
    if (r2_6 == -(r3_6))
        r2_7 = 0x10;  /* "RY02_3.00.33_250117" */
    else if (r2_7 > 0x200)
        r2_7 = 0x200;
    
    return sub_3d12(*arg1, arg1[4] + (arg1[3] << 8) + (arg1[2] << 0x10) + (arg1[1] << 0x18), r2_7);
        /* "RY02_3.00.33_250117" */  /* "0.33_250117" */
}

int32_t sub_4130(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x61;
    uint32_t r0 = sub_15a0();
    uint32_t r0_1;
    
    if (r0 == 1)
        r0_1 = sub_53f0();
    
    if (r0 != 1 || r0_1)
    {
        *result[1] = 0;
        *result[2] = 0;
    }
    
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

int32_t sub_416c()
{
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    int32_t r0 = sub_9178();
    int32_t r0_1 = sub_932e();
    int32_t r0_2 = sub_9336();
    var_28 = 0x48;
    *var_28[1] = r0 >> 0x10;  /* "RY02_3.00.33_250117" */
    *var_28[2] = r0 >> 8;
    *var_28[3] = r0;
    0xff81b964(&var_24, 3);
    *var_24[3] = r0_1 >> 0x10;  /* "RY02_3.00.33_250117" */
    var_20 = r0_1 >> 8;
    *var_20[1] = r0_1;
    *var_20[2] = r0_2 >> 0x10;  /* "RY02_3.00.33_250117" */
    *var_20[3] = r0_2 >> 8;
    var_1c = r0_2;
    *var_1c[1] = 0;
    *var_1c[2] = 0;
    *var_1c[1] = sub_9188() >> 8;
    *var_1c[2] = sub_9188();
    *var_1c[3] = sub_3764(&var_28, 0xf);
    return sub_6650(&var_28);
}

int32_t sub_41e4(void* arg1)
{
    void var_28;
    0xff81b898(&var_28, arg1, 0x10);  /* "RY02_3.00.33_250117" */
    
    if (*(arg1 + 1) == 1)
    {
        int32_t r0_15 = sub_1694();
        int32_t r0_16 = sub_169a();
        int32_t r0_17 = sub_16a0();
        char var_26_1 = r0_15;
        uint8_t var_25_1 = r0_15 >> 8;
        uint8_t var_24_1 = r0_15 >> 0x10;  /* "RY02_3.00.33_250117" */
        char var_23_1 = r0_16;
        uint8_t var_22_1 = r0_16 >> 8;
        uint8_t var_21_1 = r0_16 >> 0x10;  /* "RY02_3.00.33_250117" */
        char var_20_1 = r0_17;
        uint8_t var_1f_1 = r0_17 >> 8;
        uint8_t var_1e_1 = r0_17 >> 0x10;  /* "RY02_3.00.33_250117" */
    }
    else
    {
        uint32_t r5_2 = *(arg1 + 3) << 8 | *(arg1 + 2) | *(arg1 + 4) << 0x10;
            /* "RY02_3.00.33_250117" */
        uint32_t r1_5 = *(arg1 + 6) << 8 | *(arg1 + 5) | *(arg1 + 7) << 0x10;
            /* "RY02_3.00.33_250117" */
        sub_16a6(r5_2, r1_5, *(arg1 + 9) << 8 | *(arg1 + 8) | *(arg1 + 0xa) << 0x10);
            /* "RY02_3.00.33_250117" */
        int32_t r0_14;
        
        if (sub_9178() < r5_2)
            r0_14 = 0;
        else
            r0_14 = 1;
        
        sub_9350(r0_14);
        int32_t r0_20;
        
        if (sub_932e() < r1_5)
            r0_20 = 0;
        else
            r0_20 = 1;
        
        sub_93b0(r0_20);
        sub_16ca(*(arg1 + 0xc) << 8 | *(arg1 + 0xb), *(arg1 + 0xe) << 8 | *(arg1 + 0xd));
    }
    
    char var_19 = sub_3764(&var_28, 0xf);
    return sub_6650(&var_28);
}

uint32_t sub_42b0()
{
    sub_be1e();
    void var_1c;
    return sub_3d12(0xd, &var_1c, 0xe);
}

uint32_t sub_42de()
{
    return sub_42b0();
}

char* sub_42ea(char* arg1)
{
    char* result = arg1;
    uint32_t r1 = arg1[1];
    
    if (r1 == 1)
    {
        result = 1;
        sub_3d12(*arg1, &result, 7);
        return result;
    }
    
    if (r1 == 2)
        sub_3d60(*arg1, 0);
    
    return result;
}

void* sub_431e(void* arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    void* result = arg1;
    char r5 = *(arg1 + 1);
    uint32_t r4 = *(arg1 + 2);
    result = &data_0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    
    if (*(arg1 + 1) == 1)
    {
        result = 0x36;  /* "3.0" */
        *result[1] = r5;
        *result[2] = sub_1602();
    }
    else
    {
        int32_t r0_1;
        
        r0_1 = r4 == 1 ? 1 : 0;
        
        sub_160e(r0_1);
        result = 0x36;  /* "3.0" */
        *result[1] = r5;
        *result[2] = r4;
    }
    
    *var_14[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

void* sub_4370(void* arg1)
{
    int32_t r3;
    int32_t var_c = r3;
    void* result = arg1;
    0xff81b898(&result, arg1, 0x10);  /* "RY02_3.00.33_250117" */
    result = 0x2c;
    *result[1] = *(arg1 + 1);
    uint32_t r0_2 = *(arg1 + 1);
    
    if (r0_2 == 1)
        *result[2] = sub_15f6();
    else if (r0_2 == 2)
    {
        sub_15d4(*(arg1 + 2));
        *result[2] = *(arg1 + 2);
    }
    
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

int32_t sub_43ba(void* arg1)
{
    char r6 = *(arg1 + 1);
    uint32_t r5 = *(arg1 + 2);
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    
    if (*(arg1 + 1) == 1)
    {
        var_28 = 0x16;  /* ".00.33_250117" */
        *var_28[1] = r6;
        char r0_4;
        
        if (!sub_15ac())
            r0_4 = 2;
        else
            r0_4 = 1;
        
        *var_28[2] = r0_4;
        *var_28[3] = *0x2086f0;
        var_24 = 5;
    }
    else
    {
        uint32_t r0_1;
        
        r0_1 = r5 == 1 ? 1 : 0;
        
        sub_15b8(r0_1);
        uint32_t r0_2 = *(arg1 + 3);
        *0x2086f0 = r0_2;
        
        if (r0_2 == 0xff || !r0_2)
            *0x2086f0 = 0x1e;  /* "50117" */
        
        var_28 = 0x16;  /* ".00.33_250117" */
        *var_28[1] = r6;
        *var_28[2] = r5;
    }
    
    *var_1c[3] = sub_3764(&var_28, 0xf);
    return sub_6650(&var_28);
}

uint32_t sub_4438(void* arg1, int32_t arg2, int32_t arg3)
{
    if (*0x20991e < 0x3c)
    {
        *0x209916 = 0;
        uint32_t r0_1 = *0x20991c;
        int32_t r0_2;
        
        if (r0_1 == 3)
            r0_2 = 0x20;  /* "117" */
        else if (r0_1 == 9)
            r0_2 = 0x400;
        else if (r0_1 == 0xa)
            r0_2 = 0x100;
        else if (r0_1 == 8)
            r0_2 = 0x200;
        else
            r0_2 = 1;
        
        sub_b540(r0_2, arg2, arg3);
        arg2 = 0xff7ef70c(0x209920);
        uint32_t result = *0x20991e;
        
        if (result < 0x32)  /* "02_V3.0" */
            return result;
    }
    
    int32_t var_28 = 0;
    int32_t var_24_1 = 0;
    int32_t var_20_1 = 0;
    int32_t var_1c_1 = 0;
    uint32_t r0_3 = *(arg1 + 1);
    *0x20991c = r0_3;
    char r0_4;
    
    if (r0_3 == 3)
    {
        sub_b540(0x20, arg2, arg3);  /* "117" */
        r0_4 = sub_b810();
    }
    else if (r0_3 == 9)
    {
        sub_b540(0x400, arg2, arg3);
        r0_4 = sub_c1dc();
    }
    else if (r0_3 == 0xa)
    {
        sub_b540(0x100, arg2, arg3);
        r0_4 = sub_c060();
    }
    else if (r0_3 == 8)
    {
        sub_b540(0x200, arg2, arg3);
        r0_4 = sub_bec0();
    }
    else
    {
        sub_b540(1, arg2, arg3);
        r0_4 = sub_cd12();
    }
    
    *var_28[2] = r0_4;
    var_28 = 0x6a;
    *var_28[1] = *(arg1 + 1);
    *var_1c_1[3] = sub_3764(&var_28, 0xf);
    return sub_6650(&var_28);
}

int32_t sub_4510(void* arg1)
{
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    
    if (!sub_281e())
    {
        *0x209916 = 0;
        uint32_t r1_1 = *(arg1 + 1);
        *0x20991c = r1_1;
        uint32_t r0_8 = *(arg1 + 2);
        *0x20991d = r0_8;
        int32_t r1_2;
        int32_t r2;
        
        if (r1_1 != 6)
        {
            *0x20991e = 0;
            *0x209917 = 0;
            0xff7ef70c(0x209920);
            r1_2 = 0xff7ef6e4(0x209920, 0x1f4);
            uint32_t r0_9 = *0x20991c;
            
            if (r0_9 == 3)
                sub_b55a(0x20, r1_2, r2);  /* "117" */
            else if (r0_9 == 9)
                sub_b55a(0x400, sub_c1e2(), r2);
            else if (r0_9 == 0xa)
                sub_b55a(0x100, sub_c0de(), r2);
            else if (r0_9 == 8)
                sub_b55a(0x200, sub_bf3e(), r2);
            else
                sub_b55a(1, r1_2, r2);
        }
        else
        {
            int32_t entry_r2;
            
            if (r0_8 == 1)
            {
                *0x20991e = 0;
                sub_b55a(1, r1_1, entry_r2);
                0xff7ef70c(0x209920);
                0xff7ef6e4(0x209920, 0x1f4);
            }
            else if (r0_8 == 2)
                0xff7ef70c(0x209920);
            else if (r0_8 == 3)
            {
                0xff7ef70c(0x209920);
                r1_2 = 0xff7ef6e4(0x209920, 0x1f4);
                sub_b55a(1, r1_2, r2);
            }
            else if (r0_8 == 4)
            {
                sub_b540(1, r1_1, entry_r2);
                *0x20991e = 0;
                0xff7ef70c(0x209920);
            }
        }
        var_28 = 0x69;
        *var_28[1] = *0x20991c;
        *var_28[2] = 0;
    }
    else
    {
        var_28 = 0x69;
        *var_28[1] = *(arg1 + 1);
        char r0_3;
        
        if (*(arg1 + 1) == 6)
            r0_3 = 2;
        else
            r0_3 = 1;
        
        *var_28[2] = r0_3;
    }
    
    *var_1c[3] = sub_3764(&var_28, 0xf);
    return sub_6650(&var_28);
}

void* sub_461c(void* arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    void* result = arg1;
    sub_15a6(*(arg1 + 1));
    result = &data_0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 4;
    *var_c[3] = 4;
    sub_6650(&result);
    sub_15a0() == 1 && !sub_53f0();
    uint32_t r0_6;
    void* r1_1;
    
    if (sub_15a0() == 1)
    {
        r1_1 = arg1 + 3;
        r0_6 = 0;
    }
    else
    {
        r0_6 = *(arg1 + 2);
        r1_1 = arg1 + 3;
    }
    
    sub_7394(r0_6, r1_1);
    return result;
}

void* sub_466e(void* arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    void* result = arg1;
    result = &data_0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    result = 0x19;  /* ".33_250117" */
    *result[1] = *(arg1 + 1);
    char r0_4;
    
    if (*(arg1 + 1) == 1)
    {
        *result[2] = 0;
        r0_4 = sub_1704();
    }
    else
    {
        if (*(arg1 + 3) > 2)
            *(arg1 + 3) = 0;
        
        sub_1710(*(arg1 + 3));
        *result[2] = 0;
        r0_4 = *(arg1 + 3);
    }
    
    *result[3] = r0_4;
    *var_14[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

uint32_t sub_46c0(void* arg1)
{
    uint32_t result = sub_281e();
    
    if (!result)
    {
        result = *0x208850;
        
        if (result == 3)
        {
            uint32_t r0 = *(arg1 + 1);
            
            if (r0 == 4 || r0 == 5)
                sub_a97e(1);
            else if (r0 == 6)
                sub_a97e(0);
            
            return sub_3d60(2, 0);
        }
    }
    
    return result;
}

int32_t sub_46f8(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x3c;
    *result[2] |= 4;
    *result[1] = 0;
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

uint32_t sub_472a(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ r5, uint32_t arg5 @ r6, int32_t arg6 @ r7)
{
    int32_t lr;
    int32_t var_4 = lr;
    uint32_t var_8 = arg5;
    int32_t var_c = arg4;
    int32_t r4;
    int32_t var_10 = r4;
    int32_t* sp_1 = &var_10;
    char* r4_1 = arg1;
    uint32_t result = *arg1;
    bool cond:0 = result > 0x81;
    bool cond:11 = result == 0x81;
    
    while (true)
    {
        if (!cond:11)
        {
            bool z_1;
            
            if (cond:0)
            {
                if (result == 0xbf)
                    goto label_477e;
                
                if (result > 0xbf)
                {
                    if (result == 0xc8)
                    {
                        result = r4_1[1];
                        
                        if (result == 1)
                            *0x208854 = 1;
                        else
                            *0x208854 = 0;
                        
                        break;
                    }
                    
                    if (result <= 0xc8)
                    {
                        int32_t r1_6;
                        int32_t r3_7;
                        result = sub_13f18(result, 0x208850, result - 0xc0, result - 0xc0);
                        data_0 = r3_7;
                    label_477e:
                        *sp_1;
                        sp_1[1];
                        sp_1[2];
                        return result;
                    }
                    
                    if (result == 0xf0)
                        goto label_477e;
                    
                    if (result <= 0xf0)
                    {
                        if (result == 0xc9 || result == 0xcc)
                            goto label_477e;
                        
                        if (result == 0xcd)
                        {
                            result = sub_406e(r4_1);
                            break;
                        }
                        
                        if (result == 0xce)
                        {
                            result = sub_3fda(r4_1);
                            break;
                        }
                        
                        result = sub_3fb6(result);
                        break;
                    }
                    
                    if (result == 0xf1)
                        goto label_477e;
                    
                    if (result == 0xfe)
                    {
                        result = sub_8af0(r4_1[2] << 8 | r4_1[1]);
                        break;
                    }
                    
                    if (result != 0xff)
                    {
                        result = sub_3fb6(result);
                        break;
                    }
                }
                else
                {
                    bool c_1 = result >= 0x90;
                    bool v_1 = result - 0x90;
                    bool n_1 = result - 0x90 < 0;
                    z_1 = result == 0x90;
                    int32_t r1_3;
                    int32_t r2;
                    uint32_t* r3_3;
                    result = sub_13f18(result, result - 0x90, arg3, result - 0x90);
                    r4_1 = sp_1[0x21];  /* "17" */
                    
                    if (!arg6)
                    {
                        result = sub_3fb6(result);
                        break;
                    }
                    
                    if (arg6)
                        break;
                    
                    *r3_3 = result;
                    r3_3[1] = r1_3;
                    r3_3[2] = r2;
                    r3_3[3] = r3_3;
                    r3_3[4] = r4_1;
                    r3_3[5] = arg4;
                    r3_3[6] = arg6;
                    result = r3_3[7];
                    r3_3[9];
                    r3_3[0xa];
                    r3_3[0xb];
                    
                    if (c_1)
                    {
                        if (!v_1)
                        {
                            result = sub_8af0(result);
                            break;
                        }
                        
                        if (n_1 != v_1)
                            goto label_47b4;
                        
                        goto label_477e;
                    }
                    
                label_4790:
                    
                    if (result == 0x36)  /* "3.0" */
                    {
                        result = sub_431e(r4_1);
                        break;
                    }
                    
                    if (result != 0x37 && result != 0x38)  /* ".0" */  /* "0" */
                    {
                        result = sub_3fb6(result);
                        break;
                    }
                }
            }
            else
            {
                if (result == 0x2b)
                {
                    result = sub_3e2e(r4_1);
                    break;
                }
                
                if (result <= 0x2b)
                {
                    if (result == 0x10)  /* "RY02_3.00.33_250117" */
                    {
                        result = sub_3da0();
                        break;
                    }
                    
                    if (result <= 0x10)  /* "RY02_3.00.33_250117" */
                    {
                        *(sub_13f18(result, arg2, arg3, result) + 0x30) = arg6;  /* "RY02_V3.0" */
                        void* r0 = sp_1[0x14];  /* "_3.00.33_250117" */
                        *(sp_1 - 4) = arg6;
                        *(sp_1 - 8) = arg4;
                        *(sp_1 - 0xc) = r4_1;
                        sp_1 -= 0xc;
                        *(r0 + 0x34) = arg5;  /* "_V3.0" */
                        arg2 = *r4_1;
                        arg3 = *(r4_1 + 4);
                        arg6 = *(r4_1 + 8);
                        r4_1 = &r4_1[0xc];
                        result = arg3 >> 0x13;  /* "2_3.00.33_250117" */
                        arg5 = result << 2;
                    }
                    
                    if (result == 0x19)  /* ".33_250117" */
                    {
                        result = sub_466e(r4_1);
                        break;
                    }
                    
                    if (result > 0x19)  /* ".33_250117" */
                    {
                        if (result == 0x21)  /* "17" */
                        {
                            result = sub_41e4(r4_1);
                            break;
                        }
                        
                        if (result == 0x25 || result == 0x26)
                            goto label_477e;
                        
                        result = sub_3fb6(result);
                        break;
                    }
                    
                    if (result == 0x14)  /* "_3.00.33_250117" */
                        goto label_477e;
                    
                    cond:0 = result > 0x15;  /* "3.00.33_250117" */
                    cond:11 = result == 0x15;  /* "3.00.33_250117" */
                    
                    if (result == 0x15)  /* "3.00.33_250117" */
                        continue;
                    else
                    {
                        if (result == 0x16)  /* ".00.33_250117" */
                        {
                            result = sub_43ba(r4_1);
                            break;
                        }
                        
                        if (result != 0x18)  /* "0.33_250117" */
                        {
                            result = sub_3fb6(result);
                            break;
                        }
                    }
                }
                else if (result != 0x43)
                {
                    if (result > 0x43)
                    {
                        if (result == 0x6a)
                        {
                            result = sub_4438(r4_1, arg2, arg3);
                            break;
                        }
                        
                        if (result <= 0x6a)
                        {
                            z_1 = result == 0x48;
                        label_47b4:
                            
                            if (z_1)
                            {
                                result = sub_416c();
                                break;
                            }
                            
                            if (result == 0x50)
                            {
                                result = sub_357e(0x14, 1, 1, 0x19);
                                    /* "_3.00.33_250117" */  /* ".33_250117" */
                                break;
                            }
                            
                            if (result == 0x61)
                            {
                                result = sub_4130(r4_1);
                                break;
                            }
                            
                            if (result == 0x69)
                            {
                                result = sub_4510(r4_1);
                                break;
                            }
                            
                            result = sub_3fb6(result);
                            break;
                        }
                        
                        if (result != 0x72 && result != 0x77 && result != 0x7a)
                        {
                            result = sub_3fb6(result);
                            break;
                        }
                    }
                    else if (result != 0x39)
                    {
                        if (result <= 0x39)
                        {
                            if (result != 0x2c)
                                goto label_4790;
                            
                            result = sub_4370(r4_1);
                            break;
                        }
                        
                        if (result != 0x3a && result != 0x3b)
                        {
                            if (result == 0x3c)
                            {
                                result = sub_46f8(r4_1);
                                break;
                            }
                            
                            result = sub_3fb6(result);
                            break;
                        }
                    }
                }
            }
        }
        
        result = sub_40c0(r4_1);
        break;
    }
    
    *sp_1;
    sp_1[1];
    sp_1[2];
    return result;
}

uint32_t sub_49b0(void* arg1 @ r4, int32_t arg2, int32_t arg3, int32_t arg4)
{
    uint32_t r0_1 = *(arg1 + 2);
    int32_t entry_r1;
    int32_t entry_r2;
    int32_t entry_r3;
    
    if (r0_1 == 1)
        sub_5b9a(r0_1, entry_r1, entry_r2, entry_r3);
    uint32_t result = *(arg1 + 1);
    int32_t r0;
    
    if (result == 1)
    {
        sub_15a6(2);
        r0 = 4;
    }
    else
    {
        if (result != 2)
            return result;
        
        r0 = 0;
    }
    
    return sub_729a(r0, 0);
}

uint32_t sub_49e8(int32_t arg1, void* arg2, void* arg3 @ r4, char arg4 @ r5, char arg5 @ r6, int32_t arg6, int32_t arg7, int32_t arg8)
{
    uint32_t result = *(arg3 + 1);
    
    if (result == 1)
        *(arg2 + 3) = arg5;
    else
        *(arg2 + 3) = arg4;
    
    return result;
}

void sub_4a0e(int32_t arg1, int32_t arg2)
{
    uint32_t r2 = *0x208850;
    int32_t r5;
    int32_t r6;
    int32_t r7;
    
    if (r2 != 1 && arg2 == 0x10)  /* "RY02_3.00.33_250117" */
        /* tailcall */
        return sub_472a(arg1, arg2, r2, r5, r6, r7);
}

void sub_4a36(char arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t var_1c = arg2;
    char r5 = 1;
    
    for (int32_t i = 0; i < arg3; i += 0xd)
    {
        int32_t var_30 = 0;
        int32_t var_2c_1 = 0;
        int32_t var_28_1 = 0;
        int32_t var_24_1 = 0;
        var_30 = arg1;
        *var_30[1] = r5;
        int32_t r2 = arg3 - i;
        r5 += 1;
        
        if (r2 >= 0xd)
            r2 = 0xd;
        
        0xff81b898(&*var_30[2], arg2 + i, r2);
        *var_24_1[3] = sub_3764(&var_30, 0xf);
        sub_6650(&var_30);
    }
}

int32_t sub_4a88(void* arg1)
{
    int32_t var_50 = 0;
    int32_t var_4c = 0;
    int32_t var_48 = 0;
    int32_t var_44 = 0;
    void var_40;
    0xff81b968(&var_40, 0x34);  /* "_V3.0" */
    
    if (!sub_c000(*(arg1 + 1), &var_40))
    {
        var_50 = 0x39;
        *var_50[1] = 0xff;
        *var_44[3] = sub_3764(&var_50, 0xf);
        return sub_6650(&var_50);
    }
    
    var_50 = 0x39;
    *var_50[1] = 0;
    *var_50[2] = 5;
    *var_50[3] = 0x1e;  /* "50117" */
    *var_44[3] = sub_3764(&var_50, 0xf);
    sub_6650(&var_50);
    char var_3d = *(arg1 + 1);
    return sub_4a36(0x39, &var_3d, 0x31);  /* "Y02_V3.0" */
}

void* sub_4b02(void* arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    void* result = arg1;
    char r5 = *(arg1 + 1);
    uint32_t r4 = *(arg1 + 2);
    result = &data_0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    
    if (*(arg1 + 1) == 1)
    {
        result = 0x38;  /* "0" */
        *result[1] = r5;
        *result[2] = sub_16e6();
    }
    else
    {
        int32_t r0_1;
        
        r0_1 = r4 == 1 ? 1 : 0;
        
        sub_16f2(r0_1);
        result = 0x38;  /* "0" */
        *result[1] = r5;
        *result[2] = r4;
    }
    
    *var_14[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

int32_t sub_4b54(void* arg1)
{
    int32_t var_50 = 0;
    int32_t var_4c = 0;
    int32_t var_48 = 0;
    int32_t var_44 = 0;
    void var_40;
    0xff81b968(&var_40, 0x34);  /* "_V3.0" */
    
    if (!sub_be60(*(arg1 + 1), &var_40))
    {
        var_50 = 0x37;  /* ".0" */
        *var_50[1] = 0xff;
        *var_44[3] = sub_3764(&var_50, 0xf);
        return sub_6650(&var_50);
    }
    
    var_50 = 0x37;  /* ".0" */
    *var_50[1] = 0;
    *var_50[2] = 5;
    *var_50[3] = 0x1e;  /* "50117" */
    *var_44[3] = sub_3764(&var_50, 0xf);
    sub_6650(&var_50);
    char var_3d = *(arg1 + 1);
    return sub_4a36(0x37, &var_3d, 0x31);  /* "Y02_V3.0" */  /* ".0" */
}

int32_t sub_4bcc() __pure
{
    return;
}

int32_t sub_4bce() __pure
{
    return;
}

uint32_t sub_4bd0()
{
    uint32_t result = sub_15a0();
    
    if (result == 1)
    {
        result = sub_53f0();
        
        if (!result)
            result = 0x64;
    }
    
    return result;
}

void* sub_4bea(void* arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    void* result = arg1;
    result = &data_0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    0xff81b898(&result, arg1, 0x10);  /* "RY02_3.00.33_250117" */
    result = 0x3b;
    
    if (!*(arg1 + 2))
    {
        uint32_t r1_2 = *(arg1 + 1);
        uint32_t r0_2 = *0x20878c;
        
        if (r1_2 == 1)
            *result[3] = r0_2;
        else if (r1_2 == 2)
        {
            uint32_t r0_3 = *(arg1 + 3);
            
            if (!r0_2)
            {
                if (r0_3)
                    sub_7548();
            }
            else if (!r0_3)
                sub_7558();
            
            *0x20878c = *(arg1 + 3);
            sub_1598();
        }
        
        sub_4bd0();
    }
    
    *var_14[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

int32_t sub_4c6a() __pure
{
    return;
}

int32_t sub_4c6c(void* arg1)
{
    char var_38;
    0xff81b968(&var_38, 0x14);  /* "_3.00.33_250117" */
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    var_24 = 0x18;  /* "0.33_250117" */
    *var_24[1] = *(arg1 + 1);
    uint32_t r5 = *(arg1 + 1);
    
    if (r5 == 1)
    {
        char var_37;
        void* r1_2;
        char r2_1;
        
        if (var_38 != 0x4f || var_37 != 0x5f)
        {
            uint32_t r0_7 = 0xff81b854(&var_38) - 4;
            *var_24[2] = r0_7;
            void var_39;
            
            if (*(r0_7 + &var_39) == 0x5f)
                *var_24[2] = r0_7 - 1;
            
            r2_1 = *var_24[2];
            r1_2 = &var_38;
        }
        else
        {
            r2_1 = 0xff81b854(&var_38) - 7;
            *var_24[2] = r2_1;
            void var_36;
            r1_2 = &var_36;
        }
        
        0xff81b898(&*var_24[3], r1_2, r2_1);
    }
    else if (r5 == 2 || r5 == 0x12 || r5 == 0x22 || r5 == 0x32)  /* "02_3.00.33_250117" */  /* "7"
        */  /* "02_V3.0" */
    {
        uint32_t r1_3 = *(arg1 + 2);
        
        if (r1_3 <= 0xc)
            sub_5f72(arg1 + 3, r1_3, -0x5b - (r5 >> 4));
        else if (!*(arg1 + r1_3 - 9))
        {
            0xff81b898(0x208693, arg1 + 3, r1_3 - 0xc);
            sub_5f72(&data_0, 0, 0);
        }
        else
        {
            0xff81b964(0x208686, 0x18);  /* "0.33_250117" */
            *0x208686 = -0x5b - (r5 >> 4);
            0xff81b898(0x208687, arg1 + 3, 0xc);
        }
        
        *var_24[2] = *(arg1 + 2);
        0xff81b898(&*var_24[3], arg1 + 3, *(arg1 + 2));
    }
    
    *var_18[3] = sub_3764(&var_24, 0xf);
    return sub_6650(&var_24);
}

int32_t sub_4d62(int32_t arg1)
{
    int32_t result = 0xff81b7f8(0x208680, arg1, 6);
    
    if (!result)
        return result;
    
    0xff81b898(0x208680, arg1, 6);
    *0x2086c0 = 1;
    sub_31aa();
    sub_13eb4(arg1);
    return 0xff7dc2ec(1, 0xd0);
}

uint32_t sub_4d9e(void* arg1)
{
    uint32_t result = *(arg1 + 1);
    
    if (result == 0x66)
    {
        result = *(arg1 + 2);
        
        if (result == 0x66)
        {
            sub_1554();
            result = *(arg1 + 3);
            
            if (result == 0x66)
                return 0xff81b968(0x2087ac, 0xa4);
        }
    }
    
    return result;
}

int32_t sub_4dc2(void* arg1)
{
    uint32_t r0 = *(arg1 + 1);
    uint32_t r5 = *0x20b850;
    void* r0_1;
    int32_t entry_r2;
    int32_t r2;
    r0_1 = sub_13f18(r0, 0x20b850, entry_r2, r0);
    *(r0_1 + 0x60) = 0x20b90c;
    *(r0_1 + 0x64) = r2;
    0xff81b968(0x20b90c, 0x14);  /* "_3.00.33_250117" */
    
    if (r5)
        sub_7a3a();
    
    sub_7a3e(*(arg1 + 2));
    *0x20b90c = 1;
    0xff7ef6e4(0x209924, 0x3e8);
    sub_377e();
    uint32_t r0_3 = *(arg1 + 1);
    int32_t* r0_6;
    int32_t var_28;
    
    if (r0_3 == 1 || r0_3 == 6)
    {
        var_28 = 0x30;  /* "RY02_V3.0" */
        int32_t var_24_1 = 0x30;  /* "RY02_V3.0" */
        int32_t var_20_1 = 0x30;  /* "RY02_V3.0" */
        int32_t var_1c_1 = 0x30;  /* "RY02_V3.0" */
        var_28 = 0x77;
        *var_28[1] = *(arg1 + 1);
        int32_t r0_9 = *0x20b88c;
        *var_28[3] = r0_9;
        var_24_1 = r0_9 >> 8;
        *var_24_1[1] = r0_9 >> 0x10;  /* "RY02_3.00.33_250117" */
        *var_24_1[2] = r0_9 >> 0x18;  /* "0.33_250117" */
        *var_1c_1[3] = sub_3764(&var_28, 0xf);
        r0_6 = &var_28;
    }
    else
    {
        var_28 = 0x30;  /* "RY02_V3.0" */
        int32_t var_24 = 0x30;  /* "RY02_V3.0" */
        int32_t var_20 = 0x30;  /* "RY02_V3.0" */
        int32_t var_1c = 0x30;  /* "RY02_V3.0" */
        var_28 = 0x77;
        *var_28[1] = 0x30;  /* "RY02_V3.0" */
        __builtin_strncpy(&*var_28[3], "0000", 4);
        *var_1c[3] = sub_3764(&var_28, 0xf);
        r0_6 = &var_28;
    }
    return sub_6650(r0_6);
}

int32_t sub_4e2a(void* arg1 @ r4, int32_t arg2 @ r5, void* arg3 @ r6, int32_t arg4 @ r7, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    uint32_t r0_1;
    
    if (arg2)
    {
        *(arg3 + 1) = 1;
        sub_7a6e();
        *(arg3 + 1) = arg4;
        r0_1 = *(arg1 + 1);
    }
    
    int32_t* r0_4;
    int32_t arg_0;
    int32_t arg_4;
    int32_t arg_8;
    int32_t arg_c;
    
    if (arg2 && (r0_1 == 1 || r0_1 == 6))
    {
        arg_0 = arg4;
        arg_4 = arg4;
        arg_8 = arg4;
        arg_c = arg4;
        arg_0 = 0x77;
        *arg_0[1] = *(arg1 + 1);
        int32_t r0_7 = *0x20b88c;
        *arg_0[3] = r0_7;
        arg_4 = r0_7 >> 8;
        *arg_4[1] = r0_7 >> 0x10;  /* "RY02_3.00.33_250117" */
        *arg_4[2] = r0_7 >> 0x18;  /* "0.33_250117" */
        *arg_c[3] = sub_3764(&arg_0, 0xf);
        r0_4 = &arg_0;
    }
    else
    {
        arg_0 = arg4;
        arg_4 = arg4;
        arg_8 = arg4;
        arg_c = arg4;
        arg_0 = 0x77;
        *arg_0[1] = arg4;
        *arg_0[3] = arg4;
        arg_4 = arg4;
        *arg_4[1] = arg4;
        *arg_4[2] = arg4;
        *arg_c[3] = sub_3764(&arg_0, 0xf);
        r0_4 = &arg_0;
    }
    return sub_6650(r0_4);
}

int32_t sub_4f10(void* arg1)
{
    uint32_t r2_2 = *(arg1 + 3) << 0x10 | *(arg1 + 4) << 0x18 | *(arg1 + 2) << 8 | *(arg1 + 1);
        /* "RY02_3.00.33_250117" */  /* "0.33_250117" */
    int32_t var_140;
    
    if (!r2_2)
        var_140 = 0;
    else
        sub_18ac(r2_2, &var_140);
    
    int32_t var_150;
    uint32_t var_138;
    
    if (!sub_ba4e(var_140, &var_138))
    {
        var_150 = 0;
        int32_t var_14c_2 = 0;
        int32_t var_148_2 = 0;
        int32_t var_144_2 = 0;
        var_150 = 0x15;  /* "3.00.33_250117" */
        *var_150[1] = 0xff;
        *var_144_2[3] = 0x14;  /* "_3.00.33_250117" */
        return sub_6650(&var_150);
    }
    
    var_138 = r2_2;
    var_150 = 0;
    int32_t var_14c = 0;
    int32_t var_148 = 0;
    int32_t var_144 = 0;
    var_150 = 0x15;  /* "3.00.33_250117" */
    *var_150[1] = 0;
    *var_150[2] = 0x18;  /* "0.33_250117" */
    *var_150[3] = 5;
    char r5_1 = 1;
    *var_144[3] = sub_3764(&var_150, 0xf);
    sub_6650(&var_150);
    int32_t result;
    
    for (int32_t i = 0; i < 0x124; i += 0xd)
    {
        var_150 = 0;
        int32_t var_14c_1 = 0;
        int32_t var_148_1 = 0;
        int32_t var_144_1 = 0;
        var_150 = 0x15;  /* "3.00.33_250117" */
        *var_150[1] = r5_1;
        int32_t r2_3 = 0x124 - i;
        r5_1 += 1;
        
        if (r2_3 >= 0xd)
            r2_3 = 0xd;
        
        0xff81b898(&*var_150[2], &var_138 + i, r2_3);
        *var_144_1[3] = sub_3764(&var_150, 0xf);
        result = sub_6650(&var_150);
    }
    
    return result;
}

int32_t sub_4fe2(void* arg1)
{
    int32_t var_1b0 = 0;
    int32_t var_1ac = 0;
    int32_t var_1a8 = 0;
    int32_t var_1a4 = 0;
    void* r0_3 = sub_8fcc(sub_216a() - *(arg1 + 1));
    uint32_t var_1a0;
    
    if (!r0_3)
        0xff81b968(&var_1a0, 0x124, 0x124);
    else
        0xff7dc2f8(&var_1a0, r0_3, 0x124);
    
    if (!*(arg1 + 1))
    {
        var_1a0 = sub_216a();
        int32_t r0_10 = sub_12b2a(sub_217a(), 0x3c);
        
        if (*(arg1 + 4) > r0_10)
            *(arg1 + 4) = r0_10;
        
        sub_8d26(&(&var_1a0)[r0_10 * 3 + 1]);
    }
    else
        *(arg1 + 4) = 0x17;  /* "00.33_250117" */
    
    if (!var_1a0)
    {
        var_1b0 = 0x43;
        *var_1b0[1] = 0xff;
        0xff81b964(&*var_1b0[2], 0xd);
        *var_1a4[3] = sub_3764(&var_1b0, 0xf);
        return sub_6650(&var_1b0);
    }
    
    uint32_t r4_1 = 0;
    uint32_t i = *(arg1 + 3);
    char var_78[0x64];
    
    for (uint32_t r2_1 = *(arg1 + 4); r2_1 >= i; i = i + 1)
    {
        void* r1_4 = &(&var_1a0)[i * 3];
        uint32_t r3_1 = *(r1_4 + 4);
        
        if (!r3_1)
        {
            if (*(r1_4 + 0xa))
            {
                var_78[r4_1] = i;
                r4_1 = r4_1 + 1;
            }
        }
        else if (r3_1 != 0xffff)
        {
            var_78[r4_1] = i;
            r4_1 = r4_1 + 1;
        }
    }
    
    var_1b0 = 0x43;
    char r0_15;
    
    r0_15 = !r4_1 ? -1 : -0x10;
    
    *var_1b0[1] = r0_15;
    *var_1b0[2] = r4_1;
    
    if (*(arg1 + 5) == 1)
        *var_1b0[3] = 1;
    
    *var_1a4[3] = sub_3764(&var_1b0, 0xf);
    char result = sub_6650(&var_1b0);
    
    if (r4_1)
    {
        char var_7c;
        sub_21be(var_1a0, &var_7c);
        var_1b0 = 0x43;
        *var_1b0[1] = sub_684e(var_7c);
        char var_7b;
        *var_1b0[2] = sub_684e(var_7b);
        char var_7a;
        result = sub_684e(var_7a);
        *var_1b0[3] = result;
        *var_1ac[2] = r4_1;
        
        for (uint32_t i_1 = 0; i_1 < r4_1; i_1 = i_1 + 1)
        {
            uint32_t r0_27 = var_78[i_1];
            var_1ac = r0_27 << 2;
            *var_1ac[1] = i_1;
            void* r2_2 = &(&var_1a0)[r0_27 * 3];
            uint32_t r0_29 = *(r2_2 + 0xa);
            
            if (!*(arg1 + 5))
                r0_29 = 0xa * r0_29;
            
            var_1a8 = r0_29 >> 8;
            *var_1ac[3] = r0_29;
            uint32_t r0_31 = *(r2_2 + 4);
            *var_1a8[2] = r0_31 >> 8;
            *var_1a8[1] = r0_31;
            uint32_t r0_32 = *(r2_2 + 8);
            var_1a4 = r0_32 >> 8;
            *var_1a8[3] = r0_32;
            *var_1a4[3] = sub_3764(&var_1b0, 0xf);
            result = sub_6650(&var_1b0);
        }
    }
    
    return result;
}

int32_t sub_5170(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t var_10 = arg3;
    int32_t var_14 = arg2;
    int32_t result = arg1;
    uint32_t i;
    
    do
    {
        uint32_t r0_7 = *0x20992c;
        
        if (r0_7 == *0x20992e)
            break;
        
        uint32_t r1 = *((r0_7 << 4) + 0x209930);
        
        if (r1 == 0x3a)
        {
            result = 0;
            var_14 = 0;
            var_10 = 0;
            var_c = 0;
            result = 0x3a;
        }
        else if (r1 > 0x3a)
        {
            if (r1 != 0x7a)
            {
                if (r1 > 0x7a)
                {
                    if (r1 == 0x81)
                        arg3 = sub_4d62((r0_7 << 4) + 0x209931);
                    else if (r1 == 0xa1)
                        arg3 = sub_1d32((r0_7 << 4) + 0x209930, r1, arg3);
                    else if (r1 == 0xc6)
                    {
                        if (*((r0_7 << 4) + 0x209931) == 0x6c)
                        {
                            sub_1554();
                            sub_31e6();
                            sub_3244();
                            arg3 = sub_6bcc(0x7d0);  /* "17 10:58:10 2022" */
                        }
                        else
                            arg3 = sub_3d60(0xc6, 1);
                    }
                    else if (r1 == 0xff)
                        arg3 = sub_4d9e((r0_7 << 4) + 0x209930);
                }
                else if (r1 == 0x3b)
                    arg3 = sub_4bea((r0_7 << 4) + 0x209930);
                else if (r1 == 0x43)
                    arg3 = sub_4fe2((r0_7 << 4) + 0x209930);
                else if (r1 != 0x72 && r1 == 0x77)
                    arg3 = sub_4dc2((r0_7 << 4) + 0x209930);
            }
        }
        else if (r1 == 0x15)  /* "3.00.33_250117" */
            arg3 = sub_4f10((r0_7 << 4) + 0x209930);
        else
        {
            if (r1 == 0x18)  /* "0.33_250117" */
                arg3 = sub_4c6c((r0_7 << 4) + 0x209930);
            else if (r1 == 0x37)  /* ".0" */
                arg3 = sub_4b54((r0_7 << 4) + 0x209930);
            else if (r1 == 0x38)  /* "0" */
                arg3 = sub_4b02((r0_7 << 4) + 0x209930);
            else if (r1 == 0x39)
                arg3 = sub_4a88((r0_7 << 4) + 0x209930);
            
            if (r1 == 1)
                arg3 = sub_3e54((r0_7 << 4) + 0x209930);
            else if (r1 == 8)
            {
                uint32_t r0_4 = *((r0_7 << 4) + 0x209931);
                
                if (!r0_4)
                    arg3 = sub_1530();
                else if (r0_4 == 1)
                    arg3 = sub_14ba();
            }
        }
        
        uint32_t r0_6 = *0x20992c;
        int16_t i_1;
        
        i_1 = r0_6 < 9 ? r0_6 + 1 : 0;
        
        i = i_1;
        *0x20992c = i;
    } while (i != *0x20992e);
    return result;
}

int32_t sub_529c(int32_t arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    result = 0x73;
    *result[1] = arg1;
    
    if (arg1 == 0x12)  /* "02_3.00.33_250117" */
    {
        int32_t r0 = sub_9178();
        int32_t r0_1 = sub_932e();
        int32_t r0_2 = sub_9336();
        *result[2] = r0 >> 0x10;  /* "RY02_3.00.33_250117" */
        *result[3] = r0 >> 8;
        var_1c = r0;
        *var_1c[1] = r0_1 >> 0x10;  /* "RY02_3.00.33_250117" */
        *var_1c[2] = r0_1 >> 8;
        *var_1c[3] = r0_1;
        var_18 = r0_2 >> 0x10;  /* "RY02_3.00.33_250117" */
        *var_18[1] = r0_2 >> 8;
        *var_18[2] = r0_2;
    }
    else if (arg1 == 0xc)
    {
        *result[2] = sub_26ac();
        
        if (sub_281e())
            *result[3] = 1;
    }
    else if (arg1 != 0x25 && arg1 != 0x27)
    {
        if (arg1 == 0x28)
        {
            *result[2] = *0x209914;
            *result[3] = *0x209915;
        }
        else if (arg1 == 0x29)
            *result[2] = 1;
    }
    
    *var_14[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

int32_t sub_5336(char arg1, char arg2)
{
    *0x209914 = arg1;
    *0x209915 = arg2;
    /* tailcall */
    return sub_529c(0x28);
}

void sub_5340(int32_t arg1, int32_t* arg2)
{
    if (arg1 && arg1 != 0xffffffff)
        *arg2 = arg1 + 0x386d4380;
}

int32_t sub_5350() __pure
{
    return;
}

int32_t sub_5352() __pure
{
    return;
}

int32_t sub_5354() __pure
{
    return;
}

int32_t sub_5356(int32_t arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    int32_t result = arg1;
    result = 0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 2;
    *result[1] = arg1;
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

char* sub_537e(char* arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    char* result = arg1;
    result = &data_0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    *result[1] = *arg1;
    *result[2] = 0xaa;
    *result[3] = arg1[1];
    var_14 = 0xaa;
    *var_14[1] = arg1[2];
    *var_14[2] = 0xaa;
    *var_14[3] = arg1[3];
    var_10 = 0xaa;
    *var_10[1] = arg1[4];
    *var_10[2] = 0xaa;
    *var_10[3] = arg1[5];
    var_c = 0xaa;
    *var_c[1] = arg1[6];
    *var_c[2] = 0xaa;
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

uint32_t sub_53cc(char* arg1)
{
    sub_b658(0x20991b);
    return sub_3d12(*arg1, 0x20991b, 1);
}

uint32_t sub_53f0()
{
    return *0x2099d1;
}

uint32_t sub_53f6()
{
    return sub_729a(0, 0x2710);
}

int32_t sub_5402(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_20 = arg2;
    var_20 = arg3;
    0xff7e1af8(0x23103002, 0x88006f8, 2, arg1, var_20, arg3, arg4);
    int32_t r1_1;
    
    if (!arg2)
        r1_1 = 0x8800730;
    else
    {
        if (arg2 != 1)
            return 0xff7e1af8(0x23103000, 0x8800844, 1, arg2);
        
        if (!arg3)
        {
            int32_t r4_3 = *0x2099e0;
            *0x2099dc = (*0x2099dc & 0xfffffffb) | 4;
            *0x2099e0 = r4_3;
            *0x2099d1 = 1;
            int32_t r2_2;
            int32_t r3_5;
            r2_2 = 0xff7e1af8(0x23103002, 0x880076c, 0);
            
            if (sub_76b6(arg1, &var_20, r2_2, r3_5))
                0xff7e1af8(0x23103002, 0x88007b8, 1, 0xff7e1e2e(0x23300000, &var_20));
            
            return sub_3704(0x2099d8, 0x8293a7, 0x7d0, 0);  /* "17 10:58:10 2022" */
        }
        
        int32_t r6_1 = *0x2099e0;
        *0x2099dc &= 0xfffffffb;
        *0x2099e0 = r6_1;
        *0x2099d1 = 0;
        sub_11b0a(*0x2099ee, 0xfffffffb, 0x2099d0, 0);
        r1_1 = 0x88007f8;
    }
    
    return 0xff7e1af8(0x23103002, r1_1, 0);
}

void sub_54b6(uint32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    if (!arg2)
    {
        int16_t var_18;
        int16_t var_14;
        int16_t var_10;
        sub_11a78(0x274, &var_18, arg1, 
            sub_11a78(0x273, &var_14, arg1, sub_11a78(0x272, &var_10, arg1, arg4)));
        0xff7e1af8(0x23103002, 0x8800878, 3, var_10, var_14, var_18);
        sub_5b12();
        sub_74dc();
    }
    else if (arg2 == 1)
    {
        0xff7e1af8(0x23103000, 0x88008f8, 1, arg3);
        sub_5b12();
        sub_74dc();
    }
    else if (arg2 == 2)
        0xff7e1af8(0x23103002, 0x8800938, 0);
}

int32_t sub_553a(int32_t arg1, char arg2)
{
    *0x2099f5 = arg2 - 3;
    *0x2099f6 = 1;
    return 0x2099dc;
}

uint32_t sub_5546(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return sub_119bc(arg1, arg2, arg3, arg4);
}

uint32_t sub_554e()
{
    uint32_t r4 = *0x20844c + 0xc;
    char var_20 = 0;
    char var_1c = 0;
    int16_t var_18 = 0x640;
    int16_t var_14 = 0x640;
    char var_28[0x8];
    int32_t entry_r2;
    int32_t entry_r3;
    sub_114b6(0x200, &var_28, entry_r2, entry_r3);
    uint32_t r3_1;
    
    for (int32_t i = 0; i < 6; )
    {
        int32_t r6_1 = r4 + i;
        r3_1 = var_28[5 - i];
        i += 1;
        *(0x208449 + r6_1) = r3_1;
    }
    
    int32_t r1_1;
    int32_t r2_4;
    int32_t r3_5;
    r1_1 = sub_11978(0x269, 2, &var_14, 
        sub_11978(0x268, 2, &var_18, 
            sub_11978(0x267, 1, &var_1c, sub_11978(0x263, 1, &var_20, r3_1))));
    uint32_t result = *0x208850;
    
    if (result == 1)
        return result;
    
    return sub_119aa(result, r1_1, r2_4, r3_5);
}

int32_t sub_55c6(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t var_1c = arg2;
    int32_t result;
    int32_t r3_1;
    result = 0xff7e1af8(0x23103002, 0x88005b8, 4, arg1, *0x2099d2, arg2, arg3);
    
    if (!arg2)
    {
        *0x2099f5 = 0x14;  /* "_3.00.33_250117" */
        *0x2099f6 = 0;
        *0x2099ed = 0;
        
        if (arg3 != 0x113 && arg3 != 0x116)
        {
            if (arg3 == 0x12a)
                sub_7420(arg3 - 0x12a);
            
            r3_1 = 0xff7e1af8(0x23103000, 0x880060c, 1, arg3);
        }
        
        int32_t r1 = *0x2099e0;
        *0x2099dc &= 0xfffffffb;
        *0x2099e0 = r1;
        int32_t r1_1 = *0x2099e0;
        *0x2099dc &= 0xfffffff7;
        *0x2099e0 = r1_1;
        int32_t r1_2 = *0x2099e0;
        *0x2099dc &= 0xffffffbf;
        *0x2099e0 = r1_2;
        int32_t r1_3 = *0x2099e0;
        int32_t r2 = 0xfffffeff;
        *0x2099dc &= 0xfffffeff;
        *0x2099e0 = r1_3;
        
        if (*0x2099d0)
        {
            *0x2099d0 = 0;
            r1_3 = sub_bce(1);
        }
        
        if (!(*0x2099ec << 0x1c >> 0x1e))  /* "_250117" */  /* "50117" */
            sub_554e();
        else
        {
            uint32_t r0_24 = *0x2099ec << 0x1c >> 0x1e;  /* "_250117" */  /* "50117" */
            
            if (r0_24 == 2)
                sub_119bc(r0_24, r1_3, r2, r3_1);
        }
        
        sub_74bc();
        sub_71ce();
        result = sub_6a3c();
    }
    else if (arg2 == 2)
    {
        *0x2099ed = arg2;
        char var_2c;
        void var_28;
        sub_11aae(arg1, &var_28, &var_2c, 
            sub_11a78(0x274, 0x2099f3, arg1, 
                sub_11a78(0x273, 0x2099f1, arg1, sub_11a78(0x272, 0x2099ef, arg1, r3_1))));
        int32_t r0_26 = 0xff7e1e2e(0x23300000, &var_28);
        0xff7e1af8(0x23103002, 0x8800648, 6, arg1, *0x2099f0 << 8 | *0x2099ef, 
            *0x2099f2 << 8 | *0x2099f1, *0x2099f4 << 8 | *0x2099f3, r0_26, var_2c);
        *0x2099ee = arg1;
        result = sub_71b4();
    }
    
    *0x2099d2 = arg2;
    return result;
}

uint8_t sub_572a(int32_t arg1, int32_t arg2)
{
    uint32_t r4 = arg1;
    uint32_t r0 = r4 << 0x1c;  /* "_250117" */
    uint32_t r6 = r0 >> 0x1e;  /* "50117" */
    uint32_t r7_1 = r4 << 0x1f >> 0x1f;  /* "0117" */
    0xff7e1af8(0x23103002, 0x88004d0, 3, r7_1, r6, arg2, r0, arg1, arg2);
    
    if (*0x2099ec << 0x1f >> 0x1f != r7_1 && r4 << 0x1f)  /* "0117" */
    {
        int32_t r1;
        int32_t r2_1;
        int32_t r3_1;
        r1 = 0xff7e1af8(0x23103002, 0x8800518, 0);
        
        if (!sub_1129e(1, r1, r2_1, r3_1))
            0xff7e1af8(0x23103002, 0x880052c, 0);
        
        sub_554e();
    }
    
    if (*0x2099ec << 0x1c >> 0x1e != r6)  /* "_250117" */  /* "50117" */
    {
        if (!(r0 >> 0x1e))  /* "50117" */
        {
            int32_t r1_1;
            
            r1_1 = r4 << 0x1e >= 0 ? 0x8800590 : 0x8800560;  /* "50117" */
            
            0xff7e1af8(0x23103002, r1_1, 0);
            
            if (*0x2099ed != 2)
                *0x2099ed;
        }
        else if (r6 == 2)
            0xff7e1af8(0x23103002, 0x88005a4, 0);
    }
    
    *0x2099ec = *0x2099ec >> 1 << 1 | r7_1;
    *0x2099ec = (*0x2099ec & 0xfd) | r4 << 0x1e >> 0x1f << 1;  /* "50117" */  /* "0117" */
    *0x2099ec = (*0x2099ec & 0xf3) | r6 << 2;
    *0x2099ec = (*0x2099ec & 0xcf) | r4 << 0x1a >> 0x1e << 4;  /* "33_250117" */  /* "50117" */
    uint8_t result = *0x2099ec << 0x1a >> 0x1a | r4 >> 6 << 6;  /* "33_250117" */
    *0x2099ec = result;
    return result;
}

uint8_t sub_581c(char arg1, char arg2, int32_t arg3 @ r4, void* arg4 @ r5, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    Coproc_GetOneWord(0xf, 7, 0xf, 0xf, 7);
    *(arg4 + 0x10) = arg1 | arg2;  /* "RY02_3.00.33_250117" */
    *(arg4 + 0x10) = (*(arg4 + 0x10) & 0xcf) | arg3 << 0x1a >> 0x1e << 4;
        /* "RY02_3.00.33_250117" */  /* "33_250117" */  /* "50117" */
    uint8_t result = *(arg4 + 0x10) << 0x1a >> 0x1a | arg3 >> 6 << 6;
        /* "RY02_3.00.33_250117" */  /* "33_250117" */
    *(arg4 + 0x10) = result;  /* "RY02_3.00.33_250117" */
    return result;
}

int32_t sub_5846(void* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18_1 = arg3;
    int32_t r5 = *(arg1 + 4);
    int32_t r1;
    int32_t r2;
    r1 = 0xff7e1af8(0x23103003, 0x880096c, 1, *(arg1 + 2), r5, arg4);
    uint32_t r0 = *(arg1 + 2);
    void* r1_1;
    void* r2_1;
    int32_t r3_2;
    r1_1 = sub_13f18(r0, r1, r2, r0);
    *(r1_1 + 0x50) = r3_2;
    *(r2_1 + 0x54) = r5;
    return sub_572a(0, *r5[2]);
}

int32_t sub_5882(char arg1, char arg2, int16_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    return sub_55c6(arg1, arg2, arg3);
}

int32_t sub_58b8(char arg1, char arg2, int16_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    int32_t entry_r3;
    return sub_54b6(arg1, arg2, arg3, entry_r3);
}

int32_t sub_58c6(char arg1, char arg2, int16_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    int32_t entry_r3;
    return sub_5402(arg1, arg2, arg3, entry_r3);
}

uint32_t sub_5944(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg2;
    int32_t var_10 = arg1;
    uint32_t result = var_10;
    
    if (!result)
        return sub_5846(&var_10, arg2, arg3, arg4);
    
    if (result == 0xe)
        return sub_5b4a(&var_10);
    
    if (result != 0x11 && result == 0x19)  /* "Y02_3.00.33_250117" */  /* ".33_250117" */
        return 0xff7eea3e();
    
    return result;
}

int32_t sub_5970(int32_t arg1, int32_t* arg2, uint32_t arg3, uint32_t arg4)
{
    if (arg1 == 1)
    {
        char* r0_2 = *arg2;
        0xff7e1af8(0x23103002, 0x8800a8c, 2, *r0_2, *(r0_2 + 2), arg4);
    }
    else if (arg1 == 0x14)  /* "_3.00.33_250117" */
    {
        char* r0_1 = *arg2;
        0xff7e1af8(0x23103002, 0x8800a38, 3, *r0_1, *(r0_1 + 2), *(r0_1 + 4));
    }
    else
        0xff7e1af8(0x23103000, 0x8800ac8, 1, arg1, arg3, arg4);
    
    return 0;
}

int32_t sub_59c0(int32_t arg1, char* arg2, int32_t arg3, uint32_t arg4)
{
    uint32_t var_10 = arg4;
    
    if (arg1 == 0xff)
    {
        uint32_t r2_2 = *arg2;
        
        if (!r2_2)
        {
            int32_t r0_2;
            int32_t r1;
            int32_t r2_3;
            r0_2 = 0xff7e1af8(0x23103002, 0x8800af4, 1, arg2[2]);
            /* tailcall */
            return sub_5ad6(0, r0_2, r1, r2_3);
        }
        
        if (r2_2 != 1)
            /* tailcall */
            return sub_5ad6(0, 0x23103002, arg2, r2_2);
        
        uint32_t r0_4 = *(arg2 + 8);
        
        if (r0_4)
            /* tailcall */
            return sub_5a06();
        
        uint32_t r0_6;
        int32_t r1_2;
        int32_t r2_5;
        r0_6 = sub_661e(r0_4, arg2, r2_2, arg4);
        /* tailcall */
        return sub_5ad6(0, r0_6, r1_2, r2_5);
    }
    
    if (arg1 != *0x2099d3)
    {
        if (arg1 != *0x2099d4)
            /* tailcall */
            return sub_5ad6(0, 0x23103002, arg2, arg1);
        
        uint32_t r2_11 = arg2[1];
        
        if (r2_11 != 1)
        {
            if (r2_11 != 2)
                /* tailcall */
                return sub_5ad6(0, 0x23103002, arg2, r2_11);
            
            uint32_t r1_9 = arg2[2];
            
            if (r1_9 != 1)
                /* tailcall */
                return sub_5ad6(0, 0x23103002, r1_9, r2_11);
            
            var_10 = 0x5a;
            0xff7e1af8(0x23103002, 0x8800c5c, 1, 0x5a, var_10);
            int32_t r0_21;
            int32_t r1_10;
            int32_t r2_14;
            r0_21 = sub_10bfc(1, 1, &var_10);
            /* tailcall */
            return sub_5ad6(0, r0_21, r1_10, r2_14);
        }
        
        uint32_t r1_7 = arg2[2];
        
        if (r1_7 != 1 && r1_7 != 2)
            /* tailcall */
            return sub_5ad6(0, 0x23103002, r1_7, r2_11);
    }
    else
    {
        uint32_t r2_1 = arg2[1];
        
        if (r2_1 != 1)
        {
            if (r2_1 == 2)
            {
                uint32_t r1_4 = arg2[4];
                
                if (r1_4 != 1)
                    /* tailcall */
                    return sub_5ad6(0, 0x23103002, r1_4, r2_1);
                
                var_10 = 0x201;
                0xff7e1af8(0x23103002, 0x8800bdc, 0);
                int32_t r0_10;
                int32_t r1_5;
                int32_t r2_7;
                r0_10 = sub_109d8(1, 2, &var_10);
                /* tailcall */
                return sub_5ad6(0, r0_10, r1_5, r2_7);
            }
            
            if (r2_1 != 3)
                /* tailcall */
                return sub_5ad6(0, 0x23103002, arg2, r2_1);
            
            uint32_t r2_8 = arg2[4];
            
            if (r2_8 != 1)
                /* tailcall */
                return sub_5ad6(0, 0x23103002, arg2, r2_8);
            
            var_10 = *(arg2 + 6);
            int32_t r0_13;
            int32_t r1_6;
            int32_t r2_10;
            r0_13 = 0xff7e1af8(0x23103002, 0x8800bec, 2, arg2[5], var_10);
            /* tailcall */
            return sub_5ad6(0, r0_13, r1_6, r2_10);
        }
        
        uint32_t r1_3 = arg2[4];
        
        if (r1_3 != 1 && r1_3 != 2 && r1_3 != 3 && r1_3 != 4)
            /* tailcall */
            return sub_5ad6(0, 0x23103002, r1_3, r2_1);
    }
    
    int32_t r0_18;
    int32_t r1_8;
    int32_t r2_12;
    r0_18 = 0xff7e1af8();
    /* tailcall */
    return sub_5ad6(0, r0_18, r1_8, r2_12);
}

int32_t sub_5a06()
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    r0 = 0xff7e1af8(0x23103000, 0x8800b20, 0);
    int32_t r4;
    /* tailcall */
    return sub_5ad6(r4, r0, r1, r2);
}

int32_t sub_5ad6(int32_t arg1 @ r4, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    return arg1;
}

int32_t sub_5ae4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, int32_t arg6)
{
    int32_t arg_e0 = arg5;
    /* tailcall */
    return sub_5b00();
}

int32_t sub_5b00()
{
    0xff81b968(0x2099dc, 0x1b);  /* "3_250117" */
    *0x2099f5 = 0x14;  /* "_3.00.33_250117" */
    return 0x14;  /* "_3.00.33_250117" */
}

uint32_t sub_5b12()
{
    if (*0x2099f6)
        return 0x2099dc;
    
    *0x2099f6 = 1;
    int32_t entry_r2;
    int32_t entry_r3;
    return sub_11964(*0x2099ee, 1, entry_r2, entry_r3);
}

uint32_t sub_5b28(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return sub_119aa(arg1, arg2, arg3, arg4);
}

uint32_t sub_5b30(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return sub_119bc(arg1, arg2, arg3, arg4);
}

uint32_t sub_5b38()
{
    uint32_t r1 = *0x2099ed;
    
    if (r1 != 2)
        return 0x2099dc;
    
    int32_t entry_r2;
    int32_t entry_r3;
    return sub_11b0a(*0x2099ee, r1, entry_r2, entry_r3);
}

int32_t sub_5b4a(void* arg1)
{
    uint32_t r1 = *(arg1 + 2);
    int32_t r1_1;
    int32_t entry_r2;
    int32_t r2;
    r1_1 = sub_13f18(arg1, r1, entry_r2, r1);
    return 1;
}

uint32_t sub_5b6c(int32_t arg1)
{
    return sub_5b38();
}

uint32_t sub_5b72(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    return sub_119bc(arg1, arg2, arg3, arg4);
}

uint32_t sub_5b78(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    sub_119aa(arg1, arg2, arg3, arg4);
    return sub_6684();
}

int32_t sub_5b82(int32_t arg1)
{
    return sub_747c();
}

uint32_t sub_5b88(void* arg1, int32_t arg2)
{
    int32_t entry_r3;
    return sub_119f2(0, *(arg1 + 4), 0, entry_r3);
}

uint32_t sub_5b94()
{
    return *0x2099f5;
}

int32_t sub_5b9a(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    var_10 = 0xe;
    *var_10[2] = 4;
    return sub_8e0(&var_10, &var_10, arg3, arg4);
}

int32_t sub_5bae()
{
    if (*0x2099ed == 2)
        return 1;
    
    return 0;
}

int32_t sub_5bbe(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    int32_t r0 = sub_5bae();
    
    if (r0)
        return sub_5b9a(r0, arg2, arg3, arg4);
    
    var_10 = 0xe;
    *var_10[2] = 5;
    return sub_8e0(&var_10, &var_10, arg3, arg4);
}

int32_t sub_5be0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    var_10 = 0xe;
    *var_10[2] = 6;
    return sub_8e0(&var_10, &var_10, arg3, arg4);
}

int32_t sub_5bf4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c_1 = arg4;
    int32_t var_10 = arg3;
    var_10 = 0xe;
    *var_10[2] = 0xa;
    int32_t var_c = arg1;
    return sub_8e0(&var_10, 0xa, &var_10, arg4);
}

int32_t sub_5c0a() __pure
{
    return;
}

int32_t sub_5c0c() __pure
{
    return;
}

uint32_t sub_5c14()
{
    char var_20;
    int32_t entry_r2;
    int32_t entry_r3;
    sub_114b6(0x200, &var_20, entry_r2, entry_r3);
    char var_1f;
    uint32_t r0 = var_1f;
    uint32_t r7 = r0 >> 4;
    uint8_t var_50 = r7;
    uint32_t r6_1 = r0 << 0x1c >> 0x1c;  /* "_250117" */
    uint8_t var_4f = r6_1;
    uint32_t r0_1 = var_20;
    uint32_t r5 = r0_1 >> 4;
    uint8_t var_4e = r5;
    uint32_t r4_1 = r0_1 << 0x1c >> 0x1c;  /* "_250117" */
    uint8_t var_4d = r4_1;
    int32_t var_24 = 0x20885b;
    0xff81b964(0x20885b, 0x18);  /* "0.33_250117" */
    int32_t var_40;
    0xff81b968(&var_40, 0x1c);  /* "_250117" */
    int32_t r1_1 = *0x20867c;
    var_40 = *0x208678;
    int32_t var_3c = r1_1;
    uint32_t r0_4 = *0x20885a;
    uint32_t var_4c;
    uint32_t var_48;
    uint32_t var_44;
    
    if (!r0_4)
    {
        uint32_t r0_7 = *0x208686;
        
        if (!(0xa0 & ~r0_7) && *0x208687)
        {
            void* r3_2 = 0x208687;
            
            if (r0_7 == 0xa2)
                sub_127d0(var_24, 0x18, &data_601c, r3_2);  /* "0.33_250117" */
            else if (r0_7 == 0xa3)
            {
                var_50 = r7;
                var_4c = r6_1;
                var_48 = r5;
                var_44 = r4_1;
                sub_127d0(var_24, 0x18, "%s_%01X%01X%01X%01X", r3_2);  /* "0.33_250117" */
            }
            else if (r0_7 == 0xa4)
                sub_127d0(var_24, 0x18, "O_%s", r3_2);  /* "0.33_250117" */
            else
            {
                var_50 = r7;
                var_4c = r6_1;
                var_48 = r5;
                var_44 = r4_1;
                sub_127d0(var_24, 0x18, "O_%s_%01X%01X%01X%01X", r3_2);  /* "0.33_250117" */
            }
        }
        else if (var_40 != 0xa5 || !*var_40[1])
        {
            var_50 = r7;
            var_4c = r6_1;
            var_48 = r5;
            var_44 = r4_1;
            sub_127d0(var_24, 0x18, "%s%01X%01X%01X%01X", "R02_");  /* "0.33_250117" */
        }
        else
        {
            var_44 = r4_1;
            var_4c = r6_1;
            var_50 = r7;
            var_48 = r5;
            sub_127d0(var_24, 0x18, "O_%s_%01X%01X%01X%01X", &*var_40[1]);  /* "0.33_250117" */
            
            if (0xff81b854(var_24) <= 0xc)
            {
                char var_1e;
                char var_1d;
                char var_1c;
                char var_1b;
                
                if (0xff81b854(var_24) > 0xa)
                    sub_127a8(0x208862, "_%02X", 
                        sub_12b2a(var_1b + var_1c + var_1d + var_1e, 0xff));
            }
            else
                sub_127d0(var_24, 0x18, "O_%s", &*var_40[1]);  /* "0.33_250117" */
        }
    }
    else if (r0_4 == 2)
        sub_127a8(var_24, "O_%s", &var_40);
    else if (r0_4 == 3)
    {
        var_50 = r6_1;
        var_4c = r5;
        var_48 = r4_1;
        sub_127a8(var_24, "%s_%01X%01X%01X%01X", &var_40);
    }
    else if (r0_4 == 4)
        sub_127a8(var_24, &data_601c, &var_40);
    else
    {
        var_50 = r6_1;
        var_4c = r5;
        var_48 = r4_1;
        sub_127a8(var_24, "O_%s_%01X%01X%01X%01X", &var_40);
    }
    
    uint32_t r2_6 = 0xff81b854(var_24) + 1;
    *0x20844c = r2_6;
    *0x20844d = 9;
    sub_11586(0x222, 0x28, var_24, 
        sub_11978(0x261, 0x1f, 0x208449, 0xff81b898(0x20844e, var_24, r2_6 - 1)));  /* "0117" */
    *0x2099fb = 3;
    *0x2099fc = 3;
    *0x2099fd = 0xe7;
    *0x2099fe = 0xfe;
    0xff7e1af8(0x23103002, 0x8800c88, 1, 4, var_50, var_4c, var_48, var_44);
    *0x2099ff = 0xb;
    *0x209a00 = 0xff;
    *0x209a01 = 0x34;  /* "_V3.0" */
    *0x209a02 = 0x12;  /* "02_3.00.33_250117" */
    *0x209a03 = 0xfe;
    uint32_t r1_10 = 0xa;
    *0x209a04 = 0xe7;
    
    for (uint32_t i = 0; i < 6; )
    {
        *(0x2099fb + r1_10) = (&var_20)[5 - i];
        i = i + 1;
        r1_10 = r1_10 + 1;
    }
    
    return sub_11978(0x262, 0x1f, 0x2099fb, &var_20);  /* "0117" */
}

int32_t sub_5df0()
{
    int16_t var_34 = 0xc41;
    char var_68 = 0;
    char var_64 = 0;
    char var_60 = 0;
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    char var_5c = 7;
    char var_58 = 0;
    int16_t var_44 = 0x640;
    int16_t var_40 = 0x640;
    char var_54 = 1;
    int16_t var_3c = 1;
    char var_50 = 3;
    char var_4c = 0;
    int32_t var_10 = 0;
    char var_48 = 0;
    int16_t var_38 = 1;
    int32_t r0 = sub_1448c();
    void var_20;
    sub_153c0(&var_20);
    int32_t var_30;
    
    if (*0x2086c0 == 1)
    {
        int32_t var_2c_1 = *0x208684;
        var_30 = *0x208680;
    }
    else
    {
        char var_18[0x8];
        0xff81b898(&var_18, r0 + 8, 6);
        
        for (uint32_t i = 0; i < 6; i = i + 1)
            *(&var_30 + i) = var_18[5 - i];
    }
    
    if (0xff81b7f8(&var_20, &var_30, 6))
    {
        sub_13eb4(&var_30);
        0xff7dc2ec(1, 0xd0);
    }
    
    int32_t r3_6 = sub_11978(0x266, 1, &var_5c, 
        sub_11978(0x265, 6, &var_28, 
            sub_11978(0x264, 1, &var_60, 
                sub_11978(0x263, 1, &var_64, 
                    sub_11586(0x223, 1, &var_68, sub_11586(0x221, 2, &var_34, sub_5c14()))))));
    int32_t r3_12 = sub_1149a(0x202, 1, &var_54, 
        sub_11978(0x262, 0x1f, 0x2099fb, 
            sub_11978(0x261, 0x1f, 0x208449, 
                sub_11978(0x269, 2, &var_40, 
                    sub_11978(0x268, 2, &var_44, sub_11978(0x267, 1, &var_58, r3_6))))));  /* "0117" */
    sub_11c80(0x214, 2, &var_38, 
        sub_11c80(0x213, 1, &var_48, 
            sub_11c80(0x212, 1, &var_4c, 
                sub_11c80(0x211, 4, &var_10, 
                    sub_1149a(0x204, 1, &var_50, sub_1149a(0x203, 2, &var_3c, r3_12))))));
    return sub_11574(0x829921);
}

uint32_t sub_5f72(int32_t arg1, int32_t arg2, char arg3)
{
    int32_t r4 = arg2;
    
    if (r4)
    {
        if (r4 > 0x14)  /* "_3.00.33_250117" */
            r4 = 0x14;  /* "_3.00.33_250117" */
        
        0xff81b964(0x208686, 0x18);  /* "0.33_250117" */
        *0x208686 = arg3;
        0xff81b898(0x208687, arg1, r4);
    }
    
    sub_31aa();
    return sub_5c14();
}

int32_t sub_5fa6()
{
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r1 = sub_11652(4);
    char r0;
    int32_t r1_1;
    int32_t r2_1;
    int32_t r3_1;
    r0 = sub_6360(0x829971, r1, r2, r3);
    *0x2099f7 = r0;
    char r0_1;
    int32_t r1_2;
    int32_t r2_2;
    int32_t r3_2;
    r0_1 = sub_6248(0x829971, r1_1, r2_1, r3_1);
    *0x2099f8 = r0_1;
    char r0_2;
    int32_t r1_3;
    int32_t r2_3;
    int32_t r3_3;
    r0_2 = sub_612e(0x829971, r1_2, r2_2, r3_2);
    *0x2099f9 = r0_2;
    *0x2099fa = sub_657e(0x829971, r1_3, r2_3, r3_3);
    sub_116c4(0x829971);
    return sub_6730();
}

int32_t sub_60e2(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5) __pure
{
    return arg1;
}

uint32_t sub_612e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    int32_t var_c_1 = arg3;
    int32_t var_10_1 = arg2;
    
    if (sub_1166c(&var_8, 0x83db94, 0xfc, *0x83dc90, *0x83dc94, *0x83dc98))
        return var_8;
    
    0xff7e1af8(0x23103000, 0x8800d0c, 0);
    return 0xff;
}

int32_t sub_6168(int32_t arg1, void* arg2, int32_t arg3 @ r4, int16_t* arg4, int32_t* arg5)
{
    int32_t r2 = (arg2 + 0x31) << 0x10;  /* "RY02_3.00.33_250117" */  /* "Y02_V3.0" */
    *(arg2 + 0x53) = arg2 + 0x31;  /* "Y02_V3.0" */
    
    if (arg3 && arg3 < 0 == (arg3 >> 0x14) + 2)  /* "_3.00.33_250117" */
    {
        int32_t r0_5;
        int32_t r1_4;
        int32_t r2_1;
        int32_t r3_2;
        r0_5 = 0xff7e1af8(arg3, arg2 + 0x31, r2, 0x10);
            /* "RY02_3.00.33_250117" */  /* "Y02_V3.0" */
        int32_t arg_1c = 0x40a;
        /* tailcall */
        return sub_60e2(r0_5, r1_4, r2_1, r3_2, arg4);
    }
    
    if (r2 != 7)
    {
        int32_t lr;
        0xff7e1af8(0x23103000, 0x8800d2c, 1, r2, arg3, lr);
        return 0x40a;
    }
    
    *arg5 = 0x20844e;
    *arg4 = *0x20844c - 1;
    return 0;
}

int32_t sub_61c6(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, char* arg6)
{
    int32_t result = 0;
    
    if (!arg6)
    {
        0xff7e1af8(0x23103000, 0x8800d68, 0, arg6, arg4);
        return 0x40d;
    }
    
    if (arg3 == 2)
        sub_6a56(arg6, arg5);
    else if (arg3 == 7)
    {
        0xff7e1af8(0x23103002, 0x8800de0, 0);
        
        if (arg5 > 0xc)
            0xff7e1af8(0x23103002, 0x8800e00, 0);
    }
    else
    {
        result = 0x40a;
        0xff7e1af8(0x23103000, 0x8800d9c, 2, arg3, arg5);
    }
    
    return result;
}

uint32_t sub_6248(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t var_14_1 = arg3;
    int32_t var_18_1 = arg2;
    
    if (!sub_1166c(&var_10, 0x83dcac, 0xa8, *0x83dd54, *0x83dd58, *0x83dd5c))
    {
        0xff7e1af8(0x23103000, 0x8800e68, 0);
        return 0xff;
    }
    
    *0x209a1c = arg1;
    return var_10;
}

uint32_t sub_6284(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    return sub_11736(*0x2099ee, *0x2099f8, 4, arg1, arg2, 1);
}

int32_t sub_62c4(int32_t arg1, int32_t arg2, int32_t arg3, int16_t* arg4, int32_t* arg5)
{
    if (arg3 != 7)
    {
        0xff7e1af8(0x23103000, 0x8800e84, 1, arg3);
        return 0x40a;
    }
    
    *arg5 = 0x20844e;
    *arg4 = *0x20844c - 1;
    return 0;
}

int32_t sub_62ee(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    int32_t r3;
    int32_t var_10 = r3;
    int32_t result = 0;
    
    if (!arg5)
    {
        0xff7e1af8(0x23103000, 0x8800ebc, 0);
        return 0x40d;
    }
    
    if (arg3 == 2)
        sub_4a0e(arg5, arg4);
    else if (arg3 == 7)
        0xff7e1af8(0x23103002, 0x8800f2c, 0);
    else
    {
        result = 0x40a;
        0xff7e1af8(0x23103000, 0x8800eec, 2, arg3, arg4);
    }
    
    return result;
}

uint32_t sub_6360(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t var_14_1 = arg3;
    int32_t var_18_1 = arg2;
    
    if (!sub_1166c(&var_10, 0x83dd70, 0xa8, *0x83de18, *0x83de1c, *0x83de20))
    {
        0xff7e1af8(0x23103000, 0x8800f80, 0);
        return 0xff;
    }
    
    *0x209a20 = arg1;
    return var_10;
}

int32_t sub_63b4(int32_t arg1, int32_t arg2)
{
    int32_t result = 1;
    
    if (arg1 == 1 || arg1 == 2)
    {
        if (arg2 != 1)
            return 0;
        
        *0x209a28 = 1;
    }
    else
    {
        result = 0;
        0xff7e1af8(0x23103300, 0x8800f98, 0);
    }
    
    return result;
}

uint32_t sub_63e0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10_1 = arg3;
    return sub_11736(arg1, arg2, 2, arg3, arg4, 0);
}

uint32_t sub_63f2(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_14 = arg4;
    int32_t var_18_1 = arg3;
    
    if (!*0x209a24)
        return 0;
    
    *0x209a24 = 0;
    return sub_116d2(arg1, arg2, 2, arg3, arg4, 0);
}

int32_t sub_64c0(char arg1, int32_t arg2, int32_t arg3, int32_t arg4, void* arg5)
{
    if (arg3 != 7)
    {
        0xff7e1af8(0x23103000, 0x88010d0, 2, arg3, arg4);
        return 0x40a;
    }
    
    if (!arg5)
        return 0x40d;
    
    char var_23_1 = 3;
    char var_24 = arg1;
    char var_20_1 = 1;
    int16_t var_1e_1 = arg4;
    void* var_1c_1 = arg5;
    int32_t r2 = *0x209a2c;
    
    if (r2)
        r2(arg2, &var_24);
    
    for (uint32_t i = 0; i < arg4; i = i + 1)
        0xff7e1af8(0x23103002, 0x88010a4, 1, *(arg5 + i));
    
    return 0;
}

uint32_t sub_657e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t var_14_1 = arg3;
    int32_t var_18_1 = arg2;
    
    if (!sub_1166c(&var_10, 0x83de24, 0xfc, *0x83df20, *0x83df24, *0x83df28))
    {
        0xff7e1af8(0x23103300, 0x8801148, 1, var_10);
        var_10 = 0xff;
    }
    
    *0x209a2c = arg1;
    return var_10;
}

int32_t sub_65d4(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0_2;
    int32_t r1;
    r0_2 = syscall(arg3 >> 3 >> 2, arg1 >> 0x14, arg3, 0x10);
        /* "RY02_3.00.33_250117" */  /* "_3.00.33_250117" */
    /* tailcall */
    return sub_65e4(r0_2, r1);
}

uint32_t sub_65e4(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    return sub_11736(*0x2099ee, *0x2099f7, 4, arg1, arg2, 1);
}

int32_t sub_65fe(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    
    if (*0x209a30)
        return 0x209a30;
    
    *0x209a30 = 1;
    var_10 = 0xe;
    *var_10[2] = 0xc;
    return sub_8e0(&var_10, &var_10, arg3, arg4);
}

uint32_t sub_661e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    uint32_t result = *0x209a30;
    
    if (!result)
    {
        if (*0x209a32 == *0x209a34)
            result = *0x20a23a;
        
        if (*0x209a32 != *0x209a34 || *0x20a238 != result)
        {
            var_10 = 0xe;
            *var_10[2] = 0xc;
            return sub_8e0(&var_10, &var_10, arg3, arg4);
        }
    }
    
    return result;
}

int32_t sub_6650(int32_t arg1)
{
    int32_t result = sub_5bae();
    
    if (!result)
        return result;
    
    int32_t r1_2;
    int32_t r2_1;
    int32_t r3_1;
    r1_2 = 0xff81b898((*0x209a34 << 4) + 0x209a36, arg1, 0x10);  /* "RY02_3.00.33_250117" */
    uint32_t r0_4 = *0x209a34;
    int32_t r0_5;
    
    r0_5 = r0_4 < 0x7f ? r0_4 + 1 : 0;
    
    *0x209a34 = r0_5;
    return sub_65fe(r0_5, r1_2, r2_1, r3_1);
}

uint32_t sub_6684()
{
    *0x209a30 = 0;
    uint32_t i;
    
    do
    {
        uint32_t r0_10 = *0x209a32;
        
        if (r0_10 == *0x209a34)
            break;
        
        if (sub_65e4((r0_10 << 4) + 0x209a36, 0x10) != 1)  /* "RY02_3.00.33_250117" */
        {
            if (*0x209a31 >= 0x14)  /* "_3.00.33_250117" */
                *0x209a32 = *0x209a34;
            else
            {
                0xff7ef196(0x14);  /* "_3.00.33_250117" */
                *0x209a31 += 1;
            }
            
            break;
        }
        
        *0x209a31 = 0;
        uint32_t r0_9 = *0x209a32;
        int16_t i_2;
        
        i_2 = r0_9 < 0x7f ? r0_9 + 1 : 0;
        
        i = i_2;
        *0x209a32 = i;
    } while (i != *0x209a34);
    uint32_t i_1;
    
    do
    {
        uint32_t r1_3 = *0x20a238;
        uint32_t r0_11 = *0x20a23a;
        
        if (r1_3 == r0_11)
            return r0_11;
        
        if (sub_6284(*0x20a288 + r1_3 * 0x14, *(r1_3 + 0x20a23c)) != 1)  /* "_3.00.33_250117" */
        {
            if (*0x209a31 >= 0x14)  /* "_3.00.33_250117" */
            {
                int16_t r0_17 = *0x20a23a;
                *0x20a238 = r0_17;
                return r0_17;
            }
            
            0xff7ef196(0x14);  /* "_3.00.33_250117" */
            r0_11 = *0x209a31 + 1;
            *0x209a31 = r0_11;
            return r0_11;
        }
        
        *0x209a31 = 0;
        uint32_t r0_20 = *0x20a238 + 1;
        *0x20a238 = r0_20;
        
        if (r0_20 >= 0x4c)
            *0x20a238 = 0;
        
        i_1 = *0x20a238;
    } while (i_1 != *0x20a23a);
    
    return i_1;
}

int32_t sub_672c() __pure
{
    return;
}

int32_t sub_672e() __pure
{
    return;
}

int32_t sub_6730()
{
    0xff81b964(0x209a32, 0x804);
    0xff81b968(0x20a238, 0x54);
    *0x20a288 = 0x20a7c0;
    return 0x20a7c0;
}

int32_t sub_674e(int32_t arg1, void* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    int32_t var_20 = arg1;
    char var_30 = 0xbc;  /* "####" */
    char var_2f = arg1;
    int16_t var_2e = arg3;
    int16_t var_2c = sub_6b80(arg2, arg3);
    uint32_t r0_2 = sub_5b94();
    uint32_t r5 = r0_2;
    
    if (r0_2 > 0x14)  /* "_3.00.33_250117" */
        r5 = 0x14;  /* "_3.00.33_250117" */
    
    0xff81b898(*0x20a288 + 0x14 * *0x20a23a, &var_30, 6);  /* "_3.00.33_250117" */
    int32_t r0_6 = r5 - 6;
    
    if (arg3 <= r0_6)
        r0_6 = arg3;
    
    uint32_t r6 = r0_6;
    int32_t r3 = 0xff81b898(*0x20a288 + 0x14 * *0x20a23a + 6, arg2, r6);  /* "_3.00.33_250117" */
    uint32_t r2_1 = *0x20a23a;
    int32_t var_28 = 0x20a23c;
    *(r2_1 + 0x20a23c) = r6 + 6;
    uint32_t i = arg3 - r6;
    int32_t r1_6 = 0;
    void* var_1c = arg2 + r6;
    uint32_t r0_16 = *0x20a23a + 1;
    *0x20a23a = r0_16;
    
    if (r0_16 >= 0x4c)
        *0x20a23a = 0;
    
    while (i)
    {
        char r0_17;
        
        r0_17 = i <= r5 ? i : r5;
        
        uint32_t r6_1 = r0_17;
        *(*0x20a23a + var_28) = r6_1;
        r1_6 = 0xff81b898(*0x20a288 + 0x14 * *0x20a23a, var_1c, r6_1);  /* "_3.00.33_250117" */
        i = i - r6_1;
        var_1c += r6_1;
        r0_16 = *0x20a23a + 1;
        *0x20a23a = r0_16;
        
        if (r0_16 >= 0x4c)
        {
            r0_16 = 0;
            *0x20a23a = 0;
        }
    }
    
    return sub_65fe(r0_16, r1_6, r2_1, r3);
}

uint32_t sub_6830(int32_t arg1) __pure
{
    uint32_t r1_2 = arg1 >> 4;
    
    if (r1_2 <= 9)
    {
        uint32_t r0_1 = arg1 << 0x1c >> 0x1c;  /* "_250117" */
        
        if (r0_1 <= 9)
            return (r1_2 << 3) + (r1_2 << 1) + r0_1;
    }
    
    return 0;
}

uint32_t sub_684e(uint32_t arg1) __pure
{
    uint32_t r1_1 = 0;
    
    if (arg1 > 0x63)
        return 0;
    
    for (; arg1 > 9; arg1 = arg1 - 0xa)
        r1_1 = r1_1 + 1;
    
    return r1_1 << 4 | arg1;
}

uint32_t sub_686c(char arg1, char arg2)
{
    char var_1a = arg2;
    char var_10 = 0xbc;  /* "####" */
    char var_f = arg1;
    int16_t var_e = 1;
    int16_t var_c = sub_6b80(&var_1a, 1);
    void var_20;
    0xff7dc2f8(&var_20, &var_10, 6);
    return sub_6284(&var_20, 7);
}

uint32_t sub_68a0(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_1c = 0;
    int32_t var_18 = 0;
    return sub_686c(arg1, sub_13f18(0, arg2, arg3, arg1));
}

uint32_t sub_6906()
{
    uint32_t result = *0x20a28d << 0x1f;  /* "0117" */
    
    if (!result)
    {
        result = 0xff7ef6e4(0x20a290, 0x3e8);
        
        if (result)
        {
            result = (*0x20a28d | 1) & 1;
            *0x20a28d = result;
        }
    }
    
    return result;
}

int32_t sub_692a()
{
    uint32_t r0 = sub_74f0();
    
    if (r0 && (r0 == 2 || r0 == 3))
    {
        sub_6906();
        sub_729a(0, 0);
    }
    
    *0x20a28c = 1;
    return 1;
}

uint32_t sub_6952()
{
    uint32_t r0 = sub_6b80(0x20a2a0, *0x20a29c);
    uint32_t r0_1 = *0x20a299;
    
    if (r0 != *0x20a29e)
        return sub_686c(r0_1, 2);
    
    if (r0_1 == 0x31)  /* "Y02_V3.0" */
    {
        sub_729a(1, 0);
        sub_6f1a(*0x20a299, 0x20a2a0, *0x20a29a);
    }
    else if (r0_1 > 0x31)  /* "Y02_V3.0" */
    {
        if (r0_1 == 0x35 || r0_1 == 0x36)  /* "V3.0" */  /* "3.0" */
        {
            sub_729a(1, 0);
            sub_6f1a(*0x20a299, 0x20a2a0, *0x20a29a);
        }
        else if (r0_1 != 0x46)
        {
            if (r0_1 != 0x61)
                sub_6f1a(*0x20a299, 0x20a2a0, *0x20a29a);
            else
            {
                sub_729a(1, 0);
                sub_6f1a(*0x20a299, 0x20a2a0, *0x20a29a);
            }
        }
    }
    else if (r0_1 == 1 || r0_1 == 2)
    {
        sub_729a(1, 0);
        sub_6f1a(*0x20a299, 0x20a2a0, *0x20a29a);
    }
    else if (r0_1 != 0x10)  /* "RY02_3.00.33_250117" */
    {
        if (r0_1 != 0x21)  /* "17" */
            sub_6f1a(*0x20a299, 0x20a2a0, *0x20a29a);
        else
        {
            sub_729a(1, 0);
            sub_6f1a(*0x20a299, 0x20a2a0, *0x20a29a);
        }
    }
    
    sub_692a();
    return sub_116c();
}

uint32_t sub_69bc()
{
    uint32_t r1 = *0x20a28d;
    uint32_t r0_1 = r1 << 0x1f >> 0x1f;  /* "0117" */
    
    if (!*0x20a28c)
    {
        uint32_t r0_2 = r0_1 | ((r1 >> 1) + 1) << 0x19 >> 0x18;
            /* "0.33_250117" */  /* ".33_250117" */
        *0x20a28d = r0_2;
        uint32_t r0_3 = r0_2 >> 1;
        
        if (r0_3 == 3)
        {
            uint32_t r0_5 = *0x20a299;
            
            if (r0_5 == 3)
                sub_686c(r0_5, 2);
            
            return 0xff81b964(0x20a298, 0x50c);
        }
        
        if (r0_3 != 0xf)
            return r0_3;
        
        0xff81b964(0x20a298, 0x50c);
        
        if (sub_74f0() != 1)
        {
            sub_6b40();
            return sub_729a(2, 0);
        }
        
        sub_729a(0, 0);
        r0_1 = *0x20a28d << 0x1f >> 0x1f;  /* "0117" */
    }
    else
        *0x20a28c = 0;
    
    *0x20a28d = r0_1;
    return r0_1;
}

int32_t sub_6a3c()
{
    if (*0x20a28d << 0x1f)  /* "0117" */
        sub_6b40();
    
    return 0xff81b964(0x20a298, 0x50c);
}

void sub_6a56(char* arg1, int32_t arg2)
{
    *0x20a28c = 1;
    uint32_t r2 = *0x20a298;
    
    if (!r2)
    {
        if (arg2 < 6 || *arg1 != 0xbc)  /* "####" */
            return;
        
        *0x20a298 = 1;
        *0x20a299 = arg1[1];
        *0x20a29c = arg1[3] << 8 | arg1[2];
        *0x20a29e = arg1[5] << 8 | arg1[4];
        0xff81b898(0x20a2a0, &arg1[6], arg2 - 6);
        uint32_t r0 = arg2 - 6;
        *0x20a29a = r0;
        uint32_t r1_8 = *0x20a29c;
        
        if (r1_8 > 0x504)
        {
            sub_686c(2, 2);
            return;
        }
        
        if (r0 >= r1_8)
        {
            sub_6952();
            0xff81b964(0x20a298, 0x50c);
        }
        
        sub_6906();
    }
    else
    {
        if (r2 != 1)
        {
            0xff81b964(0x20a298, 0x50c);
            return;
        }
        
        int32_t r3_1 = *0x20a29a + 0x20a2a0;
        0xff81b898(r3_1, arg1, arg2, r3_1);
        uint32_t r0_1 = *0x20a29a + arg2;
        *0x20a29a = r0_1;
        
        if (r0_1 >= *0x20a29c)
        {
            sub_6952();
            0xff81b964(0x20a298, 0x50c);
        }
    }
}

int32_t sub_6b04()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return 0xff7ef684(0x20a290, "m_ble_packet_timer_id", 1, 0x7d0, 1, 0x82a96d);
        /* "17 10:58:10 2022" */
}

void sub_6b20(int32_t arg1)
{
    *0x20a294 = arg1;
}

int32_t sub_6b28()
{
    return *0x20a294;
}

int32_t sub_6b30() __pure
{
    return;
}

int32_t sub_6b32()
{
    return *0x20a294 + 0x400;
}

uint32_t sub_6b40()
{
    uint32_t result = *0x20a28d << 0x1f;  /* "0117" */
    
    if (result)
    {
        0xff7ef70c(0x20a290);
        result = *0x20a28d >> 1 << 1;
        *0x20a28d = result;
    }
    
    return result;
}

uint32_t sub_6b80(void* arg1, int32_t arg2)
{
    uint32_t result = 0xffff;
    
    for (int32_t i = 0; i < arg2; i += 1)
        result = result >> 8 ^ *(0x83df2c + ((result ^ *(arg1 + i)) << 1));
    
    return result;
}

void sub_6ba2(uint32_t arg1, void* arg2, int32_t arg3)
{
    for (int32_t i = 0; i < arg3; i += 1)
        arg1 = arg1 >> 8 ^ *(0x83df2c + ((arg1 ^ *(arg2 + i)) << 1));
}

int32_t sub_6bc8() __pure
{
    return 0x20a7c0;
}

int32_t sub_6bcc(int32_t arg1)
{
    return 0xff7ef6e4(0x20a7a4, arg1);
}

int32_t sub_6bee(int32_t arg1)
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    *0x20a7bc = arg1;
    return 0xff7ef684(0x20a7a4, "m_ota_write_flag_id", 1, 0x7d0, 0, 0x82ab8b);
        /* "17 10:58:10 2022" */
}

int32_t sub_6c10()
{
    (*0x20a7bc)(1, 0);
    return 0;
}

int32_t sub_6c22(char* arg1, int32_t arg2)
{
    int32_t r3 = *0x20a7bc;
    int32_t r1;
    
    if (arg2 == 9)
    {
        uint32_t r1_1 = *arg1;
        
        if (r1_1 == 1 || r1_1 == 4)
        {
            uint32_t r4_2 = arg1[3] << 0x10 | arg1[4] << 0x18 | arg1[2] << 8 | arg1[1];
                /* "RY02_3.00.33_250117" */  /* "0.33_250117" */
            *0x20a7b4 = 0;
            *0x20a7ae = 0;
            *0x20a7a8 = *arg1;
            *0x20a7b0 = r4_2;
            *0x20a7a9 = 1;
            *0x20a7aa = arg1[6] << 8 | arg1[5];
            *0x20a7ac = arg1[8] << 8 | arg1[7];
            *0x20a7a9 = 2;
            r3(2, 0);
            return 0;
        }
        
        r1 = 2;
    }
    else
        r1 = 1;
    
    r3(2, r1);
    return 1;
}

uint32_t sub_6c8a()
{
    if (!*0x20a7a9)
        return 0xff;
    
    return sub_12b2a(0x64 * *0x20a7b4, *0x20a7b0 - 0x50);
}

int32_t sub_6cac(char* arg1, int16_t arg2)
{
    sub_6c8a();
    uint32_t r0 = *0x20a7a9;
    
    if (r0 != 3 && r0 != 2)
    {
        (*0x20a7bc)(3, 3);
        return 3;
    }
    
    uint32_t r0_4 = *0x20a7ae;
    
    if (r0_4 + 1 == *arg1 + (arg1[1] << 8))
    {
        uint32_t r4_2 = arg2 - 2;
        
        if (r4_2 > 0x600)
        {
            (*0x20a7bc)(3, 1);
            return 1;
        }
        
        int32_t var_18_1 = 0x20a7c0;
        int32_t r0_11;
        
        if (r0_4)
        {
            0xff81b898(0x20a7c0, &arg1[2], r4_2);
            int32_t r0_5 = *0x20a7b4;
            int32_t r1_5 = r0_5 + r4_2 - 1;
            
            if (r1_5 >> 0xc != (r0_5 - 1) >> 0xc)
                sub_3064((r1_5 >> 0xc << 0xc) + 0x84d000);
            
            r0_11 = *0x20a7b4;
            
            if (r0_11 >= *0x20a7b0)
                goto label_6d48;
            
            goto label_6d3c;
        }
        
        int32_t var_68;
        0xff81b898(&var_68, &arg1[2], 0x50);
        
        if (var_68 == 0x81bdc3e5)
        {
            uint32_t r0_21;
            void var_38;
            
            if (*0x20a7a8 == 1)
                r0_21 = sub_12a74(&var_38, "RY02_V3.0", 9);
            
            if (*0x20a7a8 != 1 || !r0_21)
            {
                r4_2 -= 0x50;
                0xff81b898(var_18_1, &arg1[0x52]);
                sub_3064(0x84d000);
                r0_11 = *0x20a7b4;
            label_6d3c:
                sub_30fc(r0_11 + 0x84d000, var_18_1, r4_2);
                *0x20a7b4 += r4_2;
            label_6d48:
                *0x20a7a9 = 3;
                *0x20a7ae += 1;
                (*0x20a7bc)(3, 0);
                return 0;
            }
        }
    }
    
    (*0x20a7bc)(3, 2);
    return 2;
}

int32_t sub_6da8()
{
    int32_t r2 = *0x20a7bc;
    
    if (*0x20a7a9 != 3)
    {
        r2(4, 3);
        return 3;
    }
    
    if (*0x20a7b4 != *0x20a7b0 - 0x50)
    {
        r2(4, 1);
        return 1;
    }
    
    *0x20a7a9 = 4;
    r2(4, 0);
    return 0;
}

int32_t sub_6de4()
{
    if (*0x20a7a9 != 4)
    {
        (*0x20a7bc)(4, 3);
        return 3;
    }
    
    *0x20a7a9 = 5;
    int32_t entry_r2;
    int32_t entry_r3;
    sub_f6e(0x2793, 0, entry_r2, entry_r3);
    sub_1e60();
    sub_14a2();
    sub_322e();
    int32_t r0_3;
    int32_t r1_1;
    int32_t r2_1;
    int32_t r3;
    r0_3 = sub_6bcc(0x3e8);
    int32_t r0_4;
    int32_t r1_2;
    int32_t r2_2;
    int32_t r3_1;
    r0_4 = sub_720c(r0_3, r1_1, r2_1, r3);
    sub_5b9a(r0_4, r1_2, r2_2, r3_1);
    sub_13ec();
    return 0;
}

int32_t sub_6e36()
{
    (*0x20a7bc)(7, 0);
    return 0;
}

int32_t sub_6e48()
{
    *0x20a7a9 = 0;
    return 0;
}

int32_t sub_6e52(char* arg1)
{
    if (arg1)
    {
        *arg1 = *0x20a7a9;
        arg1[1] = *0x20a7b4;
        arg1[2] = *0x20a7b4 >> 8;
        arg1[3] = *0x20a7b4 >> 0x10;  /* "RY02_3.00.33_250117" */
        arg1[4] = *0x20a7b4 >> 0x18;  /* "0.33_250117" */
    }
    
    return 0;
}

int32_t sub_6e78() __pure
{
    return 0;
}

int32_t sub_6eb4()
{
    0xff81b968(0x20b3c4, 0x14);  /* "_3.00.33_250117" */
    *0x20b3c8 = 0x20adc4;
    return 0x20adc4;
}

void sub_6ec6(char arg1, int32_t arg2, int32_t arg3)
{
    if (*0x20adc0 == *0x20adc2)
    {
        *0x20adc0 = 0;
        *0x20adc2 = 0;
    }
    
    uint32_t r2_1 = *0x20adc0;
    
    if (r2_1 + arg3 + 2 > 0x400)
        return;
    
    *(0x20b3d8 + r2_1) = arg1;
    uint32_t r0_2 = *0x20adc0 + 1;
    *0x20adc0 = r0_2;
    *(0x20b3d8 + r0_2) = arg3;
    uint32_t r0_5 = *0x20adc0 + 1;
    *0x20adc0 = r0_5;
    0xff81b898(0x20b3d8 + r0_5, arg2, arg3);
    *0x20adc0 += arg3;
    sub_116c();
}

int32_t sub_6f1a(char arg1, int32_t arg2, int16_t arg3)
{
    *0x20b3c5 = arg1;
    int32_t result = 0xff81b898(*0x20b3c8);
    *0x20b3d0 = arg3;
    return result;
}

uint32_t sub_6f2c()
{
    void* r0_3 = sub_8fcc(sub_216a() - **0x20b3c8);
    uint32_t var_130;
    
    if (!r0_3)
        0xff81b968(&var_130, 0x124, 0x124);
    else
        0xff7dc2f8(&var_130, r0_3, 0x124);
    
    if (!**0x20b3c8)
    {
        var_130 = sub_216a();
        sub_8d26(&(&var_130)[sub_12b2a(sub_217a(), 0x3c) * 3 + 1]);
    }
    
    char* r0_15 = *0x20b3c8;
    
    if (!var_130)
        return sub_686c(0x12, *r0_15);  /* "02_3.00.33_250117" */
    
    char var_530 = *r0_15;
    void var_52f;
    void var_12c;
    0xff81b898(&var_52f, &var_12c, 0x120);
    return sub_674e(0x12, &var_530, 0x121);  /* "02_3.00.33_250117" */
}

int32_t sub_6fc2(int16_t arg1)
{
    void var_70;
    sub_8fde(sub_216a() - arg1, &var_70);
    char var_470 = **0x20b3c8;
    void var_46f;
    0xff81b898(&var_46f, &var_70, 0x64);
    return sub_674e(0x11, &var_470, 0x65);  /* "Y02_3.00.33_250117" */
}

int32_t sub_7006(int32_t arg1)
{
    int32_t r6 = arg1;
    
    if (arg1 > 6)
        r6 = 6;
    
    uint32_t r0_2 = sub_216a() - r6;
    int16_t var_18 = r0_2;
    
    if (r0_2 < 7)
        var_18 = 7;
    
    int32_t r4 = 1;
    int32_t i = 0;
    char var_1c = 0;
    char var_480[0x74];
    
    for (; i <= r6; i += 1)
    {
        char var_80[0xe];
        sub_8fde(var_18 + i, &var_80);
        char var_6d;
        uint32_t r2_1 = var_6d;
        
        if (r2_1)
        {
            var_480[r4] = r6 - i;
            var_480[r4 + 1] = (r2_1 << 1) + 4;
            int16_t var_72;
            uint32_t r0_9 = var_72;
            var_480[r4 + 2] = r0_9;
            var_480[r4 + 3] = r0_9 >> 8;
            int16_t var_70;
            uint32_t r0_11 = var_70;
            var_480[r4 + 4] = r0_11;
            int32_t r4_5 = r4 + 5;
            var_480[r4_5] = r0_11 >> 8;
            int32_t r0_13 = 0;
            
            while (true)
            {
                r4 = r4_5 + 1;
                
                if (r2_1 <= r0_13)
                    break;
                
                void* r1_2 = &var_80[r0_13];
                var_480[r4] = *(r1_2 + 0x14);  /* "_3.00.33_250117" */
                r4_5 = r4 + 1;
                var_480[r4_5] = *(&data_3c + r1_2);
                r0_13 += 1;
            }
            
            var_1c += 1;
        }
    }
    
    var_480[0] = var_1c;
    return sub_674e(0x27, &var_480, r4);
}

uint32_t sub_70be(int32_t arg1 @ r6, int32_t arg2 @ r7)
{
    int32_t var_8 = arg1;
    void* r4 = 0x20b3c4;
    uint32_t result = *0x20b3c5;
    
    if (result)
    {
        char* r5_1 = *0x20b3c8;
        
        if (result == 0x22)  /* "7" */
            sub_686c(result, 2);
        else
        {
            int32_t entry_r2;
            
            if (result > 0x22)  /* "7" */
            {
                if (result != 0x3b)
                {
                    if (result <= 0x3b)
                    {
                        int32_t r1_5;
                        int32_t r3_3;
                        r1_5 = sub_13f18(result, result - 0x23, entry_r2, result - 0x23);
                        result = r1_5 - 4;
                        /* unimplemented  {asrs r1, r0, #0x19} */  /* ".33_250117" */
                    }
                    
                    if (result == 0x41 || result == 0x43 || result == 0x46)
                        sub_7f60(result, r5_1);
                    else if (result == 0x47)
                        *r5_1;
                }
            }
            else if (result == 7)
                sub_6e36();
            else
            {
                if (result <= 7)
                {
                    void* r0;
                    void* r1_2;
                    r0 = sub_13f18(result, *0x20b3d0, entry_r2, result);
                    *(r0 * 2);
                    r4 = 0x20b38c;
                    result = *(r1_2 * 2);
                }
                
                if (result == 0x11)  /* "Y02_3.00.33_250117" */
                    sub_6fc2(*r5_1);
                else if (result == 0x12)  /* "02_3.00.33_250117" */
                    sub_6f2c();
                else if (result != 0x13 && result == 0x21)  /* "2_3.00.33_250117" */  /* "17" */
                    sub_686c(result, 2);
            }
        }
        
        result = 0;
        *(r4 + 1) = 0;
    }
    
    return result;
}

int32_t sub_71a4(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    *0x20b7da = 0;
    int32_t result = sub_5bbe(arg1, arg2, arg3, arg4);
    *0x20b7d8 = 0;
    return result;
}

int32_t sub_71b4()
{
    if (*0x20b7da)
    {
        0xff7ef70c(0x20b7dc);
        *0x20b7da = 0;
    }
    
    *0x20b7d8 = 2;
    return 2;
}

uint32_t sub_71ce()
{
    uint32_t r0 = *0x20b7d9;
    
    if (!r0)
    {
        *0x20b7d8 = 0;
        return 0;
    }
    
    int32_t entry_r1;
    int32_t entry_r2;
    int32_t entry_r3;
    sub_5be0(r0, entry_r1, entry_r2, entry_r3);
    *0x20b7d8 = 1;
    return sub_7244();
}

uint32_t sub_71ec(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    sub_5be0(arg1, arg2, arg3, arg4);
    *0x20b7d8 = 1;
    *0x20b7d9 = 1;
    return sub_7244();
}

uint32_t sub_7200()
{
    uint32_t result = *0x20b7d8;
    
    if (result)
        return result;
    
    int32_t entry_r1;
    int32_t entry_r2;
    int32_t entry_r3;
    /* tailcall */
    return sub_71ec(result, entry_r1, entry_r2, entry_r3);
}

int32_t sub_720c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    sub_5bbe(arg1, arg2, arg3, arg4);
    *0x20b7d8 = 0;
    *0x20b7d9 = 0;
    return 0x20b7d8;
}

int32_t sub_723e() __pure
{
    return;
}

int32_t sub_7240() __pure
{
    return;
}

int32_t sub_7242() __pure
{
    return;
}

uint32_t sub_7244()
{
    uint32_t result = *0x20b7da;
    
    if (result)
    {
        0xff7ef70c(0x20b7dc);
        result = 0;
        *0x20b7da = 0;
    }
    
    return result;
}

int32_t sub_7280(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    var_10 = 0xe;
    *var_10[2] = 9;
    return sub_8e0(&var_10, &var_10, arg3, arg4);
}

int32_t sub_7294(int32_t arg1)
{
    *0x20b7ec = arg1;
    int32_t entry_r2;
    int32_t entry_r3;
    /* tailcall */
    return sub_7280(arg1, 0x20b7e8, entry_r2, entry_r3);
}

uint32_t sub_729a(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_18 = r3;
    int32_t r5 = arg2;
    uint32_t result = *0x2099ed;
    
    if (result == 2)
    {
        if (*0x20b7eb)
        {
            0xff7ef70c(0x20b7e0);
            *0x20b7eb = 0;
        }
        
        result = *0x20b7e8;
        
        if (arg1 == 4)
        {
            if (result != 4)
            {
                *0x20b7e8 = 4;
                return sub_7294(0x83e12c);
            }
        }
        else if (result != 4)
        {
            if (*0x20b7e9 << 0x18 >= 0)  /* "0.33_250117" */
            {
                if (result != arg1)
                {
                    if (!arg1)
                        result = sub_7294(0x83e140);
                    else if (arg1 == 1)
                        result = sub_7294(0x2087cc);
                    else if (arg1 == 2)
                    {
                        result = sub_7294(0x83e144);
                        r5 = 0;
                    }
                    else if (arg1 == 3)
                    {
                        result = sub_7294(0x83e148);
                        r5 = 0;
                    }
                    
                    *0x20b7e8 = arg1;
                }
                
                if (!r5)
                    return result;
                
                *0x20b7eb = 1;
                return sub_3704(0x20b7e0, 0x82b2e5, r5, 0);
            }
            
            result = 0x80;
            *0x20b7e9 = arg1 | 0x80;
        }
    }
    
    return result;
}

int32_t j_sub_729a()
{
    /* tailcall */
    return sub_729a(2, 0);
}

int32_t sub_733a()
{
    uint32_t r0 = *0x20b7e9;
    
    if (r0 << 0x18 >= 0)  /* "0.33_250117" */
        return 0;
    
    *0x20b7e9 = 0;
    sub_729a(r0 << 0x1c >> 0x1c, 0);  /* "_250117" */
    return 1;
}

int32_t sub_735a()
{
    *0x20b7ea = 0;
    /* tailcall */
    return sub_733a();
}

uint32_t sub_7362()
{
    *0x20b7e8 = 0;
    *0x20b7ec = 0;
    uint32_t result = *0x2087bc;
    
    if (result == 0xa6c5)
        return result;
    
    0xff81b968(0x2087bc, 0x14);  /* "_3.00.33_250117" */
    *0x2087bc = 0xa6c5;
    return 0xff81b898(0x2087cc, 0x83e130, 4);
}

int32_t sub_7394(int32_t arg1, char* arg2)
{
    int32_t var_1c = arg1;
    int32_t result;
    
    if (!arg1)
    {
        char r0_3 = 1;
        *0x2087be = 1;
        *0x2087bf = 5;
        
        if (*arg2 < 8)
            r0_3 = 0;
        
        *0x2087cd = r0_3;
        *0x2087ce = 0xf;
        result = 0x1e;  /* "50117" */
        *0x2087cf = 0x1e;  /* "50117" */
    }
    else
    {
        result = 0xff81b7f8(0x2087c0, arg2, 0xc);
        
        if (result)
        {
            0xff81b898(0x2087c0, arg2, 0xc);
            int32_t r4 = 0;
            *0x2087be = 2;
            int32_t r1_3;
            
            while (true)
            {
                if (!0xff81b7f8((r4 << 4) + 0x83e14c, arg2, 0xc))
                {
                    *0x2087bf = 5;
                    r1_3 = (r4 << 4) + 0x83e158;
                    break;
                }
                
                r4 += 1;
                
                if (r4 >= 5)
                {
                    *0x2087bf = 1;
                    r1_3 = 0x83e130;
                    break;
                }
            }
            
            return 0xff81b898(0x2087cc, r1_3, 4);
        }
    }
    
    return result;
}

void* sub_7420(int32_t arg1)
{
    void* result = 0x2087cc;
    int32_t r3_2;
    
    if (*0x2087be != 1)
        result = sub_13f18(0x2087cc, 3, arg1, *0x2087bf);
    
    if (*(result + 1) == 1)
        *(result + 1) = 0;
    
    return result;
}

int32_t sub_744e(int32_t arg1, char arg2, int32_t arg3, void* arg4 @ r4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    if (!arg3)
    {
        *(arg4 + 0x13) = arg2;  /* "2_3.00.33_250117" */
        /* tailcall */
        return sub_7476(arg1, 0x83e138, 4);
    }
    
    0xff81b898(arg1, 0x83e134, 4);
    *(arg4 + 0x13) = 2;  /* "2_3.00.33_250117" */
    return 2;
}

int32_t sub_746c(int32_t arg1, void* arg2 @ r4)
{
    *(arg2 + 0x13) = 4;  /* "2_3.00.33_250117" */
    /* tailcall */
    return sub_7476(arg1, 0x83e13c, 4);
}

int32_t sub_7476(int32_t arg1, int32_t arg2, int32_t arg3)
{
    return 0xff81b898();
}

int32_t sub_747c()
{
    int32_t r3;
    int32_t var_18_1 = r3;
    int32_t r2;
    int32_t var_1c_1 = r2;
    int32_t r1;
    int32_t var_20 = r1;
    char* r0 = *0x20b7ec;
    uint32_t r2_1 = r0[3];
    uint32_t r1_3 = r0[2];
    sub_11c10(*0x2099ee, r1_3, r2_1, *r0, 0x1f4, (r1_3 << 1) - 2, (r2_1 << 1) - 2);
    *0x20b7ea = 1;
    return sub_3704(0x20b7e4, 0x82b30b, 0x1388, 0);
}

int32_t sub_74ba() __pure
{
    return;
}

uint32_t sub_74bc()
{
    *0x20b7e8 = 2;
    sub_7568();
    uint32_t result = *0x20b7eb;
    
    if (result)
    {
        sub_3730(0x20b7e0);
        result = 0;
        *0x20b7eb = 0;
    }
    
    return result;
}

uint32_t sub_74dc()
{
    return sub_7568();
}

uint32_t sub_74e4()
{
    uint32_t result = *0x20b7ea;
    
    if (!result)
        return result;
    
    return 1;
}

uint32_t sub_74f0()
{
    return *0x20b7e8;
}

int32_t sub_74f6()
{
    uint32_t r0 = *0x20b7e8;
    
    if (!r0)
        sub_729a(2, 0);
    else if (r0 == 1)
    {
        sub_729a(0, 0);
        return 1;
    }
    
    return 0;
}

uint32_t sub_751c()
{
    uint32_t result = *0x20b7e8;
    
    if (result != 3)
        return result;
    
    /* tailcall */
    return sub_729a(0, 0x2710);
}

uint32_t sub_752c()
{
    uint32_t result = sub_5bae();
    
    if (result)
    {
        result = *0x20b7e8;
        
        if (!result)
            return sub_729a(3, 0);
    }
    
    return result;
}

uint32_t sub_7548()
{
    uint32_t result = *0x20b7e8;
    
    if (!result)
        return result;
    
    /* tailcall */
    return sub_729a(0, 0x927c0);
}

uint32_t sub_7558()
{
    uint32_t result = *0x20b7e8;
    
    if (result == 2)
        return result;
    
    /* tailcall */
    return sub_729a(2, 0);
}

uint32_t sub_7568()
{
    uint32_t result = sub_733a();
    
    if (!result)
    {
        result = *0x20b7ea;
        
        if (result)
        {
            sub_3730(0x20b7e4);
            result = 0;
            *0x20b7ea = 0;
        }
    }
    
    return result;
}

int32_t sub_75b0()
{
    if (!*0x20b7f4)
        return 0x20b7f0;
    
    *0x20b7f0 = 0;
    return 0xff7ef6e4(0x20b7f4, 0x1388);
}

uint32_t sub_75c8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    
    if (!*0x20b7f0)
    {
        var_10 = 0xe;
        *var_10[2] = 1;
        sub_8e0(&var_10, &var_10, arg3, arg4);
        return sub_75b0();
    }
    
    uint32_t result = *0x2099f0 << 8 | *0x2099ef;
    
    if (result * ((*0x2099f2 << 8 | *0x2099f1) + 1) >= 0x64)
        return result;
    
    return 0xff7e1af8(0x23103002, 0x880116c, 0);
}

int32_t sub_7630() __pure
{
    return;
}

int32_t sub_768a()
{
    int32_t result = *0x20b7f8;
    
    if (!result)
        return result;
    
    return 0xff7ef6e4(0x20b7f8, 0x4e20);
}

int32_t sub_76a0()
{
    if (!*0x20b7f4)
        return 0x20b7f0;
    
    *0x20b7f0 = 0;
    return 0xff7ef70c(0x20b7f4, 0);
}

int32_t sub_76b6(int32_t arg1, uint32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t var_20 = arg2;
    char* r0;
    int32_t r3;
    r0 = sub_11e70(arg1, arg2, arg3, arg4);
    
    if (r0 && *r0)
    {
        if (r0[2] << 0x1c >= 0)  /* "_250117" */
        {
            sub_11aae(arg1, &var_20, &var_18, r3);
            
            if (!var_18)
            {
                0xff81b898(arg2, &var_20, 6);
                return 1;
            }
        }
        else
        {
            int32_t r0_4 = 0xff7e1e2e(0x23300000);
            var_20 = r0[0x16];  /* ".00.33_250117" */
            0xff7e1af8(0x23103002, 0x8801214, 2, r0_4, var_20, arg3);
            
            if (!r0[0x16])  /* ".00.33_250117" */
            {
                0xff81b898(arg2, &r0[0x10], 6);  /* "RY02_3.00.33_250117" */
                return 1;
            }
        }
    }
    
    return 0;
}

void sub_7760(int32_t arg1)
{
    uint32_t r1 = *0x20b7fc;
    *(0x20b800 + (r1 << 2)) = arg1;
    *0x20b7fc = r1 + 1;
}

uint32_t sub_7772()
{
    uint32_t r4 = 0;
    uint32_t result;
    
    while (true)
    {
        result = *0x20b7fc;
        
        if (r4 >= result)
            break;
        
        int32_t r0_3 = **(0x20b800 + (r4 << 2));
        
        if (r0_3)
            r0_3();
        
        r4 = r4 + 1;
    }
    
    return result;
}

uint32_t sub_7796()
{
    uint32_t r4 = 0;
    uint32_t result;
    
    while (true)
    {
        result = *0x20b7fc;
        
        if (r4 >= result)
            break;
        
        int32_t r0_3 = *(*(0x20b800 + (r4 << 2)) + 4);
        
        if (r0_3)
            r0_3();
        
        r4 = r4 + 1;
    }
    
    return result;
}

uint32_t sub_77ba()
{
    uint32_t r4 = 0;
    uint32_t result;
    
    while (true)
    {
        result = *0x20b7fc;
        
        if (r4 >= result)
            break;
        
        int32_t r0_3 = *(*(0x20b800 + (r4 << 2)) + 8);
        
        if (r0_3)
            r0_3();
        
        r4 = r4 + 1;
    }
    
    return result;
}

int32_t sub_77de()
{
    if (sub_1b6c() == 4)
        return 0;
    
    for (uint32_t i = 0; i < *0x20b7fc; i = i + 1)
    {
        int32_t r0_3 = *(*(0x20b800 + (i << 2)) + 0xc);
        
        if (r0_3)
        {
            int32_t result = r0_3();
            
            if (!result)
                return result;
        }
    }
    
    return 1;
}

uint32_t sub_7814()
{
    int32_t r3;
    int32_t var_18 = r3;
    *0xe000e180 = 1;
    uint32_t r4 = 0;
    
    while (true)
    {
        uint32_t result = *0x20b7fc;
        
        if (r4 >= result)
        {
            *0xe000e280 = 1;
            return result;
        }
        
        int32_t r0_3 = *(*(0x20b800 + (r4 << 2)) + 0x10);  /* "RY02_3.00.33_250117" */
        
        if (r0_3)
        {
            result = r0_3();
            
            if (result)
            {
                *0xe000e280 = 1;
                return result;
            }
        }
        
        r4 = r4 + 1;
    }
}

uint32_t sub_7846()
{
    sub_b328();
    sub_2804();
    sub_9552();
    return sub_7772();
}

uint32_t sub_7870()
{
    return *0x208469;
}

void sub_7876(char arg1)
{
    *0x208469 = arg1;
}

uint32_t sub_787c()
{
    return *0x20b840;
}

void sub_7882(char arg1)
{
    *0x20b840 = arg1;
}

void sub_7888(char arg1, int32_t arg2)
{
    *0x20b848 = arg1;
    *0x20b84c = arg2;
}

int32_t sub_7892(int32_t arg1)
{
    int32_t r3;
    int32_t var_18 = r3;
    *0x208469 = 0;
    sub_7888(0, 0);
    0xff81b968(0x20b850, 0xbc);  /* "####" */
    *0x20b850 = 2;
    *0x20b892 = arg1;
    
    if (arg1 == 4 || arg1 == 7 || arg1 == 8)
        *0x20b880 = 1;
    
    *0x20b88c = sub_18a0() + 3;
    *0x20b890 = 0x1951;
    *0x20b898 = 1;
    *0x20b858 = sub_9178();
    *0x20b86c = sub_9180();
    *0x20b89e = 0;
    0xff7ef6e4(0x20b844, 0x3e8);
    char r0_4;
    
    if (arg1 == 8)
        r0_4 = 1;
    else if (arg1 > 8)
    {
        if (arg1 == 9)
            r0_4 = 5;
        else if (arg1 == 0x16)  /* ".00.33_250117" */
            r0_4 = 6;
        else if (arg1 == 0x18)  /* "0.33_250117" */
            r0_4 = 7;
        else
            r0_4 = 0xa;
    }
    else if (arg1 == 3)
        r0_4 = 2;
    else if (arg1 == 4)
        r0_4 = 4;
    else if (arg1 != 7)
        r0_4 = 0xa;
    else
        r0_4 = 3;
    
    int32_t r1_1;
    
    if (!*0x2086e4)
        r1_1 = 0x46;
    else
        r1_1 = 0x4b;
    
    int32_t r1_2;
    int32_t r2;
    r1_2 = sub_14ca8(r0_4, r1_1);
    return sub_b55a(1, r1_2, r2);
}

int32_t sub_7950()
{
    int32_t result = *0x20b89e;
    
    if (result >= 0x3c)
    {
        result = *0x208852;
        
        if (result == 1)
        {
            if (*0x20b88c < 0x25980600)
                *0x20b88c = sub_18a0() - *0x20b89a - *0x20b89e + 3;
            
            if (*0x20b880)
            {
                int32_t r1_3 = *0x20b89e;
                *0x20b8a2 = sub_12b3e(*0x20b8a0, r1_3);
                *0x20b896 = sub_12b2a(0x3c * *0x20b8b8, r1_3);
            }
            
            int32_t r1_5 = *0x20b87c;
            
            if (!r1_5)
                *0x20b893 = 0;
            else
                *0x20b893 = sub_12b2a(*0x20b878, r1_5);
            
            *0x20b894 = 0;
            *0x20b895 = 0;
            
            if (*0x20b841)
            {
                int32_t r0_16 = sub_12b3e(*0x20b89e - *0x20b89c, *0x20b898);
                
                for (int32_t i = 0; i < r0_16; i += 1)
                {
                    uint32_t r2_1 = *0x20b894;
                    uint32_t r3_1 = *(i + 0x20b8bc);
                    
                    if (r2_1 > r3_1 || !r2_1)
                        *0x20b894 = r3_1;
                    
                    uint32_t r2_2 = *(i + 0x20b8bc);
                    
                    if (*0x20b895 < r2_2)
                        *0x20b895 = r2_2;
                }
            }
            
            return sub_803a();
        }
    }
    
    return result;
}

int32_t sub_7a08()
{
    int32_t r1;
    int32_t r2;
    r1 = 0xff7ef70c(0x20b844);
    sub_b540(1, r1, r2);
    sub_7950();
    sub_7888(0, 0);
    sub_14ca8(0, 0);
    *0x20b850 = 0;
    return 0;
}

int32_t sub_7a3a()
{
    /* tailcall */
    return sub_7a08();
}

int32_t sub_7a3e(int32_t arg1)
{
    if (*0x20b850)
        sub_7a08();
    
    sub_7892(arg1);
    *0x208468 = arg1;
    *0x20b841 = 0;
    return 0;
}

int32_t sub_7a64()
{
    *0x20b850 = 1;
    return 1;
}

int32_t sub_7a6e()
{
    *0x20b850 = 1;
    return 1;
}

int32_t sub_7a78()
{
    *0x20b850 = 2;
    *0x20b858 = sub_9178();
    int32_t result = sub_9180();
    *0x20b86c = result;
    return result;
}

int32_t j_sub_7a78()
{
    /* tailcall */
    return sub_7a78();
}

void* sub_7a92(int32_t* arg1)
{
    int32_t r2 = *0x20b84c;
    *arg1 = *0x20b848;
    arg1[1] = r2;
    return &arg1[2];
}

int32_t sub_7a9c()
{
    if (*0x20b841)
        goto label_7ac6;
    
    int32_t result;
    
    if (sub_cd0c() == 2)
    {
        *0x20b841 = 1;
        *0x20b89c = *0x20b89e;
    label_7ac6:
        uint32_t r0_4 = sub_cd0c();
        uint32_t r5_1;
        
        if (r0_4 == 2)
        {
            r5_1 = sub_cd12();
            *0x20b864 = 0;
        }
        else if (r0_4 == 3)
        {
            r5_1 = 0;
            *0x20b864 += 1;
        }
        else
        {
            r5_1 = 0;
            *0x20b864 = 0;
        }
        
        if (r5_1 - 0x28 <= 0xb4)
        {
            *0x20b878 += r5_1;
            *0x20b87c += 1;
            sub_14d44(r5_1);
        }
        
        int32_t r1_3;
        result = sub_12b3e(*0x20b89e - *0x20b89c, *0x20b898);
        
        if (!r1_3)
        {
            *(*0x20b854 + 0x20b8bc) = r5_1;
            result = *0x20b854 + 1;
            *0x20b854 = result;
            
            if (result >= 0x50)
            {
                *0x20b898 <<= 1;
                *0x20b854 = 0x28;
                int32_t r0_21 = 0;
                int32_t r2_3;
                
                do
                {
                    *(r0_21 + 0x20b8bc) = *((r0_21 << 1) + 0x20b8bc);
                    r2_3 = *0x20b854;
                    r0_21 += 1;
                } while (r2_3 > r0_21);
                
                return 0xff81b964(r2_3 + 0x20b8bc, 0x28);
            }
        }
    }
    else
    {
        result = *0x20b864 + 1;
        *0x20b864 = result;
    }
    
    return result;
}

int32_t sub_7b54()
{
    int32_t result;
    
    if (*0x20b850 == 1)
    {
        result = *0x20b89a + 1;
        *0x20b89a = result;
    }
    else
    {
        result = *0x20b89e + 1;
        *0x20b89e = result;
        
        if (result > 0)
        {
            uint32_t r0_3 = sub_14a0c();
            uint32_t r0_4 = sub_149fc();
            sub_91d2(r0_4);
            sub_91de(r0_3);
            
            if (*0x20b880)
            {
                int32_t r5_1 = sub_9178() - *0x20b858;
                *0x20b858 = sub_9178();
                
                if (r5_1 < 0)
                    r5_1 = 0;
                
                *0x20b8b8 += r5_1;
                int32_t r5_2 = *0x20b85c + r5_1;
                *0x20b85c = r5_2;
                int32_t r0_13 = *0x20b860 + r0_4;
                *0x20b860 = r0_13;
                
                if (!sub_12b3e(*0x20b89e, 0xa))
                {
                    if (!r5_2)
                    {
                        *0x20b870 = 0;
                        *0x20b874 = 0;
                    }
                    else
                    {
                        if (!*0x20b870 && r5_2 > 0xf)
                            *0x20b85c = r5_2 - 0xa;
                        
                        int32_t r0_19 = sub_12b2a(0x3c * *0x20b85c, 0xa);
                        *0x20b85c = 0;
                        *0x20b870 = r0_19;
                        uint32_t r0_22 = sub_12b2a(r0_13, 0xa);
                        *0x20b874 = r0_22;
                        
                        if (r0_22 > *0x20b8a4)
                            *0x20b8a4 = r0_22;
                        
                        *0x20b860 = 0;
                    }
                    
                    sub_377e();
                }
                
                uint32_t r0_25 = *0x20b888 + r0_4;
                *0x20b888 = r0_25;
                
                if (r0_25 >= 0x64)
                {
                    int16_t r0_26;
                    int16_t r1_4;
                    r0_26 = sub_12b2a(r0_25, 0x64);
                    *0x20b8a0 += r0_26;
                    *0x20b888 = r1_4;
                }
            }
            
            sub_9180();
            *0x20b86c = sub_9180();
            *0x20b8a8 += r0_3;
            sub_7a9c();
            
            if (*0x20b89e >= 0x4d58 || *0x20b864 >= 0x78)
                sub_7a08();
            
            char var_28;
            sub_7a92(&var_28);
            result = &var_28;
            uint32_t r1_6 = var_28;
            
            if (r1_6)
            {
                result = *0x208469;
                
                if (!result)
                {
                    if (r1_6 == 1)
                        result = sub_12b3e(*0x20b89e, 0x3c);
                    else if (r1_6 == 2)
                    {
                        bool cond:0_1 = !sub_166c();
                        uint32_t r0_36 = *0x20b8a0;
                        
                        if (cond:0_1)
                            result = sub_12b2a(r0_36, 0x3e8);
                        else
                        {
                            int32_t r0_37;
                            int32_t r1_7;
                            r0_37 = j_sub_134d8(r0_36);
                            int32_t r0_38;
                            int32_t r1_8;
                            r0_38 = sub_13530(r0_37, r1_7, 0xdad5a40c, 0x3fe3e245);
                            int32_t r0_39;
                            int32_t r1_9;
                            r0_39 = sub_12fdc(r0_38, r1_8, 0, 0x408f4000);
                            result = sub_13424(r0_39, r1_9);
                        }
                    }
                    else if (r1_6 == 3)
                        result = sub_12b2a(*0x20b8a8, 0x3e8);
                    
                    int32_t var_24;
                    
                    if (var_24 <= result)
                    {
                        result = 1;
                        *0x208469 = 1;
                    }
                }
            }
        }
    }
    
    return result;
}

uint32_t sub_7c84(uint32_t arg1, int32_t arg2, void* arg3 @ r4, void* arg4 @ r6, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    uint32_t result = arg1;
    
    if (arg2)
    {
        result = *0x208469;
        
        if (!result)
        {
            if (arg2 == 1)
                result = sub_12b3e(*(arg3 + 0xe), 0x3c);
            else if (arg2 == 2)
            {
                bool cond:0_1 = !sub_166c();
                uint32_t r0_1 = *(arg3 + 0x10);  /* "RY02_3.00.33_250117" */
                
                if (cond:0_1)
                    result = sub_12b2a(r0_1, 0x3e8);
                else
                {
                    int32_t r0_2;
                    int32_t r1;
                    r0_2 = j_sub_134d8(r0_1);
                    int32_t r0_3;
                    int32_t r1_1;
                    r0_3 = sub_13530(r0_2, r1, 0xdad5a40c, 0x3fe3e245);
                    int32_t r0_4;
                    int32_t r1_2;
                    r0_4 = sub_12fdc(r0_3, r1_1, 0, 0x408f4000);
                    result = sub_13424(r0_4, r1_2);
                }
            }
            else if (arg2 == 3)
                result = sub_12b2a(*(arg4 + 0x58), 0x3e8);
            
            if (arg5 <= result)
            {
                result = 1;
                *0x208469 = 1;
            }
        }
    }
    
    return result;
}

int32_t j_sub_7b54()
{
    /* tailcall */
    return sub_7b54();
}

uint32_t sub_7cf0()
{
    return *0x208468;
}

void sub_7cf6(char arg1)
{
    *0x208468 = arg1;
}

int32_t sub_7cfc()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    sub_8026();
    return 0xff7ef684(0x20b844, "sports_mode_timer", 1, 0x7d0, 1, 0x82bc9f);
        /* "17 10:58:10 2022" */
}

int32_t sub_7d48(uint32_t arg1, char* arg2)
{
    *arg2 = 2;
    arg2[1] = arg1;
    int32_t r0_1;
    int32_t r2_2;
    int32_t r3_1;
    r0_1 = sub_13f18(&arg2[2], &arg2[1], arg1, arg1);
    int32_t r1_2;
    int32_t r2_3;
    int32_t r3_3;
    r1_2 = 0xff81b898(r0_1, r2_2, 4, r3_1 & (r2_2 - arg2 + 0x33));  /* "2_V3.0" */
    /* tailcall */
    return sub_7d88(*arg2 + 4, arg2, r1_2, r2_3, r3_3);
}

int32_t sub_7d80(char* arg1, void* arg2 @ r5)
{
    *arg1 = *(arg2 + 0x12);  /* "02_3.00.33_250117" */
    int32_t r4;
    /* tailcall */
    return sub_7df2(arg1, *(arg2 + 0x13), r4);  /* "2_3.00.33_250117" */
}

uint32_t sub_7d88(char arg1, char* arg2 @ r4, int32_t arg3, int32_t arg4, int32_t arg5)
{
    *arg2 = arg1;
    return *arg2;
}

int32_t sub_7d8e(char* arg1, void* arg2 @ r5)
{
    *arg1 = *(arg2 + 0x14);  /* "_3.00.33_250117" */
    int32_t r4;
    /* tailcall */
    return sub_7df2(arg1, *(arg2 + 0x15), r4);  /* "3.00.33_250117" */
}

int32_t sub_7da2(char* arg1, void* arg2 @ r5)
{
    *arg1 = *(arg2 + 0x16);  /* ".00.33_250117" */
    int32_t r4;
    /* tailcall */
    return sub_7df2(arg1, *(arg2 + 0x17), r4);  /* "00.33_250117" */
}

int32_t sub_7daa(char* arg1, void* arg2 @ r5)
{
    *arg1 = *(arg2 + 0x18);  /* "0.33_250117" */
    int32_t r4;
    /* tailcall */
    return sub_7df2(arg1, *(arg2 + 0x19), r4);  /* ".33_250117" */
}

int32_t sub_7db2(char* arg1, char* arg2 @ r4, void* arg3 @ r5)
{
    *arg1 = *(arg3 + 7);
    /* tailcall */
    return sub_7d88(*arg2 + 1, arg2);
}

int32_t sub_7dd6(char* arg1, char* arg2 @ r4, void* arg3 @ r5)
{
    *arg1 = *(arg3 + 0xa);
    /* tailcall */
    return sub_7d88(*arg2 + 1, arg2);
}

int32_t sub_7dec(char* arg1, void* arg2 @ r5)
{
    *arg1 = *(arg2 + 0xe);
    int32_t r4;
    /* tailcall */
    return sub_7df2(arg1, *(arg2 + 0xf), r4);
}

int32_t sub_7df2(void* arg1, char arg2, char* arg3 @ r4)
{
    *(arg1 + 1) = arg2;
    /* tailcall */
    return sub_7d88(*arg3 + 2, arg3);
}

uint32_t sub_7e02(void* arg1, char* arg2)
{
    *arg2 = 2;
    void* r5 = &arg2[2];
    arg2[1] = *(arg1 + 6);
    int32_t var_28;
    __builtin_memcpy(&var_28, 
        "\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0d\x13\x00\x01\x02\x04\x07\x08\x09\x00\x00", 0x14);
        /* "_3.00.33_250117" */
    uint32_t r0 = *(arg1 + 6);
    char r0_3;
    
    if (r0 == 4 || r0 == 7 || r0 == 8)
    {
        for (int32_t i = 0; i < 0xb; )
        {
            int32_t r0_6;
            char* r4_2;
            r0_6 = sub_7d48(*(&var_28 + i), r5);
            r5 += r0_6;
            r0_3 = *r4_2 + r0_6;
            i += 1;
            *r4_2 = r0_3;
        }
    }
    else
    {
        for (int32_t i_1 = 0; i_1 < 6; )
        {
            int32_t var_1c;
            int32_t r0_2;
            char* r4_1;
            r0_2 = sub_7d48(*(&var_1c + i_1), r5);
            r5 += r0_2;
            r0_3 = *r4_1 + r0_2;
            i_1 += 1;
            *r4_1 = r0_3;
        }
    }
    
    return r0_3;
}

int32_t sub_7e70(char* arg1)
{
    uint32_t r5 = *arg1;
    uint8_t var_2a8 = r5;
    int32_t var_1c;
    0xff81b898(&var_1c, &arg1[1], 4);
    char var_30;
    int32_t r2_1;
    
    if (r5 - 1 < 0xee)
    {
        void var_b0;
        uint8_t var_2e;
        
        if (sub_8112(var_1c, &var_b0))
        {
            var_30 = 0;
            int16_t var_a0;
            uint32_t r0_4 = var_a0;
            int16_t var_a4;
            int32_t r6_1;
            int16_t var_9e;
            
            if (!r0_4)
                r6_1 = 0;
            else
                r6_1 = sub_12b3e(var_9e - r0_4 + 1, var_a4);
            uint32_t r7_1 = sub_12b2a(r6_1 + 0x1f3, 0x1f4);
            uint8_t var_2f_1 = r7_1;
            var_2e = r7_1 >> 8;
            char var_2d_1 = var_a4;
            char var_2c_1 = 1;
            char var_2b_1 = 0x11;  /* "Y02_3.00.33_250117" */
            int32_t result = sub_674e(0x44, &var_30, 6);
            
            for (int32_t i = 0; i < r7_1; i += 1)
            {
                var_2a8 = i + 1;
                char var_2a7_1 = 0;
                int32_t r5_1 = r6_1;
                
                if (r6_1 > 0x1f4)
                    r5_1 = 0x1f4;
                
                void var_2a6;
                0xff81b898(&var_2a6, i * 0x1f4 + &var_b0 + 0x30, r5_1);  /* "RY02_V3.0" */
                result = sub_674e(0x45, &var_2a8, r5_1 + 2);
            }
            
            return result;
        }
        
        var_30 = 1;
        uint8_t var_2f_2 = r5;
        0xff81b898(&var_2e, &var_1c, 4);
        r2_1 = 6;
    }
    else
    {
        var_30 = 2;
        uint8_t var_2f = r5;
        r2_1 = 2;
    }
    
    return sub_674e(0x44, &var_30, r2_1);
}

void sub_7f60(int32_t arg1, char* arg2)
{
    if (arg1 == 0x41)
    {
        int32_t var_40 = 0;
        0xff81b898(&var_40, arg2, 4);
        uint8_t i_1 = 0;
        int32_t r4_1 = 1;
        uint32_t i;
        
        do
        {
            void var_3c;
            
            if (!sub_8162(var_40, i_1, &var_3c))
                break;
            
            r4_1 += sub_7e02(&var_3c, &(&i_1)[r4_1]);
            i = i_1 + 1;
            i_1 = i;
        } while (i < 0xa);
        sub_674e(0x42, &i_1, r4_1);
    }
    else if (arg1 == 0x43)
        sub_7e70(arg2);
}

int32_t sub_7fd8()
{
    for (int32_t i = 0; i < 2; i += 1)
        sub_8290(i);
    
    *0x20b921 = 0;
    *0x20b922 = 0;
    *0x20b924 = 0;
    return 0;
}

int32_t sub_7ff4(int32_t arg1)
{
    if (*0x20b924 <= arg1)
        return 0;
    
    int32_t r0_3 = (*0x20b921 << 0xc) + *0x20b922 - (arg1 << 8) - 0xff;
    int32_t r0_4 = r0_3 - 1;
    
    if (r0_3 - 1 < 0)
        r0_4 += 0x2000;
    
    sub_827e(r0_4, 0x20b88c, 0x80);
    return 1;
}

int32_t sub_8026()
{
    if (*0x20b920)
        return 0x20b920;
    
    *0x20b920 = 1;
    return sub_829e();
}

int32_t sub_803a()
{
    sub_30a4(0x20b88c, (*0x20b921 << 0xc) + *0x20b922 + 0x872000, 0x80);
    uint32_t r1_4 = *0x20b922 + 0x100;
    *0x20b922 = r1_4;
    uint32_t r0_4 = *0x20b924;
    
    if (r0_4 < 0xa)
        *0x20b924 = r0_4 + 1;
    
    if (r1_4 >= 0x1000)
    {
        *0x20b922 = 0;
        int32_t r0_6 = 1 & ~*0x20b921;
        *0x20b921 = r0_6;
        sub_8290(r0_6);
    }
    
    return sub_529c(7);
}

int32_t j_sub_7fd8()
{
    /* tailcall */
    return sub_7fd8();
}

int32_t sub_8088(char* arg1, int32_t arg2, int32_t arg3)
{
    uint32_t r3;
    uint32_t var_18_1 = r3;
    int32_t result = arg2;
    int32_t r1 = *0x20b89e;
    
    if (r1 <= result && !arg3)
    {
        0xff81b898(arg1, 0x20b8bc, *0x20b854);
        return *0x20b854;
    }
    
    uint32_t r2 = *0x20b89c;
    
    if (!r2)
        return 0;
    
    int32_t result_1 = sub_12b3e(r1 - r2 + 1, *0x20b898);
    
    if (result_1 <= 1)
    {
        result = result_1;
        *arg1 = *0x20b8bc;
    }
    else
    {
        int32_t r0_2 = j_sub_139b4(result);
        int32_t i = 0;
        var_18_1 = sub_137d8(sub_139fc(result_1), r0_2);
        
        for (; i < result; i += 1)
            arg1[i] = *(0x20b8bc + sub_13938(sub_19964(sub_139fc(i), var_18_1, i)));
    }
    
    return result;
}

int32_t sub_8112(int32_t arg1, int32_t arg2)
{
    int32_t var_1c = arg1;
    uint32_t r1 = *0x20b922;
    int32_t r0_3 = (*0x20b921 << 0xc) - 0x100;
    int32_t r4 = r1 + r0_3;
    
    if (r1 + r0_3 < 0)
        r4 += 0x2000;
    
    int32_t r5 = 0;
    
    while (true)
    {
        int32_t var_20;
        sub_827e(r4, &var_20, 4);
        int32_t r0_5 = var_20;
        
        if (r0_5 != 0xffffffff)
        {
            if (r0_5 == arg1)
                break;
            
            int32_t r4_1 = r4 - 0xff;
            r4 = r4_1 - 1;
            
            if (r4_1 - 1 < 0)
                r4 += 0x2000;
            
            r5 += 1;
            
            if (r5 < 0xa)
                continue;
        }
        
        return 0;
    }
    
    sub_827e(r4, arg2, 0x80);
    return 1;
}

int32_t sub_8162(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    int32_t r4_1 = (*0x20b921 << 0xc) + *0x20b922 - (arg2 << 8) - 0xff;
    int32_t r4_2 = r4_1 - 1;
    
    if (r4_1 - 1 < 0)
        r4_2 += 0x2000;
    
    sub_827e(r4_2, arg3, 4);
    int32_t r0_3 = *arg3;
    
    if (r0_3 == 0xffffffff || r0_3 <= arg1)
        return 0;
    
    sub_827e(r4_2, arg3, 0x30);  /* "RY02_V3.0" */
    return 1;
}

uint32_t sub_81a6(char* arg1)
{
    *arg1 = 0;
    uint32_t r1 = *0x20b922;
    int32_t r0_3 = (*0x20b921 << 0xc) - 0x100;
    int32_t r5 = r1 + r0_3;
    
    if (r1 + r0_3 < 0)
        r5 += 0x2000;
    
    int32_t r6 = 0;
    uint32_t r0_33;
    
    while (true)
    {
        int32_t var_98;
        sub_827e(r5, &var_98, 0x30);  /* "RY02_V3.0" */
        int16_t var_94;
        
        if (var_94 == 0x1951)
        {
            char var_a0;
            sub_1f9e(&var_a0, var_98 - 0x386cd300);
            arg1[*arg1 * 9 + 6] = 0;
            arg1[*arg1 * 9 + 7] = var_a0;
            char var_9f;
            arg1[*arg1 * 9 + 8] = var_9f;
            char var_9e;
            arg1[*arg1 * 9 + 9] = var_9e;
            char var_9d;
            arg1[*arg1 * 9 + 2] = var_9d;
            char var_9c;
            arg1[*arg1 * 9 + 3] = var_9c;
            char var_9b;
            arg1[*arg1 * 9 + 4] = var_9b;
            char var_92;
            *(*arg1 * 9 + arg1 + 1) = var_92;
            r0_33 = *arg1 + 1;
            *arg1 = r0_33;
            
            if (r0_33 >= 0xa)
                break;
            
            int32_t r5_1 = r5 - 0xff;
            r5 = r5_1 - 1;
            
            if (r5_1 - 1 < 0)
                r5 += 0x2000;
            
            r6 += 1;
            
            if (r6 < 0xa)
                continue;
        }
        
        return *arg1;
    }
    
    return r0_33;
}

uint32_t sub_8278()
{
    return *0x20b924;
}

int32_t sub_827e(int32_t arg1, int32_t arg2, int16_t arg3)
{
    return sub_30ca(arg2, arg1 + 0x872000, arg3);
}

int32_t sub_8290(int32_t arg1)
{
    return sub_3064((arg1 << 0xc) + 0x872000);
}

int32_t sub_829e()
{
    int32_t r6 = 0;
    *0x20b924 = 0;
    int32_t r4 = 0;
    
    while (true)
    {
        int32_t result = r4 << 0xc;
        int32_t r7_1 = 0;
        int32_t r5_1 = 0;
        int32_t result_1 = result;
        
        while (true)
        {
            void var_94;
            sub_827e(result, &var_94, 0x30);  /* "RY02_V3.0" */
            int16_t result_2;
            result = result_2;
            
            if (result == 0xffff)
            {
                if (!r6)
                {
                    r6 = 1;
                    *0x20b922 = r7_1;
                    *0x20b921 = r4;
                }
                
                goto label_8300;
            }
            
            if (result == 0x1951)
            {
                uint32_t r0_1 = *0x20b924;
                
                if (r0_1 < 0xa)
                    *0x20b924 = r0_1 + 1;
                
                result = result_1 + 0x100;
                r5_1 += 1;
                r7_1 += 0x100;
                result_1 = result;
                
                if (r5_1 < 0x10)  /* "RY02_3.00.33_250117" */
                    continue;
                else
                {
                    if (!r6)
                        goto label_8306;
                    
                label_8300:
                    result = *0x20b924;
                    
                    if (result < 0xa)
                        goto label_8306;
                }
            }
            else
            {
                r6 = 0;
            label_8306:
                r4 += 1;
                
                if (r4 < 2)
                    break;
            }
            
            if (r6)
                return result;
            
            return sub_7fd8();
        }
    }
}

uint32_t sub_8334()
{
    uint32_t result = *0x20b960;
    
    if (result == 1)
    {
        result = *0x20b92c;
        
        if (result < 2)
        {
            result = sub_8cc2(sub_8c9c());
            
            if (!result)
            {
                result = 2;
                *0x20b960 = 2;
            }
        }
    }
    
    return result;
}

uint32_t sub_835c(int32_t arg1, int32_t arg2, uint32_t arg3)
{
    int32_t r6 = arg1;
    uint32_t r4 = arg3;
    int32_t r5 = arg2;
    
    if (r6 < 0)
        r6 += 0x5a0;
    
    if (r5 < 0)
        r5 = arg2 + 0x5a0;
    
    int32_t r1 = r6 + r5;
    int32_t var_2c = r1;
    
    if (r1 >= 0x5a0)
        var_2c = r1 - 0x5a0;
    
    uint32_t var_28 = sub_8cb4();
    
    if (var_2c > 0x438)
        var_28 = var_28 + 1;
    
    uint32_t r0_7 = *0x20b962;
    
    if (!r0_7 || *0x20b95c != var_28)
    {
        0xff81b968(0x20b95c, 0x64);
        *0x20b95c = var_28;
        *0x20b96a = r6;
        *0x20b998 = r5;
        *0x20b970 = 2;
        *0x20b96f = 1;
        *0x20b961 = 1;
        int16_t r6_1 = r5;
        *0x20b962 = r6_1;
        
        if (r5 > 0x37)  /* ".0" */
        {
            char r1_4 = sub_12b3e(sub_814(), 0xa) + 0x2d;
            *0x20b998 = r1_4;
            uint32_t r0_11 = r5 - r1_4;
            *0x20b999 = r0_11;
            *0x20b971 = 3;
            *0x20b96f += 1;
            
            if (r0_11 > 0x1e)  /* "50117" */
            {
                uint32_t r0_12 = sub_814();
                *0x20b99a =
                    *0x20b999 - (r0_12 - (((r0_12 >> 0x1f >> 0x1d) + r0_12) >> 3 << 3) + 0x16);
                    /* ".00.33_250117" */  /* "250117" */  /* "0117" */
                *0x20b999 = r0_12 - (((r0_12 >> 0x1f >> 0x1d) + r0_12) >> 3 << 3) + 0x16;
                    /* ".00.33_250117" */  /* "250117" */  /* "0117" */
                *0x20b972 = 2;
                *0x20b96f += 1;
            }
        }
        
        *0x20b95a = r6_1;
        r4 = 2;
    }
    else
    {
        uint32_t r0_17 = *0x20b96c;
        
        if (r0_17 != r6)
        {
            if (!*0x20b960 || r0_7 < 0x5a || !*0x20b96f || r0_17 < 0x3c || r0_17 > 0x438)
            {
                0xff81b968(0x20b95c, 0x64);
                *0x20b95c = var_28;
                *0x20b96a = r6;
                *0x20b970 = 2;
                *0x20b96f = 1;
                *0x20b961 = 1;
            }
            else
            {
                *0x20b95a = 0;
                *0x20b961 += 1;
                int32_t i = r6 - r0_17;
                
                if (r6 - r0_17 < 0)
                    i += 0x5a0;
                
                while (i)
                {
                    uint32_t r3_1 = *0x20b96f;
                    
                    if (i > 0xff)
                    {
                        *(r3_1 + 0x20b998) = 0xff;
                        i -= 0xff;
                        *(*0x20b96f + 0x20b970) = 0;
                    }
                    else
                    {
                        *(r3_1 + 0x20b998) = i;
                        *(*0x20b96f + 0x20b970) = 0;
                        i = 0;
                    }
                    
                    *0x20b96f += 1;
                }
            }
            
            *0x20b956 = 0;
            *0x20b958 = 0;
            r4 = 2;
            goto label_8598;
        }
        
        if (r4 != 5)
        {
            uint32_t r0_21 = *0x20b956 + 1;
            *0x20b956 = r0_21;
            
            if (r4 != 0xff)
                goto label_8598;
            
            if (r0_21 <= *0x20846a)
            {
                uint32_t r0_31 = *0x20b96f;
                
                if (!r0_31)
                {
                    r4 = 2;
                    goto label_8598;
                }
                
                r4 = *(r0_31 + 0x20b96f);
                
                if (r4 == 2 || r4 == 3 || r4 == 4)
                    goto label_85a8;
                
                r4 = 2;
                goto label_8598;
            }
            
            uint32_t r1_20 = *(0x83e19c + sub_12b2a(*0x20b95a, 0xf)) + (*0x20b958 >> 2);
            
            if (r1_20 > 0x32)  /* "02_V3.0" */
            {
                r4 = 2;
                uint32_t r0_25 = *0x20b96f;
                
                if (r0_25 >= 3)
                {
                    uint32_t r2_3 = *0x20b96e;
                    
                    if (r2_3 < 3 && r1_20 < 0x46)
                    {
                        uint32_t r1_21 = *(r0_25 + 0x20b96f);
                        
                        if (r1_21 == 4)
                        {
                            if (*(r0_25 + 0x20b997) < 0x1e)  /* "50117" */
                                r4 = 4;
                        }
                        else if (r1_21 == 2 && *(r0_25 + 0x20b96e) == 3)
                        {
                            r4 = 4;
                            *0x20b96e = r2_3 + 1;
                        }
                    }
                }
            }
            else
                r4 = 3;
            
            *0x20b956 = 0;
            *0x20b958 = 0;
            uint32_t r0_28 = sub_814();
            *0x20846a = r0_28 - (((r0_28 >> 0x1f >> 0x1e) + r0_28) >> 2 << 2) + 0xe;
                /* "50117" */  /* "0117" */
            goto label_8598;
        }
        
        *0x20b95a = 0;
        *0x20b956 = 0;
        *0x20b958 = 0;
    label_8598:
        uint32_t r0_32 = *0x20b96f;
        
        if (*(r0_32 + 0x20b96f) == r4 || r0_32 >= 0x27)
        {
        label_85a8:
            uint32_t r0_33 = *0x20b96f;
            int32_t r1_28 = *(r0_33 + 0x20b997) + r5;
            
            if (r1_28 <= 0xff)
                *(r0_33 + 0x20b997) = r1_28;
            else
            {
                *(r0_33 + 0x20b970) = r4;
                *(*0x20b96f + 0x20b998) = r5;
                *0x20b96f += 1;
            }
        }
        else
        {
            *(r0_32 + 0x20b998) = r5;
            *(*0x20b96f + 0x20b970) = r4;
            *0x20b96f += 1;
            *0x20b956 = 0;
            *0x20b958 = 0;
        }
        
        *0x20b962 += r5;
        *0x20b95a += r5;
    }
    
    *0x20b96c = var_2c;
    *0x20b92c = r4;
    uint32_t result = *0x20b960;
    
    if (!result)
    {
        result = sub_8cc2(var_2c);
        
        if (result)
        {
            result = 1;
            *0x20b960 = 1;
        }
    }
    
    return result;
}

uint32_t sub_8618(int32_t arg1)
{
    uint32_t r1 = *0x20b96c;
    int32_t r1_1 = r1 - arg1;
    
    if (r1 - arg1 < 0)
        r1_1 += 0x5a0;
    
    uint32_t r3 = *0x20b962 - r1_1;
    *0x20b962 = r3;
    uint32_t r2_2 = arg1;
    *0x20b96c = r2_2;
    
    if (*0x20b960 && r3 >= 0x5a)
    {
        uint32_t r0_1 = *0x20b96f;
        
        if (r0_1 && r2_2 >= 0x3c && r2_2 <= 0x438)
        {
            while (true)
            {
                r0_1 -= 1;
                
                if (r0_1 <= 0)
                    break;
                
                uint32_t r3_1 = *(r0_1 + 0x20b998);
                
                if (r3_1 >= r1_1)
                {
                    if (*(r0_1 + 0x20b998) <= r1_1)
                        *0x20b96f -= 1;
                    else
                        *(r0_1 + 0x20b998) = r3_1 - r1_1;
                    
                    break;
                }
                
                r1_1 -= r3_1;
                *0x20b96f -= 1;
            }
            
            uint32_t r1_2 = *0x20b96f;
            
            if (*(r1_2 + 0x20b96f))
                *(r1_2 + 0x20b96f) = 2;
            
            return sub_8334();
        }
    }
    
    *0x20b962 = 0;
    *0x20b96f = 0;
    *0x20b960 = 0;
    return 0;
}

void sub_869e(uint32_t arg1, int32_t arg2)
{
    if (arg1 < 0x20 && !*0x20b954 && !*0x20b933)  /* "117" */
    {
        uint32_t r0 = *0x20b92e;
        
        if (!r0)
        {
            if (!sub_93d4())
            {
                *0x20b92f = 0;
                *0x20b92c = 1;
                *0x20b932 = 0;
                return;
            }
            
            if (*0x20b942 > 0x96)
            {
                *0x20b92c = 1;
                sub_93dc(7);
                *0x20b932 = 0;
            }
            else if (arg2 - 0x169 >= 0x2cf)
            {
                if (!*0x20b92f)
                {
                    *0x20b938 = 0;
                    *0x20b936 = 0;
                    *0x20b94a = 0;
                    int32_t r0_7 = sub_8cd4(arg2);
                    *0x20b92d = r0_7;
                    char r0_8;
                    
                    r0_8 = r0_7 == 1 ? 0x3c : 0x28;
                    
                    *0x20b930 = r0_8;
                }
                
                uint32_t r0_11 = *0x20b92f + 1;
                *0x20b92f = r0_11;
                uint32_t r1_2 = *0x20b936 + arg1;
                *0x20b936 = r1_2;
                
                if (arg1)
                    *0x20b938 += 1;
                
                if (r0_11 >= 5 && r1_2 > 6 * r0_11)
                {
                    *0x20b92f = 0;
                    *0x20b936 = 0;
                    *0x20b938 = 0;
                }
                
                if (!sub_12b2a(*0x20b92f, 5))
                {
                    if (*0x20b94a > 6)
                    {
                        *0x20b92f = 0;
                        *0x20b936 = 0;
                        *0x20b938 = 0;
                    }
                    
                    *0x20b94a = 0;
                }
                
                uint32_t r0_15 = *0x20b92f;
                uint32_t r1_4 = *0x20b930;
                
                if (r0_15 == r1_4)
                {
                label_877c:
                    sub_93ca();
                    *0x20b935 = 0;
                    return;
                }
                
                if (r0_15 <= r1_4)
                    return;
                
                if (!sub_93d4())
                    *0x20b92c = 1;
                else
                {
                    arg1 = *0x20b942;
                    
                    if (arg1 <= *0x20b930 - 5)
                    {
                        if (*0x20b935)
                            goto label_877c;
                        
                        *0x20b92c = 2;
                        *0x20b945 = 0;
                        uint32_t r7_1 = *0x20b92f;
                        uint32_t r0_20 = sub_12b3e(arg2 - r7_1 + 0x5a1, 0x5a0);
                        *0x20b93a = r0_20;
                        *0x20b93c = arg2;
                        uint32_t r1_8 = r7_1 - 1;
                        *0x20b93e = r1_8;
                        *0x20b92f = 0;
                        sub_835c(r0_20, r1_8, 2);
                        sub_93dc(1);
                        return;
                    }
                    
                    *0x20b935 = 1;
                    
                    if (arg1 <= 0x55)
                        return;
                    
                    *0x20b92c = 1;
                }
                
                *0x20b932 = 0;
            }
        }
        else
            *0x20b92e = r0 - 1;
    }
    
    *0x20b92f = 0;
}

uint32_t sub_87e8(int32_t arg1, int32_t arg2)
{
    uint32_t r0 = *0x20b93e;
    uint32_t r0_3;
    
    if (arg1 < 0x1e)  /* "50117" */
    {
        *0x20b93e = r0 + 1;
        sub_835c(*0x20b93c, 1, 0xff);
        *0x20b93c = arg2;
        
        if (*0x20b934 < 5)
        {
            uint32_t result;
            
            if (*0x20b942 <= 0x96)
            {
                result = *0x20b93e;
                
                if (result >= 0x258 && *0x20b92c >= 2 && result >= 0x384)
                {
                    *0x20b92c = 0;
                    *0x20b92e = 0x10;  /* "RY02_3.00.33_250117" */
                    *0x20b92f = 0;
                    return 0x10;  /* "RY02_3.00.33_250117" */
                }
            }
            else
            {
                *0x20b92c = 1;
                sub_93dc(7);
                *0x20b932 = 0;
                *0x20b92f = 0;
                *0x20b93c = 0;
                *0x20b93e = 0;
                result = sub_8618(*0x20b93a);
                *0x20b93a = 0;
                *0x20b940 = 0;
            }
            
            return result;
        }
        
        *0x20b92c = 1;
        *0x20b932 = 0;
        *0x20b92f = 0;
        uint32_t r0_11 = *0x20b942;
        *0x20b93e -= r0_11;
        r0_3 = sub_12b3e(arg2 - r0_11 + 0x5a0, 0x5a0);
        *0x20b93c = r0_3;
    }
    else
    {
        if ((r0 >= 0x5a && *0x20b960) || (arg1 < 0x5a && !*0x20b954))
        {
            *0x20b92c = 5;
            sub_93dc(2);
            *0x20b92f = 0;
            *0x20b946 = arg2;
            *0x20b945 = 1;
            *0x20b948 = 1;
            *0x20b94c = arg2 + 1;
            
            if (*0x20b954)
                *0x20b948 = 2;
            
            int32_t r0_7 = sub_8cd4(arg2);
            *0x20b92d = r0_7;
            
            if (r0_7 == 1)
            {
                *0x20b930 = 0xa;
                *0x20b944 = 4;
                return 4;
            }
            
            *0x20b930 = 5;
            *0x20b944 = 0xa;
            return 5;
        }
        
        *0x20b92c = 0;
        sub_93dc(5);
        *0x20b92f = 0;
        *0x20b940 = 0;
        *0x20b93e = 0;
        r0_3 = *0x20b93a;
    }
    
    return sub_8618(r0_3);
}

uint32_t sub_88e0(int32_t arg1, int32_t arg2)
{
    char r1 = *0x20b92f;
    
    if (arg1 >= 0x20)  /* "117" */
    {
        *0x20b945 = *0x20b945 + 1 + r1;
        uint32_t r0_5 = *0x20b948 + 1;
        *0x20b948 = r0_5;
        
        if (*0x20b954)
        {
            r0_5 += 1;
            *0x20b948 = r0_5;
        }
        
        *0x20b92f = 0;
        *0x20b94c = arg2;
        uint32_t r0_6 = r0_5;
        
        if (r0_6 < *0x20b944)
            return r0_6;
        
        *0x20b92c = 0;
        *0x20b92f = 0;
        *0x20b92e = 0x10;  /* "RY02_3.00.33_250117" */
        sub_8618(*0x20b93c);
        return sub_93dc(5);
    }
    
    *0x20b92f = r1 + 1;
    
    if (*0x20b934 >= 5)
    {
        *0x20b92c = 1;
        *0x20b932 = 0;
        *0x20b92f = 0;
        *0x20b92e = 0x10;  /* "RY02_3.00.33_250117" */
        sub_93dc(4);
        sub_8618(*0x20b93c);
    }
    
    uint32_t r1_4 = *0x20b930;
    uint32_t r0_11 = *0x20b92f;
    
    if (*0x20b92d == 1)
    {
        if (r0_11 > r1_4)
        {
            if (sub_93d4())
                goto label_8968;
            
            *0x20b92c = 1;
            sub_93dc(4);
            uint32_t r0_19 = sub_8618(*0x20b93c);
            *0x20b932 = 0;
            *0x20b92e = 0x10;  /* "RY02_3.00.33_250117" */
            *0x20b92f = 0;
            return r0_19;
        }
    }
    else if (r0_11 >= r1_4)
    {
    label_8968:
        sub_93dc(3);
        uint32_t r6 = *0x20b93c;
        int32_t r1_5 = sub_12b3e(arg2 - r6 + 0x5a0, 0x5a0);
        sub_835c(r6, r1_5, 5);
        *0x20b92c = 2;
        int16_t r0_17 = *0x20b93e + r1_5;
        *0x20b93e = r0_17;
        *0x20b93c = arg2;
        return r0_17;
    }
    
    return r0_11;
}

uint32_t sub_89aa()
{
    uint32_t r3;
    uint32_t var_18 = r3;
    
    if (sub_8c9c() != *0x20b928)
    {
        var_18 = sub_8c9c();
        uint32_t r4_1 = *0x20b950;
        *0x20b958 += r4_1;
        
        if (r4_1 > 1)
            *0x20b942 = 0;
        else
        {
            uint32_t r0_6 = *0x20b942;
            
            if (r0_6 < 0x5a0)
                *0x20b942 = r0_6 + 1;
        }
        
        int32_t r0_8;
        int32_t r1_1;
        int32_t r2_1;
        r0_8 = sub_93d4();
        
        if (!r0_8)
        {
            uint32_t r0_10 = *0x20b934;
            
            if (r0_10 <= 5)
            {
                *0x20b934 = r0_10 + 1;
                r1_1 = sub_93ca();
            }
        }
        else
        {
            *0x20b934 = 0;
            r1_1 = sub_12b2a(*0x20b942, 0x1e);  /* "50117" */
            
            if (r1_1 == 0x1d && *0x20b92c != 1)  /* "250117" */
                r1_1 = sub_93ca();
        }
        
        uint32_t r0_13 = *0x20b92c;
        int32_t r0_14;
        int32_t r2_2;
        r0_14 = sub_13f18(r0_13, r1_1, r2_1, r0_13, var_18);
        int32_t r6_1 = r0_14 << 0x10;  /* "RY02_3.00.33_250117" */
        sub_869e(r4_1, var_18);
        sub_8334();
        *0x20b954 = r6_1;
        *0x20b950 = r6_1;
        *0x20b928 = sub_8c9c();
    }
    
    return *0x20b92c;
}

uint32_t sub_8a44(int32_t arg1 @ r4, char* arg2 @ r5, int32_t arg3 @ r6, int32_t* arg4 @ r7, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    if (sub_93d4() && arg2[6] == 1)
    {
        *arg2 = arg3;
        sub_93dc(6);
        arg2[3] = arg3;
    }
    else if (arg1 >= 5)
    {
        sub_93ca();
        arg2[6] = 1;
    }
    
    sub_8334();
    *(arg2 + 0x28) = arg3;
    *(arg2 + 0x24) = arg3;
    *arg4 = sub_8c9c();
    return *arg2;
}

uint32_t sub_8a7a()
{
    if (*0x20b960 && *0x20b92c >= 2)
        return *0x20b93e;
    
    return 0;
}

uint32_t sub_8a94()
{
    return *0x20b942;
}

int32_t sub_8a9a()
{
    0xff81b968(0x20b92c, 0x30);  /* "RY02_V3.0" */
    return 0xff81b968(0x20b95c, 0x64);
}

int32_t sub_8ab0(uint32_t arg1, int32_t arg2)
{
    *0x20b950;
    int32_t r0;
    int16_t r1;
    void* r2;
    r0 = sub_13f18(arg1, arg2, 0x20b92c, arg1);
    int16_t result = *(r2 + 0x28) + r1;
    *(r2 + 0x28) = result;
    return result;
}

int32_t sub_8ace(int32_t arg1, int32_t arg2, void* arg3, int32_t arg4 @ r4, int32_t arg5)
{
    int32_t result = arg4 + arg2;
    *(arg3 + 0x24) = result;
    return result;
}

int32_t sub_8ad4(int32_t arg1, int16_t arg2, void* arg3, int32_t arg4)
{
    int16_t result = *(arg3 + 0x1e) + arg2;  /* "50117" */
    *(arg3 + 0x1e) = result;  /* "50117" */
    return result;
}

int32_t sub_8adc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ r4)
{
    /* tailcall */
    return sub_8aec(arg1, arg2, arg3, arg4 + 0x3c);
}

int32_t j_sub_8ae6()
{
    int32_t entry_r1;
    int32_t entry_r2;
    /* tailcall */
    return sub_8ae6(1, entry_r1, entry_r2);
}

int32_t j_sub_8ae6()
{
    int32_t entry_r1;
    int32_t entry_r2;
    /* tailcall */
    return sub_8ae6(0, entry_r1, entry_r2);
}

void sub_8ae6(char arg1, int32_t, void* arg3, int32_t arg4)
{
    *(arg3 + 7) = arg1;
}

int32_t sub_8aea(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4 @ r4)
{
    /* tailcall */
    return sub_8aec(arg1, arg2, arg3, arg4 + 0x1e);  /* "50117" */
}

int32_t sub_8aec(int32_t, int32_t, void* arg3, int32_t arg4 @ r4, int32_t arg5)
{
    *(arg3 + 0x24) = arg4;
}

int32_t sub_8af0(int32_t arg1)
{
    int32_t i = arg1;
    
    if (i > 0x384)
        i = 0x384;
    
    sub_8a9a();
    *0x20b95c = sub_8cb4();
    *0x20b962 = i;
    *0x20b961 = 1;
    *0x20b960 = 2;
    uint32_t r0_3 = sub_12b3e(sub_12b3e(sub_814(), 0x168) + 0x4b0, 0x5a0);
    *0x20b96a = r0_3;
    *0x20b96c = sub_12b3e(r0_3 + i, 0x5a0);
    
    while (i)
    {
        int32_t r1_3 = sub_12b3e(sub_814(), 0x64);
        int32_t i_1;
        char r5_1;
        
        if (r1_3 >= 0x3c)
        {
            if (r1_3 < 0x50)
            {
                r5_1 = 3;
                i_1 = sub_12b3e(sub_814(), 0x1e) + 0xf;  /* "50117" */
                goto label_8baa;
            }
            
            if (r1_3 < 0x5c)
            {
                r5_1 = 4;
                int32_t r1_6 = sub_12b3e(sub_814(), 0x14);  /* "_3.00.33_250117" */
                *0x20b96e += 1;
                i_1 = r1_6 + 0xa;
                goto label_8baa;
            }
            
            if (r1_3 < 0x62)
            {
                r5_1 = 5;
                i_1 = sub_12b3e(sub_814(), 0x14) + 5;  /* "_3.00.33_250117" */
                goto label_8baa;
            }
            
            r5_1 = 0;
            int32_t r1_8 = sub_12b3e(sub_814(), 0x1e);  /* "50117" */
            *0x20b961 += 1;
            i_1 = r1_8 + 0x1e;  /* "50117" */
        }
        else
        {
            r5_1 = 2;
            i_1 = sub_12b3e(sub_814(), 0x5a) + 0x1e;  /* "50117" */
        label_8baa:
            
            if (i <= i_1)
            {
                i_1 = i;
                i = 0;
            }
            else
                i -= i_1;
        }
        
        uint32_t r0_15 = *0x20b96f;
        
        if (r0_15 >= 0x28)
            break;
        
        *(r0_15 + 0x20b970) = r5_1;
        *(*0x20b96f + 0x20b998) = i_1;
        *0x20b96f += 1;
    }
    
    return sub_8e28();
}

uint32_t sub_8bee()
{
    uint32_t result = *0x20b960;
    
    if (!result)
        return result;
    
    return *0x20b92c;
}

int32_t sub_8c00(int32_t arg1)
{
    if (!*0x20b960)
        return 0xff81b968(arg1, 0x64);
    
    *0x20b968 = 0;
    *0x20b964 = 0;
    *0x20b966 = 0;
    
    if (*0x20b961 > 1)
    {
        uint32_t r2_1 = 0;
        int32_t r1_2 = 0;
        
        while (*(r1_2 + 0x20b998))
        {
            r1_2 += 1;
            r2_1 = r2_1 + 1;
            
            if (r1_2 >= 0x28)
                break;
        }
        
        if (*0x20b96f != r2_1)
            *0x20b96f = r2_1;
    }
    
    int32_t i = 0;
    
    for (uint32_t r5 = *0x20b96f; r5 > i; i += 1)
    {
        uint32_t r1_4 = *(i + 0x20b970);
        
        if (r1_4 == 2)
            *0x20b966 += *(i + 0x20b998);
        else if (r1_4 == 3 || r1_4 == 4)
            *0x20b964 += *(i + 0x20b998);
        else if (r1_4 == 5)
            *0x20b968 += *(i + 0x20b998);
    }
    
    return 0xff7dc2f8(arg1, 0x20b95c, 0x64);
}

uint32_t sub_8c92()
{
    return *0x20b960;
}

int32_t j_sub_8a9a()
{
    /* tailcall */
    return sub_8a9a();
}

int32_t sub_8c9c()
{
    return sub_12b2a(sub_12b2a(sub_93c2(), 0x3c), 0x5a0);
}

int32_t sub_8cb4()
{
    return sub_12b2a(sub_93c2(), &data_15180);
}

int32_t sub_8cc2(int32_t arg1) __pure
{
    if (arg1 - 0x3c > 0x12c)
        return 0;
    
    return 1;
}

int32_t sub_8cd4(int32_t arg1) __pure
{
    if (arg1 < 0x564 && arg1 > 0x168)
        return 1;
    
    return 0;
}

void sub_8d0e(int32_t arg1)
{
    for (int32_t i = 0; i < 5; )
    {
        int32_t r2_1 = i << 2;
        i += 1;
        *(0x20ba08 + r2_1) = *(r2_1 + 0x20ba0c);
    }
    
    *0x20ba1c = arg1;
}

int32_t sub_8d26(int16_t* arg1)
{
    *arg1 = *0x20b9cc - *0x20b9d0;
    arg1[1] = *0x20ba00 - *0x20ba04;
    arg1[4] = *0x20b9f8 - *0x20b9fc;
    arg1[2] = sub_12b2a(*0x20b9e4 - *0x20b9e8, 0x64);
    int16_t result = sub_12b2a(*0x20b9dc - *0x20b9e0, 0xa);
    arg1[3] = result;
    return result;
}

int32_t sub_8d64(int16_t* arg1)
{
    *0x20b9cc += *arg1;
    *0x20ba00 += arg1[1];
    *0x20b9f8 += arg1[4];
    *0x20b9e4 += 0x64 * arg1[2];
    int32_t result = *0x20b9dc + 0xa * arg1[3];
    *0x20b9dc = result;
    return result;
}

int32_t sub_8d9c()
{
    int32_t r5 = *0x20b9cc;
    *0x20b9d0 = r5;
    *0x20ba04 = *0x20ba00;
    *0x20b9e0 = 0xa * sub_12b2a(*0x20b9dc, 0xa);
    *0x20b9e8 = 0x64 * sub_12b2a(*0x20b9e4, 0x64);
    int32_t result = *0x20b9f8;
    *0x20b9d4 = r5;
    *0x20b9fc = result;
    return result;
}

int32_t sub_8dce()
{
    void var_20;
    sub_8d26(&var_20);
    void* var_28;
    uint32_t r2;
    int32_t r3;
    
    if (!sub_217a())
    {
        r2 = sub_216a() - 1;
        r3 = 0x118;
        int32_t var_24_1 = 0xc;
        var_28 = &var_20;
    }
    else
    {
        int32_t r4_2 = 0xc * sub_12b2a(sub_217a() + 0x3b, 0x3c) - 8;
        r2 = sub_216a();
        r3 = r4_2;
        int32_t var_24 = 0xc;
        var_28 = &var_20;
    }
    
    sub_3372(0x83e22c, 0x20b9c0, r2, r3, var_28, 0xc);
    return sub_529c(4);
}

int32_t sub_8e28()
{
    int32_t var_68;
    sub_8c00(&var_68);
    return sub_3372(0x83e238, 0x20b9c4, var_68, 0, &var_68, 0x64);
}

uint32_t sub_8e4e()
{
    uint32_t result = *0x208852;
    
    if (result)
    {
        if (sub_12b2a(*0x20b9e4 - *0x20b9e8, 0x64) | (*0x20b9cc - *0x20b9d0)
            | (*0x20ba00 - *0x20ba04) | sub_12b2a(*0x20b9dc - *0x20b9e0, 0xa))
        {
            void var_18;
            sub_8d26(&var_18);
            int32_t r0_7 = sub_217a();
            int32_t r1_6;
            
            if (!r0_7)
                r1_6 = sub_12b2a(sub_183e(), 0x3c);
            
            if (r0_7 || r1_6)
            {
                int32_t r4_2 = 0xc * sub_12b2a(sub_217a() + 0x3b, 0x3c) - 8;
                sub_3372(0x83e22c, 0x20b9c0, sub_216a(), r4_2, &var_18, 0xc);
            }
        }
        
        result = sub_8c92();
        
        if (result)
        {
            sub_8e28();
            return sub_8a9a();
        }
    }
    
    return result;
}

int32_t sub_8eea(int32_t arg1)
{
    *0x20ba00 += arg1;
    return sub_8ab0(0, arg1);
}

uint32_t sub_8f00()
{
    if (*0x20b9d4 != *0x20b9cc)
    {
        void* r0_5 = sub_12b2a(sub_12b2a(sub_217a(), 0x3c) + 0x17, 0x18) + 0x208704;
            /* "00.33_250117" */  /* "0.33_250117" */
        *(r0_5 + 0xc) += 1;
        *0x20b9f8 += 1;
    }
    
    int32_t r0_8 = *0x20b9cc;
    *0x20b9d8 = r0_8 - *0x20b9d4;
    *0x20b9d4 = r0_8;
    *0x20b9c8 = sub_89aa();
    
    if (!sub_12b2a(sub_217a(), 0x3c) && !sub_12b2a(sub_217a(), 0x3c))
        0xff81b968(0x208710, 0x18);  /* "0.33_250117" */
    
    if (!sub_12b2a(sub_217a(), 0x3c))
    {
        sub_8dce();
        sub_8d9c();
    }
    
    uint32_t result = sub_8c92();
    
    if (result != 2)
        return result;
    
    sub_8e28();
    return sub_8a9a();
}

int32_t sub_8f90()
{
    return *0x20b9cc - *0x20b9d4 + *0x20b9d8;
}

int32_t sub_8fa0()
{
    sub_8d0e(*0x20b9cc);
    *0x20b9cc = 0;
    *0x20b9d0 = 0;
    *0x20b9f0 = 0;
    *0x20b9f8 = 0;
    *0x20b9dc = 0;
    *0x20b9e4 = 0;
    *0x20ba00 = 0;
    *0x20b9e0 = 0;
    *0x20b9e8 = 0;
    *0x20b9fc = 0;
    *0x20ba04 = 0;
    *0x20b9d4 = 0;
    return 0;
}

int32_t sub_8fc8() __pure
{
    return 0;
}

void* sub_8fcc(int32_t arg1)
{
    return sub_3404(0x83e22c, *0x20b9c0, arg1);
}

int32_t sub_8fde(int32_t arg1, int32_t arg2)
{
    if (sub_216a() == arg1 && sub_8c92())
        return sub_8c00(arg2);
    
    void* r0_4 = sub_3404(0x83e238, *0x20b9c4, arg1);
    
    if (!r0_4)
        return 0xff81b968(arg2, 0x64);
    
    return 0xff7dc2f8(arg2, r0_4, 0x64);
}

int32_t sub_9024(int32_t arg1)
{
    uint32_t r5 = sub_216a() - 6;
    
    if (r5 < 7)
        r5 = 7;
    
    int32_t result;
    
    for (int32_t i = 0; i < 7; i += 1)
    {
        void var_78;
        sub_8fde(r5 + i, &var_78);
        char var_74;
        void var_72;
        
        if (!var_74)
            result = 0xff81b964((i << 3) + arg1, 8);
        else
            result = 0xff81b898((i << 3) + arg1, &var_72, 8);
    }
    
    return result;
}

uint32_t sub_9070()
{
    *0x20b9ec = 0x64 * sub_16a0();
    uint32_t result = sub_166c();
    
    if (result == 1)
    {
        int32_t r0_3;
        int32_t r1_1;
        r0_3 = j_sub_134d8(*0x20b9ec);
        int32_t r0_4;
        int32_t r1_2;
        r0_4 = sub_13530(r0_3, r1_1, 0x4cc25072, 0x3ff9bfdb);
        result = sub_13490(r0_4, r1_2);
        *0x20b9ec = result;
    }
    
    return result;
}

void* sub_909e()
{
    int32_t r3;
    int32_t var_18 = r3;
    0xff81b968(0x20b9c8, 0x40);
    sub_9070();
    uint32_t r0 = sub_216a();
    void* r0_1 = sub_3404(0x83e22c, *0x20b9c0, r0);
    
    if (r0_1)
    {
        uint32_t r7_1 = sub_12b2a(sub_217a(), 0x3c);
        
        for (uint32_t i = 0; i < r7_1; i = i + 1)
        {
            void* r0_5 = i * 0xc + r0_1;
            
            if (*(r0_5 + 4) != 0xffff)
                sub_8d64(r0_5 + 4);
        }
        
        sub_8d9c();
        void* r0_7 = 0xc * r7_1 + r0_1;
        
        if (*(r0_7 + 4) != 0xffff)
            sub_8d64(r0_7 + 4);
    }
    
    int32_t r5_1 = sub_216a() - 6;
    0xff81b968(0x20ba08, 0x18);  /* "0.33_250117" */
    void* result;
    
    for (int32_t i_1 = 0; i_1 < 6; )
    {
        result = sub_3404(0x83e22c, *0x20b9c0, r5_1);
        
        if (result)
        {
            int32_t r1_4 = 0;
            
            for (uint32_t j = 0; j < 0x18; j = j + 1)  /* "0.33_250117" */
            {
                uint32_t r2_4 = *(j * 0xc + result + 4);
                
                if (r2_4 != 0xffff)
                    r1_4 += r2_4;
            }
            
            result = i_1 << 2;
            *(0x20ba08 + result) = r1_4;
        }
        
        i_1 += 1;
        r5_1 += 1;
    }
    
    return result;
}

uint32_t sub_9170()
{
    return *0x20b9c8;
}

int32_t sub_9178()
{
    return *0x20b9cc;
}

int32_t sub_9180()
{
    return *0x20ba00;
}

uint32_t sub_9188()
{
    return *0x20b9f8;
}

uint32_t sub_9192()
{
    uint32_t result = sub_8c92();
    
    if (!result)
        return result;
    
    return sub_8a7a();
}

void* sub_91a4(int16_t arg1)
{
    return sub_8fcc(sub_216a() - arg1);
}

int32_t sub_91b6(int32_t arg1)
{
    int32_t result = *0x20b9cc + arg1;
    *0x20b9cc = result;
    
    if (result > 0x1869f)
        *0x20b9cc = 0x1869f;
    
    return result;
}

int32_t sub_91ca()
{
    return *0x20b9ec;
}

int32_t sub_91d2(int32_t arg1)
{
    int32_t result = *0x20b9e4 + arg1;
    *0x20b9e4 = result;
    return result;
}

int32_t sub_91de(int32_t arg1)
{
    int32_t result = *0x20b9dc + arg1;
    *0x20b9dc = result;
    return result;
}

int32_t sub_91ea()
{
    *0x20b9c8 = 0;
    return sub_8a9a();
}

int32_t sub_91fa() __pure
{
    return;
}

int32_t sub_91fc()
{
    sub_3262(0x83e22c);
    return sub_3262(0x83e238);
}

int32_t sub_920e(int32_t arg1, int32_t* arg2, int32_t arg3, char* arg4)
{
    char* var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t r0_1 = sub_12b2a(sub_217a(), 0x3c);
    int32_t r4 = 0;
    *(arg4 + 4) = 0;
    arg4[1] = 0;
    uint32_t r0_2 = sub_216a();
    void* r0_3 = sub_3404(0x83e22c, *0x20b9c0, r0_2);
    int32_t r0_5 = sub_12b3e(arg3, 0x3c);
    
    if (r0_3)
    {
        for (int32_t i = 0; i < r0_1; i += 1)
        {
            void* r1_1 = i * 0xc + r0_3;
            uint32_t r2_1 = *(r1_1 + 4);
            
            if (r2_1 != 0xffff)
            {
                if (!arg1)
                    r4 += r2_1;
                else if (arg1 == 1)
                    r4 += *(r1_1 + 0xc);
                else if (arg1 == 2)
                    r4 += *(r1_1 + 8);
                else if (arg1 == 3)
                    r4 += *(r1_1 + 0xa);
            }
            
            int32_t r0_10;
            int32_t r1_3;
            r0_10 = sub_12b3e(i, r0_5);
            
            if (r1_3 == r0_5 - 1)
            {
                if (*(arg4 + 4) < r4)
                {
                    *(arg4 + 4) = r4;
                    arg4[1] = r0_10;
                }
                
                arg2[r0_10] = r4;
                r4 = 0;
            }
        }
    }
    
    if (!arg1)
        r4 += *0x20b9cc - *0x20b9d0;
    else if (arg1 == 1)
        r4 += *0x20b9f8 - *0x20b9fc;
    else if (arg1 == 2)
        r4 += *0x20b9e4 - *0x20b9e8;
    else if (arg1 == 3)
        r4 += *0x20b9dc - *0x20b9e0;
    
    arg2[r0_1] = r4;
    char r0_19 = sub_12b3e(r0_1, r0_5);
    *arg4 = r0_19 + 1;
    
    if (*(arg4 + 4) < r4)
    {
        *(arg4 + 4) = r4;
        arg4[1] = r0_19;
    }
    
    int32_t result = *(arg4 + 4);
    
    if (!result)
        *arg4 = result;
    
    return result;
}

int32_t sub_932e()
{
    return *0x20b9dc;
}

int32_t sub_9336()
{
    return sub_12b2a(*0x20b9e4, 0x64);
}

uint32_t sub_9346()
{
    return *0x208851 << 0x1f >> 0x1f;  /* "0117" */
}

uint8_t sub_9350(int32_t arg1)
{
    uint8_t result = arg1 << 0x1f >> 0x1f;  /* "0117" */
    *0x208851 = *0x208851 >> 1 << 1 | result;
    return result;
}

uint32_t sub_9362()
{
    return *0x208851 << 0x1e >> 0x1f;  /* "50117" */  /* "0117" */
}

uint8_t sub_936c(int32_t arg1)
{
    uint8_t result = arg1 << 0x1f >> 0x1e;  /* "50117" */  /* "0117" */
    *0x208851 = (*0x208851 & 0xfd) | result;
    return result;
}

int32_t sub_937e()
{
    uint32_t r0 = *0x208851;
    
    if (*0x20b9e4 >= *0x20b9ec)
        *0x208851 = r0 | 2;
    else if (r0 << 0x1e < 0)  /* "50117" */
    {
        *0x208851 = r0 & 0xfd;
        return 1;
    }
    
    return 0;
}

uint32_t sub_93a6()
{
    return *0x208851 << 0x1d >> 0x1f;  /* "250117" */  /* "0117" */
}

uint8_t sub_93b0(int32_t arg1)
{
    uint8_t result = arg1 << 0x1f >> 0x1d;  /* "250117" */  /* "0117" */
    *0x208851 = (*0x208851 & 0xfb) | result;
    return result;
}

int32_t sub_93c2()
{
    return sub_183e();
}

uint32_t sub_93ca()
{
    return sub_b658(&data_0);
}

int32_t sub_93d4()
{
    return sub_ccfc();
}

void sub_93dc(uint32_t arg1)
{
    if (arg1 == 1 || arg1 == 7)
        sub_752c();
}

int32_t sub_93ec()
{
    *0x20b9cc = 0;
    *0x20b9d0 = 0;
    *0x20b9d4 = 0;
    *0x20b9d8 = 0;
    *0x20b9dc = 0;
    *0x20b9e0 = 0;
    *0x20b9e4 = 0;
    *0x20b9e8 = 0;
    *0x20b9f0 = 0;
    *0x20b9f4 = 0;
    *0x20b9f8 = 0;
    *0x20b9fc = 0;
    *0x20ba00 = 0;
    *0x20ba04 = 0;
    return 0;
}

int32_t sub_9428()
{
    sub_f69e(0x16, 0x5a);  /* ".00.33_250117" */
    sub_f6bc(0x16, 1, 1, 1, 0, 0);  /* ".00.33_250117" */
    sub_fc34(0xc000100, 0x21000000, 1);
    int32_t var_28;
    sub_10464(&var_28);
    var_28 = sub_104aa(0x16);  /* ".00.33_250117" */
    char var_24 = 0;
    char var_23 = 1;
    char var_22 = 1;
    char var_21 = 1;
    char var_20 = 0;
    int32_t var_1c = 1;
    sub_103ac(&var_28);
    char var_18 = 0x1b;  /* "3_250117" */
    int32_t var_14 = 3;
    char var_10 = 1;
    sub_f5a8(&var_18);
    sub_10498(sub_104aa(0x16), 1);  /* ".00.33_250117" */
    sub_1047e(sub_104aa(0x16), 1);  /* ".00.33_250117" */
    sub_10490(sub_104aa(0x16));  /* ".00.33_250117" */
    sub_10498(sub_104aa(0x16), 0);  /* ".00.33_250117" */
    return sub_f790(0x16, 0, 0);  /* ".00.33_250117" */
}

int32_t sub_94c6()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return sub_f6bc(0x16, 0, 1, 1, 0, 0);  /* ".00.33_250117" */
}

int32_t sub_94dc()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    return sub_f6bc(0x16, 1, 1, 1, 0, 0);  /* ".00.33_250117" */
}

int32_t sub_94f2() __pure
{
    return 1;
}

int32_t sub_94f6()
{
    sub_1047e(sub_104aa(0x16), 0);  /* ".00.33_250117" */
    sub_10498(sub_104aa(0x16), 1);  /* ".00.33_250117" */
    sub_10490(sub_104aa(0x16));  /* ".00.33_250117" */
    sub_a8d4();
    sub_1047e(sub_104aa(0x16), 1);  /* ".00.33_250117" */
    int32_t result = sub_104aa(0x16);  /* ".00.33_250117" */
    sub_10498(result, 0);
    return result;
}

int32_t sub_9538()
{
    if (j_sub_f7f6(0x16) != 1)  /* ".00.33_250117" */
        return 0;
    
    sub_f92e(0x16);  /* ".00.33_250117" */
    return 1;
}

int32_t sub_9552()
{
    return sub_7760(0x83e244);
}

int32_t sub_9564(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    char* var_1c = arg2;
    int32_t result = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        if (!sub_b524(0x19, arg1, arg2, arg3))  /* ".33_250117" */
            result = 1;
        
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

int32_t sub_9598(int32_t arg1, int32_t arg2)
{
    int32_t var_14 = arg2;
    int32_t var_18 = arg1;
    int32_t result = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        if (!sub_b458(0x19, arg1, &var_14, 1))  /* ".33_250117" */
            result = 1;
        
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

uint32_t sub_95ca(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        sub_9564(arg1, &var_10, 1);
        0xff7ef46c(*0x2088a8);
    }
    
    return var_10;
}

int32_t sub_95f6(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    char* var_1c = arg2;
    int32_t result = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        if (!sub_b524(0x1f, arg1, arg2, arg3))  /* "0117" */
            result = 1;
        
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

int32_t sub_962a(int32_t arg1, int32_t arg2)
{
    int32_t var_14 = arg2;
    int32_t var_18 = arg1;
    int32_t result = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        if (!sub_b458(0x1f, arg1, &var_14, 1))  /* "0117" */
            result = 1;
        
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

int32_t sub_965c(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    char* var_1c = arg2;
    int32_t result = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        if (!sub_b524(0x19, arg1, arg2, arg3))  /* ".33_250117" */
            result = 1;
        
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

int32_t sub_9690(int32_t arg1, int32_t arg2)
{
    int32_t var_14 = arg2;
    int32_t var_18 = arg1;
    int32_t result = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        if (!sub_b458(0x19, arg1, &var_14, 1))  /* ".33_250117" */
            result = 1;
        
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

int32_t sub_96c2(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    char* var_1c = arg2;
    int32_t result = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        if (!sub_b524(0x20, arg1, arg2, arg3))  /* "117" */
            result = 1;
        
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

int32_t sub_96f6(int32_t arg1, int32_t arg2)
{
    int32_t var_14 = arg2;
    int32_t var_18 = arg1;
    int32_t result = 0;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        if (!sub_b458(0x20, arg1, &var_14, 1))  /* "117" */
            result = 1;
        
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

int32_t sub_9728()
{
    /* jump -> *0x200120 */
}

int32_t sub_972e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    var_18 = 0;
    int32_t r0 = sub_962a(0x21, 0x87);  /* "17" */
    *0x20ba26 = 0;
    int32_t r4 = sub_95f6(9, &var_18, 1) & r0;
    
    while (var_18)
    {
        if (*0x20ba26 >= 0xa)
            break;
        
        int32_t r5_2 = sub_962a(0x21, 0x87) & r4;  /* "17" */
        r4 = sub_95f6(9, &var_18, 1) & r5_2;
        *0x20ba26 += 1;
    }
    
    if (!r4)
        return 0;
    
    return 1;
}

int32_t sub_978e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    int32_t r0 = sub_962a(0x11, 0x40);  /* "Y02_3.00.33_250117" */
    int32_t result = sub_95f6(0x11, &var_10, 1) & r0;  /* "Y02_3.00.33_250117" */
    
    if (var_10 != 0x40)
        return 0;
    
    if (!result)
        return result;
    
    return 1;
}

int32_t sub_97c2(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    var_10 = 0;
    int32_t r0 = sub_962a(0x11, 0x80);  /* "Y02_3.00.33_250117" */
    int32_t result = sub_95f6(0x11, &var_10, 1) & r0;  /* "Y02_3.00.33_250117" */
    
    if (var_10 != 0x40)
        return 0;
    
    if (!result)
        return result;
    
    return 1;
}

int32_t sub_97f6()
{
    int32_t r0 = sub_962a(0x1a, 0);  /* "33_250117" */
    int32_t r4_1 = sub_962a(0x17, 0x40) & r0;  /* "00.33_250117" */
    int32_t r5_2 = sub_962a(0x3d, 0x20) & r4_1;  /* "117" */
    int32_t result = sub_962a(0x3e, 0xc4) & r5_2;
    
    if (!result)
        return result;
    
    return 1;
}

int32_t sub_982a()
{
    int32_t r0 = sub_962a(0x1a, 2);  /* "33_250117" */
    int32_t result = sub_962a(0x17, 0x40) & r0;  /* "00.33_250117" */
    
    if (!result)
        return result;
    
    return 1;
}

int32_t sub_9846()
{
    int32_t r0 = sub_962a(0x16, 7);  /* ".00.33_250117" */
    int32_t r4_1 = sub_962a(0x2a, 4) & r0;
    int32_t r5_2 = sub_962a(0x28, 3) & r4_1;
    int32_t r4_3 = sub_962a(0x27, 0) & r5_2;
    int32_t r5_4 = sub_962a(0x19, 4) & r4_3;  /* ".33_250117" */
    int32_t r4_5 = sub_962a(0xb, 7) & r5_4;
    int32_t r5_6 = sub_962a(0x21, 7) & r4_5;  /* "17" */
    sub_962a(0x11, 0x80);  /* "Y02_3.00.33_250117" */
    sub_962a(0x10, 0xa);  /* "RY02_3.00.33_250117" */
    sub_962a(0x11, 0x7c);  /* "Y02_3.00.33_250117" */
    
    if (!r5_6)
        return 0;
    
    return 1;
}

int32_t sub_98c0()
{
    sub_962a(0x11, 0x74);  /* "Y02_3.00.33_250117" */
    sub_962a(0x10, 0xf);  /* "RY02_3.00.33_250117" */
    return sub_962a(0x3e, 0xc8);
}

int32_t sub_98dc()
{
    sub_962a(0x14, 0xb6);  /* "_3.00.33_250117" */
    (*0x200120)(0x32);  /* "02_V3.0" */
    sub_962a(0xf, 5);
    sub_962a(0x5e, 0xc0);
    sub_962a(0x34, 4);  /* "_V3.0" */
    sub_962a(0x20, 5);  /* "117" */
    sub_962a(0x1a, 2);  /* "33_250117" */
    sub_962a(0x17, 0x40);  /* "00.33_250117" */
    sub_962a(0x3d, 0x20);  /* "117" */
    return sub_98c0();
}

uint32_t sub_992c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10 = arg3;
    uint32_t result = *0x20ba20;
    
    if (result != 0x11)  /* "Y02_3.00.33_250117" */
    {
        if (result == 0x23)
            return sub_972e(result, arg2, arg3, arg4);
        
        if (result == 0x33)  /* "2_V3.0" */
            return sub_95ca(0x31, arg2, arg3, arg4);  /* "Y02_V3.0" */
        
        if (result == 0x15)  /* "3.00.33_250117" */
            return sub_95ca(0x17, arg2, arg3, arg4);  /* "00.33_250117" */
        
        if (result != 0x28 && result == 0x44)
            return sub_965c(0x37, &var_10, 5);  /* ".0" */
    }
    
    return result;
}

int32_t sub_9976(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r0 = *0x20ba20;
    
    if (r0 == 0x11 || r0 == 0x28)  /* "Y02_3.00.33_250117" */
    {
        sub_9598(0x22, 0);  /* "7" */
        sub_9598(0x38, 0);  /* "0" */
        sub_9598(0x20, 0x37);  /* "117" */  /* ".0" */
        sub_9598(0x23, 0x90);
        sub_9598(0x24, 0x40);
        sub_9598(0x2e, 0);
        sub_9598(0x2e, 0x80);
    }
    else if (r0 == 0x23)
    {
        int32_t r0_1;
        int32_t r1;
        int32_t r2;
        int32_t r3;
        r0_1 = sub_98dc();
        sub_992c(r0_1, r1, r2, r3);
    }
    else if (r0 == 0x44)
    {
        sub_9690(0x25, 0x10);  /* "RY02_3.00.33_250117" */
        sub_9690(0x3f, 0);
        sub_9690(0x25, 0x50);
        sub_9690(0x2e, 0xdf);
        sub_9690(0x20, 0x32);  /* "117" */  /* "02_V3.0" */
        sub_9690(0x23, 0);
        sub_9690(0x22, 0);  /* "7" */
    }
    else if (r0 == 0x48)
    {
        sub_96c2(0x13, &var_18, 1);  /* "2_3.00.33_250117" */
        int32_t r1_4 = (var_18 & 0xef) | 0x20;  /* "117" */
        var_18 = r1_4;
        sub_96f6(0x13, r1_4);  /* "2_3.00.33_250117" */
        sub_96c2(0x10, &var_18, 1);  /* "RY02_3.00.33_250117" */
        int32_t r1_7 = var_18 | 0x10;  /* "RY02_3.00.33_250117" */
        var_18 = r1_7;
        sub_96f6(0x10, r1_7);  /* "RY02_3.00.33_250117" */
        sub_96c2(0x13, &var_18, 1);  /* "2_3.00.33_250117" */
        int32_t r1_10 = var_18 | 8;
        var_18 = r1_10;
        sub_96f6(0x13, r1_10);  /* "2_3.00.33_250117" */
        sub_96c2(0x15, &var_18, 1);  /* "3.00.33_250117" */
        int32_t r1_14 = ((var_18 | 6 | 8) & 0xbf) << 0x19 >> 0x19 & 0xef;  /* ".33_250117" */
        var_18 = r1_14;
        sub_96f6(0x15, r1_14);  /* "3.00.33_250117" */
        sub_96c2(0x16, &var_18, 1);  /* ".00.33_250117" */
        int32_t r1_17 = var_18 | 0xa1;
        var_18 = r1_17;
        sub_96f6(0x16, r1_17);  /* ".00.33_250117" */
        sub_96c2(0x14, &var_18, 1);  /* "_3.00.33_250117" */
        int32_t r1_22 = ((var_18 | 1) << 0x1c >> 0x1c | 0x60) & 0xf3;  /* "_250117" */
        var_18 = r1_22;
        sub_96f6(0x14, r1_22);  /* "_3.00.33_250117" */
        sub_96c2(0x12, &var_18, 1);  /* "02_3.00.33_250117" */
        int32_t r1_26 = (var_18 & 0xfb) | 4;
        var_18 = r1_26;
        sub_96f6(0x12, r1_26);  /* "02_3.00.33_250117" */
    }
    
    return 0xff7ef196(1);
}

uint32_t sub_9af6(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    
    if (!sub_9564(0x70, 0x20ba20, 1))
    {
        var_10 = 0xb6;
        sub_962a(0x14, 0xb6);  /* "_3.00.33_250117" */
        sub_9728(0x64);
        sub_95f6(0, 0x20ba20, 1);
        
        if (*0x20ba20 != 0x23)
        {
            var_10 = 1;
            sub_96f6(0x3e, 1);
            sub_9728(0x19);  /* ".33_250117" */
            sub_96c2(0xf, 0x20ba20, 1);
            sub_96c2(0xf, 0x20ba20, 1);
            
            if (*0x20ba20 == 0x48)
            {
                sub_96c2(0x10, &var_10, 1);  /* "RY02_3.00.33_250117" */
                int32_t r1_2 = var_10 | 0x20;  /* "117" */
                var_10 = r1_2;
                sub_96f6(0x10, r1_2);  /* "RY02_3.00.33_250117" */
                sub_9728(0x19);  /* ".33_250117" */
            }
        }
    }
    else
    {
        sub_9690(0x21, 0x44);  /* "17" */
        sub_9728(0x32);  /* "02_V3.0" */
        sub_965c(0xf, 0x20ba20, 1);
        
        if (*0x20ba20 != 0x44)
            *0x20ba20 = 0x11;  /* "Y02_3.00.33_250117" */
    }
    
    return *0x20ba20;
}

int32_t sub_9ba0()
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_9728(0x32);  /* "02_V3.0" */
    sub_9af6(r0, r1, r2, r3);
    uint32_t r0_1 = *0x20ba20;
    
    if (r0_1 != 0x48 && r0_1 != 0x44)
    {
        if (r0_1 == 0x33 || r0_1 == 0x15)  /* "3.00.33_250117" */  /* "2_V3.0" */
            return 0;
        
        if (r0_1 == 0x11)  /* "Y02_3.00.33_250117" */
        {
        label_9bd4:
            int32_t result = sub_9598(0x20, 0);  /* "117" */
            
            if (!result)
                return result;
        }
        else
        {
            if (r0_1 != 0x23)
            {
                if (r0_1 == 0x28)
                    goto label_9bd4;
                
                return 0;
            }
            
            sub_98dc();
        }
    }
    
    return 1;
}

void sub_9be6(uint32_t arg1)
{
    if (arg1)
    {
        *0x20ba23 = 0;
        return;
    }
    
    arg1 = *0x20ba23 + 1;
    *0x20ba23 = arg1;
    
    if (arg1 < 0xa)
        return;
    
    *0x20ba23 = 0;
    int32_t r0_2;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0_2 = sub_9ba0();
    sub_9976(r0_2, r1, r2, r3);
}

uint32_t sub_9c0c()
{
    uint32_t r4 = 0;
    uint32_t r0 = *0x20ba20;
    int32_t var_1e0;
    uint32_t var_1d8;
    char var_1d4;
    void var_1d0;
    void var_1cf;
    char r0_17;
    int32_t r0_22;
    uint32_t r0_44;
    void* r1_11;
    uint32_t r2_3;
    
    if (r0 == 0x11 || r0 == 0x28)  /* "Y02_3.00.33_250117" */
    {
        var_1d4 = 0;
        var_1e0 = 0;
        int32_t var_1dc_1 = 0;
        sub_9564(0x2f, &var_1d4, 1);
        uint32_t r0_3 = var_1d4 << 0x1b >> 0x1b;  /* "3_250117" */
        var_1d4 = r0_3;
        
        if (r0_3)
        {
            for (int32_t i = 0; i < var_1d4; i += 1)
            {
                var_1e0 = 0;
                int24_t var_1dc_2 = 0;
                sub_9564(0xa7, &var_1e0, 7);
                var_1d8 = *var_1e0[2] << 8 | *var_1e0[1];
                var_1d8 = var_1dc_2 << 8 | *var_1e0[3];
                var_1d8 = *var_1dc_2[2] << 8 | *var_1dc_2[1];
                0xff81b898(i * 6 + &var_1d0 + 1, &*var_1e0[1], 6);
            }
            
            r0_17 = var_1d4;
        label_9dc2:
            r4 = 6 * r0_17;
            r0_44 = *0x20ba44;
            
            if (r0_44 + r4 < 0x1ec)
            {
                r0_22 = r0_44 + 0x20ba48;
                r2_3 = r4;
                r1_11 = &var_1cf;
            label_9e6c:
                0xff81b898(r0_22, r1_11, r2_3);
                *0x20ba44 += r4;
            }
            else
            {
            label_9cb8:
                0xff81b898(r0_44 + 0x20ba48, &var_1cf, 0x1ec - r0_44);
                uint32_t r0_19 = *0x20ba44;
                0xff81b898(0x20ba48, &var_1d0 - r0_19 + 0x1ed, r0_19 + r4 - 0x1ec);
                *0x20ba44 += (r4 - 0x1ec);
            }
        }
    }
    else if (r0 == 0x23)
    {
        var_1e0 = 0;
        int32_t r0_23 = sub_95f6(0xc, &var_1e0, 1);
        uint32_t r0_26;
        
        if (r0_23)
        {
            r0_26 = var_1e0 << 0x19 >> 0x19;  /* ".33_250117" */
            var_1e0 = r0_26;
        }
        
        if (r0_23 && r0_26 > 0x20)  /* "117" */
        {
            var_1e0 = 0x20;  /* "117" */
        label_9d14:
            char var_d8[0xc4];
            0xff81b968(&var_d8, 0xc0);
            sub_95f6(0x3f, &var_d8, 6 * var_1e0);
            
            for (int32_t i_1 = 0; i_1 < var_1e0; i_1 += 1)
            {
                int32_t r0_32 = 6 * i_1;
                0xff81b898(r0_32 + &var_1d0 + 1, &var_d8[r0_32], 6);
            }
            
            r0_17 = var_1e0;
            goto label_9dc2;
        }
        
        if (var_1e0)
            goto label_9d14;
    }
    else if (r0 == 0x44)
    {
        var_1d8 = 0;
        var_1e0 = 0;
        int32_t var_1dc_3 = 0;
        sub_965c(0x2f, &var_1d8, 1);
        uint32_t r0_38 = var_1d8 << 0x1a >> 0x1a;  /* "33_250117" */
        var_1d8 = r0_38;
        
        if (r0_38 > 0x20)  /* "117" */
        {
            var_1d8 = 0x20;  /* "117" */
        label_9d8a:
            
            for (int32_t i_2 = 0; i_2 < var_1d8; i_2 += 1)
            {
                var_1e0 = 0;
                int32_t var_1dc_4 = 0;
                sub_965c(0x28, &var_1e0, 6);
                0xff81b898(i_2 * 6 + &var_1d0 + 1, &var_1e0, 6);
            }
            
            r0_17 = var_1d8;
            goto label_9dc2;
        }
        
        if (r0_38)
            goto label_9d8a;
    }
    else if (r0 == 0x48)
    {
        var_1d8 = 0;
        var_1d4 = 0;
        char r7_4 = 0;
        var_1e0 = 0;
        int32_t var_1dc_5 = 0;
        sub_96c2(0x27, &var_1d8, 1);
        uint32_t r0_47 = var_1d8 << 0x1a >> 0x1a;  /* "33_250117" */
        var_1d8 = r0_47;
        
        if (r0_47 > 0x20)  /* "117" */
        {
            var_1d8 = 0x20;  /* "117" */
        label_9e02:
            
            for (int32_t i_3 = 0; i_3 < var_1d8; i_3 += 1)
            {
                sub_96c2(0x40, &var_1d4, 1);
                uint32_t r0_49 = var_1d4 >> 3;
                
                if (r0_49 == 2 || r0_49 == 0x1f)  /* "0117" */
                {
                    var_1e0 = 0;
                    int32_t var_1dc_6 = 0;
                    sub_96c2(0x41, &var_1e0, 6);
                    0xff81b898(i_3 * 6 + &var_1d0 + 1, &var_1e0, 6);
                    r7_4 += 1;
                }
            }
            
            var_1d8 = r7_4;
            r0_44 = *0x20ba44;
            r4 = 6 * r7_4;
            
            if (r0_44 + r4 >= 0x1ec)
                goto label_9cb8;
            
            r0_22 = r0_44 + 0x20ba48;
            r2_3 = r4;
            r1_11 = &var_1cf;
            goto label_9e6c;
        }
        
        if (r0_47)
            goto label_9e02;
    }
    uint32_t result = *0x20ba3b;
    
    if (!result)
        return result;
    
    return sub_9be6(r4);
}

uint32_t sub_9e86(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_10_1 = r3;
    int32_t r2;
    int32_t var_14_1 = r2;
    int32_t var_18 = arg2;
    sub_962a(0x2a, 4);
    sub_962a(0x16, 7);  /* ".00.33_250117" */
    sub_962a(0x19, 4);  /* ".33_250117" */
    var_18 = 0x230f0800;
    int32_t var_14;
    __builtin_strncpy(&var_14, "7FPZ", 4);
    int32_t var_10 = 0x877869;
    sub_962a(0x28, *(&var_18 + arg1));
    int32_t r1_1;
    
    r1_1 = arg1 > 3 ? 3 : 0;
    
    sub_962a(0x27, r1_1);
    return sub_9c0c();
}

int32_t sub_9eca()
{
    sub_962a(0x2a, 0);
    return sub_962a(0x16, 0);  /* ".00.33_250117" */
}

int32_t sub_9ee0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_14 = arg4;
    int32_t var_18 = arg3;
    int32_t var_1c = arg2;
    int32_t result = arg1;
    uint32_t r0 = *0x20ba3b;
    int32_t r5 = arg2;
    
    if (!r0)
    {
        *0x20ba3f = r0;
        sub_9976(r0, arg2, arg3, arg4);
        *0x20ba3b = 1;
        0xff7ef70c(0x20ba28);
        arg2 = 0xff7ef6e4(0x20ba28, 0x320);
    }
    
    uint32_t r0_1 = *0x20ba20;
    
    if (r0_1 == 0x23)
    {
        sub_9e86(arg1, arg2);
        return result;
    }
    
    if (r0_1 == 0x44 && r5)
    {
        result = 0xe0;
        var_1c = 0xc080300;
        var_18 = 0x1614110e;
        var_14 = 0x1f1a18;
        sub_9690(0x32, 0xe0);  /* "02_V3.0" */
        uint32_t r1 = *(&var_1c + arg1);
        result = r1;
        sub_9690(0x30, r1);  /* "RY02_V3.0" */
        uint32_t r1_1 = *(&var_1c + arg1);
        result = r1_1;
        sub_9690(0x31, r1_1);  /* "Y02_V3.0" */
        int32_t r1_3 = *(&var_1c + arg1) | 0xe0;
        result = r1_3;
        sub_9690(0x32, r1_3);  /* "02_V3.0" */
        result = 0xc;
        sub_9690(0x33, 0xc);  /* "2_V3.0" */
        result = 0xe;
        sub_9690(0x33, 0xe);  /* "2_V3.0" */
        sub_965c(0x34, &result, 1);  /* "_V3.0" */
        uint32_t r1_6 = result << 0x19 >> 0x19;  /* ".33_250117" */
        result = r1_6;
        sub_9690(0x34, r1_6);  /* "_V3.0" */
        sub_965c(0x23, &result, 1);
        int32_t r1_9 = result | 0x40;
        result = r1_9;
        sub_9690(0x23, r1_9);
        sub_9690(0x3f, 0x20);  /* "117" */
        sub_9690(0x22, 0x10);  /* "RY02_3.00.33_250117" */  /* "7" */
    }
    
    return result;
}

void sub_9fc8(int32_t arg1)
{
    if (!*0x20ba3b)
        return;
    
    uint32_t r1_1 = *0x20ba20;
    
    if (r1_1 == 0x23)
    {
        sub_9eca();
        return;
    }
    
    if (r1_1 == 0x44 && arg1)
    {
        sub_9690(0x23, 0);
        sub_9690(0x3f, 0);
    }
}

int32_t sub_9ffc()
{
    if (sub_aa80())
        return 0;
    
    uint32_t r0_2 = *0x20ba20;
    
    if (r0_2 == 0x23 || r0_2 == 0x44)
        sub_aa62();
    
    return 1;
}

uint32_t sub_a020(int16_t* arg1, int16_t* arg2, uint16_t* arg3)
{
    uint16_t* var_18 = arg3;
    int16_t* var_1c = arg2;
    uint32_t result = *0x20ba20;
    int32_t var_1f0;
    int24_t var_1ec_1;
    char var_1e8;
    uint32_t result_1;
    uint32_t result_2;
    int16_t var_1dc;
    void var_1d8;
    void var_1d7;
    int32_t r0_35;
    void* r1_3;
    int32_t r2_3;
    
    if (result == 0x11 || result == 0x28)  /* "Y02_3.00.33_250117" */
    {
        var_1e8 = 0;
        var_1f0 = 0;
        var_1ec_1 = 0;
        sub_9564(0x2f, &var_1e8, 1);
        r1_3 = &var_1f0;
        uint32_t r0_8 = var_1e8 << 0x1b >> 0x1b;  /* "3_250117" */
        var_1e8 = r0_8;
        
        if (!r0_8)
        {
            r2_3 = 7;
            r0_35 = 0x67;
        label_a218:
            sub_9564(r0_35, r1_3, r2_3);
            *arg1 = *var_1f0[2] << 8 | *var_1f0[1];
            *arg2 = var_1ec_1 << 8 | *var_1f0[3];
            result = *var_1ec_1[2] << 8 | *var_1ec_1[1];
            *arg3 = result;
        }
        else
        {
            for (int32_t i = 0; i < var_1e8; i += 1)
            {
                var_1f0 = 0;
                int24_t var_1ec_2 = 0;
                sub_9564(0x67, &var_1f0, 7);
                var_1dc = *var_1f0[2] << 8 | *var_1f0[1];
                result_1 = var_1ec_2 << 8 | *var_1f0[3];
                result_2 = *var_1ec_2[2] << 8 | *var_1ec_2[1];
                0xff81b898(i * 6 + &var_1d8 + 1, &*var_1f0[1], 6);
            }
            
            uint32_t r4_1 = 6 * var_1e8;
            uint32_t r0_27 = *0x20ba44;
            uint32_t r3_1 = r0_27 + r4_1;
            int32_t r0_30;
            void* r1_12;
            uint32_t r2_2;
            
            if (r3_1 < 0x1ec)
            {
                r0_30 = r0_27 + 0x20ba48;
                r2_2 = r4_1;
                r1_12 = &var_1d7;
            }
            else
            {
                0xff81b898(r0_27 + 0x20ba48, &var_1d7, 0x1ec - r0_27, r3_1);
                uint32_t r0_29 = *0x20ba44;
                r4_1 -= 0x1ec;
                r2_2 = r0_29 + r4_1;
                r0_30 = 0x20ba48;
                r1_12 = &var_1d8 - r0_29 + 0x1ed;
            }
            
            0xff81b898(r0_30, r1_12, r2_2);
            *0x20ba44 += r4_1;
            *arg1 = var_1dc;
            *arg2 = result_1;
            result = result_2;
            *arg3 = result;
        }
    }
    else if (result == 0x23)
    {
        var_1f0 = 0;
        var_1ec_1 = 0;
        var_1e8 = 0x20;  /* "117" */
        sub_95f6(0xc, &var_1e8, 1);
        uint32_t r0_2 = var_1e8 << 0x19 >> 0x19;  /* ".33_250117" */
        var_1e8 = r0_2;
        
        if (r0_2 > 0x20)  /* "117" */
            var_1e8 = 0x20;  /* "117" */
        
        char var_e0[0xc0];
        sub_95f6(0x3f, &var_e0, 6 * var_1e8);
        
        if (!var_1e8)
        {
            r2_3 = 6;
            r0_35 = 0x3f;
            r1_3 = &*var_1f0[1];
            goto label_a218;
        }
        
        for (int32_t i_1 = 0; i_1 < var_1e8; i_1 += 1)
        {
            int32_t r0_37 = 6 * i_1;
            void* r1_14 = &var_e0[r0_37];
            result_2 = (*(r1_14 + 1) << 8 | var_e0[r0_37]) << 0x10 >> 0x14;
                /* "RY02_3.00.33_250117" */  /* "_3.00.33_250117" */
            var_1dc = (*(r1_14 + 3) << 8 | *(r1_14 + 2)) << 0x10 >> 0x14;
                /* "RY02_3.00.33_250117" */  /* "_3.00.33_250117" */
            result_1 = (*(r1_14 + 5) << 8 | *(r1_14 + 4)) << 0x10 >> 0x14;
                /* "RY02_3.00.33_250117" */  /* "_3.00.33_250117" */
            0xff81b898(r0_37 + &var_1d8 + 1, r1_14, 6);
        }
        
        uint32_t r4_3 = 6 * var_1e8;
        uint32_t r0_43 = *0x20ba44;
        uint32_t r3_7 = r0_43 + r4_3;
        int32_t r0_46;
        void* r1_18;
        uint32_t r2_18;
        
        if (r3_7 < 0x1ec)
        {
            r0_46 = r0_43 + 0x20ba48;
            r2_18 = r4_3;
            r1_18 = &var_1d7;
        }
        else
        {
            0xff81b898(r0_43 + 0x20ba48, &var_1d7, 0x1ec - r0_43, r3_7);
            uint32_t r0_45 = *0x20ba44;
            r4_3 -= 0x1ec;
            r2_18 = r0_45 + r4_3;
            r0_46 = 0x20ba48;
            r1_18 = &var_1d8 - r0_45 + 0x1ed;
        }
        
        0xff81b898(r0_46, r1_18, r2_18);
        *0x20ba44 += r4_3;
        *arg1 = result_2;
        *arg2 = var_1dc;
        result = result_1;
        *arg3 = result;
    }
    return result;
}

uint32_t sub_a242()
{
    return *0x20ba20;
}

int32_t sub_a24a()
{
    uint32_t r0 = *0x20ba20;
    
    if (r0 != 0x33 && r0 != 0x15 && r0 != 0x11 && r0 != 0x23 && r0 != 0x28)  /* "Y02_3.00.33_250117"
            */  /* "3.00.33_250117" */  /* "2_V3.0" */
        return 0;
    
    return 1;
}

int32_t sub_a26c()
{
    int32_t result = 0xff;
    uint32_t r0 = *0x20ba20;
    int32_t r5_7;
    
    if (r0 == 0x11)  /* "Y02_3.00.33_250117" */
    {
        int32_t r0_1 = sub_9598(0x20, 0x37);  /* "117" */  /* ".0" */
        int32_t r4_1 = sub_9598(0x21, 4) & r0_1;  /* "17" */
        int32_t r5_3 = sub_9598(0x3a, 5) & r4_1;
        int32_t r4_3 = sub_9598(0x3b, 0x7f) & r5_3;
        int32_t r5_5 = sub_9598(0x3c, 2) & r4_3;
        int32_t r4_5 = sub_9598(0x38, 0x15) & r5_5;  /* "3.00.33_250117" */  /* "0" */
        r5_7 = sub_9598(0x22, 0) & r4_5;  /* "7" */
        result = sub_9598(0x22, 0x80) & r5_7;  /* "7" */
    }
    else if (r0 == 0x28)
    {
        int32_t r0_9 = sub_9598(0x20, 0x47);  /* "117" */
        int32_t r5_9 = sub_9598(0x23, 0x88) & r0_9;
        int32_t r4_8 = sub_9598(0x21, 0x31) & r5_9;  /* "17" */  /* "Y02_V3.0" */
        int32_t r5_11 = sub_9598(0x22, 0x40) & r4_8;  /* "7" */
        int32_t r4_10 = sub_9598(0x25, 0) & r5_11;
        int32_t r5_13 = sub_9598(0x24, 0) & r4_10;
        int32_t r4_12 = sub_9598(0x30, 0x2a) & r5_13;  /* "RY02_V3.0" */
        r5_7 = sub_9598(0x32, 0x1f) & r4_12;  /* "0117" */  /* "02_V3.0" */
        result = sub_9598(0x33, 0) & r5_7;  /* "2_V3.0" */
    }
    else if (r0 == 0x23)
    {
        r5_7 = sub_962a(0x1a, 0);  /* "33_250117" */
        result = sub_9846() & r5_7;
    }
    else if (r0 == 0x44)
    {
        int32_t r0_19 = sub_9690(0x25, 0);
        int32_t r5_16 = sub_9690(0x20, 2) & r0_19;  /* "117" */
        int32_t r4_15 = sub_9690(0x20, 0x62) & r5_16;  /* "117" */
        int32_t r5_18 = sub_9690(0x22, 0) & r4_15;  /* "7" */
        int32_t r4_17 = sub_9690(0x3f, 0) & r5_18;
        int32_t r5_20 = sub_9690(0x35, 0x40) & r4_17;  /* "V3.0" */
        int32_t r4_19 = sub_9690(0x34, 0x41) & r5_20;  /* "_V3.0" */
        int32_t r6_2 = sub_9690(0x23, 0x20) & r4_19;  /* "117" */
        r5_7 = sub_9690(0x3f, 0x20) & r6_2;  /* "117" */
        result = sub_9690(0x22, 0x10) & r5_7;  /* "RY02_3.00.33_250117" */  /* "7" */
    }
    0xff7ef196(1);
    return result;
}

int32_t sub_a3f8()
{
    uint32_t r0 = *0x20ba20;
    
    if (r0 == 0x11 || r0 == 0x28)  /* "Y02_3.00.33_250117" */
    {
        sub_9598(0x22, 0);  /* "7" */
        sub_9598(0x38, 0);  /* "0" */
        sub_9598(0x20, 0);  /* "117" */
    }
    else if (r0 == 0x23)
    {
        int32_t r0_1;
        int32_t entry_r1;
        int32_t r1;
        int32_t entry_r2;
        int32_t r2;
        int32_t entry_r3;
        int32_t r3;
        r0_1 = sub_97c2(r0, entry_r1, entry_r2, entry_r3);
        sub_992c(r0_1, r1, r2, r3);
    }
    else if (r0 == 0x44)
        sub_9690(0x20, 0);  /* "117" */
    
    return 0xff7ef196(1);
}

int32_t sub_a444(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t r0 = *0x20ba3d;
    
    if (r0)
    {
        *0x20ba3d = 0;
        sub_9976(r0, arg2, arg3, arg4);
        *0x20ba3b = 1;
        *0x20ba3a = 1;
        *0x20ba40 = 1;
        *0x20ba24 = 1;
        int32_t r0_1 = sub_183e();
        *0x20ba30 = r0_1;
        return r0_1;
    }
    
    if (*0x20ba3e)
    {
        0xff81b964(0x20ba3a, 8);
        0xff7ef70c(0x20ba28);
        *0x20ba46 = *0x20ba44;
        int32_t r0_4 = sub_a3f8();
        *0x20ba21 = 0;
        *0x20ba3a = 0;
        return r0_4;
    }
    
    uint32_t r0_5 = *0x20ba3f;
    
    if (r0_5)
    {
        *0x20ba3f = 0;
        sub_9976(r0_5, arg2, arg3, arg4);
        *0x20ba3b = 1;
        0xff7ef70c(0x20ba28);
        return 0xff7ef6e4(0x20ba28, 0x320);
    }
    
    uint32_t r0_7 = *0x20ba40;
    
    if (!r0_7)
    {
        sub_9c0c();
        return sub_116c();
    }
    
    sub_992c(r0_7, arg2, arg3, arg4);
    int32_t r0_6 = sub_a26c();
    
    if (!r0_6)
        return r0_6;
    
    *0x20ba40 = 0;
    *0x20ba3b = 0;
    *0x20ba3c = 0;
    *0x20ba21 = 0;
    return 0xff7ef70c(0x20ba28);
}

int32_t sub_a4e6()
{
    if (!*0x20ba3c)
    {
        0xff7ef6e4(0x20ba28, 0x320);
        *0x20ba3c = 1;
    }
    
    int16_t result = *0x20ba44;
    *0x20ba46 = result;
    *0x20ba3d = 1;
    return result;
}

uint32_t sub_a50a()
{
    uint32_t result = *0x20ba3c;
    
    if (!result)
    {
        result = 0xff7ef6e4(0x20ba28, 0x320);
        *0x20ba3c = 1;
    }
    
    *0x20ba3e = 1;
    return result;
}

void sub_a52a(char* arg1)
{
    uint32_t r1 = *0x20ba20;
    
    if (!*arg1)
    {
        if (r1 == 0x23)
        {
            sub_962a(arg1[1], arg1[2]);
            return;
        }
        
        if (r1 == 0x44)
            sub_9690(arg1[1], arg1[2]);
        
        return;
    }
    
    uint32_t r4 = arg1[2];
    
    if (r4 > 6)
        r4 = 6;
    
    int32_t __saved_r2;
    
    if (r1 == 0x23)
        sub_95f6(arg1[1] | 0x80, &__saved_r2, r4);
    else if (r1 == 0x44)
        sub_965c(arg1[1] | 0x80, &__saved_r2, r4);
    
    sub_3d12(0xc7, &__saved_r2, r4);
}

int32_t sub_a58c(uint16_t* arg1, uint16_t* arg2, uint16_t* arg3, int32_t arg4)
{
    uint16_t* var_1c = arg3;
    uint16_t* var_20 = arg2;
    uint16_t* var_24 = arg1;
    uint16_t* r6 = arg1;
    uint16_t* r4 = arg3;
    uint16_t* r5 = arg2;
    
    if (*0x20ba3b)
    {
        sub_9c0c();
        uint32_t r7 = *0x20ba44;
        uint32_t r0_5 = sub_12b3e(r7 - 6 * arg4 + 0x1ec, 0x1ec);
        
        while (r0_5 != r7)
        {
            *r6 = *(r0_5 + 0x20ba49) << 8 | *(r0_5 + 0x20ba48);
            *r5 = *(r0_5 + 0x20ba4b) << 8 | *(r0_5 + 0x20ba4a);
            *r4 = *(r0_5 + 0x20ba4d) << 8 | *(r0_5 + 0x20ba4c);
            r0_5 = r0_5 + 6;
            r4 = &r4[1];
            r5 = &r5[1];
            r6 = &r6[1];
            
            if (r0_5 >= 0x1ec)
                r0_5 = r0_5 - 0x1ec;
        }
        
        return 0x14;  /* "_3.00.33_250117" */
    }
    
    uint32_t r0_6 = *0x20ba44;
    int32_t r0_7 = r0_6 - 6;
    
    if (r0_6 - 6 < 0)
        r0_7 += 0x1ec;
    
    uint16_t r1_3 = *(r0_7 + 0x20ba49) << 8 | *(r0_7 + 0x20ba48);
    uint16_t r1_6 = *(r0_7 + 0x20ba4b) << 8 | *(r0_7 + 0x20ba4a);
    uint16_t r0_11 = *(r0_7 + 0x20ba4d) << 8 | *(r0_7 + 0x20ba4c);
    int32_t r0_12 = 0;
    
    while (r0_12 < arg4)
    {
        *r6 = r1_3;
        *r5 = r1_6;
        *r4 = r0_11;
        r0_12 += 1;
        r4 = &r4[1];
        r5 = &r5[1];
        r6 = &r6[1];
    }
    
    return 0;
}

uint32_t sub_a65c()
{
    uint32_t result = *0x20ba24;
    
    if (!result)
        return result;
    
    return sub_183e() - *0x20ba30;
}

uint32_t sub_a670()
{
    uint32_t result = *0x20ba3b;
    
    if (!result)
    {
        result = sub_a65c();
        
        if (result >= 0x3c)
        {
            result = 1;
            *0x20ba27 = 1;
        }
    }
    
    return result;
}

int32_t sub_a68c(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_10 = arg3;
    var_10 = 0;
    *var_10[2] = 0;
    return sub_13b8(&var_10);
}

uint32_t sub_a6a0()
{
    return *0x20ba25;
}

uint32_t sub_a6a6()
{
    uint32_t result = *0x20ba3a;
    
    if (result)
    {
        if (*0x20ba22)
        {
            *0x20ba22 = 0;
            int32_t r0_1;
            int32_t r1_1;
            int32_t r2_1;
            int32_t r3_1;
            r0_1 = sub_9ffc();
            
            if (!r0_1)
                sub_992c(r0_1, r1_1, r2_1, r3_1);
        }
        
        result = *0x20ba3b;
        
        if (!result)
        {
            if (*0x20ba27)
            {
                *0x20ba27 = 0;
                sub_9ba0();
                return sub_a4e6();
            }
            
            if (!*0x20ba21)
            {
                result = sub_104aa(0x16);  /* ".00.33_250117" */
                *0x40001050;
            }
            
            if (*0x20ba21 || *0x40001050 & result)
            {
                *0x20ba21 = 0;
                *0x20ba3f = 1;
                *0x20ba46 = *0x20ba44;
                sub_14d64();
                int32_t r1_14;
                int32_t r2_7;
                r1_14 = sub_8eea(1);
                *0x20ba24 = 0;
                sub_a68c(0, r1_14, r2_7);
                result = *0x20ba3c;
                
                if (!result)
                {
                    result = 0xff7ef6e4(0x20ba28, 0x320);
                    *0x20ba3c = 1;
                }
            }
        }
        else
        {
            uint32_t r4_1 = *0x20ba46;
            uint32_t r5_1 = *0x20ba44;
            
            if (r4_1 != r5_1)
            {
                *0x20ba46 = r5_1;
                int32_t r1_3;
                result = sub_12b3e(sub_12b3e(r5_1 - r4_1 + 0x1ec, 0x1ec), 6);
                
                if (!r1_3)
                {
                    while (r4_1 != r5_1)
                    {
                        uint16_t r1_6 = *(r4_1 + 0x20ba49) << 8 | *(r4_1 + 0x20ba48);
                        uint16_t r1_9 = *(r4_1 + 0x20ba4b) << 8 | *(r4_1 + 0x20ba4a);
                        uint16_t r0_7 = *(r4_1 + 0x20ba4d) << 8 | *(r4_1 + 0x20ba4c);
                        uint32_t r0_8 = *0x20ba20;
                        int32_t r0_15;
                        int32_t r1_11;
                        int32_t r2_5;
                        
                        if (r0_8 == 0x44)
                        {
                        label_a76a:
                            r2_5 = 0 - r0_7;
                            r1_11 = r1_9;
                            r0_15 = r1_6;
                        }
                        else if (r0_8 == 0x23)
                        {
                            r2_5 = r0_7;
                            r1_11 = r1_6;
                            r0_15 = r1_9;
                        }
                        else
                        {
                            if (r0_8 == 0x28)
                                goto label_a76a;
                            
                            r2_5 = r0_7;
                            r1_11 = 0 - r1_9;
                            r0_15 = r1_6;
                        }
                        
                        sub_148e0(r0_15, r1_11, r2_5);
                        
                        if (*0x20ba25 && !*0x20ba34)
                        {
                            if (sub_14a1c() <= 0x7d0)  /* "17 10:58:10 2022" */
                            {
                                uint32_t r0_22 = *0x20ba36 + 1;
                                *0x20ba36 = r0_22;
                                
                                if (r0_22 > 5)
                                {
                                    *0x20ba36 = 0;
                                    *0x20ba35 = 0;
                                }
                            }
                            else
                            {
                                uint32_t r0_19 = *0x20ba35 + 1;
                                *0x20ba35 = r0_19;
                                
                                if (r0_19 > 0xa)
                                {
                                    *0x20ba35 = 0;
                                    sub_5356(2);
                                    0xff7ef6e4(0x20ba2c, 0xbb8);
                                    *0x20ba34 = 1;
                                }
                                
                                *0x20ba36 = 0;
                            }
                        }
                        
                        r4_1 = r4_1 + 6;
                        
                        if (r4_1 >= 0x1ec)
                            r4_1 = r4_1 - 0x1ec;
                    }
                    
                    if (!sub_281e())
                    {
                        uint32_t r0_24 = sub_14a2c();
                        
                        if (r0_24)
                        {
                            sub_91b6(r0_24);
                            
                            if (*0x20b850 != 2)
                            {
                                sub_91d2(sub_149fc());
                                sub_91de(sub_14a0c());
                            }
                            
                            sub_529c(0x12);  /* "02_3.00.33_250117" */
                        }
                        
                        sub_8eea(sub_149ec());
                        uint32_t r0_31 = sub_15544();
                        
                        if (r0_31)
                            sub_8ab0(3, r0_31);
                    }
                    else
                    {
                        sub_14a2c();
                        sub_149ec();
                        sub_15544();
                        sub_14a0c();
                        sub_149fc();
                    }
                    
                    result = sub_14a3c();
                    
                    if (result)
                    {
                        result = sub_aa80();
                        
                        if (result)
                        {
                            *0x20ba40 = 1;
                            *0x20ba24 = 1;
                            result = sub_183e();
                            *0x20ba30 = result;
                        }
                    }
                }
            }
        }
    }
    
    return result;
}

int32_t sub_a8d4()
{
    if (!*0x20ba22)
        *0x20ba22 = 1;
    
    if (!*0x20ba21)
        *0x20ba21 = 1;
    
    return sub_116c();
}

int32_t sub_a8f6()
{
    int32_t r3;
    int32_t var_14 = r3;
    int32_t r2;
    int32_t var_18 = r2;
    sub_9ba0();
    0xff7ef684(0x20ba28, "gsensor_read_timer_id", 1, 0x7d0, 1, 0x82e63d);  /* "17 10:58:10 2022" */
    0xff7ef684(0x20ba2c, "gsensor_shake_flag_timer_id", 1, 0x7d0, 0, 0x82e5f9);
        /* "17 10:58:10 2022" */
    sub_14a50();
    sub_14cc4(*0x2086e4, *0x2086e6, *0x2086e7);
    sub_153a4(0);
    sub_14c90(0xc);
    *0x20ba3c = 0;
    return 0x20ba38;
}

int32_t sub_a94e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    uint32_t r0 = *arg1[2];
    
    if (!r0)
        return sub_a444(r0, arg2, arg3, arg4);
    
    int32_t lr;
    return 0xff7e1af8(0x23103002, 0x880135c, 2, 
        0xff7e1eba(0x23400000, "..\..\..\..\qc_code\app_module\gsensor\lis3dh_spi.c"), 0x7c7, arg1, 
        arg2, lr);
}

void sub_a97e(char arg1)
{
    *0x20ba25 = arg1;
}

int32_t sub_a986() __pure
{
    return;
}

int32_t sub_aa14()
{
    0xff81b964(0x20bc34, 8);
    *0x20bc35 = 1;
    *0x20bc34 = 0;
    return 0x20bc34;
}

void sub_aa2a(char* arg1)
{
    *arg1 = *0x20bc34;
    arg1[1] = *0x20bc35;
    arg1[2] = *0x20bc36;
}

int32_t sub_aa3a(char* arg1)
{
    int32_t r1 = arg1[1];
    
    if (r1 - 1 >= 0xa)
        r1 = 5;
    
    *0x20bc35 = r1;
    *0x20bc34 = *arg1;
    *0x20bc36 = arg1[2];
    return 0;
}

void sub_aa56(char arg1)
{
    *0x20bc34 = arg1;
}

uint32_t sub_aa5c()
{
    return *0x20bc34;
}

int32_t sub_aa62()
{
    if (!*0x20bc34 || *0x20bc3a == 1)
        return 0x20bc34;
    
    *0x20bc3a = 1;
    return sub_116c();
}

int32_t sub_aa80()
{
    if (sub_5bae() && *0x20bc34)
        return 0;
    
    return 1;
}

int32_t sub_aa9a() __pure
{
    return;
}

int32_t sub_aaa0() __pure
{
    return;
}

int32_t sub_aaa2() __pure
{
    return;
}

int32_t sub_aaa4() __pure
{
    return 0;
}

int32_t sub_aaa8() __pure
{
    return 0;
}

int32_t sub_aaac() __pure
{
    return;
}

uint32_t sub_aab0()
{
    return *0x20bc3d;
}

int32_t sub_aab6()
{
    int32_t r3;
    int32_t var_10 = r3;
    var_10 = 0;
    *0x20bc3d = 0;
    return 0;
}

int32_t sub_aafc(int32_t arg1)
{
    if (*0x20bc48 != arg1)
    {
        if (*0x20bc4a)
        {
            sub_3730(0x20bc44);
            *0x20bc4a = 0;
        }
        
        *0x20bc48 = arg1;
    }
    
    *0x20bc49 = 1;
    return 1;
}

uint32_t sub_ab22(char arg1)
{
    uint32_t result = *0x20bc48;
    
    if (result)
    {
        result = *0x20bc4a;
        
        if (result)
        {
            sub_3730(0x20bc44);
            result = 0;
            *0x20bc4a = 0;
        }
    }
    
    *0x20bc49 = arg1;
    return result;
}

int32_t sub_ab44(int32_t arg1)
{
    if (*0x20bc48 != arg1)
    {
        if (*0x20bc4a)
        {
            sub_3730(0x20bc44);
            *0x20bc4a = 0;
        }
        
        *0x20bc48 = arg1;
    }
    
    *0x20bc49 = 1;
    return 1;
}

uint32_t sub_ab6a()
{
    uint32_t result = *0x20bc48;
    
    if (result)
    {
        if (*0x20bc4a)
        {
            sub_3730(0x20bc44);
            *0x20bc4a = 0;
            *0x20bc49;
        }
        
        result = 1;
        *0x20bc4b = 1;
    }
    
    return result;
}

int32_t sub_abaa()
{
    if (*0x20bc48 && *0x20bc4a)
        return 1;
    
    return 0;
}

uint32_t sub_abde()
{
    uint32_t result = *0x20bc4b;
    
    if (!result)
    {
        int32_t r0 = *0x20bc4c;
        int32_t r7_2;
        
        if (!*0x20bc49)
        {
            int32_t r0_7;
            int32_t r1_5;
            r0_7 = sub_1351a(r0);
            int32_t r0_8;
            int32_t r1_6;
            r0_8 = sub_13778(r0_7, r1_5, result - 1);
            r7_2 = sub_13424(r0_8, r1_6);
            
            if (r7_2 + 0xa < 0x15)  /* "3.00.33_250117" */
            {
                *0x20bc4a = 0;
                sub_3730(0x20bc44);
                *0x20bc4c = 0;
                return 4;
            }
            
            *0x20bc64;
            result = 3;
        }
        else
        {
            int32_t r0_1;
            int32_t r1_2;
            r0_1 = sub_1351a(r0);
            int32_t r0_2;
            int32_t r1_3;
            r0_2 = sub_13778(r0_1, r1_2, result - 1);
            r7_2 = sub_13424(r0_2, r1_3);
            
            if (r7_2 + 0xa < 0x15)  /* "3.00.33_250117" */
            {
                *0x20bc4a = 0;
                sub_3730(0x20bc44);
                *0x20bc4c = 0;
                return 7;
            }
            
            *0x20bc62;
            result = 6;
        }
        
        *0x20bc4c = r7_2;
    }
    
    return result;
}

uint32_t sub_acac(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, int16_t arg6 @ r6, uint32_t arg7, void* arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12, int32_t arg13)
{
    uint32_t r1_8;
    void* r2_2;
    void* r3_1;
    
    if (arg1 < 0x3e8)
    {
        uint32_t r3_3 = *0x20bc62;
        r2_2 = arg3 - r3_3;
        void* r3_4;
        
        r3_4 = arg3 - r3_3 < 0 ? 0 - r2_2 : r2_2;
        
        arg8 = r3_4;
        uint32_t r3_5 = *0x20bc64;
        arg7 = r3_5;
        void* r3_6 = arg2 - r3_5;
        
        if (arg2 - r3_5 < 0)
            r3_6 = 0 - r3_6;
        
        if (arg8 < 0x1e)  /* "50117" */
        {
            r3_1 = r3_6;
            
            if (r3_1 < 0x1e)  /* "50117" */
            {
                r1_8 = *0x20bc48;
                
                if (r1_8)
                {
                    r1_8 = *0x20bc4a;
                    
                    if (r1_8)
                    {
                        if (arg1 < 0x64)
                        {
                            uint32_t r0_8 = *0x20bc59;
                            
                            if (r0_8 == 3)
                            {
                                *0x20bc58 = 3;
                                *0x20bc6e = arg6;
                                r3_1 = sub_ab22(1);
                                r1_8 = *0x20bc64;
                                
                                for (int32_t i = 0; i < 3; )
                                {
                                    r2_2 = (i << 1) + 0x20bc48;
                                    i += 1;
                                    *(r2_2 + 6) = r1_8;
                                }
                                
                                *0x20bc54 = *0x20bc68;
                            }
                            else if (r0_8 == 2)
                            {
                                *0x20bc58 = 2;
                                r3_1 = sub_ab22(0);
                                *0x20bc6e = arg6;
                                r1_8 = *0x20bc62;
                                
                                for (int32_t i_1 = 0; i_1 < 3; )
                                {
                                    r2_2 = (i_1 << 1) + 0x20bc48;
                                    i_1 += 1;
                                    *(r2_2 + 6) = r1_8;
                                }
                                
                                *0x20bc54 = *0x20bc66;
                            }
                        }
                        else
                        {
                            sub_ab6a();
                            *0x20bc58 = 5;
                            r1_8 = sub_3704(0x20bc40, 0x82ec27, 0xa, 1);
                        }
                    }
                }
            }
            else
            {
                *0x20bc58 = 3;
                *0x20bc6e = arg6;
                r2_2 = sub_ab22(1);
                int32_t i_2 = 0;
                r1_8 = *0x20bc64;
                
                do
                {
                    r3_1 = (i_2 << 1) + 0x20bc48;
                    i_2 += 1;
                    *(r3_1 + 6) = r1_8;
                } while (i_2 < 3);
                
                *0x20bc54 = *0x20bc68;
            }
        }
        else
        {
            *0x20bc58 = 2;
            r2_2 = sub_ab22(0);
            *0x20bc6e = arg6;
            int32_t i_3 = 0;
            r1_8 = *0x20bc62;
            
            do
            {
                r3_1 = (i_3 << 1) + 0x20bc48;
                i_3 += 1;
                *(r3_1 + 6) = r1_8;
            } while (i_3 < 3);
            
            *0x20bc54 = *0x20bc66;
        }
    }
    else
    {
        if (!*0x20bc5b)
        {
            *0x20bc58 = 5;
            /* tailcall */
            return sub_ae68(arg6, arg1, *0x20bc66, *0x20bc68, arg4, arg7, arg8, arg9);
        }
        
        int32_t r1_1 = 0x12c;
        
        if (arg1 > 0xbb8)
            r1_1 = 0x3c;
        else if (arg1 > 0x4b0)
            r1_1 = 0x96;
        
        int32_t r0_1;
        r0_1 = sub_12b3e(arg1, r1_1);
        
        if (!r1_8)
            /* tailcall */
            return sub_ae68(arg6, r0_1, arg5, arg5 << 3, r3_1, arg7, arg8, arg9);
    }
    
    *0x20bc6a = *0x20bc66;
    *0x20bc6c = *0x20bc68;
    uint32_t result = *0x20bc5e + 0xa;
    *0x20bc5e = result;
    
    if (result >= 0x50)
    {
        uint32_t r0_14 = *0x20bc58;
        
        if (r0_14 == 1)
        {
            *0x20bc68;
            *0x20bc66;
        }
        else if (r0_14 == 2)
        {
            int32_t r0_18;
            
            if (*0x20bc5c < 0x64)
                r0_18 = sub_b02c();
            
            if ((*0x20bc5c >= 0x64 || !r0_18) && !sub_b0b4())
            {
                *0x20bc68;
                *0x20bc66;
            }
        }
        else if (r0_14 == 3)
        {
            int32_t r0_22;
            
            if (*0x20bc5c < 0x64)
                r0_22 = sub_b070();
            
            if (*0x20bc5c >= 0x64 || !r0_22)
            {
                int32_t r0_24;
                
                if (*0x20bc48)
                    r0_24 = sub_b0fc();
                
                if (!*0x20bc48 || !r0_24)
                {
                    *0x20bc68;
                    *0x20bc66;
                }
            }
        }
        else if (r0_14 == 6)
            /* tailcall */
            return sub_af00(0x20bc58, arg6, r0_14, r1_8, r2_2, r3_1, arg7, arg8, arg9);
        
        sub_3730(0x20bc40);
        *0x20bc59 = *0x20bc58;
        *0x20bc58 = arg6;
        *0x20bc68;
        result = *0x20bc66;
    }
    
    return result;
}

uint32_t sub_adfc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r5, int16_t arg6 @ r6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, int32_t arg12, int32_t arg13)
{
    uint32_t r0 = *0x20bc6a;
    int32_t r1;
    
    if (r0 == arg3)
        r1 = arg7;
    
    if (r0 != arg3 || r1 > 0x3e8)
    {
        r1 = arg3 - r0;
        arg3 = arg5;
        *0x20bc6e = arg6;
    }
    
    *0x20bc6a = *0x20bc66;
    *0x20bc6c = *0x20bc68;
    uint32_t result = *0x20bc5e + 0xa;
    *0x20bc5e = result;
    
    if (result >= 0x50)
    {
        uint32_t r0_7 = *0x20bc58;
        
        if (r0_7 == 1)
        {
            *0x20bc68;
            *0x20bc66;
        }
        else if (r0_7 == 2)
        {
            int32_t r0_11;
            
            if (*0x20bc5c < 0x64)
                r0_11 = sub_b02c();
            
            if ((*0x20bc5c >= 0x64 || !r0_11) && !sub_b0b4())
            {
                *0x20bc68;
                *0x20bc66;
            }
        }
        else if (r0_7 == 3)
        {
            int32_t r0_15;
            
            if (*0x20bc5c < 0x64)
                r0_15 = sub_b070();
            
            if (*0x20bc5c >= 0x64 || !r0_15)
            {
                int32_t r0_17;
                
                if (*0x20bc48)
                    r0_17 = sub_b0fc();
                
                if (!*0x20bc48 || !r0_17)
                {
                    *0x20bc68;
                    *0x20bc66;
                }
            }
        }
        else if (r0_7 == 6)
            /* tailcall */
            return sub_af00(0x20bc58, arg6, r0_7, r1, arg3, arg4, arg7, arg8, arg9);
        
        sub_3730(0x20bc40);
        *0x20bc59 = *0x20bc58;
        *0x20bc58 = arg6;
        *0x20bc68;
        result = *0x20bc66;
    }
    
    return result;
}

uint32_t sub_ae20(int32_t arg1, int32_t arg2, int32_t arg3 @ r4, int16_t arg4 @ r6, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11)
{
    uint32_t r0 = *0x20bc6c;
    int32_t r2_1;
    
    if (r0 == arg2)
        r2_1 = arg5;
    
    if (r0 != arg2 || r2_1 > 0x3e8)
    {
        r2_1 = r0 - arg2;
        arg2 = arg3;
        *0x20bc6e = arg4;
    }
    
    *0x20bc6a = *0x20bc66;
    *0x20bc6c = *0x20bc68;
    uint32_t result = *0x20bc5e + 0xa;
    *0x20bc5e = result;
    
    if (result >= 0x50)
    {
        uint32_t r0_7 = *0x20bc58;
        
        if (r0_7 == 1)
        {
            *0x20bc68;
            *0x20bc66;
        }
        else if (r0_7 == 2)
        {
            int32_t r0_11;
            
            if (*0x20bc5c < 0x64)
                r0_11 = sub_b02c();
            
            if ((*0x20bc5c >= 0x64 || !r0_11) && !sub_b0b4())
            {
                *0x20bc68;
                *0x20bc66;
            }
        }
        else if (r0_7 == 3)
        {
            int32_t r0_15;
            
            if (*0x20bc5c < 0x64)
                r0_15 = sub_b070();
            
            if (*0x20bc5c >= 0x64 || !r0_15)
            {
                int32_t r0_17;
                
                if (*0x20bc48)
                    r0_17 = sub_b0fc();
                
                if (!*0x20bc48 || !r0_17)
                {
                    *0x20bc68;
                    *0x20bc66;
                }
            }
        }
        else
        {
            int32_t entry_r3;
            
            if (r0_7 == 6)
                /* tailcall */
                return sub_af00(0x20bc58, arg4, r0_7, arg2, r2_1, entry_r3, arg5, arg6, arg7);
        }
        
        sub_3730(0x20bc40);
        *0x20bc59 = *0x20bc58;
        *0x20bc58 = arg4;
        *0x20bc68;
        result = *0x20bc66;
    }
    
    return result;
}

uint32_t sub_ae68(char arg1 @ r6, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    *0x20bc6a = *0x20bc66;
    *0x20bc6c = *0x20bc68;
    uint32_t result = *0x20bc5e + 0xa;
    *0x20bc5e = result;
    
    if (result >= 0x50)
    {
        uint32_t r0_4 = *0x20bc58;
        
        if (r0_4 == 1)
        {
            *0x20bc68;
            *0x20bc66;
        }
        else if (r0_4 == 2)
        {
            int32_t r0_8;
            
            if (*0x20bc5c < 0x64)
                r0_8 = sub_b02c();
            
            if ((*0x20bc5c >= 0x64 || !r0_8) && !sub_b0b4())
            {
                *0x20bc68;
                *0x20bc66;
            }
        }
        else if (r0_4 == 3)
        {
            int32_t r0_12;
            
            if (*0x20bc5c < 0x64)
                r0_12 = sub_b070();
            
            if (*0x20bc5c >= 0x64 || !r0_12)
            {
                int32_t r0_14;
                
                if (*0x20bc48)
                    r0_14 = sub_b0fc();
                
                if (!*0x20bc48 || !r0_14)
                {
                    *0x20bc68;
                    *0x20bc66;
                }
            }
        }
        else
        {
            int32_t entry_r1;
            int32_t entry_r2;
            int32_t entry_r3;
            
            if (r0_4 == 6)
                /* tailcall */
                return sub_af00(0x20bc58, arg1, r0_4, entry_r1, entry_r2, entry_r3, arg2, arg3, 
                    arg4);
        }
        
        sub_3730(0x20bc40);
        *0x20bc59 = *0x20bc58;
        *0x20bc58 = arg1;
        *0x20bc68;
        result = *0x20bc66;
    }
    
    return result;
}

uint32_t sub_af00(char* arg1 @ r4, char arg2 @ r6, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9)
{
    if (*(arg1 + 8) < 0xa)
    {
        *(arg1 + 0x10);  /* "RY02_3.00.33_250117" */
        *(arg1 + 0xe);
    }
    else
    {
        *(arg1 + 0x10);  /* "RY02_3.00.33_250117" */
        *(arg1 + 0xe);
    }
    
    sub_3730(0x20bc40);
    arg1[1] = *arg1;
    *arg1 = arg2;
    *(arg1 + 0x10);  /* "RY02_3.00.33_250117" */
    return *(arg1 + 0xe);
}

char* sub_af2c(char* arg1)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t r2;
    int32_t var_10_1 = r2;
    int32_t r1;
    int32_t var_14_1 = r1;
    char* result = arg1;
    result = &data_0;
    int32_t var_14 = 0;
    int32_t var_10 = 0;
    int32_t var_c = 0;
    result = 0x80;
    *result[1] = 0xaa;
    *result[2] = *arg1;
    *result[3] = 0xaa;
    var_14 = arg1[1];
    *var_14[1] = 0xaa;
    *var_14[2] = arg1[2];
    *var_14[3] = 0xaa;
    var_10 = arg1[3];
    *var_10[1] = 0xaa;
    *var_10[2] = arg1[4];
    *var_10[3] = 0xaa;
    var_c = arg1[5];
    *var_c[1] = 0xaa;
    *var_c[3] = sub_3764(&result, 0xf);
    sub_6650(&result);
    return result;
}

uint32_t sub_af7a()
{
    int32_t r3;
    int32_t var_14 = r3;
    int32_t r2;
    int32_t var_18 = r2;
    
    if (!*0x20bc3c)
        return 0x20bc3c;
    
    *0x20bc3c = 0;
    var_18 = 0;
    var_14 = 0;
    return sub_b1b0();
}

int32_t sub_b02a() __pure
{
    return;
}

int32_t sub_b02c()
{
    if (*0x20bc48 == 1 && !*0x20bc4b)
    {
        int32_t r0_4 = *0x20bc54 - *0x20bc4e;
        *0x20bc4c = r0_4;
        int16_t r0_5;
        
        if (r0_4 > 0)
        {
            r0_5 = 0x78;
        label_b056:
            *0x20bc4c = r0_5;
            sub_3704(0x20bc44, 0x82eb8f, 0x1e, 1);  /* "50117" */
            *0x20bc4a = 1;
            return 1;
        }
        
        if (r0_4 < 0)
        {
            r0_5 = -0x78;
            goto label_b056;
        }
    }
    
    return 0;
}

int32_t sub_b070()
{
    if (*0x20bc48 && !*0x20bc4b)
    {
        int32_t r0_4 = *0x20bc54 - *0x20bc4e;
        *0x20bc4c = r0_4;
        int16_t r0_5;
        
        if (r0_4 > 0)
        {
            r0_5 = 0x3c;
        label_b09a:
            *0x20bc4c = r0_5;
            sub_3704(0x20bc44, 0x82eb8f, 0x1e, 1);  /* "50117" */
            *0x20bc4a = 1;
            return 1;
        }
        
        if (r0_4 < 0)
        {
            r0_5 = -0x3c;
            goto label_b09a;
        }
    }
    
    return 0;
}

int32_t sub_b0b4()
{
    if (!*0x20bc4b)
    {
        int32_t r0_3 = *0x20bc54 - *0x20bc4e;
        *0x20bc4c = r0_3;
        
        if (r0_3 + 0xa >= 0x15)  /* "3.00.33_250117" */
        {
            if (r0_3 > 0x78)
                *0x20bc4c = 0x78;
            else if (r0_3 < 0xffffff88)
                *0x20bc4c = 0xff88;
            
            sub_3704(0x20bc44, 0x82eb8f, 0x1e, 1);  /* "50117" */
            *0x20bc4a = 1;
            return 1;
        }
    }
    
    return 0;
}

int32_t sub_b0fc()
{
    if (!*0x20bc4b)
    {
        int32_t r0_3 = *0x20bc54 - *0x20bc4e;
        *0x20bc4c = r0_3;
        
        if (r0_3 > 0x3c)
            *0x20bc4c = r0_3 << 1;
        
        int32_t r0_5 = *0x20bc4c;
        
        if (r0_5 + 0xa >= 0x15)  /* "3.00.33_250117" */
        {
            if (r0_5 > 0x3c)
                *0x20bc4c = 0x3c;
            else if (r0_5 < 0xffffffc4)
                *0x20bc4c = 0xffc4;
            
            sub_3704(0x20bc44, 0x82eb8f, 0x1e, 1);  /* "50117" */
            *0x20bc4a = 1;
            return 1;
        }
    }
    
    return 0;
}

uint32_t sub_b150()
{
    uint32_t r1 = *0x20bc6a;
    uint32_t r4 = *0x20bc66;
    uint32_t r2 = *0x20bc6c;
    uint32_t result = *0x20bc68;
    
    if (r1 != r4 || r2 != result || *0x20bc6e > 0x3e8)
    {
        uint32_t r1_1 = r4 - r1;
        result -= r2;
        int16_t r2_1;
        
        r2_1 = r1_1 < 0 ? 0 - r1_1 : r1_1;
        
        int16_t r4_1 = result;
        
        if (result < 0)
            r4_1 = 0 - result;
        
        uint32_t r2_4 = r2_1 + r4_1 + *0x20bc60;
        *0x20bc60 = r2_4;
        
        if (r2_4 >= 0xa)
            result = 9;
    }
    
    return result;
}

int32_t sub_b1ac() __pure
{
    return;
}

int32_t sub_b1ae() __pure
{
    return;
}

int32_t sub_b1b0() __pure
{
    return 0;
}

int32_t sub_b1b4() __pure
{
    return;
}

int32_t sub_b1b6() __pure
{
    return;
}

int32_t sub_b1b8() __pure
{
    return;
}

int32_t sub_b1ba() __pure
{
    return;
}

int32_t sub_b1bc() __pure
{
    return;
}

int32_t sub_b1be() __pure
{
    return;
}

int32_t sub_b1c0() __pure
{
    return 0;
}

int32_t sub_b1c4()
{
    sub_f69e(0x14, 5);  /* "_3.00.33_250117" */
    sub_f69e(0x15, 6);  /* "3.00.33_250117" */
    sub_f6bc(0x14, 1, 1, 0, 0, 1);  /* "_3.00.33_250117" */
    sub_f6bc(0x15, 1, 1, 0, 0, 1);  /* "3.00.33_250117" */
    sub_f8b8(0x14, 1);  /* "_3.00.33_250117" */
    sub_f8b8(0x15, 1);  /* "3.00.33_250117" */
    sub_fde8(0x40015000, 0);
    sub_fc34(0x8010000, 0x60000001, 1);
    int32_t var_30;
    sub_100e0(&var_30);
    var_30 = 0x2625a00;
    int32_t var_2c = 0x493e0;
    int16_t var_28 = 0x41;
    int16_t var_26 = 0;
    int16_t var_22 = 1;
    sub_ff44(0x40015000, &var_30);
    sub_10106(0x40015000, 1);
    return 0x40015000;
}

int32_t sub_b24c()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    sub_f69e(0x21, 0x5a);  /* "17" */
    return sub_f6bc(0x21, 0, 1, 1, 0, 0);  /* "17" */
}

int32_t sub_b26a()
{
    sub_b24c();
    return sub_b1c4();
}

uint32_t sub_b276()
{
    return *0x20846b;
}

int32_t sub_b27c() __pure
{
    return 0;
}

int32_t sub_b280() __pure
{
    return 0;
}

int32_t sub_b284()
{
    int32_t r3;
    int32_t var_14 = r3;
    int32_t r2;
    int32_t var_18 = r2;
    sub_f6bc(0x14, 0, 1, 0, 0, 1);  /* "_3.00.33_250117" */
    return sub_f6bc(0x15, 0, 1, 0, 0, 1);  /* "3.00.33_250117" */
}

int32_t sub_b2ac()
{
    int32_t r3;
    int32_t var_14 = r3;
    int32_t r2;
    int32_t var_18 = r2;
    sub_f6bc(0x14, 1, 1, 0, 0, 1);  /* "_3.00.33_250117" */
    return sub_f6bc(0x15, 1, 1, 0, 0, 1);  /* "3.00.33_250117" */
}

int32_t sub_b2d4(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t var_10 = arg3;
    sub_1047e(sub_104aa(0x21), 0);  /* "17" */
    sub_10498(sub_104aa(0x21), 1);  /* "17" */
    sub_10490(sub_104aa(0x21));  /* "17" */
    var_10 = 3;
    *var_10[2] = 0;
    int32_t var_c = 0;
    sub_13b8(&var_10);
    sub_1047e(sub_104aa(0x21), 1);  /* "17" */
    int32_t result = sub_104aa(0x21);  /* "17" */
    sub_10498(result, 0);
    return result;
}

int32_t sub_b326() __pure
{
    return;
}

int32_t sub_b328()
{
    return sub_7760(0x83e258);
}

int32_t sub_b332()
{
    int32_t r2;
    int32_t var_1c = r2;
    int32_t r1;
    int32_t var_20 = r1;
    sub_100bc(0x40015000);
    
    for (int32_t i = 0; i < 9; i += 1)
    {
        sub_f6bc(0x14, 0, 1, 1, 1, 0);  /* "_3.00.33_250117" */
        (*0x200120)(1);
        sub_f6bc(0x14, 0, 1, 0, 1, 1);  /* "_3.00.33_250117" */
        (*0x200120)(1);
    }
    
    sub_f6bc(0x15, 0, 1, 1, 1, 0);  /* "3.00.33_250117" */
    (*0x200120)(1);
    sub_f6bc(0x15, 0, 1, 0, 1, 1);  /* "3.00.33_250117" */
    (*0x200120)(1);
    return sub_b1c4();
}

uint32_t sub_b3a6(int32_t arg1)
{
    uint32_t result;
    
    if (!arg1)
    {
        result = 0;
        *0x20bc78 = 0;
        *0x20bc79 = 0;
    }
    else
    {
        result = *0x20bc79;
        
        if (result < 0xa)
            *0x20bc78 += 1;
        
        if (*0x20bc78 == 0x1e)  /* "50117" */
        {
            *0x20bc78 = 0x1f;  /* "0117" */
            *0x20bc79 = result + 1;
            /* tailcall */
            return sub_b332();
        }
    }
    
    return result;
}

int32_t sub_b3d0(int32_t arg1, char* arg2, int32_t arg3)
{
    *0x20bc7a = arg1;
    *0x20bc7b = *arg2;
    *0x20bc7c = arg3;
    *0x20846b = 0;
    int32_t r4 = 0;
    
    while (!sub_b7c0(0x40015000, 4))
    {
        (*0x20011c)(0xa);
        r4 += 0xa;
        
        if (r4 > 0x1388)
        {
            *0x20846b = 1;
            return 2;
        }
    }
    
    int32_t r4_1 = 0;
    
    while (sub_b7c0(0x40015000, 0x20) == 1)  /* "117" */
    {
        (*0x20011c)(0xa);
        r4_1 += 0xa;
        
        if (r4_1 > 0x1388)
        {
            *0x20846b = 1;
            return 3;
        }
    }
    
    sub_b7ac(0x40015000, arg1);
    bool cond:0 = !sub_1015a(0x40015000, arg2, arg3);
    *0x20846b = 1;
    
    if (cond:0)
        return 0;
    
    return 1;
}

int32_t sub_b458(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t var_20 = arg2;
    int32_t var_24 = arg1;
    char* r0_2 = sub_f458(arg4 + 0xb);
    *r0_2 = arg2;
    0xff81b898(&r0_2[1], arg3, arg4);
    int32_t result = sub_b3d0(arg1, r0_2, arg4 + 1);
    sub_b3a6(result);
    sub_f504();
    return result;
}

int32_t sub_b496(int32_t arg1, char* arg2, int32_t arg3, char* arg4, int32_t arg5)
{
    *0x20bc7a = arg1;
    *0x20bc7b = *arg2;
    *0x20bc7c = arg3;
    *0x20846b = 0;
    int32_t r4 = 0;
    
    while (!sub_b7c0(0x40015000, 4))
    {
        (*0x20011c)(0xa);
        r4 += 0xa;
        
        if (r4 > 0x1388)
        {
            *0x20846b = 1;
            return 2;
        }
    }
    
    int32_t r4_1 = 0;
    
    while (sub_b7c0(0x40015000, 0x20) == 1)  /* "117" */
    {
        (*0x20011c)(0xa);
        r4_1 += 0xa;
        
        if (r4_1 > 0x1388)
        {
            *0x20846b = 1;
            return 3;
        }
    }
    
    sub_b7ac(0x40015000, arg1);
    bool cond:0_1 = !sub_1022e(0x40015000, arg2, arg3, arg4, arg5);
    *0x20846b = 1;
    
    if (cond:0_1)
        return 0;
    
    return 1;
}

int32_t sub_b524(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    char* var_10 = arg3;
    int32_t var_14 = arg2;
    int32_t var_18 = arg1;
    int32_t result = sub_b496(arg1, &var_14, 1, arg3, arg4);
    sub_b3a6(result);
    return result;
}

int32_t sub_b540(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t var_10 = arg3;
    var_10 = 3;
    *var_10[2] = 2;
    int32_t var_c = arg1;
    return sub_13b8(&var_10);
}

int32_t sub_b55a(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t var_10 = arg3;
    var_10 = 3;
    *var_10[2] = 1;
    int32_t var_c = arg1;
    return sub_13b8(&var_10);
}

int32_t sub_b574(int32_t arg1, int32_t arg2)
{
    uint32_t r0 = *arg1[2];
    
    if (!r0)
    {
        sub_cd4c();
        return 1;
    }
    
    if (r0 == 1)
        return sub_cc18(arg2);
    
    if (r0 == 2)
        return sub_ccbc(arg2);
    
    int32_t lr;
    return 0xff7e1af8(0x23103002, 0x8801374, 2, 
        0xff7e1eba(0x23400000, "..\..\..\..\qc_code\app_module\hr\hr_module.c"), 0x192, arg1, arg2, 
        lr);
}

int32_t sub_b5c0()
{
    char r0 = sub_ccfc();
    int32_t entry_r1;
    int32_t entry_r2;
    sub_b540(2, entry_r1, entry_r2);
    char* r1 = *0x20bc98;
    
    if (r1)
        *r1 = r0;
    
    char* r1_1 = *0x20bc9c;
    
    if (r1_1)
        *r1_1 = r0;
    
    *0x20bc94 = 0;
    *0x20bc98 = 0;
    *0x20bc9c = 0;
    return sub_3730(0x20bc80);
}

uint32_t sub_b658(char* arg1)
{
    uint32_t r0_1 = *0x20bc94 << 0x1f;  /* "0117" */
    
    if (r0_1)
    {
        *0x20bc9c = arg1;
        return r0_1;
    }
    
    char r0_2 = 0;
    *0x20bc94 = 0;
    *0x20bc98 = 0;
    *0x20bc9c = 0;
    uint32_t r1 = *0x208850;
    
    if (r1 == 1)
    {
        *0x20bc87 = 1;
        
        if (arg1)
        {
            *arg1 = 0;
            return 0;
        }
    }
    else
    {
        int32_t entry_r2;
        sub_b55a(2, r1, entry_r2);
        sub_3704(0x20bc80, 0x82f571, 0x9c4, 1);
        r0_2 = *0x20bc94 | 1;
        *0x20bc94 = r0_2;
        *0x20bc98 = arg1;
    }
    
    return r0_2;
}

void sub_b6aa(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3 = arg1 - arg2;
    
    if (arg1 - arg2 < 0)
        r3 = 0 - r3;
    
    if (r3 <= arg3 || !arg2 || !arg1 || (*0x2086a8 == arg2 && *0x2086ac == arg1))
        return;
    
    if (arg2 >= arg1)
    {
        *0x2086ac = arg2;
        *0x2086a8 = arg1;
        arg1 = arg2;
    }
    else
    {
        *0x2086a8 = arg2;
        *0x2086ac = arg1;
    }
    
    *0x2086b0 = arg1 - *0x2086a8;
}

uint32_t sub_b6e2(int32_t arg1, int32_t arg2, int32_t arg3)
{
    uint32_t result = arg1 - arg2;
    
    if (arg1 - arg2 < 0)
        result = 0 - result;
    
    if (result > arg3)
    {
        if (*0x20869e == arg2)
            result = *0x2086a0;
        
        if (*0x20869e != arg2 || result != arg1)
        {
            int16_t r0_2 = sub_12b3e(arg2 + arg1, 3);
            result = arg2;
            int16_t r1 = arg1;
            
            if (arg2 >= arg1)
            {
                *0x20869e = r1;
                *0x2086a0 = result;
            }
            else
            {
                *0x20869e = result;
                *0x2086a0 = r1;
            }
            
            *0x2086a2 = r0_2;
        }
    }
    
    return result;
}

int32_t sub_b724()
{
    0xff81b968(0x20bca0, 0x38);  /* "0" */
    return 0xff81b968(0x20bcd8, 0x38);  /* "0" */
}

int32_t sub_b73c()
{
    return *0x20bd04;
}

int32_t sub_b744()
{
    return *0x20bccc;
}

void* sub_b74c(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    if (arg2)
    {
        int32_t r0 = arg1[0xb];
        int32_t r0_1 = r0 - arg2;
        
        if (r0 - arg2 < 0)
            r0_1 = 0 - r0_1;
        
        arg1[0xb] = arg2;
        
        if (r0_1 > arg3)
            arg1[0xa] = 0;
        else
        {
            arg1[arg1[0xa]] = arg2;
            int32_t r0_5 = arg1[0xa] + 1;
            arg1[0xa] = r0_5;
            
            if (r0_5 >= 0xa)
            {
                int32_t r2 = 0;
                
                for (int32_t i = 0; i < 0xa; )
                {
                    int32_t r1_1 = arg1[i];
                    i += 1;
                    r2 += r1_1;
                }
                
                int32_t r0_7 = sub_12b3e(r2, 0xa);
                int32_t r1_2 = arg1[0xd];
                
                if (!r1_2)
                    arg1[0xd] = r0_7;
                else if (arg1[0xc] < r0_7)
                    arg1[0xc] = r0_7;
                else if (r1_2 > r0_7)
                    arg1[0xd] = r0_7;
                
                arg1[0xa] = 0;
            }
        }
    }
    
    return &arg1[0xc];
}

void sub_b7ac(void* arg1, int32_t arg2)
{
    *(arg1 + 4) = *(arg1 + 4) >> 0xa << 0xa;
    *(arg1 + 4) |= arg2 << 0x16 >> 0x16;  /* ".00.33_250117" */
}

int32_t sub_b7c0(void* arg1, int32_t arg2)
{
    if (!(*(arg1 + 0x70) & arg2))
        return 0;
    
    return 1;
}

uint32_t sub_b7e4(char arg1)
{
    *0x20bd10 = 0;
    uint32_t result = sub_12b3e(sub_814(), 3) + arg1 - 2;
    
    if (result < 0x5c)
        result = 0x5c;
    else if (result > 0x64)
        result = 0x64;
    
    *0x20bd10 = result;
    return result;
}

uint32_t sub_b810()
{
    return *0x20bd10;
}

void sub_b816(int32_t arg1)
{
    if (!arg1)
        return;
    
    *0x20bd1c = sub_216a();
    *0x20bd1e = sub_12b2a(sub_217a(), 0x3c);
    uint32_t r0_3 = *0x20bd20;
    char r1_1 = arg1;
    
    if (!r0_3)
    {
        *0x20bd20 = r1_1;
        *0x20bd21 = r1_1;
    }
    else
    {
        if (r0_3 < arg1)
            *0x20bd20 = r1_1;
        
        if (*0x20bd21 > arg1)
            *0x20bd21 = r1_1;
    }
    
    sub_529c(3);
}

uint32_t sub_b854()
{
    uint32_t result = *0x20bd11 + 1;
    *0x20bd11 = result;
    
    if (result >= 3)
    {
        if (result <= 0xe && !sub_ccfc())
        {
            int32_t r1_1;
            int32_t r2_1;
            r1_1 = sub_3730(0x20bd14);
            sub_b540(0x80, r1_1, r2_1);
        }
        
        uint32_t r0_3 = *0x20bd10;
        
        if (r0_3)
        {
            int32_t r1_2;
            int32_t r2_2;
            r1_2 = sub_b816(r0_3);
            sub_b540(0x80, r1_2, r2_2);
            return sub_3730(0x20bd14);
        }
        
        result = *0x20bd11;
        
        if (result >= 0x41)
            return sub_b7e4(sub_12b3e(sub_814(), 7) + 0x5d);
    }
    
    return result;
}

int32_t sub_b8b0()
{
    *0x20bd10 = 0;
    return 0;
}

uint32_t sub_b8b8()
{
    uint32_t result = sub_15f6();
    
    if (result)
    {
        result = *0x208852;
        
        if (result)
        {
            result = sub_9170();
            
            if (result != 1)
            {
                result = sub_281e();
                
                if (!result)
                {
                    *0x20bd11 = 0;
                    *0x20bd10 = 0;
                    int32_t entry_r2;
                    sub_b55a(0x80, 0, entry_r2);
                    return sub_3704(0x20bd14, 0x82f805, 0x3e8, 1);
                }
            }
        }
    }
    
    return result;
}

int32_t sub_b8fa() __pure
{
    return;
}

int32_t sub_b8fc(int32_t arg1, int32_t arg2)
{
    void* r0 = sub_3404(0x83e26c, *0x20bd18, arg1);
    0xff81b968(arg2, 0x34);  /* "_V3.0" */
    
    if (!r0)
    {
        if (*0x20bd1c != arg1)
            return 0;
        
        *((*0x20bd1e << 1) + arg2 + 4) = *0x20bd20;
        *((*0x20bd1e << 1) + arg2 + 5) = *0x20bd21;
    }
    else
    {
        0xff7dc2f8(arg2, r0, 0x34);  /* "_V3.0" */
        
        for (uint32_t i = 0; i < 0x18; i = i + 1)  /* "0.33_250117" */
        {
            void* r1_3 = (i << 1) + arg2;
            
            if (*(r1_3 + 4) == 0xff)
                *(r1_3 + 4) = 0;
            
            if (*(r1_3 + 5) == 0xff)
                *(r1_3 + 5) = 0;
        }
        
        if (*0x20bd1c == arg1)
        {
            *((*0x20bd1e << 1) + arg2 + 4) = *0x20bd20;
            *((*0x20bd1e << 1) + arg2 + 5) = *0x20bd21;
        }
    }
    
    return 1;
}

int32_t sub_b976(int32_t arg1)
{
    int32_t r4 = arg1;
    int32_t r5 = 0;
    uint32_t r0 = sub_216a();
    
    if (r4 >= 3)
        r4 = 2;
    
    char var_e0[0x98];
    uint32_t r2;
    
    if (r4 < 0)
        r2 = 0;
    else
    {
        int32_t temp0_1;
        
        do
        {
            void var_48;
            
            if (sub_b8fc(r0 - r4, &var_48))
            {
                var_e0[r5] = r4;
                void var_44;
                0xff81b898(&var_e0[r5 + 1], &var_44, 0x30);  /* "RY02_V3.0" */
                r5 += 0x31;  /* "Y02_V3.0" */
            }
            
            temp0_1 = r4;
            r4 -= 1;
        } while (temp0_1 - 1 >= 0);
        
        r2 = !r5 ? 0 : r5;
    }
    
    return sub_674e(0x2a, &var_e0, r2);
}

int32_t sub_b9c6()
{
    int32_t r3;
    int32_t var_c = r3;
    int32_t r2;
    int32_t var_10 = r2;
    uint32_t r2_1 = *0x20bd1c;
    
    if (!r2_1)
        return 0x20bd1c;
    
    var_c = 2;
    var_10 = 0x20bd20;
    sub_3372(0x83e26c, 0x20bd18, r2_1, (*0x20bd1e << 1) + 4, 0x20bd20, 2);
    return 0xff81b964(0x20bd1c, 6);
}

int32_t sub_b9f4()
{
    return sub_3262(0x83e26c);
}

int32_t sub_ba10(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t var_14 = arg3;
    int32_t* var_18 = arg2;
    
    if (arg2 - 0x28 <= 0xb4)
    {
        int16_t r0;
        int32_t r1_1;
        r0 = sub_12b2a(arg1, &data_15180);
        int32_t r3 = sub_12b2a(r1_1, 0x12c) + 4;
        var_10 = arg2;
        var_14 = 1;
        sub_3372(0x83e278, 0x20bd28, r0, r3, &var_10, 1);
        sub_529c(1);
    }
    
    return 0;
}

int32_t sub_ba4e(int32_t arg1, void* arg2)
{
    uint32_t r5 = sub_12b2a(arg1, &data_15180);
    0xff81b968(arg2, 0x124);
    void* r0_2 = sub_3404(0x83e278, *0x20bd28, r5);
    
    if (!r0_2)
    {
        0xff81b968(arg2, 0x124);
        return 0;
    }
    
    for (int32_t i = 0; i < 0x120; )
    {
        void* r5_1 = arg2 + i;
        char r3_2 = *(r0_2 + i + 4);
        i += 1;
        *(r5_1 + 4) = r3_2;
    }
    
    for (int32_t i_1 = 0; i_1 < 0x120; i_1 += 1)
    {
        void* r3_3 = arg2 + i_1;
        
        if (*(r3_3 + 4) - 0x28 >= 0xb5)
            *(r3_3 + 4) = 0;
    }
    
    return 1;
}

uint32_t sub_bab0()
{
    uint32_t result = *0x20bd30 + 1;
    *0x20bd30 = result;
    
    if (result > 3)
    {
        if (result > 0xe)
        {
            uint32_t r0_2 = sub_cd0c();
            
            if (r0_2 != 2)
                result = *0x20bd30;
            
            if (r0_2 == 2 || result >= 0x32)  /* "02_V3.0" */
            {
                uint32_t r0_3 = sub_cd12();
                uint32_t r4_1 = r0_3;
                int32_t entry_r2;
                int32_t entry_r3;
                
                if (r0_3 >= 0x28)
                {
                    if (!sub_9170())
                    {
                        if (r4_1 > 0x78)
                        {
                            int32_t r0_7;
                            r0_7 = sub_8f90();
                            
                            if (r0_7 < 0x1e && *0x20b850 != 2)  /* "50117" */
                            {
                                int32_t r1_4;
                                r1_4 = sub_12b3e(sub_814(), 0xa);
                                r4_1 = r1_4 + 0x5f;
                            }
                        }
                    }
                    else if (r4_1 >= 0x64)
                    {
                        int32_t r1_2;
                        r1_2 = sub_12b3e(sub_814(), 0xa);
                        r4_1 = r1_2 + 0x5a;
                    }
                }
                else
                {
                    int32_t r1_1;
                    r1_1 = sub_12b3e(sub_814(), 0xa);
                    r4_1 = r1_1 + 0x28;
                }
                
                sub_ba10(*0x20bd2c, r4_1, entry_r2, entry_r3);
                return sub_bc06();
            }
        }
        else
        {
            result = sub_ccfc();
            
            if (!result)
                return sub_bc06();
        }
    }
    
    return result;
}

uint32_t sub_bb42()
{
    uint32_t result = sub_15ac();
    
    if (result)
    {
        result = 0x208850;
        
        if (*0x208852 == 1)
        {
            result = *0x208850;
            
            if (result == 3)
            {
                result = sub_9170();
                
                if (result != 1)
                {
                    result = sub_281e();
                    
                    if (!result)
                    {
                        sub_bbfa();
                        int32_t r0;
                        int32_t r2_1;
                        r0 = sub_183e();
                        *0x20bd2c = r0;
                        sub_b55a(0x10, 0x20bd2c, r2_1);  /* "RY02_3.00.33_250117" */
                        return sub_3704(0x20bd24, 0x82fa61, 0x3e8, 1);
                    }
                }
            }
        }
    }
    
    return result;
}

int32_t sub_bb90()
{
    sub_bbfa();
    int32_t entry_r2;
    sub_b540(0xffff, 0, entry_r2);
    return sub_3730(0x20bd24);
}

uint32_t sub_bba6()
{
    uint32_t result = *0x2086f0;
    
    if (result == 0xff || !result)
    {
        result = 0x1e;  /* "50117" */
        *0x2086f0 = 0x1e;  /* "50117" */
    }
    
    return result;
}

int32_t sub_bbb8()
{
    sub_bba6();
    sub_c142();
    sub_bfa6();
    return sub_c1ea();
}

int32_t sub_bbd8()
{
    return sub_b9c6();
}

int32_t sub_bbe0()
{
    sub_3262(0x83e278);
    sub_b9f4();
    sub_bf9c();
    return sub_c138();
}

int32_t sub_bbfa()
{
    *0x20bd2c = 0;
    *0x20bd30 = 0;
    return 0x20bd24;
}

int32_t sub_bc06()
{
    sub_bbfa();
    int32_t entry_r2;
    sub_b540(0x10, 0, entry_r2);  /* "RY02_3.00.33_250117" */
    return sub_3730(0x20bd24);
}

int32_t sub_bc3c(char* arg1, char* arg2)
{
    *arg1 = *0x20bd34;
    char result = *0x20bd35;
    *arg2 = result;
    return result;
}

int32_t sub_bc48()
{
    *0x20bd38 = 0;
    *0x20bd3c = 0;
    *0x20bd40 = 0;
    *0x20846c = 0xffffffff;
    *0x20bd34 = 0;
    *0x20bd35 = 0;
    return 0x20bd34;
}

int32_t sub_bc5e(int32_t arg1, int32_t arg2)
{
    if (*0x20bd38 && arg2 == *0x20846c)
    {
        int32_t r5_1 = *0x20bd3c;
        sub_12a38(sub_814());
        int32_t r0_3 = *0x20bd40;
        int32_t r0_13;
        
        if (arg1 <= r0_3)
        {
            int32_t r0_15;
            int32_t r1_4;
            r0_15 = sub_1351a(r0_3 - arg1);
            int32_t r0_16;
            int32_t r1_5;
            r0_16 = sub_13530(r0_15, r1_4, 0xcccccccd, 0x3fdccccc);
            int32_t r5_3 = r5_1 - sub_13424(r0_16, r1_5);
            *0x20bd3c = sub_12b3e(*0x20bd38 + r5_3 + *0x20bd3c, 3);
            r0_13 = r5_3 - sub_12b3e(sub_814(), 5);
        }
        else
        {
            int32_t r0_5;
            int32_t r1;
            r0_5 = sub_1351a(arg1 - r0_3);
            int32_t r0_6;
            int32_t r1_1;
            r0_6 = sub_13530(r0_5, r1, 0xcccccccd, 0x3fdccccc);
            int32_t r5_2 = sub_13424(r0_6, r1_1) + r5_1;
            *0x20bd3c = sub_12b3e(*0x20bd38 + r5_2 + *0x20bd3c, 3);
            r0_13 = sub_12b3e(sub_814(), 5) + r5_2;
        }
        
        *0x20bd40 = arg1;
        return r0_13;
    }
    
    int32_t r6 = 0;
    
    while (*(0x83e284 + (r6 << 2)) <= arg2)
    {
        r6 += 1;
        
        if (r6 >= 5)
            break;
    }
    
    sub_12a38(sub_814());
    int32_t r1_8 = sub_12b3e(sub_814(), 0x15);  /* "3.00.33_250117" */
    int32_t r6_1 = *(0x83e298 + (r6 << 2)) + r1_8 + 0x64;
    *0x20bd38 = r6_1;
    int32_t r0_32;
    int32_t r1_13;
    
    if (arg1 >= 0x41)
    {
        int32_t r0_35;
        int32_t r1_14;
        r0_35 = sub_1351a(arg1 - 0x41);
        int32_t r0_36;
        int32_t r1_15;
        r0_36 = sub_13530(r0_35, r1_14, 0xcccccccd, 0x3fdccccc);
        uint32_t r0_38;
        int32_t r1_16;
        r0_38 = sub_1351a(r6_1);
        r0_32 = sub_12f7c(r0_38, r1_16, r0_36, r1_15);
    }
    else
    {
        int32_t r0_28;
        int32_t r1_10;
        r0_28 = sub_1351a(0x41 - arg1);
        int32_t r0_29;
        int32_t r1_11;
        r0_29 = sub_13530(r0_28, r1_10, 0xcccccccd, 0x3fdccccc);
        int32_t r0_31;
        int32_t r1_12;
        r0_31 = sub_1351a(r6_1);
        r0_32 = sub_12f96(r0_31, r1_12, r0_29, r1_11);
    }
    
    int32_t r0_40 = r6_1 + sub_13424(r0_32, r1_13);
    int32_t r0_42 = ((r0_40 >> 0x1f) + r0_40) >> 1;  /* "0117" */
    *0x20bd40 = arg1;
    *0x20bd3c = r0_42;
    *0x20846c = arg2;
    return r0_42;
}

int32_t sub_bd82(int32_t arg1, char* arg2, char* arg3)
{
    int32_t r0 = sub_bc5e(arg1, 0x19);  /* ".33_250117" */
    int32_t r4 = r0;
    
    if (r0 >= 0x8c)
        r4 = 0x8c - sub_12b3e(sub_814(), 5);
    
    if (r4 <= 0x5a)
        r4 = sub_12b3e(sub_814(), 5) + 0x5a;
    
    uint32_t r0_3 = sub_814();
    int32_t r1_9 = sub_12b3e(0x19 * (r4 - 0x5a), 0x32) + r0_3
        - (((r0_3 >> 0x1f >> 0x1d) + r0_3) >> 3 << 3) + 0x3b;
        /* ".33_250117" */  /* "250117" */  /* "0117" */  /* "02_V3.0" */
    
    if (r1_9 >= 0x5a)
        r1_9 = 0x5a - sub_12b3e(sub_814(), 5);
    
    if (r1_9 <= 0x3c)
        r1_9 = sub_12b3e(sub_814(), 5) + 0x3c;
    
    *arg2 = r4;
    *arg3 = r1_9;
    *0x20bd34 = r4;
    *0x20bd35 = r1_9;
    return 0x20bd34;
}

int32_t sub_be1c() __pure
{
    return;
}

int32_t sub_be1e() __pure
{
    return 0;
}

int32_t sub_be22() __pure
{
    return;
}

int32_t sub_be24() __pure
{
    return 0;
}

int32_t sub_be28() __pure
{
    return;
}

int32_t sub_be2a() __pure
{
    return;
}

int32_t sub_be2c() __pure
{
    return;
}

void sub_be30(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t var_14 = arg3;
    int32_t* var_18 = arg2;
    
    if (!arg1)
        return;
    
    var_10 = arg1;
    var_14 = 1;
    sub_3372(0x83e2b0, 0x20bd4c, sub_216a(), sub_12b2a(sub_217a(), 0x1e) + 4, &var_10, 1);
        /* "50117" */
}

void* sub_be60(int32_t arg1, int32_t* arg2)
{
    int32_t r2 = sub_216a() - arg1;
    void* result = sub_3404(0x83e2b0, *0x20bd4c, r2);
    
    if (!result)
        return result;
    
    uint32_t i = 0;
    *arg2 = *result;
    
    do
    {
        uint32_t r3_2 = *(result + i + 4);
        
        if (r3_2 == 0xff || !r3_2)
            *(arg2 + i + 4) = 0;
        else
            *(arg2 + i + 4) = r3_2;
        
        i = i + 1;
    } while (i < 0x30);  /* "RY02_V3.0" */
    
    return "RY02_V3.0";
}

void sub_bea6(int32_t arg1)
{
    if (arg1)
        *0x20bd44 = sub_12b3e(sub_814(), 6) + arg1;
}

uint32_t sub_bec0()
{
    return *0x20bd44;
}

int32_t sub_bec8()
{
    int32_t result = 0x20bd45;
    uint32_t r1_2 = *0x20bd46 + 1;
    *0x20bd46 = r1_2;
    
    if (r1_2 > 3)
    {
        int32_t r1_3;
        int32_t r2_1;
        
        if (r1_2 > 0xe)
        {
            uint32_t r2_2 = *0x20bd44;
            
            if (r2_2)
            {
                int32_t entry_r3;
                
                if (r2_2 < 0x14 || r2_2 > 0x41)  /* "_3.00.33_250117" */
                    r1_2 = sub_bea6(sub_12b3e(sub_814(), 0x14) + 0x1e);
                        /* "_3.00.33_250117" */  /* "50117" */
                
                sub_be30(*0x20bd44, r1_2, r2_2, entry_r3);
                r1_3 = sub_3730(0x20bd48);
                return sub_b540(0x200, r1_3, r2_1);
            }
            
            if (r1_2 >= 0x32)  /* "02_V3.0" */
                return sub_bea6(sub_12b3e(sub_814(), 0x1e) + 0x14);
                    /* "_3.00.33_250117" */  /* "50117" */
        }
        else
        {
            result = sub_ccfc();
            
            if (!result)
            {
                r1_3 = sub_3730(0x20bd48);
                return sub_b540(0x200, r1_3, r2_1);
            }
        }
    }
    
    return result;
}

int32_t sub_bf3e()
{
    *0x20bd44 = 0;
    return 0;
}

uint32_t sub_bf48()
{
    uint32_t result = sub_1602();
    
    if (result)
    {
        result = *0x208852;
        
        if (result)
        {
            result = sub_9170();
            
            if (result != 1)
            {
                result = sub_281e();
                
                if (!result)
                {
                    int32_t r1_1;
                    int32_t r2_1;
                    result = sub_216a();
                    
                    if (result)
                    {
                        sub_b55a(0x200, r1_1, r2_1);
                        *0x20bd44 = 0;
                        sub_c0de();
                        *0x20bd46 = 0;
                        return sub_3704(0x20bd48, 0x82fe79, 0x3e8, 1);
                    }
                }
            }
        }
    }
    
    return result;
}

int32_t sub_bf9c()
{
    return sub_3262(0x83e2b0);
}

int32_t sub_bfa6()
{
    *0x20bd45 = 0;
    *0x20bd46 = 0;
    return sub_344c(0x83e2b0, 0x20bd4c);
}

void sub_bfcc(int32_t arg1, int32_t* arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t var_14 = arg3;
    int32_t* var_18 = arg2;
    
    if (!arg1)
        return;
    
    var_10 = 0;
    var_10 = arg1;
    var_14 = 1;
    sub_3372(0x83e2bc, 0x20bd58, sub_216a(), sub_12b2a(sub_217a(), 0x1e) + 4, &var_10, 1);
        /* "50117" */
}

void* sub_c000(int32_t arg1, int32_t* arg2)
{
    int32_t r2 = sub_216a() - arg1;
    void* result = sub_3404(0x83e2bc, *0x20bd58, r2);
    
    if (!result)
        return result;
    
    uint32_t i = 0;
    *arg2 = *result;
    
    do
    {
        uint32_t r3_2 = *(result + i + 4);
        
        if (r3_2 == 0xff || !r3_2)
            *(arg2 + i + 4) = 0;
        else
            *(arg2 + i + 4) = r3_2;
        
        i = i + 1;
    } while (i < 0x30);  /* "RY02_V3.0" */
    
    return "RY02_V3.0";
}

void sub_c046(int32_t arg1)
{
    if (arg1)
    {
        if (arg1 < 0x14)  /* "_3.00.33_250117" */
            arg1 = 0x14;  /* "_3.00.33_250117" */
        else if (arg1 > 0xb4)
            arg1 = 0xb4;
    }
    
    *0x20bd50 = arg1;
}

uint32_t sub_c060()
{
    return *0x20bd50;
}

int32_t sub_c068()
{
    int32_t result = 0x20bd51;
    uint32_t r1_2 = *0x20bd52 + 1;
    *0x20bd52 = r1_2;
    
    if (r1_2 > 3)
    {
        int32_t r1_3;
        int32_t r2_1;
        
        if (r1_2 > 0xe)
        {
            uint32_t r2_2 = *0x20bd50;
            
            if (r2_2)
            {
                int32_t entry_r3;
                
                if (r2_2 < 0x1e || r2_2 > 0x32)  /* "50117" */  /* "02_V3.0" */
                {
                    char r1_4;
                    r1_4 = sub_12b3e(sub_814(), 0x14);  /* "_3.00.33_250117" */
                    r1_2 = sub_c046(r1_4 + 0x1e);  /* "50117" */
                }
                
                sub_bfcc(*0x20bd50, r1_2, r2_2, entry_r3);
                r1_3 = sub_3730(0x20bd54);
                return sub_b540(0x100, r1_3, r2_1);
            }
            
            if (r1_2 >= 0x32)  /* "02_V3.0" */
                return sub_c046(sub_12b3e(sub_814(), 0xa) + 0x1b);  /* "3_250117" */
        }
        else
        {
            result = sub_ccfc();
            
            if (!result)
            {
                r1_3 = sub_3730(0x20bd54);
                return sub_b540(0x100, r1_3, r2_1);
            }
        }
    }
    
    return result;
}

int32_t sub_c0de()
{
    *0x20bd50 = 0;
    return 0;
}

uint32_t sub_c0e8()
{
    uint32_t result = sub_16e6();
    
    if (result)
    {
        result = *0x208852;
        
        if (result)
        {
            result = sub_9170();
            
            if (result != 1)
            {
                result = sub_281e();
                
                if (!result)
                {
                    int32_t r1_1;
                    int32_t r2_1;
                    result = sub_216a();
                    
                    if (result)
                    {
                        sub_b55a(0x100, r1_1, r2_1);
                        *0x20bd50 = 0;
                        *0x20bd52 = 0;
                        return sub_3704(0x20bd54, 0x830019, 0x3e8, 1);
                    }
                }
            }
        }
    }
    
    return result;
}

int32_t sub_c138()
{
    return sub_3262(0x83e2bc);
}

int32_t sub_c142()
{
    *0x20bd51 = 0;
    *0x20bd52 = 0;
    return sub_344c(0x83e2bc, 0x20bd58);
}

int32_t sub_c168() __pure
{
    return;
}

int32_t sub_c16a() __pure
{
    return 0;
}

int32_t sub_c16e() __pure
{
    return;
}

int32_t sub_c170() __pure
{
    return;
}

int32_t sub_c172() __pure
{
    return 0;
}

int32_t sub_c176() __pure
{
    return;
}

int32_t sub_c178() __pure
{
    return;
}

int32_t sub_c17a() __pure
{
    return;
}

int32_t sub_c17c(int32_t arg1, int32_t arg2 @ r4, int32_t arg3 @ r5, int32_t arg4)
{
    int32_t lr;
    int32_t var_4 = lr;
    int32_t r6;
    int32_t var_8 = r6;
    
    if (!*0x20bd5c)
    {
        *0x20bd5d = arg1;
        
        if (arg1 < 0x5d)
        {
            arg1 = 0x5d;
            *0x20bd5d = 0x5d;
        }
        
        *0x20bd5d = 0xa * (0x64 - arg1) + 0x46;
    }
    
    int32_t r0_7 = sub_19964(sub_139fc(sub_12b3e(*0x20bd5d - 0x46, 0x46)), 0x42200000, 0x20bd5c);
    int32_t r0_10;
    int32_t r2;
    int32_t r3;
    r0_10 = sub_139fc(*0x2087a2 - 0x14);  /* "_3.00.33_250117" */
    *0x20bd5c = sub_13984(sub_198d8(r0_10, r0_7, r2, r3, 0x20bd5c, r6, arg2, arg3));
    char result = sub_12b3e(sub_814(), 0xa) + *0x20bd5c;
    *0x20bd5c = result;
    return result;
}

uint32_t sub_c1dc()
{
    return *0x20bd5c;
}

int32_t sub_c1e2()
{
    *0x20bd5c = 0;
    return 0;
}

int32_t sub_c1ea()
{
    int32_t result = 0x2087a4;
    
    if (*0x2087a4 == 0xff)
    {
        *0x2087a4 = 0;
        result = 0x208784;
        *0x2087a2 = 0x46;
    }
    
    return result;
}

int32_t sub_c20c(int32_t arg1)
{
    if (arg1 >= 0x14)  /* "_3.00.33_250117" */
        return 0xff7ef196();
    
    return (*0x200120)();
}

uint32_t sub_c220()
{
    uint32_t result = *0x208472;
    void var_48;
    int32_t entry_r1;
    int32_t entry_r2;
    
    if (result)
    {
        if (result == 1)
        {
            sub_f13e(&var_48, entry_r1, entry_r2);
            void var_28;
            return 0xff7dc2f8(&var_28, &var_48, 0x20);  /* "117" */
        }
        
        if (result == 3 || result != 4)
            return result;
    }
    
    return sub_e13c(&var_48, entry_r1, entry_r2);
}

uint32_t j_sub_c220()
{
    /* tailcall */
    return sub_c220();
}

int32_t sub_c256(int32_t arg1, int32_t arg2)
{
    int32_t var_14 = arg2;
    int32_t var_18 = arg1;
    int32_t result = 1;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        if (!sub_b458(0x44, arg1, &var_14, 1))
            result = 0;
        
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

int32_t sub_c288(int32_t arg1, char* arg2, int32_t arg3)
{
    int32_t var_18 = arg3;
    char* var_1c = arg2;
    int32_t result = 1;
    
    if (0xff7ef444(*0x2088a8, 0x64))
    {
        if (!sub_b524(0x44, arg1, arg2, arg3))
            result = 0;
        
        0xff7ef46c(*0x2088a8);
    }
    
    return result;
}

uint32_t sub_c2bc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 0;
    sub_c288(arg1, &var_8, 1);
    return var_8;
}

int32_t sub_c2d2()
{
    for (uint32_t i = 0; i < 3; i = i + 1)
    {
        sub_c256(1, 0);
        int32_t r1_1;
        int32_t r2_1;
        int32_t r3_1;
        r1_1 = sub_c20c(5);
        uint32_t r0_1 = sub_c2bc(0, r1_1, r2_1, r3_1);
        *0x20bd62 = r0_1;
        
        if (r0_1 == 0x27)
            return 1;
    }
    
    return 0;
}

uint32_t sub_c302()
{
    int32_t entry_r1;
    int32_t entry_r2;
    int32_t entry_r3;
    return sub_c2bc(0x40, entry_r1, entry_r2, entry_r3) << 0x19 >> 0x19;  /* ".33_250117" */
}

int32_t sub_c310(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_1c = arg2;
    int32_t* var_20 = arg1;
    int32_t i = 0;
    char var_f0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r1 = 0xff81b968(&var_f0, 0xc8);
    uint32_t r0_1 = sub_c2bc(0x40, r1, r2, r3);
    
    if (arg2 << 1 > r0_1)
        return 0;
    
    uint32_t i_5 = arg2 * sub_12b3e(r0_1 - arg2, arg2);
    uint32_t r0_8 = i_5 + (i_5 << 1);
    int16_t var_f4;
    
    if (*0x20bd61 == 1)
    {
        sub_c288(0x41, &var_f4, 3);
        *0x20bd61 = 0;
    }
    
    sub_c288(0x41, &var_f0, r0_8);
    
    for (; i < i_5; i += 1)
    {
        if (!arg3)
        {
            void* r0_20 = &(&var_f0)[i * 3];
            arg1[i] = *(r0_20 + 1) << 8 | *r0_20 | *(r0_20 + 2) << 0x1b >> 0xb;  /* "3_250117" */
        }
        else
        {
            void* r1_5 = &(&var_f0)[i * 3];
            uint32_t r0_14 = *(r1_5 + 2);
            uint32_t r2_3 = *(r1_5 + 1);
            uint32_t r1_6 = *r1_5;
            
            if (r0_14 << 0x1b >= 0)  /* "3_250117" */
                arg1[i] = r2_3 << 8 | r1_6 | r0_14 << 0x1b >> 0xb;  /* "3_250117" */
            else
                arg1[i] = (r2_3 << 8 | r1_6 | r0_14 << 0x1c >> 0xc) - 0x100000;  /* "_250117" */
        }
    }
    
    uint32_t i_4 = i_5;
    char var_ee;
    uint32_t r1_12 = var_ee << 0x19 >> 0x1e;  /* ".33_250117" */  /* "50117" */
    uint32_t r0_35 = *(&(&var_f0)[r0_8] - 1) << 0x19 >> 0x1e;  /* ".33_250117" */  /* "50117" */
    
    if (r1_12)
    {
        i_4 = i_5 - arg2 + r1_12;
        
        for (int32_t i_1 = 0; i_1 < i_4; i_1 += 1)
            arg1[i_1] = arg1[i_1 + arg2 - r1_12];
        
        for (uint32_t i_2 = i_4; i_2 < i_5; i_2 += 1)
            arg1[i_2] = 0;
    }
    
    if (r0_35 < arg2 - 1)
    {
        int32_t r0_41 = i_4 + arg2 - r0_35 - 1;
        uint32_t i_3 = i_4;
        int32_t var_24_1 = r0_41;
        
        for (; r0_41 > i_3; i_3 += 1)
        {
            sub_c288(0x41, &var_f4, 3);
            r0_41 = var_24_1;
        }
        
        char var_f2;
        arg1[i_3] = var_f4 | var_f2 << 0x1b >> 0xb;  /* "3_250117" */
    }
    
    int32_t result;
    int32_t r1_22;
    int32_t r2_16;
    int32_t r3_2;
    result = sub_12b2a(i_4 + arg2 - r0_35 - 1, arg2);
    
    if (r0_1 == 0x40)
    {
        uint32_t r0_49 = sub_c2bc(0x3d, r1_22, r2_16, r3_2);
        sub_c256(0x3d, 0);
        sub_c20c(5);
        sub_c256(0x3d, r0_49);
        *0x20bd61 = 1;
    }
    
    return result;
}

uint32_t* sub_c48e(uint32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_c_1 = r3;
    int32_t var_10 = arg3;
    int32_t var_14_1 = arg2;
    uint32_t* result = arg1;
    result = &data_0;
    int32_t var_14 = 0;
    var_10 = 0;
    int32_t var_c = 0;
    sub_c288(2, &result, 6);
    sub_c288(8, &var_10, 6);
    *arg1 = result | *result[2] << 0x10;  /* "RY02_3.00.33_250117" */
    arg1[1] = var_14 << 8 | *result[3] | *var_14[1] << 0x10;  /* "RY02_3.00.33_250117" */
    arg1[2] = var_10 | *var_10[2] << 0x10;  /* "RY02_3.00.33_250117" */
    arg1[3] = var_c << 8 | *var_10[3] | *var_c[1] << 0x10;  /* "RY02_3.00.33_250117" */
    return result;
}

void sub_c4f2(int32_t arg1)
{
    *0x20bd60 = 0;
    
    if (arg1 < 0xe74)
        *0x20bd60 = 1;
}

int32_t sub_c504()
{
    sub_c256(0x2a, 0);
    sub_c256(0x2b, 0);
    sub_c256(0x16, 0);  /* ".00.33_250117" */
    return sub_c256(1, 1);
}

int32_t sub_c528()
{
    sub_c256(1, 0);
    return sub_c20c(5);
}

int32_t sub_c56a(int32_t arg1)
{
    if (!arg1)
        return sub_3730(0x20bd6c);
    
    return sub_3704(0x20bd6c, 0x8304eb, 0x28, 1);
}

int32_t sub_c58a()
{
    *0x20bd64 = 1;
    return sub_116c();
}

int32_t sub_c59c(int32_t arg1)
{
    if (!arg1)
        return sub_3730(0x20bd68);
    
    return sub_3704(0x20bd68, 0x83053b, 0x140, 1);
}

int32_t sub_c5be()
{
    sub_c59c(0);
    sub_c56a(0);
    sub_e226();
    return sub_f23e();
}

uint32_t sub_c5d6(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    uint32_t result = sub_c2bc(0x47, arg2, arg3, arg4) >> 6;
    
    if (result)
        return result;
    
    sub_c256(0x4b, 0x10);  /* "RY02_3.00.33_250117" */
    sub_c256(0x4d, 0x18);  /* "0.33_250117" */
    sub_c256(0x4e, 0x40);
    sub_c256(0x4c, 4);
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r1 = sub_c256(0x4c, 0);
    uint32_t r0_1;
    int32_t r1_1;
    int32_t r2_1;
    int32_t r3_1;
    r0_1 = sub_c2bc(0x45, r1, r2, r3);
    uint32_t r0_2;
    int32_t r1_2;
    int32_t r2_2;
    int32_t r3_2;
    r0_2 = sub_c2bc(0x46, r1_1, r2_1, r3_1);
    uint32_t r0_3;
    int32_t r1_3;
    int32_t r2_3;
    int32_t r3_3;
    r0_3 = sub_c2bc(0x47, r1_2, r2_2, r3_2);
    uint32_t r0_4 = sub_c2bc(0x48, r1_3, r2_3, r3_3);
    sub_c256(0x4b, 0x20);  /* "117" */
    sub_c256(0x45, r0_1);
    sub_c256(0x46, r0_2);
    sub_c256(0x47, r0_3);
    sub_c256(0x48, r0_4);
    sub_c256(0x4b, 0);
    sub_c256(0x4d, 0x20);  /* "117" */
    sub_c256(0x4e, 0);
    return sub_c256(0x4c, 0);
}

int32_t sub_c696()
{
    *0x20bd65 = 1;
    return sub_116c();
}

int32_t sub_c6a8(int32_t arg1)
{
    if (!arg1)
        return sub_3730(0x20bd70);
    
    return sub_3704(0x20bd70, 0x830647, 0x190, 1);
}

int32_t sub_c6ca(char arg1)
{
    *0x208472 = arg1;
    sub_c5be();
    sub_c4f2(0xed8);
    int32_t r0;
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r0 = sub_c528();
    sub_c5d6(r0, r1, r2, r3);
    *0x20bd63 = 1;
    int32_t r0_1;
    int32_t r2_1;
    r0_1 = sub_187c();
    int32_t r1_2 = 0xea60;
    
    if (r0_1 - *0x20bd74 > 0xea60)
        r1_2 = 0xff81b964(0x20c180, 0x14);  /* "_3.00.33_250117" */
    
    uint32_t r0_3 = *0x208472;
    int32_t r0_5 = sub_13f18(r0_3, r1_2, r2_1, r0_3) + 0xe;
    *(0x20bd60 + r0_5) = r0_5;
    sub_17d50(0, 0, 0);
    
    if (sub_e188() == 1)
        return 0;
    
    return 1;
}

int32_t sub_c7b0() __pure
{
    return;
}

int32_t sub_c7b2()
{
    int16_t result = sub_cf64(0x20c074, sub_cff2(0x20bf30));
    *0x20bd7c = result;
    return result;
}

uint32_t sub_c7ca()
{
    uint32_t i = 0;
    uint32_t var_58 = 0;
    int32_t var_54 = 0;
    int32_t var_50 = 0;
    int32_t var_4c = 0;
    void var_48;
    sub_f256(&var_48);
    int32_t* var_18 = 0x20bff4;
    uint32_t result = sub_f2a2(0x20bf30);
    
    if (result)
    {
        for (; *0x20bf30 > i; i = i + 1)
        {
        }
        
        uint32_t r0_2 = sub_f250();
        *0x20bd7c = r0_2;
        uint32_t var_28;
        sub_1932c(&var_28);
        int32_t var_1c;
        int32_t var_4c_1 = var_1c;
        var_58 = var_28;
        int32_t var_24;
        int32_t var_54_1 = var_24;
        char var_20;
        *0x20bd7a = var_20;
        
        if (r0_2 == 1)
        {
            sub_a58c(0x20bdb0, 0x20be30, 0x20beb0, *0x20bf30);
            var_58 = *0x20bf30;
            char var_43;
            char var_42;
            sub_195a0(0x20bfb4, var_18, var_43, var_42, var_58, 0x20bdb0, 0x20be30, 0x20beb0);
            *0x20bc87 = 0;
            *0x20bc88 = 1;
            uint32_t r0_7 = *0x20bd7a;
            
            if (r0_7)
            {
                *0x20bc88 = 2;
                sub_b7e4(r0_7);
            }
            
            result = *0x208853;
            
            if (result)
            {
                int32_t r4_1 = 0;
                
                while (true)
                {
                    result = *0x20bf30;
                    
                    if (result <= r4_1)
                        break;
                    
                    uint32_t r7_2 = *(0x20bfb4 + (r4_1 << 2));
                    int32_t r0_9 = sub_e844();
                    var_58 = r7_2;
                    *var_58[1] = r7_2 >> 8;
                    *var_58[2] = r0_9;
                    *var_58[3] = r0_9 >> 8;
                    int32_t r0_11 = r4_1 << 1;
                    uint32_t r1_4 = *(0x20bdb0 + r0_11);
                    void* var_54_2;
                    var_54_2 = r1_4;
                    *var_54_2[1] = r1_4 >> 8;
                    uint32_t r1_6 = *(0x20be30 + r0_11);
                    *var_54_2[2] = r1_6;
                    *var_54_2[3] = r1_6 >> 8;
                    uint32_t r0_12 = *(0x20beb0 + r0_11);
                    void* var_50_2;
                    var_50_2 = r0_12;
                    *var_50_2[1] = r0_12 >> 8;
                    *var_50_2[2] = *0x20bd78;
                    sub_3d12(0xc5, &var_58, 0xb);
                    sub_e844();
                    r4_1 += 1;
                }
            }
        }
        else
        {
            *0x20bc87 = 1;
            result = 3;
            *0x20bc88 = 3;
        }
    }
    
    return result;
}

uint32_t sub_c8e8()
{
    uint32_t i = 0;
    char var_74;
    0xff81b968(&var_74, 0x28);
    uint32_t result = sub_e26e(0x20bf30);
    
    if (result)
    {
        for (; *0x20bf30 > i; i = i + 1)
        {
        }
        
        uint32_t r0_2 = sub_e236();
        *0x20bd7c = r0_2;
        uint8_t var_4c;
        
        if (r0_2 == 1)
        {
            sub_a58c(0x20bdb0, 0x20be30, 0x20beb0, *0x20bf30);
            
            for (int32_t i_1 = 0; *0x20bf30 > i_1; i_1 += 1)
            {
                int32_t r1_1 = i_1 << 1;
                *(0x20bdb0 + r1_1) s>>= 1;
                *(0x20be30 + r1_1) s>>= 1;
                *(0x20beb0 + r1_1) s>>= 1;
            }
            
            sub_17cf8(0x20bf34, *0x20bf30, 0x20bdb0, 0x20be30, 0x20beb0);
            sub_17a84(&var_4c);
            0xff7dc2f8(&var_74, &var_4c, 0x28);
            char var_6c;
            uint32_t r0_10 = var_6c;
            *0x20bd78 = r0_10;
            *0x20bc87 = 0;
            *0x20bc88 = 1;
            
            if (var_74 == 2 && r0_10 - 0x28 <= 0xb4)
            {
                *0x20bc88 = 2;
                char var_54;
                
                if (*0x20bc84 << 0x17 < 0)  /* "00.33_250117" */
                    sub_c046(var_54);
                char var_50;
                
                if (*0x20bc84 << 0x16 < 0)  /* ".00.33_250117" */
                    sub_bea6(var_50);
                *0x20bc86 = var_6c;
            }
        }
        else if (!r0_2)
        {
            *0x20bc91 = 0;
            *0x20bc87 = 1;
            *0x20bc88 = 3;
        }
        
        void var_24;
        sub_15554(&var_24);
        result = *0x208853;
        
        if (result)
        {
            int32_t r6_1 = 0;
            
            while (true)
            {
                result = *0x20bf30;
                
                if (result <= r6_1)
                    break;
                
                uint32_t r7_1 = *(0x20bf34 + (r6_1 << 2));
                int32_t r0_22 = sub_e844();
                var_4c = r7_1;
                uint8_t var_4b_1 = r7_1 >> 8;
                char var_4a_1 = r0_22;
                uint8_t var_49_1 = r0_22 >> 8;
                int32_t r0_24 = r6_1 << 1;
                uint32_t r1_6 = *(0x20bdb0 + r0_24);
                uint8_t var_48_1 = r1_6;
                char var_47_1 = r1_6 >> 8;
                uint32_t r1_8 = *(0x20be30 + r0_24);
                uint8_t var_46_1 = r1_8;
                char var_45_1 = r1_8 >> 8;
                uint32_t r0_25 = *(0x20beb0 + r0_24);
                uint8_t var_44_1 = r0_25;
                char var_43_1 = r0_25 >> 8;
                char var_42_1 = *0x20bd78;
                sub_3d12(0xc5, &var_4c, 0xb);
                sub_e844();
                r6_1 += 1;
            }
        }
    }
    
    return result;
}

uint32_t sub_ca50()
{
    uint32_t result = *0x20bd64;
    
    if (result)
    {
        *0x20bd64 = 0;
        sub_e772();
        int32_t r4_1 = sub_e844();
        *0x20bd74 = sub_187c();
        
        if (r4_1 + 0x63 < 0x4e83)
        {
            for (uint32_t i = 0; i < 9; )
            {
                int32_t r1_1 = i << 1;
                i = i + 1;
                *(0x20c180 + r1_1) = *(r1_1 + 0x20c182);
            }
            
            *0x20c192 = r4_1;
            int32_t r6_1 = *0x20c180;
            int32_t r0_7 = r6_1 + *0x20c182 + *0x20c184 + *0x20c186;
            int32_t r0_12 = sub_12b3e(*0x20c18e + *0x20c190 + r4_1, 3);
            
            if (((r0_7 >> 0x1f >> 0x1e) + r0_7) >> 2 > r0_12 + 0xd48 && r0_12 > *0x208474 && r6_1
                && !sub_9170())  /* "50117" */  /* "0117" */
            {
                char r4_2 = *0x208472;
                sub_e1f8();
                sub_e9b4();
                sub_c6ca(r4_2);
                return 0xff81b964(0x20c180, 0x14);  /* "_3.00.33_250117" */
            }
        }
        
        result = *0x208472;
        
        if (!result)
        {
            sub_c8e8();
            return sub_dfc4(*0x20bff4);
        }
        
        if (result == 1)
        {
            sub_c7ca();
            return sub_ecd8(*0x20c034);
        }
        
        if (result == 2)
            return sub_c7b2();
    }
    
    return result;
}

int32_t sub_cb64() __pure
{
    return;
}

uint32_t sub_cb66()
{
    uint32_t result = 0x20bd60;
    
    if (*0x20bd65)
    {
        *0x20bd65 = 0;
        result = *0x208472;
        uint32_t var_28;
        
        if (result == 6)
        {
            sub_e690();
            var_28 = 0;
            int32_t var_24_2 = 0;
            int32_t var_20_2 = 0;
            int32_t var_1c_2 = 0;
            int32_t r0_3;
            int32_t r1_5;
            int32_t r2_2;
            r0_3 = sub_e844();
            int32_t r4_2 = r0_3;
            sub_c48e(&var_28, r1_5, r2_2);
            int32_t r7_2 = var_28 - var_24_2;
            
            if (r4_2 < 0 || r4_2 == 0x7fff)
                r4_2 = 1;
            
            void* r0_6 = sub_b74c(0x20bcd8, r4_2, 0xc8);
            sub_b6e2(*r0_6, *(r0_6 + 4), 0x7d0);  /* "17 10:58:10 2022" */
            void* r0_8 = sub_b74c(0x20bca0, r7_2, 0x3e8);
            return sub_b6aa(*r0_8, *(r0_8 + 4), 0x3e8);
        }
        
        if (result == 7)
        {
            sub_e690();
            var_28 = 0;
            int32_t var_24_1 = 0;
            int32_t var_20_1 = 0;
            int32_t var_1c_1 = 0;
            int32_t r0;
            int32_t r1_1;
            int32_t r2_1;
            r0 = sub_e844();
            int32_t r4_1 = r0;
            sub_c48e(&var_28, r1_1, r2_1);
            int32_t r7_1 = var_28 - var_24_1;
            
            if (r4_1 < 0 || r4_1 == 0x7fff)
                r4_1 = 1;
            
            sub_b74c(0x20bcd8, r4_1, 0xc8);
            return sub_b74c(0x20bca0, r7_1, 0x3e8);
        }
    }
    
    return result;
}

int32_t sub_cc18(int32_t arg1)
{
    uint32_t r0 = *0x20bc84;
    int32_t r5_1 = arg1 & 0xa0;
    
    if (!r0)
    {
        if (!sub_c2d2())
        {
            *0x20bc87 = 1;
            *0x20bc88 = 3;
            return 3;
        }
        
        char r5_2;
        
        if (arg1 == 0x40)
            r5_2 = 6;
        else if (arg1 == 0x800)
            r5_2 = 7;
        else if (r5_1 || arg1 << 0x15 < 0)  /* "3.00.33_250117" */
            r5_2 = 1;
        else
        {
            r5_2 = 0;
            char r1_2;
            
            if (!sub_154e8())
            {
                *0x208471 = 0x1e;  /* "50117" */
                r1_2 = 0x18;  /* "0.33_250117" */
            }
            else
            {
                r1_2 = 8;
                *0x208471 = 8;
            }
            
            *0x208470 = r1_2;
        }
        
        sub_c6ca(r5_2);
        *0x20bc88 = 1;
        
        if (arg1 == 1 || arg1 == 0x20)  /* "117" */
            *0x20bc87 = 0;
    }
    else if (r5_1 && !(r0 & 0xa0))
    {
        sub_e1f8();
        sub_c6ca(1);
        
        if (arg1 == 1 || arg1 == 0x20)  /* "117" */
            *0x20bc87 = 0;
        
        *0x20bc88 = 1;
        *0x20bc91 = 0;
    }
    
    int16_t result = *0x20bc84 | arg1;
    *0x20bc84 = result;
    return result;
}

void sub_ccbc(int32_t arg1)
{
    if (*0x20bc74)
        return;
    
    int32_t r1_2 = *0x20bc84 & ~arg1;
    *0x20bc84 = r1_2;
    
    if (!r1_2)
    {
        sub_e1f8();
        *0x20bc88 = 0;
    }
    else if (arg1 & 0xa0 && !(r1_2 & 0xa0))
    {
        sub_e1f8();
        
        if (*0x20bc88 == 2)
            *0x20bc88 = 1;
        
        sub_c6ca(0);
    }
}

int32_t sub_ccfc()
{
    if (!*0x20bc87)
        return 1;
    
    return 0;
}

uint32_t sub_cd0c()
{
    return *0x20bc88;
}

uint32_t sub_cd12()
{
    if (*0x20bc88 == 2)
        return *0x20bc86;
    
    return *0x20bc90;
}

int32_t sub_cd22()
{
    *0x20bc84 = 0;
    *0x20bc88 = 0;
    *0x20bc8c = 0;
    *0x20bc90 = 0;
    return 0x20bc84;
}

int32_t sub_cd30()
{
    sub_c6ca(9);
    sub_e904();
    return sub_e1f8();
}

int32_t sub_cd42()
{
    int32_t entry_r1;
    int32_t entry_r2;
    return sub_b540(0xffff, entry_r1, entry_r2);
}

int32_t sub_cd4c()
{
    *0x20bd64 = 1;
    return 1;
}

uint32_t j_sub_ca50()
{
    /* tailcall */
    return sub_ca50();
}

int32_t sub_cd68(int16_t arg1, void* arg2 @ r6, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    *(arg2 + 0x22) = arg1;  /* "7" */
    /* undefined */
}

int32_t sub_cd84()
{
    sub_e34e(0);
    sub_c256(0x16, 3);  /* ".00.33_250117" */
    sub_c256(0x17, 5);  /* "00.33_250117" */
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 0x19);  /* ".33_250117" */
    sub_c256(0x1a, 0);  /* "33_250117" */
    sub_c256(0x1b, 0x5e);  /* "3_250117" */
    sub_c256(0x1c, 8);  /* "_250117" */
    sub_c256(0x1d, 8);  /* "250117" */
    sub_c256(0x1e, 0);  /* "50117" */
    sub_c256(0x1f, 0);  /* "0117" */
    sub_c256(0x20, 0);  /* "117" */
    sub_c256(0x21, 0);  /* "17" */
    sub_c256(0x23, 0x8f);
    sub_c256(0x24, 0x22);  /* "7" */
    sub_c256(0x25, 0x22);  /* "7" */
    sub_c256(0x26, 0x40);
    sub_c256(0x27, 0);
    sub_c256(0x28, 0);
    sub_c256(0x29, 0);
    sub_c256(0x2a, 0x20);  /* "117" */
    sub_c256(0x2b, 0);
    sub_c256(0x2c, 0);
    sub_c256(0x2d, 0);
    sub_c256(0x2e, 0);
    sub_c256(0x2f, 0);
    sub_c256(0x36, 0x18);  /* "0.33_250117" */  /* "3.0" */
    sub_c256(0x4e, 0);
    sub_c256(0x6d, 0);
    sub_c256(0xf0, 0x22);  /* "7" */
    sub_c256(0xf1, 0x28);
    sub_c256(0xf2, 4);
    sub_c256(0xf3, 0x70);
    sub_c256(0xf4, 0x32);  /* "02_V3.0" */
    sub_c256(0xf5, 0x89);
    sub_c256(0xf6, 0x2b);
    sub_c256(0xf7, 0x85);
    sub_c256(0xf8, 0x27);
    sub_c256(0xf9, 0);
    sub_c256(0xfa, 0x88);
    sub_c256(0xfb, 0x40);
    sub_c256(0xf6, 0x2b);
    sub_c256(0x3d, 0x83);
    sub_c256(0x3e, 0x20);  /* "117" */
    sub_c256(0x3c, 0x1f);  /* "0117" */
    sub_c256(0x37, 0);  /* ".0" */
    sub_c256(0x3b, 0);
    sub_c256(0x3b, 0x10);  /* "RY02_3.00.33_250117" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    sub_c20c(5);
    sub_e4d0();
    *0x20bd61 = 1;
    return 1;
}

int32_t sub_cf38()
{
    *0x20d595 = 0;
    *0x20d596 = 0;
    *0x20d594 = 0;
    return 0x20d594;
}

int32_t sub_cf44()
{
    if (!sub_c2d2())
        return 1;
    
    sub_cf38();
    sub_cd84();
    sub_c59c(1);
    return 0;
}

uint32_t sub_cf64(int32_t* arg1, int32_t arg2)
{
    int32_t* var_1c = arg1;
    uint32_t i = 0;
    int32_t r0_1 = sub_e844();
    
    for (; i < arg2; i = i + 1)
    {
        int32_t r2_2 = arg1[i];
        
        if (r2_2 > *0x83e2d4 && r0_1 > *0x208474)
        {
            uint32_t r2_3 = *0x20d595;
            
            if (r2_3)
                *0x20d595 = r2_3 - 1;
            
            uint32_t r2_5 = *0x20d596;
            
            if (r2_5 < 5)
                *0x20d596 = r2_5 + 1;
            else
            {
                *0x20d594 = 1;
                *0x20d596 = 5;
            }
        }
        else if (r2_2 < *0x83e2d0 || r0_1 < *0x208478)
        {
            uint32_t r2_8 = *0x20d596;
            
            if (r2_8)
                *0x20d596 = r2_8 - 1;
            
            uint32_t r2_10 = *0x20d595;
            
            if (r2_10 < 5)
                *0x20d595 = r2_10 + 1;
            else
            {
                *0x20d594 = 0;
                *0x20d595 = 5;
            }
        }
    }
    
    if (!*0x20d594)
        sub_e886(*arg1, *0x83e2d0);
    
    return *0x20d594;
}

int32_t sub_cff2(char* arg1)
{
    char result = sub_c310(&arg1[0x144], 1, 1);
    *arg1 = result;
    return result;
}

uint32_t sub_d020(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t var_20 = arg2;
    uint32_t result = *0x208472;
    
    if (result != 9)
        return result;
    
    sub_c528();
    int32_t r6_1 = 0;
    int32_t r5_1 = 0;
    
    if (arg1)
        r6_1 = arg2;
    
    if (arg3)
        r5_1 = arg4;
    
    int32_t r4_1 = 0;
    int32_t r7_1 = 0;
    
    if (arg1)
        r4_1 = 1;
    
    if (arg3)
        r7_1 = 4;
    
    sub_e34e(0);
    sub_c256(0x16, 0xf);  /* ".00.33_250117" */
    sub_c256(0x17, 0x55);  /* "00.33_250117" */
    sub_c256(0x18, 0x40);  /* "0.33_250117" */
    sub_c256(0x19, 1);  /* ".33_250117" */
    sub_c256(0x1a, 0);  /* "33_250117" */
    sub_c256(0x1b, 0x5e);  /* "3_250117" */
    sub_c256(0x1c, 8);  /* "_250117" */
    sub_c256(0x1d, 8);  /* "250117" */
    sub_c256(0x1e, 8);  /* "50117" */
    sub_c256(0x1f, 8);  /* "0117" */
    sub_c256(0x20, 0);  /* "117" */
    sub_c256(0x21, 0);  /* "17" */
    sub_c256(0x23, 0xff);
    sub_c256(0x24, 0xee);
    sub_c256(0x25, 0xee);
    sub_c256(0x26, 0);
    sub_c256(0x27, r6_1);
    sub_c256(0x28, r5_1);
    sub_c256(0x29, 0);
    sub_c256(0x2a, r4_1);
    sub_c256(0x2b, r7_1 << 4);
    sub_c256(0x2c, 0);
    sub_c256(0x2d, 0);
    sub_c256(0x2e, 0);
    sub_c256(0x2f, 0);
    sub_c256(0x36, 0x18);  /* "0.33_250117" */  /* "3.0" */
    sub_c256(0x4e, 0);
    sub_c256(0x6d, 0);
    sub_c256(0xf0, 0x22);  /* "7" */
    sub_c256(0xf1, 0x28);
    sub_c256(0xf2, 4);
    sub_c256(0xf3, 0x70);
    sub_c256(0xf4, 0x32);  /* "02_V3.0" */
    sub_c256(0xf5, 0x89);
    sub_c256(0xf6, 0x2b);
    sub_c256(0xf7, 0x85);
    sub_c256(0xf8, 0x27);
    sub_c256(0xf9, 0);
    sub_c256(0xfa, 0x88);
    sub_c256(0xfb, 0x40);
    sub_c256(0xf6, 0x2b);
    sub_c256(0x3d, 0);
    sub_c256(0x3e, 0x20);  /* "117" */
    sub_c256(0x3c, 0x1f);  /* "0117" */
    sub_c256(0x37, 0);  /* ".0" */
    sub_c256(0x3b, 0);
    sub_c256(0x3b, 0x10);  /* "RY02_3.00.33_250117" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    sub_c20c(5);
    return sub_e4d0();
}

int32_t sub_d206()
{
    int32_t r3;
    int32_t var_18 = r3;
    sub_c256(0x16, 0xf);  /* ".00.33_250117" */
    sub_c256(0x17, 0xff);  /* "00.33_250117" */
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 5);  /* ".33_250117" */
    sub_c256(0x1a, 0);  /* "33_250117" */
    sub_c256(0x1b, 0x5e);  /* "3_250117" */
    sub_c256(0x1c, 0x20);  /* "_250117" */  /* "117" */
    sub_c256(0x1d, 0x20);  /* "250117" */  /* "117" */
    sub_c256(0x1e, 0x20);  /* "50117" */  /* "117" */
    sub_c256(0x1f, 0x20);  /* "0117" */  /* "117" */
    sub_c256(0x20, 0);  /* "117" */
    sub_c256(0x21, 0);  /* "17" */
    sub_c256(0x23, 0xff);
    sub_c256(0x24, 0x55);
    sub_c256(0x25, 0x55);
    sub_c256(0x26, 0);
    sub_c256(0x27, 0x20);  /* "117" */
    sub_c256(0x28, 0x20);  /* "117" */
    sub_c256(0x29, 0x20);  /* "117" */
    sub_c256(0x2a, 1);
    sub_c256(0x2b, 0x42);
    sub_c256(0x2c, 0);
    sub_c256(0x2d, 0);
    sub_c256(0x2e, 0);
    sub_c256(0x2f, 0);
    sub_c256(0x36, 0x18);  /* "0.33_250117" */  /* "3.0" */
    sub_c256(0x4e, 0);
    sub_c256(0x6d, 0);
    sub_c256(0xf0, 0x22);  /* "7" */
    sub_c256(0xf1, 0x28);
    sub_c256(0xf2, 4);
    sub_c256(0xf3, 0x70);
    sub_c256(0xf4, 0x32);  /* "02_V3.0" */
    sub_c256(0xf5, 0x89);
    sub_c256(0xf6, 0x2b);
    sub_c256(0xf7, 0x85);
    sub_c256(0xf8, 0x27);
    sub_c256(0xf9, 0);
    sub_c256(0xfa, 0x88);
    sub_c256(0xfb, 0x40);
    sub_c256(0xf6, 0x2b);
    sub_c256(0x3d, 0);
    sub_c256(0x3e, 0x20);  /* "117" */
    sub_c256(0x3c, 0x1f);  /* "0117" */
    sub_c256(0x37, 0);  /* ".0" */
    sub_c256(0x3b, 0);
    sub_c256(0x3b, 0x10);  /* "RY02_3.00.33_250117" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    return sub_c20c(5);
}

int32_t sub_d3b0()
{
    sub_c256(0x16, 0xf);  /* ".00.33_250117" */
    sub_c256(0x17, 0xff);  /* "00.33_250117" */
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 5);  /* ".33_250117" */
    sub_c256(0x1a, 0);  /* "33_250117" */
    sub_c256(0x1b, 0x5e);  /* "3_250117" */
    sub_c256(0x1c, 0x40);  /* "_250117" */
    sub_c256(0x1d, 0x40);  /* "250117" */
    sub_c256(0x1e, 0x40);  /* "50117" */
    sub_c256(0x1f, 0x40);  /* "0117" */
    sub_c256(0x20, 0);  /* "117" */
    sub_c256(0x21, 0);  /* "17" */
    sub_c256(0x23, 0xff);
    sub_c256(0x24, 0x55);
    sub_c256(0x25, 0x55);
    sub_c256(0x26, 0);
    sub_c256(0x27, 0x40);
    sub_c256(0x28, 0x40);
    sub_c256(0x29, 0x40);
    sub_c256(0x2a, 1);
    sub_c256(0x2b, 0x42);
    sub_c256(0x2c, 0);
    sub_c256(0x2d, 0);
    sub_c256(0x2e, 0);
    sub_c256(0x2f, 0);
    sub_c256(0x36, 0x18);  /* "0.33_250117" */  /* "3.0" */
    sub_c256(0x4e, 0);
    sub_c256(0x6d, 0);
    sub_c256(0xf0, 0x22);  /* "7" */
    sub_c256(0xf1, 0x28);
    sub_c256(0xf2, 4);
    sub_c256(0xf3, 0x70);
    sub_c256(0xf4, 0x32);  /* "02_V3.0" */
    sub_c256(0xf5, 0x89);
    sub_c256(0xf6, 0x2b);
    sub_c256(0xf7, 0x85);
    sub_c256(0xf8, 0x27);
    sub_c256(0xf9, 0);
    sub_c256(0xfa, 0x88);
    sub_c256(0xfb, 0x40);
    sub_c256(0xf6, 0x2b);
    sub_c256(0x3d, 0);
    sub_c256(0x3e, 0x20);  /* "117" */
    sub_c256(0x3c, 0x1f);  /* "0117" */
    sub_c256(0x37, 0);  /* ".0" */
    sub_c256(0x3b, 0);
    sub_c256(0x3b, 0x10);  /* "RY02_3.00.33_250117" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    return sub_c20c(5);
}

int32_t sub_d556()
{
    sub_e34e(0);
    sub_c256(0x16, 0xf);  /* ".00.33_250117" */
    sub_c256(0x17, 0xf5);  /* "00.33_250117" */
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 5);  /* ".33_250117" */
    sub_c256(0x1a, 0);  /* "33_250117" */
    sub_c256(0x1b, 0x5e);  /* "3_250117" */
    sub_c256(0x1c, 6);  /* "_250117" */
    sub_c256(0x1d, 6);  /* "250117" */
    sub_c256(0x1e, 0x40);  /* "50117" */
    sub_c256(0x1f, 0x40);  /* "0117" */
    sub_c256(0x20, 0);  /* "117" */
    sub_c256(0x21, 0);  /* "17" */
    sub_c256(0x23, 0xbf);
    sub_c256(0x24, 0x55);
    sub_c256(0x25, 0x55);
    sub_c256(0x26, 6);
    sub_c256(0x27, 0);
    sub_c256(0x28, 0x40);
    sub_c256(0x29, 0x40);
    sub_c256(0x2a, 0x20);  /* "117" */
    sub_c256(0x2b, 0x14);  /* "_3.00.33_250117" */
    sub_c256(0x2c, 0);
    sub_c256(0x2d, 0);
    sub_c256(0x2e, 0);
    sub_c256(0x2f, 0);
    sub_c256(0x36, 0x18);  /* "0.33_250117" */  /* "3.0" */
    sub_c256(0x4e, 0);
    sub_c256(0x6d, 0);
    sub_c256(0xf0, 0x22);  /* "7" */
    sub_c256(0xf1, 0x28);
    sub_c256(0xf2, 4);
    sub_c256(0xf3, 0x70);
    sub_c256(0xf4, 0x32);  /* "02_V3.0" */
    sub_c256(0xf5, 0x89);
    sub_c256(0xf6, 0x2b);
    sub_c256(0xf7, 0x85);
    sub_c256(0xf8, 0x27);
    sub_c256(0xf9, 0);
    sub_c256(0xfa, 0x88);
    sub_c256(0xfb, 0x40);
    sub_c256(0xf6, 0x2b);
    sub_c256(0x3d, 0x83);
    sub_c256(0x3e, 0x20);  /* "117" */
    sub_c256(0x3c, 0x1f);  /* "0117" */
    sub_c256(0x37, 0);  /* ".0" */
    sub_c256(0x3b, 0);
    sub_c256(0x3b, 0x10);  /* "RY02_3.00.33_250117" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    sub_c20c(5);
    return sub_e4d0();
}

int32_t sub_d706()
{
    sub_e34e(0);
    sub_c256(0x16, 0xf);  /* ".00.33_250117" */
    sub_c256(0x17, 0xf5);  /* "00.33_250117" */
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 5);  /* ".33_250117" */
    sub_c256(0x1a, 0);  /* "33_250117" */
    sub_c256(0x1b, 0x5e);  /* "3_250117" */
    sub_c256(0x1c, 6);  /* "_250117" */
    sub_c256(0x1d, 6);  /* "250117" */
    sub_c256(0x1e, 0x40);  /* "50117" */
    sub_c256(0x1f, 0x40);  /* "0117" */
    sub_c256(0x20, 0);  /* "117" */
    sub_c256(0x21, 0);  /* "17" */
    sub_c256(0x23, 0xbf);
    sub_c256(0x24, 0x55);
    sub_c256(0x25, 0x55);
    sub_c256(0x26, 6);
    sub_c256(0x27, 0);
    sub_c256(0x28, 0xf0);
    sub_c256(0x29, 0xf0);
    sub_c256(0x2a, 0x20);  /* "117" */
    sub_c256(0x2b, 0x14);  /* "_3.00.33_250117" */
    sub_c256(0x2c, 0);
    sub_c256(0x2d, 0);
    sub_c256(0x2e, 0);
    sub_c256(0x2f, 0);
    sub_c256(0x36, 0x18);  /* "0.33_250117" */  /* "3.0" */
    sub_c256(0x4e, 0);
    sub_c256(0x6d, 0);
    sub_c256(0xf0, 0x22);  /* "7" */
    sub_c256(0xf1, 0x28);
    sub_c256(0xf2, 4);
    sub_c256(0xf3, 0x70);
    sub_c256(0xf4, 0x32);  /* "02_V3.0" */
    sub_c256(0xf5, 0x89);
    sub_c256(0xf6, 0x2b);
    sub_c256(0xf7, 0x85);
    sub_c256(0xf8, 0x27);
    sub_c256(0xf9, 0);
    sub_c256(0xfa, 0x88);
    sub_c256(0xfb, 0x40);
    sub_c256(0xf6, 0x2b);
    sub_c256(0x3d, 0x83);
    sub_c256(0x3e, 0x20);  /* "117" */
    sub_c256(0x3c, 0x1f);  /* "0117" */
    sub_c256(0x37, 0);  /* ".0" */
    sub_c256(0x3b, 0);
    sub_c256(0x3b, 0x10);  /* "RY02_3.00.33_250117" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    sub_c20c(5);
    return sub_e4d0();
}

int32_t sub_d8b8() __pure
{
    return;
}

int32_t sub_d8ba(uint32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t var_18 = arg3;
    int32_t var_1c_1 = arg2;
    uint32_t* var_20 = arg1;
    var_20 = &data_0;
    int16_t var_1c = 0;
    var_18 = 0;
    int16_t var_14 = 0;
    sub_c288(2, &var_20, 6);
    sub_c288(8, &var_18, 6);
    uint32_t r0_5 = var_1c << 8 | *var_20[3] | *var_1c[1] << 0x10;  /* "RY02_3.00.33_250117" */
    uint32_t r1_6 = var_18 | *var_18[2] << 0x10;  /* "RY02_3.00.33_250117" */
    uint32_t r3_5 = var_14 << 8 | *var_18[3];
    *arg1 = var_20 | *var_20[2] << 0x10;  /* "RY02_3.00.33_250117" */
    arg1[1] = r0_5;
    arg1[2] = r1_6;
    arg1[3] = r3_5 | *var_14[1] << 0x10;  /* "RY02_3.00.33_250117" */
    return 1;
}

int32_t sub_d916()
{
    for (uint32_t i = 0; i < 0xa; i = i + 1)
    {
        sub_c256(1, 0);
        int32_t r1_1;
        int32_t r2_1;
        int32_t r3_1;
        r1_1 = sub_c20c(5);
        
        if (sub_c2bc(0, r1_1, r2_1, r3_1) == 0x27)
            return 1;
    }
    
    return 0;
}

int32_t* sub_d942(int32_t* arg1, int32_t arg2)
{
    int32_t var_94;
    __builtin_memset(&var_94, 0, 0x78);
    int32_t r6 = 0;
    uint32_t var_98 = 0;
    int32_t r5 = 0;
    int32_t r4 = 0;
    uint32_t i = 0;
    int32_t r0 = sub_d916();
    
    if (r0)
    {
        if (arg2 == 1)
            sub_d3b0();
        else if (arg2 == 2)
            sub_d206();
        
        sub_c20c(0x64);
    }
    
    int32_t* result;
    
    if (!r0 || arg2 == 3)
    {
        int32_t* result_1;
        result = result_1;
        *arg1 = result;
        int32_t var_24;
        arg1[1] = var_24;
        int32_t var_20;
        arg1[2] = var_20;
    }
    else
    {
        int32_t var_90;
        int32_t var_8c;
        int32_t var_88;
        int32_t var_78;
        int32_t var_68;
        
        do
        {
            int32_t r1;
            int32_t r2_1;
            r1 = sub_c20c(0x28);
            sub_d8ba(&var_98, r1, r2_1);
            uint32_t r0_4 = var_98;
            (&var_88)[i] = var_94 - r0_4;
            (&var_68)[i] = var_8c - r0_4;
            i = i + 1;
            (&var_78)[i] = var_90 - r0_4;
        } while (i < 4);
        
        for (uint32_t i_1 = 0; i_1 < 3; i_1 = i_1 + 1)
        {
            uint32_t j = 0;
            int32_t r0_6 = 3 - i_1;
            int32_t var_28 = r0_6;
            
            for (; r0_6 > j; j = j + 1)
            {
                int32_t r3_3 = (&var_88)[j];
                void* r7_1 = &(&var_88)[j];
                int32_t r7_2 = *(r7_1 + 4);
                
                if (r3_3 >= r7_2)
                {
                    (&var_88)[j] = r7_2;
                    *(r7_1 + 4) = r3_3;
                }
                
                int32_t r3_5 = (&var_78)[j];
                void* r7_4 = &(&var_78)[j];
                int32_t r7_5 = *(r7_4 + 4);
                
                if (r3_5 >= r7_5)
                {
                    (&var_78)[j] = r7_5;
                    *(r7_4 + 4) = r3_5;
                }
                
                int32_t r3_7 = (&var_68)[j];
                void* r7_7 = &(&var_68)[j];
                int32_t r7_8 = *(r7_7 + 4);
                
                if (r3_7 >= r7_8)
                {
                    (&var_68)[j] = r7_8;
                    *(r7_7 + 4) = r3_7;
                }
                
                r0_6 = var_28;
            }
        }
        
        if (arg2 == 1)
        {
            sub_c256(0x2a, 0);
            sub_c256(0x2b, 0);
            sub_c20c(0x64);
            int32_t var_58;
            int32_t var_48;
            int32_t var_38;
            
            for (uint32_t i_2 = 0; i_2 < 4; )
            {
                int32_t r1_9;
                int32_t r2_5;
                r1_9 = sub_c20c(0x28);
                sub_d8ba(&var_98, r1_9, r2_5);
                uint32_t r0_11 = var_98;
                (&var_58)[i_2] = var_94 - r0_11;
                (&var_38)[i_2] = var_8c - r0_11;
                i_2 = i_2 + 1;
                (&var_48)[i_2] = var_90 - r0_11;
            }
            
            for (uint32_t i_3 = 0; i_3 < 3; i_3 = i_3 + 1)
            {
                uint32_t j_1 = 0;
                int32_t r0_13 = 3 - i_3;
                int32_t var_28_1 = r0_13;
                
                for (; r0_13 > j_1; j_1 = j_1 + 1)
                {
                    int32_t r3_10 = (&var_58)[j_1];
                    void* r7_10 = &(&var_58)[j_1];
                    int32_t r7_11 = *(r7_10 + 4);
                    
                    if (r3_10 >= r7_11)
                    {
                        (&var_58)[j_1] = r7_11;
                        *(r7_10 + 4) = r3_10;
                    }
                    
                    int32_t r3_12 = (&var_48)[j_1];
                    void* r7_13 = &(&var_48)[j_1];
                    int32_t r7_14 = *(r7_13 + 4);
                    
                    if (r3_12 >= r7_14)
                    {
                        (&var_48)[j_1] = r7_14;
                        *(r7_13 + 4) = r3_12;
                    }
                    
                    int32_t r3_14 = (&var_38)[j_1];
                    void* r7_16 = &(&var_38)[j_1];
                    int32_t r7_17 = *(r7_16 + 4);
                    
                    if (r3_14 >= r7_17)
                    {
                        (&var_38)[j_1] = r7_17;
                        *(r7_16 + 4) = r3_14;
                    }
                    
                    r0_13 = var_28_1;
                }
            }
        }
        
        int32_t var_84;
        int32_t var_80;
        int32_t var_74;
        int32_t var_70;
        int32_t var_64;
        int32_t var_60;
        
        if (arg2 == 1)
        {
            int32_t r0_18 = var_84 + var_80;
            int32_t var_54;
            int32_t var_50;
            int32_t r1_19 = var_54 + var_50;
            r6 = (((r0_18 >> 0x1f) + r0_18) >> 1) - (((r1_19 >> 0x1f) + r1_19) >> 1);  /* "0117" */
            int32_t r0_22 = var_74 + var_70;
            int32_t var_44;
            int32_t var_40;
            int32_t r1_24 = var_44 + var_40;
            r5 = (((r0_22 >> 0x1f) + r0_22) >> 1) - (((r1_24 >> 0x1f) + r1_24) >> 1);  /* "0117" */
            int32_t r0_26 = var_64 + var_60;
            int32_t var_34;
            int32_t var_30;
            int32_t r1_29 = var_34 + var_30;
            r4 = (((r0_26 >> 0x1f) + r0_26) >> 1) - (((r1_29 >> 0x1f) + r1_29) >> 1);  /* "0117" */
        }
        else if (arg2 == 2)
        {
            int32_t r0_30 = var_84 + var_80;
            r6 = ((r0_30 >> 0x1f) + r0_30) >> 1;  /* "0117" */
            int32_t r0_33 = var_74 + var_70;
            r5 = ((r0_33 >> 0x1f) + r0_33) >> 1;  /* "0117" */
            int32_t r0_36 = var_64 + var_60;
            r4 = ((r0_36 >> 0x1f) + r0_36) >> 1;  /* "0117" */
        }
        
        if (r6 < 0)
            r6 = 0;
        
        if (r5 < 0)
            r5 = 0;
        
        if (r4 < 0)
            r4 = 0;
        
        *0x20d598 = r6;
        *0x20d59c = r5;
        *0x20d5a0 = r4;
        result = arg1;
        *result = r6;
        result[1] = r5;
        result[2] = r4;
    }
    
    return result;
}

int32_t sub_dbcc(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    int32_t r3 = *0x20d598;
    
    if (r3 < 0x1770 && *0x20d5a0 < 0x1770)
    {
        *arg1 = r3;
        *arg2 = *0x20d5a0;
        *arg3 = *0x20d59c;
        return 1;
    }
    
    *arg1 = r3;
    *arg2 = *0x20d5a0;
    *arg3 = *0x20d59c;
    return 0;
}

int32_t sub_dc04()
{
    sub_e34e(0);
    sub_c256(0x16, 0xf);  /* ".00.33_250117" */
    sub_c256(0x17, 0xf5);  /* "00.33_250117" */
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 5);  /* ".33_250117" */
    sub_c256(0x1a, 0);  /* "33_250117" */
    sub_c256(0x1b, 0x5e);  /* "3_250117" */
    sub_c256(0x1c, 6);  /* "_250117" */
    sub_c256(0x1d, 6);  /* "250117" */
    sub_c256(0x1e, 0x40);  /* "50117" */
    sub_c256(0x1f, 0x40);  /* "0117" */
    sub_c256(0x20, 0);  /* "117" */
    sub_c256(0x21, 0);  /* "17" */
    sub_c256(0x23, 0xaf);
    sub_c256(0x24, 0x55);
    sub_c256(0x25, 0x55);
    sub_c256(0x26, 6);
    sub_c256(0x27, 0);
    sub_c256(0x28, 0);
    sub_c256(0x29, 0);
    sub_c256(0x2a, 0x20);  /* "117" */
    sub_c256(0x2b, 0x10);  /* "RY02_3.00.33_250117" */
    sub_c256(0x2c, 0);
    sub_c256(0x2d, 0);
    sub_c256(0x2e, 0);
    sub_c256(0x2f, 0);
    sub_c256(0x36, 0x18);  /* "0.33_250117" */  /* "3.0" */
    sub_c256(0x4e, 0);
    sub_c256(0x6d, 0);
    sub_c256(0xf0, 0x22);  /* "7" */
    sub_c256(0xf1, 0x28);
    sub_c256(0xf2, 4);
    sub_c256(0xf3, 0x70);
    sub_c256(0xf4, 0x32);  /* "02_V3.0" */
    sub_c256(0xf5, 0x89);
    sub_c256(0xf6, 0x2b);
    sub_c256(0xf7, 0x85);
    sub_c256(0xf8, 0x27);
    sub_c256(0xf9, 0);
    sub_c256(0xfa, 0x88);
    sub_c256(0xfb, 0x40);
    sub_c256(0xf6, 0x2b);
    sub_c256(0x3d, 0x83);
    sub_c256(0x3e, 0x20);  /* "117" */
    sub_c256(0x3c, 0x1f);  /* "0117" */
    sub_c256(0x37, 0);  /* ".0" */
    sub_c256(0x3b, 0);
    sub_c256(0x3b, 0x10);  /* "RY02_3.00.33_250117" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    sub_c20c(5);
    sub_e4d0();
    *0x20bd61 = 1;
    return 1;
}

void sub_ddbc(char* arg1)
{
    *arg1 = 0xf;
    arg1[6] = 0;
    arg1[7] = 0;
    arg1[8] = 5;
    *(arg1 + 4) = 0x40;
    arg1[0xc] = 0;
    arg1[2] = 0;
    arg1[3] = 0;
    uint32_t r1 = *0x208471;
    
    if (*0x20bd60 == 1)
        r1 u>>= 1;
    
    arg1[0xd] = r1;
}

void sub_dde6(char* arg1)
{
    *arg1 = 2;
    arg1[0xc] = 2;
    arg1[2] = 0;
}

int32_t sub_ddf2()
{
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 5);  /* ".33_250117" */
    sub_c256(0x3d, 0x83);
    sub_c256(0x36, 0);  /* "3.0" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    sub_c20c(5);
    sub_e4d0();
    *0x20bd61 = 1;
    return 1;
}

uint32_t sub_de3c()
{
    if (*0x20d5b8 << 0x1f)  /* "0117" */
        sub_c256(0x28, *0x20d5bc);
    
    if (*0x20d5b8 << 0x1e < 0)  /* "50117" */
        sub_c256(0x2e, *0x20d5be);
    
    if (*0x20d5b8 << 0x1d < 0)  /* "250117" */
        sub_c256(0x2f, *0x20d5bf);
    
    uint32_t result = *0x20d5b8 << 0x1c;  /* "_250117" */
    
    if (result >= 0)
        return result;
    
    sub_c256(0x1e, *0x20d5c0);  /* "50117" */
    return sub_c256(0x1f, *0x20d5c0);  /* "0117" */
}

int32_t sub_de82()
{
    sub_e34e(0);
    sub_c256(0x18, 0x40);  /* "0.33_250117" */
    sub_c256(0x19, 1);  /* ".33_250117" */
    sub_c256(0x3d, 0);
    sub_c256(0x36, 8);  /* "3.0" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    return sub_c20c(5);
}

int32_t sub_dec8()
{
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 0x19);  /* ".33_250117" */
    sub_c256(0x20, 0);  /* "117" */
    sub_c256(0x21, 0);  /* "17" */
    sub_c256(0x23, 0x8f);
    sub_c256(0x26, 6);
    sub_c256(0x27, 0);
    sub_c256(0x28, 0);
    sub_c256(0x29, 0);
    sub_c256(0x2c, 0);
    sub_c256(0x2d, 0);
    sub_c256(0x2e, 0);
    sub_c256(0x2f, 0);
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    sub_c20c(5);
    *0x20d5bc = 0;
    sub_e4d0();
    *0x20bd61 = 1;
    return 1;
}

int32_t sub_df62(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    sub_13f18(arg1, arg2, arg3, arg1);
    sub_dc04();
    int32_t result = sub_c59c(1);
    *0x20d5a4 = 0;
    return result;
}

int32_t sub_df88()
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    r0 = sub_c504();
    int32_t r4;
    char r5;
    /* tailcall */
    return sub_df92(r4, r5, r0, r1, r2);
}

int32_t sub_df8e()
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    r0 = sub_dec8();
    int32_t r4;
    char r5;
    /* tailcall */
    return sub_df92(r4, r5, r0, r1, r2);
}

int32_t sub_df92(char* arg1 @ r4, char arg2 @ r5, int32_t arg3, int32_t arg4, int32_t arg5)
{
    *arg1 = arg2;
}

int32_t sub_df96()
{
    int32_t r1;
    int32_t r2;
    r1 = sub_ddbc(0x20d5b8);
    int32_t r4;
    char r6;
    /* tailcall */
    return sub_dfa4(r4, r6, 0x20d5b8, r1, r2);
}

int32_t sub_df9e()
{
    sub_dde6(0x20d5b8);
    int32_t entry_r2;
    int32_t r4;
    char r6;
    /* tailcall */
    return sub_dfa4(r4, r6, 0x20d5b8, 0, entry_r2);
}

int32_t sub_dfa4(void* arg1 @ r4, char arg2 @ r6, int32_t arg3, int32_t arg4, int32_t arg5)
{
    sub_de82();
    sub_de3c();
    int32_t result = sub_c56a(1);
    *(arg1 + 1) = arg2;
    return result;
}

int32_t sub_dfb6(void* arg1 @ r4, char arg2 @ r5, int32_t arg3, int32_t arg4, int32_t arg5)
{
    sub_c56a(0);
    int32_t result = sub_ddf2();
    *(arg1 + 1) = arg2;
    return result;
}

uint32_t sub_dfc4(int32_t arg1)
{
    int32_t r4 = sub_e844();
    
    if (*0x2086c2 == 3)
    {
        int32_t var_1c = *0x2086a8;
        int32_t r0_4;
        int32_t r1_2;
        r0_4 = j_sub_134d8(*0x2086b0);
        int32_t r0_5;
        int32_t r1_3;
        r0_5 = sub_13530(r0_4, r1_2, 0x33333333, 0x3fd33333);
        uint32_t r0_7;
        int32_t r1_4;
        r0_7 = j_sub_134d8(var_1c);
        int32_t r0_8;
        int32_t r1_5;
        r0_8 = sub_12f7c(r0_7, r1_4, r0_5, r1_3);
        uint32_t r0_9 = sub_13490(r0_8, r1_5);
        
        if (r4 < *0x208478 && arg1 < r0_9)
        {
        label_e020:
            uint32_t r0_10 = *0x20d5a6;
            uint32_t r0_12;
            
            if (r0_10 < 5)
            {
                r0_12 = r0_10 + 1;
                *0x20d5a6 = r0_12;
            }
            
            if (r0_10 >= 5 || r0_12 >= 5)
                *0x20847d = 0;
        }
        else if (r4 > *0x208474 && arg1 > r0_9)
            goto label_e042;
    }
    else
    {
        if (r4 < *0x208478)
            goto label_e020;
        
        if (r4 > *0x208474)
        {
        label_e042:
            uint32_t r0_13 = *0x20d5a6;
            uint32_t r0_16;
            
            if (r0_13)
            {
                r0_16 = (r0_13 - 1) << 0x18 >> 0x18;  /* "0.33_250117" */
                *0x20d5a6 = r0_16;
            }
            
            if (!r0_13 || !r0_16)
                *0x20847d = 1;
        }
    }
    
    uint32_t r0_19 = *0x20847d;
    
    if (*0x20847e != r0_19)
    {
        *0x20847e = r0_19;
        
        if (!r0_19)
            sub_dec8();
        else if (r0_19 == 1)
        {
            int32_t r1_11;
            int32_t r2_2;
            r1_11 = sub_17cec();
            int32_t r1_12;
            int32_t r2_3;
            r1_12 = sub_df62(0, r1_11, r2_2);
            sub_df62(3, r1_12, r2_3);
        }
    }
    
    return *0x20847d;
}

uint32_t sub_e092(char* arg1, int32_t arg2, int32_t arg3)
{
    uint32_t r0 = arg1[0xc];
    
    if (!r0)
    {
        r0 = 1;
        arg1[0xc] = 1;
    }
    else
    {
        if (r0 == 1)
        {
            char r0_4;
            
            if (arg3 <= 0x445c0)
                r0_4 = 0;
            else
                r0_4 = sub_12b3e(arg3 - 0x445c0, 0x2710);
            
            arg1[7] = r0_4;
            uint32_t r2 = *0x208470;
            
            if (arg2 <= arg3 + 0x80)
                *(arg1 + 4) = arg1[0xd];
            else
            {
                int32_t r0_7 = arg2 - arg3;
                uint32_t r1_3 = ((r0_7 >> 0x1f >> 0x1a) + r0_7) << 0xa >> 0x10;
                    /* "RY02_3.00.33_250117" */  /* "33_250117" */  /* "0117" */
                *(arg1 + 0xa) = r1_3;
                uint32_t r1_4 = sub_12b2a(0x1388 * (arg1[7] + r2), r1_3);
                *(arg1 + 4) = r1_4;
                uint32_t r0_14 = arg1[0xd];
                
                if (r1_4 > r0_14)
                    *(arg1 + 4) = r0_14;
            }
            
            arg1[6] = (r2 >> 1);
            arg1[8] = 0x20;  /* "117" */
            *arg1 = 0xf;
            arg1[0xc] = 2;
            return 0xf;
        }
        
        if (r0 == 2)
        {
            uint32_t r0_1;
            
            if (arg2 > 0x55730)
                r0_1 = arg1[6];
            
            char r0_2;
            
            if (arg2 <= 0x55730 || r0_1 > 0x78)
            {
                uint32_t r0_16;
                
                if (arg2 < 0x249f0)
                    r0_16 = arg1[6];
                
                if (arg2 >= 0x249f0 || !r0_16)
                {
                    r0_2 = 3;
                    arg1[0xc] = 3;
                }
                else
                {
                    r0_2 = r0_16 - 1;
                    arg1[6] = r0_2;
                    arg1[0xc] = 2;
                }
            }
            else
            {
                r0_2 = r0_1 + 1;
                arg1[6] = r0_2;
                arg1[0xc] = 2;
            }
            
            *arg1 = 2;
            return r0_2;
        }
    }
    
    return r0;
}

int32_t sub_e13c(int32_t arg1, int32_t arg2, int32_t arg3)
{
    *0x20d5b9 = 0;
    
    if (*0x20d5a5)
    {
        *0x20d5b9 = 1;
        sub_c48e(0x20d5a8, arg2, arg3);
        int32_t r1_1;
        int32_t r2_1;
        r1_1 = sub_e092(0x20d5b8, *0x20d5b0, *0x20d5b4);
        
        if (*0x20d5c4 == 3)
            sub_df62(4, r1_1, r2_1);
        else
            sub_de3c();
    }
    
    return 0xff81b898(arg1, 0x20d5b8, 0xe);
}

int32_t sub_e188()
{
    if (!sub_c2d2() || *0x20d5a4)
        return 1;
    
    int32_t r2_1 = sub_17b50();
    *0x20847d = 1;
    *0x20847e = 2;
    sub_df62(0, 2, r2_1);
    return 0;
}

int32_t sub_e1f8()
{
    *0x208472 = 9;
    sub_c6a8(0);
    sub_c59c(0);
    int32_t r1;
    int32_t r2;
    r1 = sub_c56a(0);
    sub_df62(1, r1, r2);
    *0x20d5a4 = 0;
    *0x20d5a5 = 0;
    sub_17a70();
    return 0x208500;
}

int32_t sub_e226()
{
    *0x20d5a4 = 0;
    *0x20d5a5 = 0;
    sub_17a70();
    return 0x208500;
}

uint32_t sub_e236()
{
    return *0x20847d;
}

int32_t sub_e26e(uint32_t arg1)
{
    uint32_t r5 = arg1;
    int32_t var_1c = 0;
    int32_t* r0 = r5 + 4;
    uint32_t var_30 = 0;
    int32_t var_2c = 0;
    int32_t var_28 = 0;
    uint32_t i = 0;
    int32_t var_24 = 0;
    *(r5 + 0x248) = *0x20d5bc;
    uint32_t r7 = r5;
    uint32_t r1_1 = *0x20d5a4;
    
    if (!r1_1 || *0x20d5a5)
        return 0;
    
    sub_c48e(&var_30, r1_1, 0x240);
    uint32_t r1_2 = sub_c310(r7 + 0x144, 2, 1);
    *r5 = r1_2;
    
    for (; i < r1_2; i = i + 1)
    {
        int32_t r0_8 = i << 3;
        r5 = *(r7 + 0x144 + r0_8);
        r0[i] = *(r0_8 + r7 + 0x144 + 4) << 1;
        (r7 + 0xc4)[i] = r5;
    }
    
    if (!*0x20847d)
        sub_e886(r5, *0x83e2cc);
    
    if (var_28 - 0x186a0 >= 0x493e1)
    {
        if (*0x20847d)
            goto label_e31a;
        
        *0x20847c = 3;
    }
    else if (!var_1c)
        *0x20847c = 3;
    else
    {
    label_e31a:
        uint32_t r0_19 = (*0x20847c - 1) << 0x18 >> 0x18;  /* "0.33_250117" */
        *0x20847c = r0_19;
        
        if (!r0_19)
        {
            *0x20847c = 3;
            sub_df62(5, 3, 0x493e1);
        }
    }
    
    return 1;
}

void sub_e348(char arg1)
{
    *0x20847f = arg1;
}

void sub_e34e(char arg1)
{
    *0x20d5c8 = arg1;
}

int32_t sub_e354(int32_t arg1, int32_t arg2)
{
    int32_t r1;
    int32_t r2;
    int32_t r3;
    r1 = sub_c256(0x35, 8);  /* "V3.0" */
    uint32_t r0_2;
    int32_t r1_1;
    int32_t r2_1;
    int32_t r3_1;
    r0_2 = sub_c2bc(arg2 - 1, r1, r2, r3);
    uint32_t r0_4;
    int32_t r1_2;
    int32_t r2_2;
    int32_t r3_2;
    r0_4 = sub_c2bc(arg2, r1_1, r2_1, r3_1);
    uint32_t r0_6 = sub_c2bc(arg1, r1_2, r2_2, r3_2);
    sub_c256(0x35, 0);  /* "V3.0" */
    uint32_t r1_5 = r0_2 >> 4 | r0_4 << 4 | r0_6 << 0x1c >> 0x10;
        /* "RY02_3.00.33_250117" */  /* "_250117" */
    
    if (r1_5 <= 0x7fff)
        return r1_5;
    
    return r1_5;
}

int32_t sub_e3a4()
{
    /* jump -> *0x200120 */
}

int32_t sub_e3ac()
{
    /* jump -> *0x200120 */
}

int32_t sub_e3b4()
{
    sub_e3ac();
    return sub_e3a4();
}

uint32_t sub_e3c0()
{
    int32_t entry_r1;
    int32_t entry_r2;
    int32_t entry_r3;
    return sub_c2bc(0, entry_r1, entry_r2, entry_r3);
}

int32_t sub_e3ca(int32_t arg1, int32_t arg2)
{
    char r1 = arg2 << 1;
    sub_c256(r1 + 0x61, arg1 << 0x14 >> 0x1c);  /* "_3.00.33_250117" */  /* "_250117" */
    return sub_c256(r1 + 0x60, arg1);
}

int32_t sub_e3ec(int32_t arg1)
{
    char r1 = arg1 + (arg1 << 1);
    /* tailcall */
    return sub_e354(r1 - 0x39, r1 - 0x3a);
}

uint32_t sub_e3fc(int32_t arg1)
{
    int32_t r3;
    int32_t var_18_1 = r3;
    uint32_t r6 = 0;
    sub_c256(0x8f, 7);
    uint32_t r5 = 0x3fc;
    *0x20d5cb = 0;
    
    do
    {
        uint32_t result = (r6 + r5) >> 1;
        sub_e3ca(result, arg1);
        sub_c20c(0x20);  /* "117" */
        sub_e3ec(arg1);
        sub_c20c(0x21);  /* "17" */
        int32_t r0_4 = sub_e3ec(arg1);
        
        if (r0_4 + 0x690 <= 0xd20)
            return result;
        
        if (r0_4 <= 0x690)
            r5 = result - 1;
        else
            r6 = result + 1;
        
        *0x20d5cb += 1;
    } while (r6 < r5);
    
    return 0;
}

int32_t sub_e468(int32_t arg1)
{
    char r1 = arg1 + (arg1 << 1);
    /* tailcall */
    return sub_e354(r1 - 0x42, r1 - 0x43);
}

int32_t sub_e478(char arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t r0 = arg2 + arg4;
    int32_t r4 = ((r0 >> 0x1f >> 0x1b) + r0) >> 5;  /* "3_250117" */  /* "0117" */
    
    if (r4 < 0)
        r4 = 0;
    
    sub_c256(arg1 - 0x63, r4);
    sub_c256(arg1 - 0x60, r4 << 0x10 >> 0x18);  /* "RY02_3.00.33_250117" */  /* "0.33_250117" */
    int32_t r0_9 = arg3 + arg4;
    int32_t r4_1 = ((r0_9 >> 0x1f >> 0x1b) + r0_9) >> 5;  /* "3_250117" */  /* "0117" */
    
    if (r4_1 < 0)
        r4_1 = 0;
    
    sub_c256(arg1 - 0x5b, r4_1);
    return sub_c256(arg1 - 0x58, r4_1 << 0x10 >> 0x18);
        /* "RY02_3.00.33_250117" */  /* "0.33_250117" */
}

int32_t sub_e4d0()
{
    *0x20d5c8 = 0;
    *0x20d5c9 = 0;
    int32_t r0 = sub_c256(0x6a, 0);
    int32_t r6_1 = sub_c256(0x55, 0x30) & r0;  /* "RY02_V3.0" */
    int32_t r5_2 = sub_c256(0x57, 0x2c) & r6_1;
    int32_t r6_3 = sub_c256(0x59, 0xc) & r5_2;
    int32_t r5_4 = sub_c256(0x5b, 0) & r6_3;
    int32_t r6_5 = sub_c256(0x5d, 0x25) & r5_4;
    int32_t r5_6 = sub_c256(0x5e, 0x22) & r6_5;  /* "7" */
    int32_t r6_7 = sub_c256(0x5f, 0x11) & r5_6;  /* "Y02_3.00.33_250117" */
    int32_t r5_8 = sub_c256(0x66, 8) & r6_7;
    int32_t r6_9 = sub_c256(0x67, 0) & r5_8;
    int32_t r5_10 = sub_c256(0x68, 8) & r6_9;
    int32_t r6_11 = sub_c256(0x69, 0) & r5_10;
    int32_t r7_1 = sub_c256(0x6e, 0x11) & r6_11;  /* "Y02_3.00.33_250117" */
    int32_t r0_14 = sub_c256(0x77, 0x70) & r7_1;
    int32_t r4_6;
    
    if (!*0x20d5ca)
    {
        int32_t r4_8 = sub_c256(0x90, 2) & r0_14;
        int32_t r5_19 = sub_c256(0x8f, 0) & r4_8;
        r4_6 = sub_c256(0x95, 0) & r5_19;
        sub_e478(1, *0x208474, *0x208478, 0);
        sub_e478(0, 0x535, 0x3e8, 0);
    }
    else
    {
        int32_t r4_1 = sub_c256(0x90, 2) & r0_14;
        int32_t r5_13 = sub_c256(0x8f, 3) & r4_1;
        int32_t r4_3 = sub_c256(0x95, 0) & r5_13;
        sub_e3ca(*0x20d5cc, 1);
        sub_e3ca(*0x20d5ce, 0);
        sub_e478(1, *0x208474, *0x208478, 0);
        sub_e478(0, 0x535, 0x3e8, 0);
        int32_t r5_15 = sub_c256(0x9c, 0) & r4_3;
        int32_t r4_5 = sub_c256(0x85, 0xf) & r5_15;
        int32_t r6_13 = sub_c256(0xa3, 0xff) & r4_5;
        int32_t r5_17 = sub_c256(0xa4, 0xf) & r6_13;
        r4_6 = sub_c256(0x70, 0x11) & r5_17;  /* "Y02_3.00.33_250117" */
    }
    
    return sub_c256(0x6a, 3) & r4_6;
}

void sub_e66c(int32_t arg1)
{
    if (*0x20d5ca == 1 && *0x20d5c8 == 1 && *0x20d5d0 - 0xc8 > arg1)
    {
        *0x20d5d0 = arg1;
        *0x2086bc = arg1;
    }
}

int32_t sub_e690()
{
    *0x20d5d4 = sub_e3ec(1);
    *0x20d5d8 = sub_e468(1);
    *0x20d5d6 = sub_e3ec(0);
    int32_t r0_3 = sub_e468(0);
    *0x20d5da = r0_3;
    int32_t r2 = *0x20d5d4;
    
    if (!r2 && !*0x20d5d8)
        *0x20d5c8 = 0;
    
    if (*0x20bd63)
    {
        *0x20d5dc = 0x7fff;
        *0x20bd63 = 0;
    }
    
    if (*0x20d5c9 == 1)
    {
        int32_t r0_7 = *0x20d5d8;
        
        if (r2 != r0_7)
        {
            int32_t r2_1;
            
            if (!*0x20d5ca)
                r2_1 = r2 - r0_7;
            else
                r2_1 = r2 - *0x20d5d0;
            
            *0x20d5dc = r2_1;
            *0x20d5e0 = *0x20d5d6 - r0_3;
            *0x20d5c8 = 1;
            sub_e66c(r0_7);
        }
    }
    
    int32_t r0_8 = *0x20d5d4;
    
    if (r0_8 == *0x20d5d8 && r0_8 && *0x20d5ca == 1 && !*0x20d5c9)
    {
        sub_c256(0x9c, 7);
        sub_c256(0x70, 0);
        *0x20d5c9 = 1;
    }
    
    return 0;
}

int32_t sub_e772()
{
    *0x20d5d4 = sub_e3ec(1);
    *0x20d5d8 = sub_e468(1);
    *0x20d5d6 = sub_e3ec(0);
    int32_t r0_3 = sub_e468(0);
    *0x20d5da = r0_3;
    int32_t r0_4 = *0x20d5d6;
    int32_t r2 = *0x20d5d2;
    int32_t r1 = r0_4 - r2;
    
    if (r0_4 - r2 < 0)
        r1 = 0;
    
    int32_t r3 = *0x20d5d4;
    
    if (!r3 && !*0x20d5d8)
        *0x20d5c8 = 0;
    
    if (*0x20bd63)
    {
        *0x20d5dc = 0x7fff;
        *0x20bd63 = 0;
    }
    
    if (*0x20d5c9 == 1)
    {
        int32_t r0_8 = *0x20d5d8;
        
        if (r3 != r0_8)
        {
            int32_t r1_1;
            
            if (!*0x20d5ca)
                r1_1 = r3 - r0_8;
            else
                r1_1 = r3 - *0x20d5d0 - r1;
            
            *0x20d5dc = r1_1;
            *0x20d5e0 = r0_4 - r0_3;
            *0x20d5c8 = 1;
            sub_e66c(r0_8);
        }
    }
    
    int32_t r0_9 = *0x20d5d4;
    
    if (r0_9 == *0x20d5d8 && r0_9 && *0x20d5ca == 1 && !*0x20d5c9)
    {
        sub_c256(0x9c, 7);
        sub_c256(0x70, 0);
        *0x20d5c9 = 1;
    }
    
    return 0;
}

int32_t sub_e844()
{
    if (*0x20d5c8 == 1 && (*0x20d5d0 + 0x4000 >= 0xa1a9 || *0x20bd62 != 0x27))
        *0x20d5dc = 0x7fff;
    
    if (!(*0x20d5ca & (0 - *0x20847f)))
        *0x20d5dc = 0x7fff;
    
    return *0x20d5dc;
}

void sub_e886(uint32_t arg1, int32_t arg2)
{
    if (*0x20d5c8 != 1 || arg1 >= arg2)
        return;
    
    arg1 = *0x208478;
    int32_t r1 = *0x20d5dc;
    
    if (r1 > ((arg1 >> 0x1f >> 0x1e) + arg1) >> 2 && r1 < arg1)  /* "50117" */  /* "0117" */
        *0x20d5d0 = *0x20d5d8;
}

int32_t sub_e8bc()
{
    int32_t r1 = *0x2086b8;
    *0x20d5cc = r1;
    *0x20d5ce = *0x2086ba;
    int32_t r2_1 = *0x2086bc;
    *0x20d5d0 = r2_1;
    *0x20d5d2 = *0x2086be;
    
    if ((r1 || r2_1) && r1 != 0xffff)
    {
        *0x20d5ca = 1;
        *0x20847f = 1;
        return 1;
    }
    
    *0x20d5cc = 0;
    *0x20d5d0 = 0;
    *0x20d5ce = 0;
    *0x20d5d2 = 0;
    *0x20847f = 0;
    *0x20d5ca = 0;
    return 0;
}

int32_t sub_e904()
{
    int32_t r4 = 0;
    
    if (*0x20bd62 == 0x27)
    {
        *0x20bd62 = sub_e3c0();
        sub_e8bc();
        sub_e4d0();
    }
    else
    {
        sub_e3b4();
        sub_e8bc();
        sub_c528();
        
        while (true)
        {
            uint32_t r0_1 = sub_e3c0();
            *0x20bd62 = r0_1;
            
            if (r0_1 == 0x27)
            {
                sub_e4d0();
                r0_1 = *0x20bd62;
                
                if (r0_1 == 0x27)
                    break;
            }
            else
            {
                r4 += 1;
                
                if (r4 < 5)
                    continue;
            }
            
            sub_e3ac(r0_1);
            break;
        }
    }
    
    return 0;
}

int32_t sub_e952()
{
    *0x2086b8 = *0x20d5cc;
    *0x2086ba = *0x20d5ce;
    *0x2086bc = *0x20d5d0;
    *0x2086be = *0x20d5d2;
    return 0x2086a0;
}

int32_t sub_e96e()
{
    int32_t r4 = 0;
    *0x20bd62 = 0;
    sub_e3b4();
    sub_c528();
    
    while (true)
    {
        uint32_t r0_2 = sub_e3c0();
        *0x20bd62 = r0_2;
        
        if (r0_2 == 0x27)
        {
            sub_c256(0x18, 0x40);  /* "0.33_250117" */
            sub_c256(0x19, 1);  /* ".33_250117" */
            sub_e4d0();
            r0_2 = *0x20bd62;
            
            if (r0_2 == 0x27)
                break;
        }
        else
        {
            r4 += 1;
            
            if (r4 < 5)
                continue;
        }
        
        sub_e3ac(r0_2);
        break;
    }
    
    return 0;
}

int32_t sub_e9b4()
{
    int32_t r3;
    int32_t var_18_1 = r3;
    int32_t var_18 = 0;
    *0x20d5ca = 0;
    sub_e96e();
    sub_c20c(0x64);
    uint32_t r0 = sub_e3fc(1);
    uint32_t r0_1 = sub_e3fc(0);
    int32_t r0_2 = sub_e3ec(1);
    var_18 = r0_2;
    int32_t r0_3 = sub_e3ec(0);
    *var_18[2] = r0_3;
    *0x20d5cc = r0;
    *0x20d5ce = r0_1;
    *0x20d5d0 = r0_2;
    *0x20d5d2 = r0_3;
    
    if (r0 != 0x1fe || r0_1 != 0x1fe || r0_2 || r0_3)
        sub_e952();
    
    return sub_e904();
}

uint32_t sub_ea1e()
{
    uint32_t result = *0x20bd62;
    
    if (result == 0x27)
    {
        result = *0x20d5ca;
        
        if (result == 1 || !result)
            /* tailcall */
            return sub_e9b4();
    }
    
    return result;
}

int32_t sub_ea38()
{
    int32_t r3;
    int32_t var_10 = r3;
    int32_t r2;
    int32_t var_14_1 = r2;
    int32_t r1;
    int32_t var_18_1 = r1;
    int32_t var_18 = 0;
    int32_t var_14 = 0;
    int32_t r0 = sub_e3ec(1);
    var_18 = r0;
    int32_t r0_1 = sub_e468(1);
    var_14 = r0_1;
    
    if (*0x20d5ca == 1)
        return r0 - *0x20d5d0;
    
    return r0 - r0_1;
}

uint32_t sub_ea72()
{
    int32_t r2 = *0x2086b8;
    int32_t r1 = *0x2086ba;
    
    if (r2 == 0x1fe && r1 == 0x1fe && !*0x2086bc)
    {
        uint32_t result = *0x2086be;
        
        if (!result)
            return result;
    }
    
    if (!r2 && !r1)
        return 0;
    
    return 1;
}

int32_t sub_eac8()
{
    sub_e34e(0);
    sub_c256(0x16, 0xf);  /* ".00.33_250117" */
    sub_c256(0x17, 0xf5);  /* "00.33_250117" */
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 5);  /* ".33_250117" */
    sub_c256(0x1a, 0);  /* "33_250117" */
    sub_c256(0x1b, 0x5e);  /* "3_250117" */
    sub_c256(0x1c, 6);  /* "_250117" */
    sub_c256(0x1d, 6);  /* "250117" */
    sub_c256(0x1e, 0x40);  /* "50117" */
    sub_c256(0x1f, 0x40);  /* "0117" */
    sub_c256(0x20, 0);  /* "117" */
    sub_c256(0x21, 0);  /* "17" */
    sub_c256(0x23, 0x7f);
    sub_c256(0x24, 0x55);
    sub_c256(0x25, 0x55);
    sub_c256(0x26, 0);
    sub_c256(0x27, 6);
    sub_c256(0x28, 0);
    sub_c256(0x29, 0);
    sub_c256(0x2a, 2);
    sub_c256(0x2b, 0x42);
    sub_c256(0x2c, 0);
    sub_c256(0x2d, 0);
    sub_c256(0x2e, 0);
    sub_c256(0x2f, 0);
    sub_c256(0x36, 0x18);  /* "0.33_250117" */  /* "3.0" */
    sub_c256(0x4e, 0);
    sub_c256(0x6d, 0);
    sub_c256(0xf0, 0x22);  /* "7" */
    sub_c256(0xf1, 0x28);
    sub_c256(0xf2, 4);
    sub_c256(0xf3, 0x70);
    sub_c256(0xf4, 0x32);  /* "02_V3.0" */
    sub_c256(0xf5, 0x89);
    sub_c256(0xf6, 0x2b);
    sub_c256(0xf7, 0x85);
    sub_c256(0xf8, 0x27);
    sub_c256(0xf9, 0);
    sub_c256(0xfa, 0x88);
    sub_c256(0xfb, 0x40);
    sub_c256(0xf6, 0x2b);
    sub_c256(0x3d, 0x80);
    sub_c256(0x3e, 0x20);  /* "117" */
    sub_c256(0x3c, 0x1f);  /* "0117" */
    sub_c256(0x37, 0);  /* ".0" */
    sub_c256(0x3b, 0);
    sub_c256(0x3b, 0x10);  /* "RY02_3.00.33_250117" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    sub_c20c(5);
    sub_e4d0();
    *0x20bd61 = 1;
    return 1;
}

void sub_ec7e(char* arg1)
{
    *arg1 = 0xf;
    arg1[5] = 0;
    arg1[6] = 0;
    arg1[4] = 0;
    arg1[7] = 0;
    arg1[0xe] = 5;
    *(arg1 + 8) = 0;
    *(arg1 + 0xa) = 0x40;
    *(arg1 + 0xc) = 0x40;
    arg1[0x1c] = 0;  /* "_250117" */
    arg1[2] = 0;
    arg1[3] = 0;
    *(arg1 + 0x10) = 0;  /* "RY02_3.00.33_250117" */
    *(arg1 + 0x14) = 0;  /* "_3.00.33_250117" */
    *(arg1 + 0x18) = 0;  /* "0.33_250117" */
    uint32_t r1 = *0x83e2ca;
    uint8_t r1_1;
    
    if (*0x20bd60 == 1)
    {
        arg1[0x1e] = (r1 * 3) >> 2;  /* "50117" */
        r1_1 = (*0x83e2cb * 3) >> 2;
    }
    else
    {
        arg1[0x1e] = r1;  /* "50117" */
        r1_1 = *0x83e2cb;
    }
    
    arg1[0x1f] = r1_1;  /* "0117" */
}

void sub_eccc(char* arg1)
{
    *arg1 = 2;
    arg1[0x1c] = 2;  /* "_250117" */
    arg1[2] = 0;
}

uint32_t sub_ecd8(int32_t arg1)
{
    int32_t r4 = sub_e844();
    uint32_t r0_5;
    int32_t r0_14;
    
    if (*0x2086c2 == 3)
    {
        int32_t var_1c = *0x2086a8;
        int32_t r0_7;
        int32_t r1_2;
        r0_7 = j_sub_134d8(*0x2086b0);
        int32_t r0_8;
        int32_t r1_3;
        r0_8 = sub_13530(r0_7, r1_2, 0x33333333, 0x3fd33333);
        uint32_t r0_10;
        int32_t r1_4;
        r0_10 = j_sub_134d8(var_1c);
        int32_t r0_11;
        int32_t r1_5;
        r0_11 = sub_12f7c(r0_10, r1_4, r0_8, r1_3);
        r0_5 = sub_13490(r0_11, r1_5);
        
        if (r4 < *0x208478 && arg1 < r0_5)
        {
        label_ecf6:
            uint32_t r0_3 = *0x20d5e6;
            
            if (r0_3 < 5)
            {
                r0_5 = r0_3 + 1;
                *0x20d5e6 = r0_5;
            }
            
            if (r0_3 >= 5 || r0_5 >= 5)
            {
                r0_14 = 0;
                *0x208481 = r0_14;
                return r0_14;
            }
        }
        else if (r4 > *0x208474 && arg1 > r0_5)
            goto label_ed6c;
    }
    else
    {
        if (r4 < *0x208478)
            goto label_ecf6;
        
        r0_14 = *0x208474;
        
        if (r4 <= r0_14)
            return r0_14;
        
    label_ed6c:
        uint32_t r0_15 = *0x20d5e6;
        
        if (r0_15)
        {
            r0_5 = (r0_15 - 1) << 0x18 >> 0x18;  /* "0.33_250117" */
            *0x20d5e6 = r0_5;
        }
        
        if (!r0_15 || !r0_5)
        {
            r0_14 = 1;
            *0x208481 = r0_14;
            return r0_14;
        }
    }
    return r0_5;
}

int32_t sub_ed74()
{
    int32_t r3;
    int32_t var_18 = r3;
    sub_e34e(0);
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 0x19);  /* ".33_250117" */
    sub_c256(0x1c, 6);  /* "_250117" */
    sub_c256(0x1d, 6);  /* "250117" */
    sub_c256(0x1e, 0x40);  /* "50117" */
    sub_c256(0x1f, 0x40);  /* "0117" */
    sub_c256(0x20, 0);  /* "117" */
    sub_c256(0x21, 0);  /* "17" */
    sub_c256(0x23, 0x4f);
    sub_c256(0x26, 0);
    sub_c256(0x27, 6);
    sub_c256(0x28, 0);
    sub_c256(0x29, 0);
    sub_c256(0x2c, 0);
    sub_c256(0x2d, 0);
    sub_c256(0x2e, 0);
    sub_c256(0x2f, 0);
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    sub_c20c(5);
    sub_e4d0();
    *0x20bd61 = 1;
    return 1;
}

int32_t sub_ee3a()
{
    sub_c256(0x18, 0);  /* "0.33_250117" */
    sub_c256(0x19, 5);  /* ".33_250117" */
    sub_c256(0x3d, 0x80);
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    sub_c20c(5);
    sub_e4d0();
    *0x20bd61 = 1;
    return 1;
}

int32_t sub_ee7c()
{
    if (*0x20d5f8 << 0x1f)  /* "0117" */
    {
        sub_c256(0x28, *0x20d602);
        sub_c256(0x29, *0x20d604);
    }
    
    if (*0x20d5f8 << 0x1e < 0)  /* "50117" */
    {
        sub_c256(0x2e, *0x20d5fd);
        sub_c256(0x2f, *0x20d5fe);
    }
    
    if (*0x20d5f8 << 0x1d < 0)  /* "250117" */
        sub_c256(0x2c, *0x20d5ff);
    
    if (*0x20d5f8 << 0x1c < 0)  /* "_250117" */
    {
        sub_c256(0x1e, *0x20d606);  /* "50117" */
        sub_c256(0x1f, *0x20d606);  /* "0117" */
    }
    
    return sub_c20c(0xa);
}

int32_t sub_eeda()
{
    sub_e34e(0);
    sub_c256(0x18, 0x40);  /* "0.33_250117" */
    sub_c256(0x19, 1);  /* ".33_250117" */
    sub_c256(0x3d, 0);
    sub_c256(0x36, 8);  /* "3.0" */
    sub_c256(0x4d, 1);
    sub_c20c(5);
    sub_c256(0x4d, 0);
    return sub_c20c(5);
}

int32_t sub_ef20(uint32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    r0 = sub_13f18(arg1, arg2, arg3, arg1);
    sub_eac8();
    int32_t result = sub_c59c(1);
    data_12 = r0 << 0x10;  /* "RY02_3.00.33_250117" */
    return result;
}

int32_t sub_ef44()
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    r0 = sub_c504();
    int32_t r4;
    char r5;
    /* tailcall */
    return sub_ef4e(r4, r5, r0, r1, r2);
}

int32_t sub_ef4a()
{
    int32_t r0;
    int32_t r1;
    int32_t r2;
    r0 = sub_ed74();
    int32_t r4;
    char r5;
    /* tailcall */
    return sub_ef4e(r4, r5, r0, r1, r2);
}

int32_t sub_ef4e(char* arg1 @ r4, char arg2 @ r5, int32_t arg3, int32_t arg4, int32_t arg5)
{
    *arg1 = arg2;
}

int32_t sub_ef52()
{
    int32_t r1;
    int32_t r2;
    r1 = sub_ec7e(0x20d5f8);
    int32_t r4;
    char r6;
    /* tailcall */
    return sub_ef64(r4, r6, 0x20d5f8, r1, r2);
}

int32_t sub_ef5c()
{
    sub_eccc(0x20d5f8);
    int32_t entry_r2;
    int32_t r4;
    char r6;
    /* tailcall */
    return sub_ef64(r4, r6, 0x20d5f8, 0, entry_r2);
}

int32_t sub_ef64(void* arg1 @ r4, char arg2 @ r6, int32_t arg3, int32_t arg4, int32_t arg5)
{
    sub_eeda();
    sub_ee7c();
    int32_t result = sub_c56a(1);
    *(arg1 + 1) = arg2;
    return result;
}

int32_t sub_ef76(void* arg1 @ r4, char arg2 @ r5, int32_t arg3, int32_t arg4, int32_t arg5)
{
    sub_c56a(0);
    int32_t result = sub_ee3a();
    *(arg1 + 1) = arg2;
    return result;
}

int32_t sub_ef84()
{
    uint32_t r0 = *0x208481;
    
    if (*0x208482 == r0)
        return 0;
    
    *0x208482 = r0;
    
    if (r0 == 1)
    {
        int32_t r1_1;
        int32_t r2_1;
        r1_1 = sub_19598();
        int32_t r1_2;
        int32_t r2_2;
        r1_2 = sub_ef20(0, r1_1, r2_1);
        sub_ef20(3, r1_2, r2_2);
    }
    else if (!r0)
        sub_ed74();
    
    return 1;
}

uint32_t sub_efba(char* arg1, uint32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    int32_t var_18 = arg4;
    uint32_t var_20 = arg2;
    uint32_t r0 = arg1[0x1c];  /* "_250117" */
    
    if (!r0)
    {
        r0 = 1;
        arg1[0x1c] = 1;  /* "_250117" */
    }
    else
    {
        if (r0 == 1)
        {
            uint32_t r0_3 = *0x208481;
            
            if (!r0_3)
            {
                arg1[0x1c] = 4;  /* "_250117" */
                return r0_3;
            }
            
            arg1[7] = 0;
            
            if (arg4 > arg2 + 0x80)
            {
                int32_t r0_6 = arg4 - arg2;
                int32_t r1_3 = ((r0_6 >> 0x1f >> 0x1a) + r0_6) >> 6;
                    /* "33_250117" */  /* "0117" */
                *(arg1 + 0x14) = r1_3;  /* "_3.00.33_250117" */
                uint32_t r0_8 = *0x83e2c8;
                uint32_t r0_10 = sub_12b2a(0x2710 * r0_8, r1_3);
                uint32_t r1_4 = arg1[0x1e];  /* "50117" */
                
                if (r1_4 < r0_10)
                    r0_10 = r1_4;
                
                *(arg1 + 0xa) = r0_10;
                arg1[5] = r0_8 >> 1;
            }
            
            if (arg5 > arg2 + 0x80)
            {
                int32_t r0_14 = arg5 - arg2;
                int32_t r1_7 = ((r0_14 >> 0x1f >> 0x1a) + r0_14) >> 6;
                    /* "33_250117" */  /* "0117" */
                *(arg1 + 0x18) = r1_7;  /* "0.33_250117" */
                uint32_t r0_16 = *0x83e2c9;
                uint32_t r0_18 = sub_12b2a(0x2710 * r0_16, r1_7);
                uint32_t r1_8 = arg1[0x1f];  /* "0117" */
                
                if (r1_8 < r0_18)
                    r0_18 = r1_8;
                
                *(arg1 + 0xc) = r0_18;
                arg1[6] = r0_16 >> 1;
            }
            
            arg1[0xe] = 0x40;
            *arg1 = 0xf;
            arg1[0x1c] = 2;  /* "_250117" */
            return 0xf;
        }
        
        uint32_t r0_24;
        
        if (r0 == 2)
        {
            if (arg4 > 0x6ddd0)
            {
                uint32_t r0_20 = arg1[5];
                
                if (r0_20 < 0xc8)
                    arg1[5] = r0_20 + 2;
            }
            
            if (arg5 > 0x6ddd0)
            {
                uint32_t r0_22 = arg1[6];
                
                if (r0_22 < 0xc8)
                    arg1[6] = r0_22 + 2;
            }
            
            if (arg5 <= 0x6ddd0 && arg4 <= 0x6ddd0)
            {
            label_f0d6:
                arg1[0x1c] = 3;  /* "_250117" */
                *arg1 = 2;
                return 3;
            }
            
            r0_24 = arg1[6];
            
            if (r0_24 >= 0xc8)
            {
            label_f0ea:
                arg1[0x1c] = 4;  /* "_250117" */
                *arg1 = 2;
                return r0_24;
            }
            
            r0_24 = arg1[5];
            
            if (r0_24 >= 0xc8)
                goto label_f0ea;
            
            arg1[0x1c] = 2;  /* "_250117" */
            *arg1 = 2;
            return r0_24;
        }
        
        if (r0 == 3)
        {
            uint32_t r0_1;
            
            if (arg4 > 0x55730)
                r0_1 = arg1[5];
            
            if (arg4 > 0x55730 && r0_1 < 0xc8)
                arg1[5] = r0_1 + 1;
            else if (arg4 < 0x249f0)
            {
                uint32_t r0_25 = arg1[5];
                
                if (r0_25)
                    arg1[5] = r0_25 - 1;
            }
            
            uint32_t r0_26;
            
            if (arg5 > 0x55730)
                r0_26 = arg1[6];
            
            if (arg5 > 0x55730 && r0_26 < 0xc8)
                arg1[6] = r0_26 + 1;
            else if (arg5 < 0x249f0)
            {
                uint32_t r0_28 = arg1[6];
                
                if (r0_28)
                    arg1[6] = r0_28 - 1;
            }
            
            r0_24 = arg5 - 0x249f1;
            
            if (r0_24 < 0x30d3f && arg4 < 0x55730 && arg4 > 0x249f0)
                goto label_f0ea;
            
            r0_24 = arg1[6];
            
            if (r0_24 >= 0xc8)
                goto label_f0ea;
            
            r0_24 = arg1[5];
            
            if (r0_24 >= 0xc8)
                goto label_f0ea;
            
            goto label_f0d6;
        }
    }
    
    return r0;
}

int32_t sub_f13e(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_18 = r3;
    *0x20d5f9 = 0;
    
    if (*0x20d5e5)
    {
        *0x20d5f9 = 1;
        sub_c48e(0x20d5e8, arg2, arg3);
        int32_t r1_1;
        int32_t r2_1;
        r1_1 = sub_efba(0x20d5f8, *0x20d5e8, *0x20d5ec, *0x20d5f0, *0x20d5f4);
        
        if (*0x20d614 == 4)
            sub_ef20(4, r1_1, r2_1);
        else
            sub_ee7c();
    }
    
    return 0xff7dc2f8(arg1, 0x20d5f8, 0x20);  /* "117" */
}

uint32_t* sub_f18c(uint32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t var_18 = arg3;
    int32_t var_1c_1 = arg2;
    uint32_t* result = arg1;
    result = &data_0;
    int32_t var_1c = 0;
    var_18 = 0;
    int32_t var_14 = 0;
    sub_c288(3, &result, 6);
    sub_c288(9, &var_18, 6);
    uint32_t r2_1 = result | *result[2] << 0x10;  /* "RY02_3.00.33_250117" */
    uint32_t r0_5 = var_1c << 8 | *result[3] | *var_1c[1] << 0x10;  /* "RY02_3.00.33_250117" */
    uint32_t r3_5 = var_14 << 8 | *var_18[3];
    arg1[3] = var_18 | *var_18[2] << 0x10;  /* "RY02_3.00.33_250117" */
    arg1[2] = r0_5;
    *arg1 = r2_1;
    arg1[1] = r3_5 | *var_14[1] << 0x10;  /* "RY02_3.00.33_250117" */
    return result;
}

int32_t sub_f1e6()
{
    if (sub_c2d2() && !*0x20d5e4)
    {
        int32_t r0_2;
        int32_t r2_1;
        r0_2 = sub_19380();
        
        if (r0_2)
        {
            *0x208481 = 1;
            *0x208482 = 2;
            sub_ef20(0, 2, r2_1);
            return 0;
        }
    }
    
    return 1;
}

int32_t sub_f21a()
{
    sub_c59c(0);
    int32_t r1;
    int32_t r2;
    r1 = sub_c56a(0);
    sub_ef20(1, r1, r2);
    *0x20d5e4 = 0;
    *0x20d5e5 = 0;
    sub_19318();
    return 0x2084b4;
}

int32_t sub_f23e()
{
    *0x20d5e4 = 0;
    *0x20d5e5 = 0;
    sub_19318();
    return 0x2084b4;
}

uint32_t sub_f250()
{
    return *0x208481;
}

int32_t sub_f256(int32_t arg1)
{
    char var_28 = *0x20d5f8;
    char var_26 = *0x20d5fa;
    int16_t var_1e = *0x20d602;
    char var_23 = *0x20d5fd;
    char var_22 = *0x20d5fe;
    char var_21 = *0x20d5ff;
    char var_1a = *0x20d606;
    return 0xff7dc2f8(arg1, &var_28, 0x20, &var_28, var_28, *0x20d5fc, *0x20d600, *0x20d604, 
        *0x20d608, *0x20d60c, *0x20d610, *0x20d614);  /* "117" */
}

int32_t sub_f2a2(char* arg1)
{
    arg1[0x249] = *0x20d602;
    arg1[0x24a] = *0x20d604;
    int32_t r6 = 0;
    uint32_t r4 = 0;
    
    if (*0x20d5e4 && !*0x20d5e5)
    {
        uint32_t r0_10 = sub_c310(&arg1[0x144], 4, 1);
        *arg1 = r0_10;
        
        while (true)
        {
            if (r4 >= r0_10)
            {
                if (!r6)
                    *0x208480 = 3;
                else
                {
                    uint32_t r0_23 = (*0x208480 - 1) << 0x18 >> 0x18;  /* "0.33_250117" */
                    *0x208480 = r0_23;
                    
                    if (!r0_23)
                    {
                        *0x208480 = 3;
                        sub_ef20(5, 0x208480, 3);
                    }
                }
                
                return 1;
            }
            
            void* r0_12 = &arg1[0x144 + r4 * 4];
            int32_t r7_1 = *(r0_12 + 8);
            int32_t r5_1 = *(r0_12 + 0xc);
            arg1[0x104 + r4] = *(r0_12 + 4) - arg1[0x144 + r4 * 4];
            arg1[0x84 + r4] = r7_1 - 0x3f7a0;
            arg1[0xc4 + r4] = r5_1 - 0x3f7a0;
            arg1[0x104 + r4];
            
            if (sub_ef84())
                break;
            
            if (r7_1 - 0x186a0 >= 0x493e1 || r5_1 < 0x186a0 || r5_1 > 0x61a80)
            {
                r6 = 1;
                
                if (!*0x208481)
                    r6 = 0;
            }
            
            r4 = r4 + 1;
        }
    }
    
    return 0;
}

int32_t sub_f3a0() __pure
{
    return;
}

int32_t sub_f3a2() __pure
{
    return;
}

int32_t sub_f3a4() __pure
{
    return;
}

int32_t sub_f3a6() __pure
{
    return;
}

void sub_f3a8() __noreturn
{
    __mrs(ipsr);
    sub_5a06();
    
    while (true)
        /* nop */
}

int32_t sub_f3fc()
{
    int32_t result = 0xff7e4d8e(0xffffffff);
    *0x20d624 = result;
    return result;
}

int32_t sub_f40c() __pure
{
    return;
}

int32_t sub_f458(int32_t arg1)
{
    return 0xff7eec80(0, arg1, 0x83e2e4, 0x4d1);
}

int32_t sub_f47c(int32_t arg1, int32_t arg2)
{
    if (!arg1)
        return 0xff7eec80(0, arg2, 0x83e2f2, 0x4e2);
    
    if (!arg2)
    {
        0xff7eed9c();
        return 0;
    }
    
    uint32_t r6_1 = *(arg1 - 4) << 4 >> 4;
    int32_t r0_7 = r6_1 - (8 - (arg2 << 0x1d >> 0x1d) + arg2);  /* "250117" */
    
    if (r0_7 == 8)
        return arg1;
    
    0xff7ef24e(r0_7, 8);
    0xff7eed9c(arg1);
    int32_t r0_9 = 0xff7eec80(0, arg2, 0x83e2f2, 0x4f7);
    
    if (arg1 != r0_9)
    {
        uint32_t r2_2 = *(r0_9 - 4) << 4 >> 4;
        int32_t r2_4;
        
        r2_4 = r6_1 >= r2_2 ? r2_2 - 8 : r6_1 - 8;
        
        0xff81b898(r0_9, arg1, r2_4);
    }
    
    0xff7ef26c();
    return r0_9;
}

int32_t sub_f504()
{
    return 0xff7eed9c();
}

int32_t sub_f50c()
{
    return *0x200524;
}

uint32_t sub_f512()
{
    return *0x202cef;
}

int32_t sub_f560(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r4;
    int32_t r5;
    /* tailcall */
    return sub_fb38(r4, r5, r4, arg3 << 0x13);  /* "2_3.00.33_250117" */
}

int32_t* sub_f5a8(char* arg1)
{
    int32_t r1 = *arg1;
    int32_t* result;
    int32_t r5;
    
    if (!arg1[8])
    {
        result = 0xe000e180;
        
        if (r1 >= 0x32)  /* "02_V3.0" */
        {
            *0x4000600c &= ~(1 << (r1 - 0x32));  /* "02_V3.0" */
            
            if (!*0x4000600c)
                *0xe000e180 = 0x80000;
            
            return 0xe000e180;
        }
        
        r5 = 1 << r1 << 0x1b >> 0x1b;  /* "3_250117" */
    }
    else
    {
        if (r1 >= 0x32)  /* "02_V3.0" */
        {
            *0x4000600c |= 1 << (r1 - 0x32);  /* "02_V3.0" */
            *arg1 = 0x13;  /* "2_3.00.33_250117" */
        }
        
        *0xe000e280 = 1 << *arg1 << 0x1b >> 0x1b;  /* "3_250117" */
        int32_t r1_4 = *arg1;
        int32_t r2_3 = *(arg1 + 4);
        
        if (r1_4 >= 0)
        {
            uint32_t r1_8 = r1_4 << 0x1e >> 0x1b;  /* "3_250117" */  /* "50117" */
            *((r1_4 >> 2 << 2) - 0x1fff1c00) =
                (*((r1_4 >> 2 << 2) - 0x1fff1c00) & ~(0xff << r1_8)) | r2_3 << 0x1d >> 0x18 << r1_8;
                /* "0.33_250117" */  /* "250117" */
        }
        else
        {
            uint32_t r1_6 = r1_4 << 0x1e >> 0x1b;  /* "3_250117" */  /* "50117" */
            *((((r1_4 << 0x1c >> 0x1c) - 8) >> 2 << 2) - 0x1fff12e4) = (
                *((((r1_4 << 0x1c >> 0x1c) - 8) >> 2 << 2) - 0x1fff12e4) & ~(0xff << r1_6))
                | r2_3 << 0x1d >> 0x18 << r1_6;  /* "0.33_250117" */  /* "_250117" */  /* "250117" */
        }
        
        r5 = 1 << *arg1 << 0x1b >> 0x1b;  /* "3_250117" */
        result = 0xe000e100;
    }
    
    *result = r5;
    return result;
}

uint32_t sub_f670()
{
    uint32_t i;
    
    for (i = 0; i < 0xa; i = i + 1)
        *((i << 2) + 0x40000280) = 0;
    
    return i;
}

int32_t sub_f686(int32_t arg1)
{
    int32_t result = 0xff << arg1 << 0x1e >> 0x1b;  /* "3_250117" */  /* "50117" */
    *((arg1 >> 2 << 2) + 0x40000280) &= ~result;
    return result;
}

uint32_t sub_f69e(int32_t arg1, int32_t arg2)
{
    uint32_t result = arg1 << 0x1e >> 0x1b;  /* "3_250117" */  /* "50117" */
    *((arg1 >> 2 << 2) + 0x40000280) =
        (*((arg1 >> 2 << 2) + 0x40000280) & ~(0xff << result)) | arg2 << result;
    return result;
}

int32_t sub_f6bc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    int32_t var_18 = arg4;
    uint32_t r5 = *(0x83e3e4 + (arg1 << 1));
    uint32_t r0_4 = 0xff80efe4(r5, 0x83e3e4) >> 4 << 4;
    
    if (!arg4)
        r0_4 |= 4;
    else if (arg4 == 1)
        r0_4 |= 0xc;
    
    int32_t r4_3 = arg5 << 1 | arg6 | r0_4;
    int32_t r4_4;
    
    r4_4 = !arg2 ? r4_3 & 0xfffffdff : r4_3 | 0x200;
    
    int32_t result = 0xff80f088(r5, r4_4 | 0x100);
    
    if (arg3)
        return result;
    
    return 0xff80f088(r5, r4_4 & 0xfffffeff);
}

int32_t sub_f71c(int32_t arg1, int32_t arg2)
{
    uint32_t r4 = *(0x83e3e4 + (arg1 << 1));
    int32_t r0_2 = 0xff80efe4(r4, 0x83e3e4);
    int32_t r0_3;
    
    r0_3 = !arg2 ? r0_2 & 0xffffffdf : r0_2 | 0x20;  /* "117" */
    
    return 0xff80f088(r4, r0_3);
}

int32_t sub_f742(int32_t arg1, int32_t arg2)
{
    uint32_t r4 = *(0x83e3e4 + (arg1 << 1));
    int32_t r0_2 = 0xff80efe4(r4, 0x83e3e4);
    int32_t r0_3;
    
    r0_3 = !arg2 ? r0_2 & 0xfffffbff : r0_2 | 0x400;
    
    return 0xff80f088(r4, r0_3);
}

int32_t sub_f76a(int32_t arg1, int32_t arg2)
{
    uint32_t r4 = *(0x83e3e4 + (arg1 << 1));
    int32_t r0_2 = 0xff80efe4(r4, 0x83e3e4);
    int32_t r0_3;
    
    r0_3 = !arg2 ? r0_2 & 0xffffffbf : r0_2 | 0x40;
    
    return 0xff80f088(r4, r0_3);
}

int32_t sub_f790(int32_t arg1, int32_t arg2, int32_t arg3)
{
    sub_f76a(arg1, arg2);
    sub_f742(arg1, arg3);
    return sub_f71c(arg1, 1);
}

int32_t j_sub_f71c(int32_t arg1)
{
    /* tailcall */
    return sub_f71c(arg1, 0);
}

int32_t sub_f7b0(int32_t arg1)
{
    return 0xff80f088(0x2a, arg1 << 0x1a >> 0x12 | (0xff80efe4(0x2a) & 0xffffc0ff) | 0xc000);
        /* "02_3.00.33_250117" */  /* "33_250117" */
}

int32_t sub_f7d4()
{
    int32_t result = 0;
    int32_t r0 = 0xff80efe4(0x2a);
    
    if (r0 << 0x10 < 0)  /* "RY02_3.00.33_250117" */
        result = 1;
    
    0xff80f088(0x2a, 0x8000 | r0);
    return result;
}

int32_t j_sub_f7d4()
{
    /* tailcall */
    return sub_f7d4();
}

int32_t sub_f7f6(int32_t arg1)
{
    uint32_t r0 = *(0x83e432 + (arg1 << 1));
    uint32_t r1_2 = r0 << 0x14 >> 0x14;  /* "_3.00.33_250117" */
    
    if (!(0xff80efe4(r1_2, r1_2) & 1 << r0 >> 0xc))
        return 0;
    
    return 1;
}

int32_t j_sub_f7f6(int32_t arg1)
{
    /* tailcall */
    return sub_f7f6(arg1);
}

int32_t sub_f8b8(int32_t arg1, int32_t arg2)
{
    uint32_t r4 = *(0x83e3e4 + (arg1 << 1));
    int32_t r0_2 = 0xff80efe4(r4, 0x83e3e4);
    int32_t r0_3;
    
    r0_3 = !arg2 ? r0_2 & 0xffffffef : r0_2 | 0x10;  /* "RY02_3.00.33_250117" */
    
    return 0xff80f088(r4, r0_3);
}

int32_t sub_f92e(int32_t arg1)
{
    uint32_t r0 = *(0x83e432 + (arg1 << 1));
    uint32_t r4_1 = r0 << 0x14 >> 0x14;  /* "_3.00.33_250117" */
    return 0xff80f088(r4_1, 0xff80efe4(r4_1) | 1 << r0 >> 0xc);
}

int32_t sub_f99a(int32_t arg1)
{
    int32_t r0 = *0x400002a8;
    int32_t result;
    
    result = !arg1 ? r0 & 0xfeffffff : r0 | 0x1000000;
    
    *0x400002a8 = result;
    return result;
}

int32_t sub_f9b0(int32_t arg1)
{
    int32_t r0 = *0x400002a8;
    int32_t result;
    
    result = !arg1 ? r0 & 0xfffffeff : r0 | 0x100;
    
    *0x400002a8 = result;
    return result;
}

int32_t sub_f9d8(int32_t arg1, int32_t arg2)
{
    if (!*0x20d804)
    {
        *0x40000014 |= 0x200;
        *0x20d804 = 1;
    }
    
    *0x400001f0 = arg2;
    *0x400001f4 = arg1 - 0x40000100;
    *0x400001f8 = 1;
    return arg1 - 0x40000100;
}

int32_t sub_f9fe()
{
    sub_f9d8(0x40000100, *0x40000100 >> 1 << 1);
    sub_f9d8(0x40000100, *0x40000100 & 0xbfffffff);
    sub_f9d8(0x40000100, *0x40000100 & 0xdfffffff);
    sub_f9d8(0x40000104, 0xffff);
    sub_f9d8(0x40000104, 0);
    sub_f9d8(0x4000010c, 0);
    sub_f9d8(0x40000110, 0);
    sub_f9d8(0x40000114, 0);
    sub_f9d8(0x40000118, 0);
    sub_f9d8(0x4000011c, 0);
    sub_f9d8(0x40000120, 0);
    sub_f9d8(0x40000124, 0);
    sub_f9d8(0x40000128, 0);
    sub_f9d8(0x4000012c, 0);
    sub_f9d8(0x40000138, 0);
    sub_f9d8(0x40000100, 6);
    return sub_f9d8(0x40000100, 0);
}

int32_t sub_fab8(int32_t arg1)
{
    /* tailcall */
    return sub_f9d8(0x4000010c, arg1 << 0x14 >> 0x14);  /* "_3.00.33_250117" */
}

int32_t sub_fac2(int32_t arg1)
{
    int32_t r1 = *0x40000100;
    uint32_t r1_2;
    
    r1_2 = arg1 == 1 ? r1 | 1 : r1 >> 1 << 1;
    
    /* tailcall */
    return sub_f9d8(0x40000100, r1_2);
}

int32_t sub_fada(int32_t arg1, int32_t arg2)
{
    int32_t r1 = *0x40000100;
    int32_t r1_1;
    
    r1_1 = arg2 == 1 ? r1 | arg1 : r1 & ~arg1;
    
    /* tailcall */
    return sub_f9d8(0x40000100, r1_1);
}

int32_t sub_faee(int32_t arg1, int32_t arg2)
{
    int32_t r1 = *0x40000100;
    int32_t r1_1;
    
    r1_1 = arg2 == 1 ? r1 | arg1 : r1 & ~arg1;
    
    /* tailcall */
    return sub_f9d8(0x40000100, r1_1);
}

int32_t sub_fb02(int32_t arg1)
{
    int32_t r1 = *0x40000100;
    int32_t r1_1;
    
    r1_1 = !arg1 ? r1 & 0xbfffffff : r1 | 0x40000000;
    
    /* tailcall */
    return sub_f9d8(0x40000100, r1_1);
}

int32_t sub_fb14(int32_t arg1)
{
    int32_t r1 = *0x40000100;
    int32_t r1_1;
    
    r1_1 = arg1 == 1 ? r1 | 0x20000000 : r1 & 0xdfffffff;
    
    /* tailcall */
    return sub_f9d8(0x40000100, r1_1);
}

int32_t sub_fb28()
{
    int32_t r0;
    int32_t r1_2;
    r0 = sub_f9d8(0x40000100, *0x40000100 | 2);
    /* tailcall */
    return sub_fb38(0x40000100, 2, r0, r1_2);
}

int32_t sub_fb38(int32_t* arg1 @ r4, int32_t arg2 @ r5, int32_t arg3, int32_t arg4)
{
    return sub_f9d8(arg1, *arg1 & ~arg2);
}

int32_t sub_fb48()
{
    sub_f9d8(0x40000100, *0x40000100 | 4);
    return sub_f9d8(0x40000100, *0x40000100 & 0xfffffffb);
}

int32_t sub_fb68(int32_t arg1)
{
    if (!(*0x40000108 & arg1 >> 8))
        return 0;
    
    return 1;
}

int32_t sub_fb7a(int32_t arg1)
{
    sub_f9d8(0x40000104, arg1 >> 8);
    return sub_f9d8(0x40000104, 0);
}

int32_t sub_fb96(int32_t arg1)
{
    if (!(*0x40000108 & arg1 >> 8))
        return 0;
    
    return 1;
}

int32_t sub_fba8(int32_t arg1)
{
    sub_f9d8(0x40000104, arg1 >> 8);
    return sub_f9d8(0x40000104, 0);
}

int32_t sub_fbc4(int32_t arg1)
{
    sub_f9d8(0x40000104, 1 << (arg1 + 8));
    return sub_f9d8(0x40000104, 0);
}

int32_t sub_fbe4()
{
    sub_f9d8(0x40000104, 2);
    return sub_f9d8(0x40000104, 0);
}

int32_t sub_fc00()
{
    sub_f9d8(0x40000104, 1);
    return sub_f9d8(0x40000104, 0);
}

void* sub_fc34(int32_t arg1, int32_t arg2, int32_t arg3)
{
    uint32_t r5 = arg2 << 1 >> 0x1e;  /* "50117" */
    uint32_t r2_1 = arg1 << 4 >> 0x1e;  /* "50117" */
    int32_t r4_1 = arg1 | arg2;
    int32_t r0_4;
    
    if (arg3 == 1)
    {
        if (arg2 == 0x60000040)
        {
            *0x4000020c |= 0x4000000;
            *0x4000020c |= arg2 << 0x17;  /* "00.33_250117" */
        }
        else if (arg2 == 0x61000000 || arg2 == 0x40001000)
        {
            *0x4000020c |= 0x4000000;
            *0x4000020c |= 0x400000;
            *0x4000020c |= 0x10000000;
        }
        else if (arg2 == 0x60000010 || arg2 == 0x60010000)
        {
            *0x4000020c |= 0x4000000;
            *0x4000020c |= 0x8000000;
        }
        else if (arg2 == 0x20004000)
            *0x40000360 |= arg2 >> 0x14;  /* "_3.00.33_250117" */
        
        if (arg2 == 0x120 || arg2 == 0x140 || arg2 == 0x10)  /* "RY02_3.00.33_250117" */
        {
            r0_4 = *0x40000220 | r4_1;
            *0x40000220 = r0_4;
            return r0_4;
        }
    }
    else if (arg2 == 0x120 || arg2 == 0x140 || arg2 == 0x10)  /* "RY02_3.00.33_250117" */
    {
        r0_4 = *0x40000220 & ~r4_1;
        *0x40000220 = r0_4;
        return r0_4;
    }
    int32_t r0 = arg1 & 0xf3ffffff;
    int32_t r1 = arg2 & 0x9fffffff;
    void* r0_2;
    int32_t r2_6;
    
    if (arg3 == 1)
    {
        r0_2 = (r5 << 2) + 0x40000200;
        *((r2_1 << 2) + 0x40000210) |= r0;
        r2_6 = *(r0_2 + 0x2c) | r1 | r1 << 1;
    }
    else
    {
        r0_2 = (r5 << 2) + 0x40000200;
        *((r2_1 << 2) + 0x40000210) &= ~r0;
        r2_6 = *(r0_2 + 0x2c) & ~r1 & ~(r1 << 1);
    }
    
    *(r0_2 + 0x2c) = r2_6;
    return r0_2;
}

void sub_fd30(int32_t arg1, int32_t arg2)
{
    uint32_t r2 = arg1 << 4 >> 0x1e;  /* "50117" */
    
    if (arg2 == 1)
    {
        if (arg1 == 2 || arg1 == 4 || arg1 == 1)
        {
            *0x40000220 |= arg1;
            return;
        }
    }
    else if (arg1 == 2 || arg1 == 4 || arg1 == 1)
    {
        *0x40000220 &= ~arg1;
        return;
    }
    
    int32_t r0 = arg1 & 0xf3ffffff;
    void* r1_1;
    int32_t r2_2;
    
    if (arg2 == 1)
    {
        r1_1 = (r2 << 2) + 0x40000200;
        r2_2 = *(r1_1 + 0x10) | r0;  /* "RY02_3.00.33_250117" */
    }
    else
    {
        r1_1 = (r2 << 2) + 0x40000200;
        r2_2 = *(r1_1 + 0x10) & ~r0;  /* "RY02_3.00.33_250117" */
    }
    
    *(r1_1 + 0x10) = r2_2;  /* "RY02_3.00.33_250117" */
}

void sub_fd84(int32_t arg1, int32_t arg2)
{
    uint32_t r2_1 = arg1 << 1 >> 0x1e;  /* "50117" */
    
    if (arg2 == 1)
    {
        if (arg1 == 0x120 || arg1 == 0x140 || arg1 == 0x10)  /* "RY02_3.00.33_250117" */
        {
            *0x40000220 |= arg1;
            return;
        }
    }
    else if (arg1 == 0x120 || arg1 == 0x140 || arg1 == 0x10)  /* "RY02_3.00.33_250117" */
    {
        *0x40000220 &= ~arg1;
        return;
    }
    
    int32_t r0 = arg1 & 0x9fffffff;
    void* r1_1;
    int32_t r2_4;
    
    if (arg2 == 1)
    {
        r1_1 = (r2_1 << 2) + 0x40000200;
        r2_4 = *(r1_1 + 0x2c) | r0 | r0 << 1;
    }
    else
    {
        r1_1 = (r2_1 << 2) + 0x40000200;
        r2_4 = *(r1_1 + 0x2c) & ~r0 & ~(r0 << 1);
    }
    
    *(r1_1 + 0x2c) = r2_4;
}

void sub_fde8(int32_t arg1, int32_t arg2)
{
    if (arg1 == 0x40015000)
    {
        *0x40000238 = *0x40000238 >> 1 << 1;
        *0x4000035c &= 0xfffe7fff;
        *0x4000035c |= arg2 << 0xf;
        *0x40000238 |= 1;
    }
    else if (arg1 == 0x40015400)
    {
        *0x40000238 &= 0xfffffffb;
        *0x4000035c &= 0xfff9ffff;
        *0x4000035c |= arg2 << 0x11;  /* "Y02_3.00.33_250117" */
        *0x40000238 |= 4;
    }
}

void sub_fe40(int32_t arg1, int32_t arg2)
{
    if (arg1 == 0x40013000)
    {
        *0x40000234 &= 0xfffeffff;
        *0x4000035c &= 0xffe7ffff;
        *0x4000035c |= arg2 << 0x13;  /* "2_3.00.33_250117" */
        *0x40000234 |= 0x10000;
    }
    else if (arg1 == 0x40013400)
    {
        *0x40000234 &= 0xfffbffff;
        *0x4000035c &= 0xff9fffff;
        *0x4000035c |= arg2 << 0x15;  /* "3.00.33_250117" */
        *0x40000234 |= 0x40000;
    }
}

int32_t sub_fe8e(int32_t arg1, int32_t arg2)
{
    *0x40000230 &= 0xffffbfff;
    *0x40000360 &= ~(7 << (arg1 * 3 + 7));
    *0x40000360 |= arg2 << (arg1 * 3 + 7);
    int32_t result = *0x40000230 | 0x4000;
    *0x40000230 = result;
    return result;
}

void sub_febc(int32_t arg1, int32_t arg2)
{
    if (arg1 == 0x40012000)
    {
        *0x40000234 = *0x40000234 >> 1 << 1;
        *0x4000035c &= 0xfffff9ff;
        *0x4000035c |= arg2 << 9;
        *0x40000234 |= 1;
    }
    else if (arg1 == 0x40011000)
    {
        int32_t r0_8 = arg1 >> 0x12;  /* "02_3.00.33_250117" */
        *0x40000230 &= ~r0_8;
        *0x4000035c &= 0xffffe7ff;
        *0x4000035c |= arg2 << 0xb;
        *0x40000230 |= r0_8;
    }
}

int32_t sub_ff44(uint32_t* arg1, int32_t* arg2)
{
    int32_t r3;
    int32_t var_18_1 = r3;
    int32_t var_18 = *arg2;
    arg1[0x1b] = arg1[0x1b] >> 1 << 1;  /* "3_250117" */
    uint32_t r0_4 = arg2[2];
    uint32_t r2 = *(arg2 + 0xa);
    
    if (r0_4 == 0x41)
    {
        *arg1 = r0_4 | r2 << 4 | 0x20;  /* "117" */
        arg1[1] = arg2[3] << 0x16 >> 0x16 | *(arg2 + 0xa) << 0xc;  /* ".00.33_250117" */
        arg1[0x1f] = 8;  /* "0117" */
    }
    else
    {
        *arg1 = r0_4 | r2 << 3;
        arg1[0x26] &= *(arg2 + 0xe);
        arg1[2] = arg2[3];
        arg1[0x1f] = 8;  /* "0117" */
        arg1[0x25] = 2;
    }
    
    arg1[0xf] = arg2[4];
    arg1[0xe] = arg2[5];
    int32_t r0_11 = arg2[1];
    
    if (r0_11 <= 0x186a0)
    {
        *arg1 |= 6;
        *arg1 &= 0xfffb;
        int32_t r0_17 = sub_12b2a(var_18, 0x2710);
        arg1[5] = sub_12b2a(0xfa0 * r0_17, arg2[1]) + 0x14;  /* "_3.00.33_250117" */
        arg1[6] = sub_12b2a(0x125c * r0_17, arg2[1]) + 0x14;  /* "_3.00.33_250117" */
    }
    else if (r0_11 > 0x61a80)
    {
        if (r0_11 > 0x33e140)
            arg2[1] = 0x33e140;
        
        *arg1 |= 6;
        int32_t r0_56 = sub_12b2a(var_18, 0x2710);
        arg1[9] = sub_12b2a(0x708 * r0_56, arg2[1]) + 8;
        arg1[0xa] = sub_12b2a(0xe10 * r0_56, arg2[1]) + 1;
    }
    else
    {
        *arg1 |= 6;
        *arg1 &= 0xfffd;
        int32_t r7_1 = arg2[1];
        int32_t r0_47;
        
        if (r7_1 == 0x30d40)
        {
            int32_t r0_35 = sub_12b2a(var_18, 0x2710);
            arg1[7] = sub_12b2a(0x960 * r0_35, r7_1) + 0x20;  /* "117" */
            r0_47 = sub_12b2a(0x1450 * r0_35, arg2[1]);
        }
        else if (r7_1 != 0x61a80)
        {
            int32_t r0_48 = sub_12b2a(var_18, 0x2710);
            arg1[7] = sub_12b2a(0x960 * r0_48, r7_1) + 0x14;  /* "_3.00.33_250117" */
            r0_47 = sub_12b2a(0x1450 * r0_48, arg2[1]);
        }
        else
        {
            int32_t r0_40 = sub_12b2a(var_18, 0x2710);
            arg1[7] = sub_12b2a(0x960 * r0_40, r7_1) + 8;
            r0_47 = sub_12b2a(0x1450 * r0_40, arg2[1]) + 1;
        }
        
        arg1[8] = r0_47;
    }
    
    arg1[0x22] = *(arg2 + 0x1a) | arg2[6] << 1;  /* "33_250117" */  /* "7" */
    arg1[0x24] = *(arg2 + 0x1d);  /* "250117" */
    arg1[0x23] = arg2[7];
    arg1[0xc] = 0;
    return 0;
}

void sub_100bc(void* arg1)
{
    if (arg1 == 0x40015000)
        sub_fc34(0x8010000, 0x60000001, 0);
    else if (arg1 == 0x40015400)
        sub_fc34(0x8020000, 0x60000004, 0);
}

void sub_100e0(int32_t* arg1)
{
    *arg1 = 0x2625a00;
    arg1[1] = 0x61a80;
    arg1[2] = 0x41;
    *(arg1 + 0xa) = 0;
    arg1[3] = 0;
    *(arg1 + 0xe) = 1;
    arg1[4] = 0;
    arg1[5] = 0;
    arg1[6] = 0;
    *(arg1 + 0x1a) = 0;  /* "33_250117" */
    *(arg1 + 0x1d) = 1;  /* "250117" */
    arg1[7] = 0xf;
}

void sub_10106(void* arg1, int32_t arg2)
{
    int32_t r1 = *(arg1 + 0x6c);
    uint32_t r1_1;
    
    r1_1 = !arg2 ? r1 >> 1 << 1 : r1 | 1;
    
    *(arg1 + 0x6c) = r1_1;
}

int32_t sub_1011a(int32_t arg1)
{
    int32_t r1 = *(&data_80 + arg1);
    
    if (r1 & 0x180f)
    {
        if (r1 << 0x1c < 0)  /* "_250117" */
            return 3;
        
        if (r1 << 0x1f)  /* "0117" */
            return 6;
        
        if (r1 << 0x13 < 0)  /* "2_3.00.33_250117" */
            return 1;
        
        if (r1 << 0x14 < 0)  /* "_3.00.33_250117" */
            return 2;
        
        if (r1 << 0x1e < 0)  /* "50117" */
            return 5;
        
        if (r1 << 0x1d < 0)  /* "250117" */
            return 4;
    }
    
    return 0;
}

int32_t sub_1015a(void* arg1, char* arg2, int32_t arg3)
{
    uint32_t r5 = 0;
    char* r4 = arg2;
    int32_t result = 0;
    
    while (r5 < arg3)
    {
        uint32_t r0_1 = *r4;
        
        if (r5 >= arg3 - 1)
            r0_1 += 0x200;
        
        *(arg1 + 0x10) = r0_1;  /* "RY02_3.00.33_250117" */
        r4 = &r4[1];
        int32_t r3_1 = *0x208484;
        
        while (true)
        {
            if (*(arg1 + 0x70) << 0x1e < 0 || !r3_1)  /* "50117" */
            {
                result = sub_1011a(arg1);
                break;
            }
            
            result = sub_1011a(arg1);
            
            if (result)
                return result;
            
            int32_t temp0_1 = r3_1;
            r3_1 -= 1;
            
            if (temp0_1 == 1)
                return 7;
            
            continue;
        }
        
        if (result)
            break;
        
        r5 = r5 + 1;
    }
    
    return result;
}

int32_t sub_101b0(void* arg1, char* arg2, int32_t arg3)
{
    uint32_t r5 = 0;
    char* r6 = arg2;
    int32_t result = 0;
    
    while (r5 < arg3)
    {
        int32_t r1_1;
        
        r1_1 = r5 < arg3 - 1 ? 0x100 : 0x300;
        
        *(arg1 + 0x10) = r1_1;  /* "RY02_3.00.33_250117" */
        
        if (r5)
        {
            int32_t r3_1 = *0x208484;
            
            while (true)
            {
                if (*(arg1 + 0x70) << 0x1c < 0 || !r3_1)  /* "_250117" */
                {
                    *r6 = *(arg1 + 0x10);  /* "RY02_3.00.33_250117" */
                    r6 = &r6[1];
                    break;
                }
                
                result = sub_1011a(arg1);
                
                if (result)
                    return result;
                
                int32_t temp1_1 = r3_1;
                r3_1 -= 1;
                
                if (temp1_1 == 1)
                    return 7;
                
                continue;
            }
        }
        
        r5 = r5 + 1;
    }
    
    int32_t r3_2 = *0x208484;
    
    while (true)
    {
        if (*(arg1 + 0x70) << 0x1c < 0 || !r3_2)  /* "_250117" */
        {
            *r6 = *(arg1 + 0x10);  /* "RY02_3.00.33_250117" */
            return result;
        }
        
        result = sub_1011a(arg1);
        
        if (result)
            return result;
        
        int32_t temp0_1 = r3_2;
        r3_2 -= 1;
        
        if (temp0_1 == 1)
            return 7;
        
        continue;
    }
}

int32_t sub_1022e(void* arg1, char* arg2, int32_t arg3, char* arg4, int32_t arg5)
{
    char* var_18 = arg4;
    char* var_20 = arg2;
    void* var_24 = arg1;
    uint32_t i = 0;
    char* r7 = arg2;
    int32_t result = 0;
    
    for (; i < arg3; i = i + 1)
    {
        *(arg1 + 0x10) = *r7;  /* "RY02_3.00.33_250117" */
        r7 = &r7[1];
        int32_t r5_1 = *0x208484;
        
        while (*(arg1 + 0x70) << 0x1e >= 0)  /* "50117" */
        {
            if (!r5_1)
                break;
            
            result = sub_1011a(arg1);
            
            if (result)
                return result;
            
            int32_t temp0_1 = r5_1;
            r5_1 -= 1;
            
            if (temp0_1 == 1)
                return 7;
        }
        
        result = sub_1011a(arg1);
        
        if (result)
            return result;
    }
    
    for (uint32_t i_1 = 0; i_1 < arg5; i_1 = i_1 + 1)
    {
        int32_t r2;
        
        r2 = i_1 < arg5 - 1 ? 0x100 : 0x300;
        
        *(arg1 + 0x10) = r2;  /* "RY02_3.00.33_250117" */
        
        if (i_1)
        {
            int32_t r5_2 = *0x208484;
            
            while (*(arg1 + 0x70) << 0x1c >= 0)  /* "_250117" */
            {
                if (!r5_2)
                    break;
                
                result = sub_1011a(arg1);
                
                if (result)
                    return result;
                
                int32_t temp2_1 = r5_2;
                r5_2 -= 1;
                
                if (temp2_1 == 1)
                    return 7;
            }
            
            *arg4 = *(arg1 + 0x10);  /* "RY02_3.00.33_250117" */
            arg4 = &arg4[1];
        }
    }
    
    int32_t r5_3 = *0x208484;
    
    while (true)
    {
        if (*(arg1 + 0x70) << 0x1c < 0 || !r5_3)  /* "_250117" */
        {
            *arg4 = *(arg1 + 0x10);  /* "RY02_3.00.33_250117" */
            return result;
        }
        
        result = sub_1011a(arg1);
        
        if (result)
            return result;
        
        int32_t temp1_1 = r5_3;
        r5_3 -= 1;
        
        if (temp1_1 == 1)
            return 7;
        
        continue;
    }
}

void sub_102ea(void* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r2 = *(arg1 + 0x30);  /* "RY02_V3.0" */
    int32_t r2_1;
    
    r2_1 = !arg3 ? r2 & ~arg2 : r2 | arg2;
    
    *(arg1 + 0x30) = r2_1;  /* "RY02_V3.0" */
}

void sub_102fe(void* arg1, int32_t arg2)
{
    if (arg2 == 0x80)
    {
        *(arg1 + 0x58);
        return;
    }
    
    if (arg2 > 0x80)
    {
        if (arg2 == 0x100)
        {
            *(arg1 + 0x5c);
            return;
        }
        
        if (arg2 == 0x200)
        {
            *(arg1 + 0x60);
            return;
        }
        
        if (arg2 == 0x400)
        {
            *(arg1 + 0x64);
            return;
        }
        
        if (arg2 == 0x800)
            *(arg1 + 0x68);
    }
    else
    {
        if (arg2 == 8)
        {
            *(arg1 + 0x4c);
            return;
        }
        
        if (arg2 <= 8)
        {
            if (arg2 == 1)
            {
                *(arg1 + 0x44);
                return;
            }
            
            if (arg2 == 2)
                *(arg1 + 0x48);
            
            return;
        }
        
        if (arg2 == 0x20)  /* "117" */
        {
            *(arg1 + 0x50);
            return;
        }
        
        if (arg2 != 0x40)
            return;
        
        *(arg1 + 0x54);
    }
}

void* sub_1039c()
{
    return sub_fc34(0xc000100, 0x21000000, 0);
}

void sub_103ac(int32_t* arg1)
{
    int32_t r2 = *arg1;
    int32_t r3_1 = *0x40001004;
    
    if (arg1[1] == 1)
    {
        *0x40001004 = r3_1 | r2;
        int32_t r2_13 = *0x40001008;
        int32_t r0_4 = *arg1;
        int32_t r2_14;
        
        if (!*(arg1 + 9))
            r2_14 = r2_13 & ~r0_4;
        else
            r2_14 = r2_13 | r0_4;
        
        *0x40001008 = r2_14;
        return;
    }
    
    *0x40001004 = r3_1 & ~r2;
    
    if (*(arg1 + 5) != 1)
        return;
    
    *0x40001034 = 0;
    uint32_t r2_2 = *(arg1 + 6);
    
    if (!r2_2)
    {
        *0x40001038 &= ~*arg1;
        *0x40001060 |= *arg1;
    }
    else if (r2_2 == 1)
    {
        int32_t r2_19 = *arg1;
        *0x40001038 = (*0x40001038 & ~r2_19) | r2_19;
    }
    else
        *0x40001068 |= *arg1;
    
    if (!*(arg1 + 7))
        *0x4000103c &= ~*arg1;
    else
    {
        int32_t r2_6 = *arg1;
        *0x4000103c = (*0x4000103c & ~r2_6) | r2_6;
    }
    
    if (!arg1[2])
    {
        *0x40001048 &= ~*arg1;
        return;
    }
    
    int32_t r1_2 = *arg1;
    *0x40001048 = (*0x40001048 & ~r1_2) | r1_2;
    *0x40000344 = 0x1c00;
    *0x40000344 |= ((0x4e20 * arg1[3]) >> 0xd) - 1;
}

void sub_10464(int32_t* arg1)
{
    *arg1 = 0xffffffff;
    arg1[1] = 0;
    *(arg1 + 5) = 0;
    *(arg1 + 6) = 0;
    *(arg1 + 7) = 0;
    arg1[2] = 0;
    *(arg1 + 9) = 0;
    arg1[3] = 0x14;  /* "_3.00.33_250117" */
}

void sub_1047e(int32_t arg1, int32_t arg2)
{
    int32_t r1 = *0x40001030;
    int32_t r1_1;
    
    r1_1 = !arg2 ? r1 & ~arg1 : r1 | arg1;
    
    *0x40001030 = r1_1;
}

void sub_10490(int32_t arg1)
{
    *0x4000104c = arg1;
}

void sub_10498(int32_t arg1, int32_t arg2)
{
    int32_t r1 = *0x40001034;
    int32_t r1_1;
    
    r1_1 = !arg2 ? r1 & ~arg1 : r1 | arg1;
    
    *0x40001034 = r1_1;
}

int32_t sub_104aa(int32_t arg1) __pure
{
    if (arg1 <= 0x1e)  /* "50117" */
        return 1 << arg1;
    
    if (arg1 == 0x20)  /* "117" */
        return 0x2000;
    
    int32_t r2_2;
    
    if (arg1 - 0x21 > 2)  /* "17" */
    {
        if (arg1 - 0x24 > 2)
            return 0xff;
        
        r2_2 = arg1 - 0x1a;  /* "33_250117" */
    }
    else
        r2_2 = arg1 - 4;
    
    return 1 << r2_2;
}

void sub_104e0(int32_t arg1) __pure
{
    return;
}

int32_t sub_1050a(int32_t arg1)
{
    int32_t r0 = *0x40000344;
    int32_t result;
    
    result = !arg1 ? r0 & 0xffffefff : r0 | 0x1000;
    
    *0x40000344 = result;
    return result;
}

void* sub_10530()
{
    return sub_fc34(0xc000001, 0x61000000, 0);
}

int32_t sub_10540(void* arg1, int32_t* arg2)
{
    0xff80f02a(0x116, 0x400 | 0xff80efe4(0x116));
    0xff80f02a(0x116, 0x30 | 0xff80efe4(0x116));  /* "RY02_V3.0" */
    *(arg1 + 0xc) = *(arg1 + 0xc) >> 5 << 5;
    *(arg1 + 0x50) = arg2[0x16] | arg2[0x15] | arg2[0x17] << 0x1d >> 0x17;
        /* "3.00.33_250117" */  /* ".00.33_250117" */  /* "00.33_250117" */  /* "250117" */
    
    if (!arg2[0x15])  /* "3.00.33_250117" */
        *(arg1 + 0x50) = *(arg1 + 0x50) | arg2[0x18] | arg2[0x19] | arg2[0x1a];
            /* "0.33_250117" */  /* ".33_250117" */  /* "33_250117" */
    
    int32_t r0_12 = arg2[0x14];  /* "_3.00.33_250117" */
    uint32_t r0_20;
    
    if (r0_12 != 0x1000000)
    {
        *(arg1 + 8) = *(arg1 + 8) >> 0x10 << 0x10;  /* "RY02_3.00.33_250117" */
        
        for (uint32_t i = 0; i < 8; i = i + 1)
        {
            void* r1_11 = &arg2[i];
            *((i << 2) + arg1 + 0x10) =
                *(r1_11 + 0x1c) << 0x1b >> 0x1b | *(r1_11 + 0x1e) << 0x1b >> 0xb;
                /* "RY02_3.00.33_250117" */  /* "3_250117" */  /* "_250117" */  /* "50117" */
        }
        
        r0_20 = arg2[0xf];
    }
    else
    {
        *(arg1 + 0x50) |= r0_12 | arg2[0x13];  /* "2_3.00.33_250117" */
        *(arg1 + 8) = *(arg1 + 8) >> 0x10 << 0x10;  /* "RY02_3.00.33_250117" */
        *(arg1 + 0x10) = arg2[7];  /* "RY02_3.00.33_250117" */
        r0_20 = *(arg1 + 8) | 1;
    }
    
    *(arg1 + 8) = r0_20;
    *(arg1 + 4) = arg2[2] | arg2[5] | arg2[3] << 0x1a >> 6 | arg2[4] << 0x1a >> 0xc | arg2[6];
        /* "33_250117" */
    *(arg1 + 0x54) = arg2[0x11] | arg2[0x10] | arg2[0x12] << 0x14 >> 4;  /* "RY02_3.00.33_250117" */
        /* "Y02_3.00.33_250117" */  /* "02_3.00.33_250117" */  /* "_3.00.33_250117" */
    *(arg1 + 0x58) |= 0xc00;
    
    if (*arg2 << 0x12 >> 0x12 < 0x13)  /* "02_3.00.33_250117" */  /* "2_3.00.33_250117" */
        *arg2 = 0x13;  /* "2_3.00.33_250117" */
    
    *(arg1 + 0x5c) = arg2[1] | *arg2 << 0x12 >> 0x12;  /* "02_3.00.33_250117" */
    *(arg1 + 4) |= 0x4000000;
    int32_t result = *(arg1 + 0xc) | 0x1f00;
    *(arg1 + 0xc) = result;
    return result;
}

void sub_10654(int32_t* arg1)
{
    *arg1 = 0xff;
    arg1[1] = 0;
    arg1[3] = 0xa;
    arg1[2] = 0;
    arg1[5] = 0x2000;
    arg1[4] = 1;
    __builtin_memset(&arg1[6], 0, 0x26);
    __builtin_memset(&arg1[0x10], 0, 0x1c);  /* "RY02_3.00.33_250117" */  /* "_250117" */
    arg1[0x18] = 0;  /* "0.33_250117" */
    arg1[0x19] = 0;  /* ".33_250117" */
    arg1[0x17] = 1;  /* "00.33_250117" */
    arg1[0x1a] = 0;  /* "33_250117" */
}

int32_t sub_106a6(void* arg1, int32_t arg2, int32_t arg3)
{
    if (arg3 != 1)
    {
        *(arg1 + 4) = *(arg1 + 4) >> 2 << 2;
        return 0xff80f02a(0x113, 0xff80efe4(0x113) | 4);
    }
    
    0xff80f02a(0x113, 0xff80efe4(0x113) & 0xfb);
    
    if (*(arg1 + 0x50) << 0xc < 0)
    {
        *(arg1 + 0x50) |= 0x3c00;
        (*0x20011c)(0x50);
        *(arg1 + 0x50) |= 0xc000;
        (*0x20011c)(0x140);
        *(arg1 + 0x50) |= 0x30000;
        (*0x20011c)(0xf0);
        *(arg1 + 0x50) |= 0x40000;
    }
    
    *(arg1 + 4) = *(arg1 + 4) >> 2 << 2;
    int32_t result = *(arg1 + 4) | arg2;
    *(arg1 + 4) = result;
    return result;
}

void sub_10736(void* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r2 = *(arg1 + 0xc);
    int32_t r2_1;
    
    r2_1 = !arg3 ? r2 & ~arg2 : r2 | arg2;
    
    *(arg1 + 0xc) = r2_1;
}

uint32_t sub_10746(int32_t arg1, int32_t arg2)
{
    int32_t r0_1 = *((arg2 >> 1 << 2) + arg1 + 0x30);  /* "RY02_V3.0" */
    
    if (!(arg2 << 0x1f))  /* "0117" */
        return r0_1;
    
    return r0_1 >> 0x10;  /* "RY02_3.00.33_250117" */
}

uint32_t sub_1075c(void* arg1)
{
    return *(arg1 + 0x30);  /* "RY02_V3.0" */
}

uint32_t sub_10762(int32_t* arg1)
{
    return *arg1 << 0x14 >> 0x14;  /* "_3.00.33_250117" */
}

void sub_1076a(int32_t* arg1, int16_t* arg2, uint32_t arg3)
{
    while (true)
    {
        uint32_t r3_2 = arg3;
        arg3 = arg3 - 1;
        
        if (!r3_2)
            break;
        
        *arg2 = *arg1;
        arg2 = &arg2[1];
    }
}

uint32_t sub_1077e(void* arg1)
{
    return *(arg1 + 8) << 0xa >> 0x1a;  /* "33_250117" */
}

int32_t sub_10786(int32_t arg1, int32_t arg2, int32_t arg3)
{
    void* r2_2 = (arg3 >> 1 << 2) + arg1;
    
    if (arg3 << 0x1f)  /* "0117" */
        arg2 <<= 0x10;  /* "RY02_3.00.33_250117" */
    
    int32_t result = *(r2_2 + 0x10) | arg2;  /* "RY02_3.00.33_250117" */
    *(r2_2 + 0x10) = result;  /* "RY02_3.00.33_250117" */
    return result;
}

int32_t sub_1079c(int32_t arg1, int32_t arg2, int32_t arg3)
{
    void* r1_2 = (arg2 >> 1 << 2) + arg1;
    
    if (arg2 << 0x1f)  /* "0117" */
        arg3 <<= 0x10;  /* "RY02_3.00.33_250117" */
    
    int32_t result = *(r1_2 + 0x10) | arg3;  /* "RY02_3.00.33_250117" */
    *(r1_2 + 0x10) = result;  /* "RY02_3.00.33_250117" */
    return result;
}

void sub_107b2(void* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r2 = *(arg1 + 8);
    int32_t r2_1;
    
    r2_1 = arg3 == 1 ? r2 | arg2 : r2 & ~arg2;
    
    *(arg1 + 8) = r2_1;
}

void sub_107c2(void* arg1, int32_t arg2)
{
    int32_t r1 = *(arg1 + 0x50);
    int32_t r1_1;
    
    r1_1 = !arg2 ? r1 & 0xfff7ffff : r1 | 0x80000;
    
    *(arg1 + 0x50) = r1_1;
}

void sub_107d6(void* arg1, int32_t arg2)
{
    int32_t r1 = *(arg1 + 0x50);
    int32_t r1_1;
    
    r1_1 = !arg2 ? r1 | 0x200000 : r1 & 0xffdfffff;
    
    *(arg1 + 0x50) = r1_1;
}

void sub_107ea(int32_t arg1, int32_t arg2)
{
    if (arg1 > 3)
        return;
    
    int32_t r4_1 = 1 << arg1;
    uint32_t r1;
    
    if (!arg2)
        r1 = 0xff80efe4(0x118) & ~r4_1;
    else
        r1 = r4_1 | 0xff80efe4(0x118);
    
    0xff80f02a(0x118, r1);
}

int32_t sub_10818(void* arg1, int32_t arg2)
{
    if (!(*(arg1 + 0xc) & arg2 << 0x10))  /* "RY02_3.00.33_250117" */
        return 0;
    
    return 1;
}

void sub_10828(void* arg1, int32_t arg2)
{
    *(arg1 + 0xc) |= arg2 << 8;
}

void* sub_1083c()
{
    return sub_fc34(0x10000, 0x20004000, 0);
}

int32_t sub_1084c(int32_t* arg1, void* arg2)
{
    int32_t r0_1 = sub_12b2a(&arg1[-0x10000800], 0x14);  /* "_3.00.33_250117" */
    *0x40000360 |= 0x200;
    
    if (*0x40000360 << 0x15 < 0)  /* "3.00.33_250117" */
        *0x40000360 &= 0xfffffbff;
    
    int32_t r2_7;
    
    if (r0_1 < 2)
    {
        r2_7 = r0_1 * 3;
        *0x40000360 &= ~(7 << r2_7);
        *0x40000360 |= *(arg2 + 4) << r2_7;
    }
    else if (r0_1 - 2 < 4)
    {
        r2_7 = r0_1 * 3 + 7;
        *0x40000360 &= ~(7 << r2_7);
        *0x40000360 |= *(arg2 + 4) << r2_7;
    }
    
    if (r0_1 == 3 || r0_1 == 5)
    {
        int32_t r3_6 = *0x4000035c;
        int32_t r3_7;
        
        if (*(&data_24 + arg2) == 1)
            r3_7 = r3_6 | 1 << (((r0_1 - 1) >> 1) - 1);
        else
            r3_7 = r3_6 & ~(1 << (((r0_1 - 1) >> 1) - 1));
        
        *0x4000035c = r3_7;
    }
    
    uint32_t r2_14 = *(arg2 + 8);
    int32_t r2_18;
    
    if (!*(arg2 + 0xa))
    {
        arg1[2] = r2_14 << 1 | 4;
        r2_18 = *(arg2 + 0xc);
    }
    else
    {
        arg1[2] = r2_14 << 1 | 0xc;
        *((r0_1 << 2) + 0x400020b0) = *(arg2 + 0x10);  /* "RY02_3.00.33_250117" */
        r2_18 = *(arg2 + 0x14);  /* "_3.00.33_250117" */
    }
    
    *arg1 = r2_18;
    
    if (*(arg2 + 0x2c) == 1)
    {
        if (r0_1 == 2)
            *0x40000364 = *(arg2 + 0x28) | *(arg2 + 0x30) << 9 | *(arg2 + 0x2e) << 0xa | 0x61000;
                /* "RY02_V3.0" */
    }
    else if (r0_1 == 2)
        *0x40000364 &= 0xfff9efff;
    
    return arg1[3];
}

void sub_10926(void* arg1)
{
    *(arg1 + 8) = 1;
    *(arg1 + 0xc) = 0xfff;
    *(arg1 + 4) = 0;
    *(&data_24 + arg1) = 0;
    *(arg1 + 0xa) = 0;
    *(arg1 + 0x2e) = 0;
    *(arg1 + 0x30) = 1;  /* "RY02_V3.0" */
    *(arg1 + 0x2c) = 0;
}

void sub_10940(void* arg1, int32_t arg2)
{
    int32_t r1 = *(arg1 + 8);
    uint32_t r1_1;
    
    r1_1 = !arg2 ? r1 >> 1 << 1 : r1 | 1;
    
    *(arg1 + 8) = r1_1;
}

void sub_10954(int32_t* arg1, int32_t arg2)
{
    *arg1 = arg2;
}

void sub_10958(void* arg1, int32_t arg2)
{
    int32_t r1 = *(arg1 + 8);
    int32_t r1_1;
    
    r1_1 = !arg2 ? r1 | 4 : r1 & 0xfffffffb;
    
    *(arg1 + 8) = r1_1;
}

int32_t* sub_1096a(int32_t* arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0_1 = sub_12b2a(&arg1[-0x10000800], 0x14);  /* "_3.00.33_250117" */
    *arg1 = arg3;
    *((r0_1 << 2) + 0x400020b0) = arg2;
    return (r0_1 << 2) + 0x400020b0;
}

void sub_10988(int32_t* arg1, int32_t arg2)
{
    int32_t r1 = *arg1;
    int32_t r1_1;
    
    r1_1 = !arg2 ? r1 & 0xfffffeff : r1 | 0x100;
    
    *arg1 = r1_1;
}

void sub_1099c(int32_t* arg1, int32_t arg2)
{
    int32_t r1 = *arg1;
    int32_t r1_1;
    
    r1_1 = !arg2 ? r1 & 0xffffdfff : r1 | 0x2000;
    
    *arg1 = r1_1;
}

void sub_109b0(int32_t* arg1, int32_t arg2)
{
    int32_t r1 = *arg1;
    int32_t r1_1;
    
    r1_1 = !arg2 ? r1 & 0xfffeffff : r1 | 0x10000;
    
    *arg1 = r1_1;
}

int32_t sub_109d8(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t result = 1;
    
    if (arg1 == 1 && arg2 <= 0x12c)
    {
        0xff81b898(0x20d810, arg3, arg2);
        *0x208488 = arg2;
    }
    else
    {
        result = 0;
        0xff7e1af8(0x23103000, 0x8801690, 0, arg3);
    }
    
    return result;
}

int32_t sub_10a0c(char arg1, int32_t arg2, int32_t arg3, int16_t* arg4, int32_t* arg5)
{
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    
    if (arg3 != 2)
    {
        0xff7e1af8(0x23103000, 0x88016bc, 1, arg3);
        return 0x40a;
    }
    
    *var_20[1] = 2;
    var_1c = 1;
    var_20 = arg1;
    int32_t r2 = *0x20d80c;
    
    if (r2)
        r2(arg2, &var_20);
    
    *arg5 = 0x20d810;
    *arg4 = *0x208488;
    return 0;
}

uint32_t sub_10b9a(int32_t arg1)
{
    int32_t r3;
    int32_t var_14_1 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    
    if (sub_1166c(0x20d808, 0x83e480, 0x150, *0x83e5d0, *0x83e5d4, *0x83e5d8))
    {
        *0x20d80c = arg1;
        return *0x20d808;
    }
    
    0xff7e1af8(0x23103000, 0x8801858, 0);
    *0x20d808 = 0xff;
    return 0xff;
}

int32_t sub_10bfc(int32_t arg1, int32_t arg2, char* arg3)
{
    int32_t result = 1;
    
    if (arg1 == 1)
    {
        if (arg2 != 1)
            return 0;
        
        *0x20d93c = *arg3;
    }
    else
    {
        result = 0;
        0xff7e1af8(0x23103300, 0x8801880, 1, arg1);
    }
    
    return result;
}

uint32_t sub_10c26(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_8 = arg3;
    int32_t var_c = arg2;
    int32_t var_10 = arg1;
    return sub_11736(arg1, arg2, 2, &var_8, 1, 0);
}

uint32_t sub_10c3e(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t var_8 = arg3;
    int32_t var_c = arg2;
    int32_t var_10 = arg1;
    
    if (!*0x20d93d)
        return 0;
    
    *0x20d93d = 0;
    return sub_116d2(arg1, arg2, 2, &var_8, 1, 0);
}

int32_t sub_10c62(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int16_t* arg5, int32_t* arg6)
{
    *arg5 = 0;
    int32_t var_28 = arg4;
    0xff7e1af8(0x23103302, 0x88018b0, 2, arg3, var_28, arg1, arg2, arg3, arg4);
    
    if (arg3 != 2)
    {
        0xff7e1af8(0x23103300, 0x88018e0, 0);
        return 0x40a;
    }
    
    *var_28[1] = 2;
    var_28 = arg1;
    *var_28[2] = 1;
    int32_t result = (*0x20d940)(arg2, &var_28);
    
    if (result == 0xd01)
        *0x20d93d = 1;
    
    *arg6 = 0x20d93c;
    *arg5 = 1;
    return result;
}

uint32_t sub_10d0e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_10 = arg4;
    int32_t var_14_1 = arg3;
    int32_t var_18_1 = arg2;
    
    if (!sub_1166c(&var_10, 0x83e5dc, 0x70, *0x83e64c, *0x83e650, *0x83e654))
    {
        0xff7e1af8(0x23103300, 0x880193c, 1, var_10);
        var_10 = 0xff;
    }
    
    *0x20d940 = arg1;
    return var_10;
}

void sub_10d66(int32_t arg1)
{
    *0x20dad8 = arg1;
}

uint32_t sub_10d6e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    
    if (arg1 - 3 >= 0x7fe)
        return 0;
    
    var_8 = 5;
    *var_8[1] = arg1;
    *var_8[2] = arg1 >> 8;
    uint32_t result = sub_113d0(0xfc6e, 3, &var_8, arg4);
    
    if (!result)
        return result;
    
    return 1;
}

void sub_10d98(int32_t* arg1, int32_t* arg2, int32_t* arg3)
{
    int32_t r4 = *0x201b20;
    int32_t r5 = *0x201b24;
    *arg1 = *0x201b1c;
    *arg2 = r4;
    *arg3 = r5;
}

int32_t sub_10da6(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 4;
    
    if (arg1)
        arg1 = 1;
    
    *var_8[1] = arg1;
    
    if (!sub_113d0(0xfd80, 2, &var_8, arg4))
        return 7;
    
    return 0;
}

int32_t sub_10dca(int32_t arg1, int32_t arg2, int32_t arg3)
{
    if (arg2 <= 0x1f && (arg3 || !arg2))  /* "0117" */
    {
        char var_2f_1 = arg2;
        char r0_1;
        
        if (!arg1)
        {
            r0_1 = 5;
        label_10e00:
            char var_30 = r0_1;
            void var_2e;
            
            if (!sub_113d0(0xfd80, arg2 + 2, &var_30, 0xff81b898(&var_2e, arg3, arg2)))
                return 7;
            
            return 0;
        }
        
        if (arg1 == 1)
        {
            r0_1 = 6;
            goto label_10e00;
        }
        
        if (arg1 == 2)
        {
            r0_1 = 7;
            goto label_10e00;
        }
        
        if (arg1 == 3)
        {
            r0_1 = 8;
            goto label_10e00;
        }
    }
    
    return 3;
}

int32_t sub_10e2c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    uint32_t r0;
    int32_t r3;
    r0 = sub_11dc6(0x83e8ef, arg1, arg3, arg4);
    
    if (!r0)
        return 4;
    
    var_18 = 0;
    int32_t r3_1 = sub_11a78(0x27b, &var_18, arg1, r3);
    var_20 = 0xd;
    uint32_t r0_1 = var_18;
    *var_20[1] = r0_1;
    *var_20[2] = r0_1 >> 8;
    *var_20[3] = arg2;
    var_1c = arg2 >> 8;
    *var_1c[1] = arg3;
    *var_1c[2] = arg3 >> 8;
    *var_1c[3] = arg4;
    
    if (!sub_113d0(0xfd80, 8, &var_20, r3_1))
        return 7;
    
    return 0;
}

int32_t sub_10e88(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    uint32_t r0;
    int32_t r3;
    r0 = sub_11dc6(0x83e907, arg1, arg3, arg4);
    
    if (!r0)
        return 4;
    
    int16_t var_1c = 0;
    int32_t r3_1 = sub_11a78(0x27b, &var_1c, arg1, r3);
    char var_28 = 0x19;  /* ".33_250117" */
    uint32_t r0_1 = var_1c;
    uint8_t var_27_1 = r0_1;
    uint8_t var_26_1 = r0_1 >> 8;
    char var_25_1 = arg2;
    uint8_t var_24_1 = arg2 >> 8;
    char var_23_1 = arg3;
    uint8_t var_22_1 = arg3 >> 8;
    char var_21_1 = arg4;
    uint8_t var_20_1 = arg4 >> 8;
    
    if (!sub_113d0(0xfd80, 9, &var_28, r3_1))
        return 7;
    
    return 0;
}

int32_t sub_10eee(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 0xf;
    
    if (!sub_113d0(0xfd80, 1, &var_8, arg4))
        return 7;
    
    return 0;
}

uint32_t sub_10f0c(int16_t* arg1)
{
    int16_t* r4 = arg1;
    uint32_t r6 = 0x20dadc;
    int16_t var_28;
    
    if (*arg1 == 0xfd80)
    {
        uint32_t r1_2 = r4[3] - 4;
        int32_t entry_r2;
        int32_t r2;
        int16_t* r3_2;
        r2 = sub_13f18(0, r1_2, entry_r2, r1_2);
        r6 = r2 >> 0x10;  /* "RY02_3.00.33_250117" */
        r4 = r3_2;
        var_28 = r4[1];
        int32_t r2_2 = *r6;
        
        if (r2_2)
            r2_2(0xa0, &var_28);
    }
    
    if (*r4 == 0xfc6e && r4[3] == 5)
    {
        var_28 = r4[1];
        int32_t r2_4 = *r6;
        
        if (r2_4)
            r2_4(0xa6, &var_28);
    }
    
    if (*r4 == 0xfc40)
    {
        uint16_t r0_6 = r4[3] + (*(r4 + 7) << 8);
        var_28 = r4[1];
        uint16_t var_26_1 = r0_6;
        int16_t* var_24 = &var_28;
        int32_t r2_5 = *0x20dad8;
        
        if (r2_5)
            r2_5(0xaf, &var_24);
    }
    
    if (*r4 == 0xfd82 && r4[3] == 5)
    {
        uint32_t r0_8 = *(r4 + 7);
        int32_t r0_10;
        int16_t* r1_11;
        
        if (r0_8 == 9)
        {
            r1_11 = &var_28;
            var_28 = r4[1];
            r0_10 = 0xab;
        label_11064:
            int32_t r2_6 = *r6;
            
            if (r2_6)
                r2_6(r0_10, r1_11);
        }
        else
        {
            if (r0_8 == 0x10)  /* "RY02_3.00.33_250117" */
            {
                r1_11 = &var_28;
                var_28 = r4[1];
                r0_10 = 0xa9;
                goto label_11064;
            }
            
            if (r0_8 == 0x1e)  /* "50117" */
            {
                r1_11 = &var_28;
                var_28 = r4[1];
                r0_10 = 0xaa;
                goto label_11064;
            }
        }
    }
    
    uint32_t result = *r4;
    
    if (result != 0xfd80 && result != 0xfd81 && result != 0xfd82 && result != 0xfc40
        && result != 0xfc6e)
    {
        result = *0x20dae0;
        
        if (result)
        {
            var_28 = r4;
            return (*0x20dae0)(3, &var_28);
        }
    }
    
    return result;
}

uint32_t sub_10f4c(int16_t* arg1 @ r4, int32_t* arg2 @ r6, int32_t arg3 @ r7, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    char arg_8 = 0;
    int16_t arg_a = arg1[1];
    char* arg_0 = &arg_8;
    int32_t r2 = *arg2;
    
    if (r2)
        r2(0xa1, &arg_0);
    
    char** arg_4;
    
    if (arg3)
    {
        int32_t r2_1 = *0x20dad8;
        
        if (r2_1)
            r2_1(0xa1, &arg_4);
    }
    
    if (*arg1 == 0xfc6e && arg1[3] == 5)
    {
        arg_0 = arg1[1];
        int32_t r2_2 = *arg2;
        
        if (r2_2)
            r2_2(0xa6, &arg_0);
    }
    
    if (*arg1 == 0xfc40)
    {
        arg_0 = arg1[1];
        *arg_0[2] = arg1[3] + (*(arg1 + 7) << 8);
        arg_4 = &arg_0;
        int32_t r2_3 = *0x20dad8;
        
        if (r2_3)
            r2_3(0xaf, &arg_4);
    }
    
    if (*arg1 == 0xfd82 && arg1[3] == 5)
    {
        uint32_t r0_8 = *(arg1 + 7);
        int32_t r0_10;
        char** r1_9;
        
        if (r0_8 == 9)
        {
            r1_9 = &arg_0;
            arg_0 = arg1[1];
            r0_10 = 0xab;
        label_11064:
            int32_t r2_4 = *arg2;
            
            if (r2_4)
                r2_4(r0_10, r1_9);
        }
        else
        {
            if (r0_8 == 0x10)  /* "RY02_3.00.33_250117" */
            {
                r1_9 = &arg_0;
                arg_0 = arg1[1];
                r0_10 = 0xa9;
                goto label_11064;
            }
            
            if (r0_8 == 0x1e)  /* "50117" */
            {
                r1_9 = &arg_0;
                arg_0 = arg1[1];
                r0_10 = 0xaa;
                goto label_11064;
            }
        }
    }
    
    uint32_t result = *arg1;
    
    if (result != 0xfd80 && result != 0xfd81 && result != 0xfd82 && result != 0xfc40
        && result != 0xfc6e)
    {
        result = *0x20dae0;
        
        if (result)
        {
            arg_0 = arg1;
            return (*0x20dae0)(3, &arg_0);
        }
    }
    
    return result;
}

int32_t sub_10f50(void* arg1 @ r4)
{
    char arg_8 = 1;
    int16_t arg_a = *(arg1 + 2);
    char* arg_0 = &arg_8;
    /* tailcall */
    return sub_10fc2(&arg_8, &arg_0);
}

int32_t sub_1109c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    if (!sub_113d0(arg1, arg2, arg3, arg4))
        return 7;
    
    return 0;
}

int32_t sub_110ae(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    int32_t r2 = *0x20dae0;
    
    if (!r2)
        return 0x20dae0;
    
    var_8 = arg1;
    return r2(4, &var_8);
}

int32_t sub_110c4(int32_t arg1, int32_t arg2)
{
    int32_t r3;
    int32_t var_8 = r3;
    int32_t r2;
    int32_t var_c = r2;
    int32_t var_10 = arg2;
    var_10 = 0x10;  /* "RY02_3.00.33_250117" */
    *var_10[1] = arg1;
    *var_10[2] = arg1 >> 8;
    *var_10[3] = arg1 >> 0x10;  /* "RY02_3.00.33_250117" */
    var_c = arg1 >> 0x18;  /* "0.33_250117" */
    *var_c[1] = arg2;
    *var_c[2] = arg2 >> 8;
    *var_c[3] = arg2 >> 0x10;  /* "RY02_3.00.33_250117" */
    var_8 = arg2 >> 0x18;  /* "0.33_250117" */
    
    if (!sub_113d0(0xfd80, 9, &var_10, &var_10))
        return 7;
    
    return 0;
}

int32_t sub_110fe(char arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 0x12;  /* "02_3.00.33_250117" */
    *var_8[1] = arg1;
    
    if (!sub_113d0(0xfd80, 2, &var_8, arg4))
        return 7;
    
    return 0;
}

int32_t sub_1111c(int32_t arg1) __pure
{
    if (arg1 <= 0xa)
        return 1;
    
    return 0;
}

int32_t sub_1128c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    return;
}

int32_t sub_11290()
{
    /* tailcall */
    return sub_1128c();
}

int32_t sub_1129e(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 5;
    *var_8[1] = 9;
    
    if (arg1)
        arg1 = 1;
    
    *var_8[2] = arg1;
    
    if (!sub_113d0(0xfd82, 3, &var_8, arg4))
        return 7;
    
    return 0;
}

int32_t sub_112c8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 5;
    *var_8[1] = 0x10;  /* "RY02_3.00.33_250117" */
    *var_8[2] = 1;
    
    if (!sub_113d0(0xfd82, 3, &var_8, arg4))
        return 7;
    
    return 0;
}

int32_t sub_112f0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    var_8 = 5;
    *var_8[1] = 0x1e;  /* "50117" */
    
    if (arg1)
        arg1 = 1;
    
    *var_8[2] = arg1;
    
    if (!sub_113d0(0xfd82, 3, &var_8, arg4))
        return 7;
    
    return 0;
}

int32_t sub_1131a(char arg1, int32_t arg2, int32_t arg3)
{
    if (!arg2 || arg2 > 0x10 || !arg3)  /* "RY02_3.00.33_250117" */
        return 3;
    
    char var_20 = 0x15;  /* "3.00.33_250117" */
    char var_1f_1 = arg1;
    void var_1e;
    
    if (!sub_113d0(0xfd80, arg2 + 2, &var_20, 0xff81b898(&var_1e, arg3, arg2)))
        return 7;
    
    return 0;
}

int32_t sub_1135e()
{
    int32_t entry_r3;
    
    if (!sub_113d0(0xfc40, 0, 0, entry_r3))
        return 7;
    
    return 0;
}

int32_t sub_11378(uint32_t arg1, char* arg2, int32_t arg3 @ r7)
{
    *((arg3 << 9) - 0xc) = arg1;
    *((arg3 << 9) - 8) = arg2;
    *((arg3 << 9) - 4) = arg3;
    /* unimplemented  {stc2 p0, c0, [r0]} */
    Coproc_SendTwoWords(arg1, arg1, 0, 0, 0);
    *arg2 = 1;
    uint32_t r1 = *(arg1 + 2);
    
    if (r1 == 0xe)
        sub_10f0c(arg1 + 4);
    else if (r1 == 0xf)
        sub_110ae(arg1 + 4, r1, 1, (arg3 << 9) - 0xc);
    
    return 0;
}

int32_t sub_113c4(int32_t arg1, int32_t arg2, void* arg3, int16_t* arg4 @ r7)
{
    uint32_t r0 = arg1 >> 2;
    *(arg4 * 2 + arg3) = arg2;
    /* tailcall */
    return sub_113d0(r0, arg2, arg3, r0 << 2);
}

uint32_t sub_113d0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10_1 = arg3;
    0xff7e0976(1, arg1, arg2, arg3, &var_c, var_c);
    return var_c;
}

uint32_t sub_1146c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10_1 = arg3;
    0xff7e0976(0x100, arg1, arg2, arg3, &var_c, var_c);
    return var_c;
}

uint32_t sub_1149a(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10_1 = arg3;
    0xff7e0976(0x102, arg1, arg2, arg3, &var_c, var_c);
    return var_c;
}

uint32_t sub_114b6(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    int32_t lr;
    0xff7e0976(0x103, arg1, arg2, &var_8, var_8, lr);
    return var_8;
}

int32_t sub_11504(int32_t arg1)
{
    return 0xff7e0976(0x107, arg1);
}

int32_t sub_11574(int32_t arg1)
{
    *0x20dadc = arg1;
    return 0xff7e0976(0x3004, arg1);
}

uint32_t sub_11586(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10_1 = arg3;
    0xff7e0976(sub_3002+3, arg1, arg2, arg3, &var_c, var_c);
    return var_c;
}

int32_t sub_11652(int32_t arg1)
{
    return 0xff7e0976(0x3100, arg1);
}

uint32_t sub_1166c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    char var_18;
    0xff7e0976(0x3102, arg1, arg2, arg3, arg4, arg5, arg6, &var_18);
    return var_18;
}

int32_t sub_116c4(int32_t arg1)
{
    return 0xff7e0976(0x3104, arg1);
}

uint32_t sub_116d2(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    char var_18;
    0xff7e0976(0x3105, arg1, arg2, arg3, arg4, arg5, arg6, &var_18);
    return var_18;
}

uint32_t sub_11736(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6)
{
    char var_18;
    0xff7e0976(0x3108, arg1, arg2, arg3, arg4, arg5, arg6, &var_18);
    return var_18;
}

uint32_t sub_11964(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    0xff7e0976(0x3210, arg1, &var_8);
    return var_8;
}

uint32_t sub_11978(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10_1 = arg3;
    0xff7e0976(0x3300, arg1, arg2, arg3, &var_c, var_c);
    return var_c;
}

uint32_t sub_119aa(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    0xff7e0976(0x3302, &var_8);
    return var_8;
}

uint32_t sub_119bc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    0xff7e0976(0x3303, &var_8);
    return var_8;
}

uint32_t sub_119f2(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    int32_t lr;
    0xff7e0976(0x3306, arg1, arg2, &var_8, var_8, lr);
    return var_8;
}

uint32_t sub_11a78(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10_1 = arg3;
    0xff7e0976(0x3500, arg1, arg2, arg3, &var_c, var_c);
    return var_c;
}

uint32_t sub_11aae(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10_1 = arg3;
    0xff7e0976(0x3502, arg1, arg2, arg3, &var_c, var_c);
    return var_c;
}

uint32_t sub_11b0a(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    0xff7e0976(sub_34e6+0x20, arg1, &var_8);  /* "117" */
    return var_8;
}

uint32_t sub_11c10(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    char var_1c;
    0xff7e0976(sub_34e6+0x29, arg1, arg2, arg3, arg4, arg5, arg6, arg7, &var_1c);
    return var_1c;
}

uint32_t sub_11c80(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_c = arg4;
    int32_t var_10_1 = arg3;
    0xff7e0976(0x3600, arg1, arg2, arg3, &var_c, var_c);
    return var_c;
}

uint32_t sub_11dc6(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_8 = arg4;
    int32_t lr;
    0xff7e0976(sub_34e6+0x2b, arg1, arg2, &var_8, var_8, lr);
    return var_8;
}

int32_t sub_11e70(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t result = arg4;
    0xff7e0976(sub_3704+3, arg1, &result);
    return result;
}

void sub_1249c(uint16_t* arg1, char* arg2)
{
    uint32_t r2 = arg2[1];
    *arg1 = r2;
    *arg1 = (r2 << 8) + *arg2;
    uint32_t r3_1 = arg2[4] >> 7;
    arg1[5] = r3_1;
    uint32_t r2_4 = arg2[4];
    *(arg1 + 4) = r2_4;
    uint32_t r2_6 = (r2_4 << 8) + arg2[3];
    *(arg1 + 4) = r2_6;
    uint32_t r4_2 = (r2_6 << 8) + arg2[2];
    *(arg1 + 4) = r4_2;
    uint32_t r2_8 = arg2[6];
    arg1[4] = r2_8;
    arg1[4] = (r2_8 << 8) + arg2[5];
    
    if (r3_1)
        *(arg1 + 4) = r4_2 | 0xff000000;
}

uint32_t sub_124de(void* arg1, int32_t arg2, int32_t arg3 @ r4, int32_t arg4 @ r5, int32_t arg5 @ r6, int32_t arg6, int32_t arg7, int32_t arg8)
{
    uint32_t r0_3 = sub_137d8(sub_139fc(arg2 * arg2), 0x4cbebc20);
    int32_t r0_6 = sub_19964(sub_139fc(*arg1), r0_3, arg1);
    uint32_t r0_10;
    int32_t r2;
    int32_t r3;
    r0_10 = sub_137d8(sub_139fc(arg2 * *(arg1 + 4)), 0x47c35000);
    uint32_t r0_11 = sub_198d8(r0_10, r0_6, r2, r3, arg1, r0_6, arg3, arg4);
    uint32_t r0_14;
    int32_t r2_1;
    int32_t r3_1;
    r0_14 = sub_137d8(sub_139fc(*(arg1 + 8)), 0x41200000);
    int32_t lr;
    return sub_198d8(r0_14, r0_11, r2_1, r3_1, arg1, r0_6, arg5, lr);
}

int32_t sub_12530()
{
    int32_t result = 0;
    int32_t var_28 = 0;
    int32_t var_24 = 0;
    int32_t var_20 = 0;
    uint32_t i = 0;
    int32_t var_1c = 0;
    
    do
    {
        *(&var_28 + i) = *(i + 0x4000);
        i = i + 1;
    } while (i < 0x10);  /* "RY02_3.00.33_250117" */
    
    for (uint32_t i_1 = 0; i_1 < 3; i_1 = i_1 + 1)
    {
        uint32_t r1_1 = 0;
        
        while (*(&var_28 + r1_1) == *((i_1 << 4) + 0x208526 + r1_1))
        {
            r1_1 = r1_1 + 1;
            
            if (r1_1 >= 0x10)  /* "RY02_3.00.33_250117" */
                break;
        }
        
        if (r1_1 == 0x10)  /* "RY02_3.00.33_250117" */
        {
            *0x208524 = i_1;
            break;
        }
    }
    
    for (uint32_t i_2 = 0; i_2 < 0x1f; i_2 = i_2 + 1)  /* "0117" */
        0xff7e46c0(i_2 + 0x8002f2, 1, i_2 + 0x20daf7);
    
    *0x20daf6 = 0x55;
    *0x20db16 = 0xaa;
    int32_t r0_10;
    
    if (*0x20db13 == 0xff)
    {
        uint32_t r0_5 = *0x20db14;
        
        if (r0_5 != 0xff)
        {
            if (!r0_5)
            {
                if (*0x20db15 != 0xff)
                    goto label_125d6;
                
                r0_10 = 0xfffffffe;
                goto label_1263e;
            }
            
            if (r0_5 != 0xff || *0x20db15)
                goto label_125d0;
            
        label_125f0:
            
            if (*0x20db0d != 0xff || *0x20db0e != 0xff || *0x20db0f != 0xff || *0x20db10 != 0xff)
                goto label_125d6;
            
            r0_10 = 0xffffffff;
            goto label_1263e;
        }
        
        if (*0x20db15 != 0xff)
        {
            if (!*0x20db15)
                goto label_125f0;
            
            goto label_125d0;
        }
        
        r0_10 = 0xfffffffd;
    label_1263e:
        *0x208525 = r0_10;
        result = 1;
        
        if (r0_10 == 0xfffffffe)
        {
            uint32_t r2_6 = *0x20daff;
            *0x20db24 = r2_6;
            *0x20db24 = (r2_6 << 8) + *0x20db00;
            *0x20db2e = *0x20db01 >> 7;
            uint32_t r2_11 = *0x20db01;
            *0x20db28 = r2_11;
            uint32_t r2_13 = (r2_11 << 8) + *0x20db02;
            *0x20db28 = r2_13;
            *0x20db28 = (r2_13 << 8) + *0x20db03;
            uint32_t r2_16 = *0x20db04;
            *0x20db2c = r2_16;
            *0x20db2c = (r2_16 << 8) + *0x20db05;
            
            if (*0x20db2e == 1)
                *0x20db28 |= 0xff000000;
        }
        else if (r0_10 == 0xffffffff)
            sub_1249c(0x20db24, 0x20dafe);
        else
        {
            if (r0_10 && r0_10 != 1)
            {
                *0x208525 = 0x5a;
                return 0;
            }
            
            sub_1249c(0x20db18, 0x20daf7);
            sub_1249c(0x20db24, 0x20dafe);
            sub_1249c(0x20db30, 0x20db05);
            sub_1249c(0x20db3c, 0x20db0c);
            *0x20daf4 = (*0x20db14 << 8) + *0x20db13;
        }
    }
    else
    {
    label_125d0:
        
        if (*0x20db15 != 0xff)
        {
        label_125d6:
            
            if (*0x20daf7 != 0xff || *0x20dafe != 0xff || *0x20db05 != 0xff || *0x20db0c != 0xff)
            {
                uint32_t r0_19 = *0x208524;
                uint32_t r0_20;
                
                if (r0_19 && (r0_19 == 1 || r0_19 == 2))
                    r0_20 = *0x20db15;
                
                if (r0_19 && ((r0_19 != 1 && r0_19 != 2) || !r0_20 || r0_20 == 1))
                {
                    r0_10 = 1;
                    goto label_1263e;
                }
                
                r0_10 = *0x20db15;
                
                if (r0_10 != 0x5a)
                    goto label_1263e;
            }
        }
    }
    return result;
}

uint32_t sub_126f8(int32_t arg1, int32_t arg2, char* arg3, int32_t arg4 @ r4, int32_t arg5, int32_t arg6)
{
    int32_t lr;
    int32_t var_4 = lr;
    int32_t __saved_r4;
    int32_t* sp_1 = &__saved_r4;
    uint32_t result = 0;
    *arg3 = 0;
    
    if (arg1 - 1 >= 4 || arg2 < 0 || arg2 > 0xfff)
        *arg3 = 0xff;
    else
    {
        if (*0x20daf6 != 0x55 && *0x20db16 != 0xaa)
        {
            *arg3 = -2;
            return 0;
        }
        
        uint32_t r4_3 = *0x208525;
        
        if (r4_3 != 1)
        {
            *arg3 = -4;
            return 0;
        }
        
        void* const r0;
        
        if (arg1 == 1)
        {
            r0 = 0x20db18;
        label_1275c:
            result = sub_124de(r0, arg2, r4_3, 0xffffffff, 0x208524, arg3, arg1, arg4);
            sp_1 = &var_4;
            
            if (result + 0x7f800000 < result)
                return 0;
        }
        else
        {
            if (arg1 == 2)
            {
                r0 = 0x20db24;
                goto label_1275c;
            }
            
            if (arg1 == 3)
                return sub_124de(0x20db30, arg2 - 0x200, r4_3, 0xffffffff, 0x208524, arg3, arg1, 
                    arg4);
            
            if (arg1 == 4)
                return sub_124de(0x20db3c, arg2 - 0x200, r4_3, 0xffffffff, 0x208524, arg3, arg1, 
                    arg4);
            
            *arg3 = 0xff;
        }
    }
    
    *sp_1;
    sp_1[1];
    sp_1[2];
    return result;
}

uint32_t sub_1277c()
{
    if (*0x208525 == 1)
        return *0x20daf4;
    
    return 0;
}

int32_t sub_127a8(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r3;
    int32_t var_4 = r3;
    int32_t var_8 = arg3;
    int32_t var_10 = arg1;
    int32_t var_1c = r3;
    int32_t var_20 = arg3;
    var_20 = arg1;
    sub_13ae2(arg2, &var_20, &var_8);
    sub_13b08(0, &var_20);
    return 0;
}

int32_t sub_127d0(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_4 = arg4;
    int32_t var_c = arg2;
    int32_t var_10 = arg1;
    int32_t var_1c = arg4;
    int32_t var_20 = arg3;
    var_20 = arg1;
    
    if (arg2)
        arg1 = arg1 + arg2 - 1;
    
    int32_t var_1c_1 = arg1;
    int32_t result = sub_13ae2(arg3, &var_20, &var_4);
    
    if (arg2)
    {
        result = 0;
        sub_13b08(0, &var_20);
    }
    
    return result;
}

int32_t sub_12808(int32_t* arg1)
{
    int32_t r5 = arg1[6];
    int32_t r0 = *arg1;
    int32_t r6;
    
    r6 = r0 << 0x1b >= 0 ? 0x20 : 0x30;  /* "3_250117" */  /* "117" */  /* "RY02_V3.0" */
    
    int32_t result = r0 << 0x1f;  /* "0117" */
    
    if (result)
        return result;
    
    while (true)
    {
        int32_t temp0_1 = r5;
        r5 -= 1;
        
        if (temp0_1 - 1 < 0)
            break;
        
        arg1[1](r6, arg1[2]);
        result = arg1[8] + 1;
        arg1[8] = result;
    }
    
    return result;
}

uint32_t sub_12834(char* arg1)
{
    int32_t r5 = *(arg1 + 0x18);  /* "0.33_250117" */
    uint32_t result = *arg1 << 0x1f;  /* "0117" */
    
    if (!result)
        return result;
    
    while (true)
    {
        int32_t temp0_1 = r5;
        r5 -= 1;
        
        if (temp0_1 - 1 < 0)
            break;
        
        (*(arg1 + 4))(0x20, *(arg1 + 8));  /* "117" */
        result = *(arg1 + 0x20) + 1;  /* "117" */
        *(arg1 + 0x20) = result;  /* "117" */
    }
    
    return result;
}

uint32_t sub_12856(char* arg1, void* arg2, int32_t arg3)
{
    void* r4 = arg2;
    int32_t i;
    
    if (arg3 == 1)
        i = 1;
    else
    {
        if (*arg1 << 0x1a < 0)  /* "33_250117" */
            arg3 = *(arg1 + 0x1c);  /* "_250117" */
        
        for (i = 0; i < arg3; i += 1)
        {
            if (!*(r4 + i))
                break;
        }
    }
    
    void* r6 = r4 + i;
    *(arg1 + 0x18) -= i;  /* "0.33_250117" */
    *(arg1 + 0x20) += i;  /* "117" */
    sub_12808(arg1);
    
    while (r4 < r6)
    {
        uint32_t r0_8 = *r4;
        r4 += 1;
        (*(arg1 + 4))(r0_8, *(arg1 + 8));
    }
    
    return sub_12834(arg1);
}

int32_t sub_128a8(int16_t* arg1, int32_t arg2, int32_t* arg3)
{
    uint32_t i = *arg3;
    void* const r2;
    
    if (*arg1 << 0x14 >= 0)  /* "_3.00.33_250117" */
        r2 = "0123456789abcdef@0x";
    else
        r2 = "0123456789ABCDEF@0X";
    
    int32_t r1_2 = 0;
    
    while (i)
    {
        int32_t r6_1 = i << 0x1c;  /* "_250117" */
        i u>>= 4;
        *(&arg1[0x12] + r1_2) = *(r2 + (r6_1 >> 0x1c));  /* "02_3.00.33_250117" */  /* "_250117" */
        r1_2 += 1;
    }
    
    int32_t r3_2 = 0;
    
    if (*arg1 << 0x1c < 0 && arg2 != 0x70 && r1_2)  /* "_250117" */
    {
        r3_2 = 2;
        r2 += 0x11;  /* "Y02_3.00.33_250117" */
    }
    
    return sub_13a28(arg1, r1_2, r2, r3_2);
}

int32_t sub_12900(int32_t* arg1, void* arg2)
{
    void* var_18 = arg2;
    int32_t* var_1c = arg1;
    int32_t r0 = 0;
    
    while (true)
    {
        arg1[8] = r0;
        int32_t r0_2;
        int32_t r1_1;
        int32_t r2_1;
        
        while (true)
        {
            r0_2 = arg1[3](arg1);
            
            if (r0_2)
            {
                if (r0_2 != 0x25)
                {
                    r2_1 = arg1[1];
                    r1_1 = arg1[2];
                    break;
                }
                
                int32_t r5_1 = 0;
                int32_t r6_1;
                
                while (true)
                {
                    int32_t r0_4 = arg1[3](arg1);
                    r6_1 = r0_4;
                    
                    if (r0_4 < 0x20)  /* "117" */
                        break;
                    
                    if (r6_1 >= 0x31)  /* "Y02_V3.0" */
                        break;
                    
                    uint32_t r0_7 = *(r6_1 + "89ABCDEF@0X");
                    
                    if (!r0_7)
                        break;
                    
                    r5_1 |= r0_7;
                }
                
                if (r5_1 << 0x1e < 0)  /* "50117" */
                    r5_1 &= 0xfffffffb;
                
                arg1[7] = 0;
                int32_t i = 0;
                arg1[6] = 0;
                
                do
                {
                    if (r6_1 == 0x2a)
                    {
                        arg1[i + 6] = *var_18;
                        var_18 += 4;
                        r6_1 = arg1[3](arg1);
                        
                        if (i == 1)
                        {
                            if (arg1[7] < 0)
                                r5_1 &= 0xffffffdf;
                            
                            break;
                        }
                    }
                    else
                    {
                        if (sub_14088(r6_1))
                        {
                            void* r0_12 = &arg1[i];
                            *(r0_12 + 0x18) = r6_1 - 0x30;  /* "0.33_250117" */  /* "RY02_V3.0" */
                            
                            while (true)
                            {
                                int32_t r0_24 = arg1[3](arg1);
                                r6_1 = r0_24;
                                
                                if (!sub_14088(r0_24))
                                    break;
                                
                                *(r0_12 + 0x18) = 0xa * *(r0_12 + 0x18) + r6_1 - 0x30;
                                    /* "0.33_250117" */  /* "RY02_V3.0" */
                            }
                        }
                        
                        if (i == 1)
                            break;
                    }
                    
                    if (r6_1 != 0x2e)
                        break;
                    
                    r6_1 = arg1[3](arg1);
                    r5_1 |= 0x20;  /* "117" */
                    i += 1;
                } while (i < 2);
                
                int32_t r0_28 = arg1[6];
                
                if (r0_28 < 0)
                {
                    arg1[6] = 0 - r0_28;
                    r5_1 |= 1;
                }
                
                if (r5_1 << 0x1f)  /* "0117" */
                    r5_1 &= 0xffffffef;
                
                if (r6_1)
                {
                    if (r6_1 - 0x41 <= 0x19)  /* ".33_250117" */
                    {
                        r5_1 |= 0x800;
                        r6_1 += 0x20;  /* "117" */
                    }
                    
                    *arg1 = r5_1;
                    int32_t* r2_4 = var_18;
                    int32_t r0_34 = sub_460(arg1, r6_1, r2_4);
                    
                    if (!r0_34)
                    {
                        r2_1 = arg1[1];
                        r0_2 = r6_1;
                        r1_1 = arg1[2];
                        break;
                    }
                    
                    if (r0_34 == 1)
                    {
                        var_18 = &r2_4[1];
                        continue;
                    }
                    else
                    {
                        var_18 = ((r2_4 + 7) >> 3 << 3) + 8;
                        continue;
                    }
                }
            }
            
            return arg1[8];
        }
        
        r2_1(r0_2, r1_1);
        r0 = arg1[8] + 1;
    }
}

void sub_12a38(int32_t arg1)
{
    *0x20dc24 = 0x20dbc4;
    *0x20dc28 = 0x20db48;
    int32_t r1 = 0x37;  /* ".0" */
    
    while (true)
    {
        int32_t r2_3 = r1;
        r1 -= 1;
        
        if (r2_3 <= 0)
            break;
        
        *(0x20db48 + (r1 << 2)) = (arg1 >> 0x10) + arg1;  /* "RY02_3.00.33_250117" */
        arg1 = 0x10dcd * arg1 + 0x66d619e1;
    }
}

int32_t j_sub_12a38()
{
    /* tailcall */
    return sub_12a38(1);
}

uint32_t sub_12a74(int32_t* arg1, int32_t* arg2, int32_t arg3)
{
    if (!((arg1 | arg2) << 0x1e))  /* "50117" */
    {
        while (arg3 >= 4)
        {
            int32_t r3_2 = *arg1;
            arg1 = &arg1[1];
            int32_t r4_1 = *arg2;
            arg2 = &arg2[1];
            arg3 -= 4;
            int32_t r6_3 = (r3_2 - 0x1010101) & ~r3_2 & 0x80808080;
            
            if (r6_3)
            {
                uint32_t result = r3_2 - r4_1;
                
                if (!(r6_3 << 0x18 | result))  /* "0.33_250117" */
                {
                    result = r3_2 - r4_1;
                    
                    if (!(r6_3 << 0x10 | result))  /* "RY02_3.00.33_250117" */
                    {
                        result = (r3_2 << 8 >> 8) - (r4_1 << 8 >> 8);
                        
                        if (!(r6_3 << 8 | result))
                            return (r3_2 >> 0x18) - (r4_1 >> 0x18);  /* "0.33_250117" */
                    }
                }
                
                return result;
            }
            
            if (r3_2 != r4_1)
            {
                if ((r3_2 >> 0x18 | (r3_2 >> 0x10 & 0xff) << 8 | (r3_2 >> 8 & 0xff) << 0x10
                        | (r3_2 & 0xff) << 0x18) <= (r4_1 >> 0x18 | (r4_1 >> 0x10 & 0xff) << 8
                        | (r4_1 >> 8 & 0xff) << 0x10 | (r4_1 & 0xff) << 0x18))  /* "RY02_3.00.33_250117" */
                        /* "0.33_250117" */
                    return 0xffffffff;
                
                return 1;
            }
        }
    }
    
    if (!arg3)
        return 0;
    
    uint32_t r3_3;
    uint32_t r4_2;
    int32_t i;
    
    do
    {
        r3_3 = *arg1;
        r4_2 = *arg2;
        
        if (!r3_3)
            break;
        
        if (r3_3 != r4_2)
            break;
        
        i = arg3 - 1;
        
        if (arg3 == 1)
            break;
        
        r3_3 = *(arg1 + 1);
        r4_2 = *(arg2 + 1);
        arg1 += 2;
        arg2 += 2;
        
        if (!r3_3)
            break;
        
        if (r3_3 != r4_2)
            break;
        
        arg3 = i - 1;
    } while (i != 1);
    return r3_3 - r4_2;
}

uint32_t sub_12b14(char* arg1)
{
    return arg1[1] << 8 | *arg1 | arg1[2] << 0x10 | arg1[3] << 0x18;
        /* "RY02_3.00.33_250117" */  /* "0.33_250117" */
}

int32_t sub_12b2a(int32_t arg1, int32_t arg2)
{
    int32_t r2_3 = 0;
    
    if (arg1 >> 4 >= arg2)
    {
        if (arg1 >> 8 >= arg2)
        {
            int32_t r1_2 = arg2 << 6;
            int32_t r2_8 = 0xfc000000;
            uint32_t r3_16 = arg1 >> 8;
            
            if (r3_16 >= r1_2)
            {
                r1_2 <<= 6;
                r2_8 = 0xfff00000;
                
                if (r3_16 >= r1_2)
                {
                    r1_2 <<= 6;
                    r2_8 = 0xffffc000;
                    
                    if (r3_16 >= r1_2)
                    {
                        r1_2 <<= 6;
                        
                        if (!r1_2)
                        {
                            bool c_19 = /* bool c_19 = unimplemented  {asrs r3, r3, #1} */;
                            
                            if (c_19)
                                arg1 = 0 - arg1;
                            
                            int32_t var_8 = arg1;
                            return 0;
                        }
                        
                        r2_8 = 0xffffff00;
                    }
                }
            }
            
            while (true)
            {
                bool c_9 = arg1 >> 7 >= r1_2;
                
                if (c_9)
                {
                    int32_t r3_18 = r1_2 << 7;
                    int32_t temp7_1 = arg1;
                    arg1 -= r3_18;
                    c_9 = temp7_1 >= r3_18;
                }
                
                int32_t r2_9 = r2_8 + r2_8;
                bool c_10 = arg1 >> 6 >= r1_2;
                
                if (c_10)
                {
                    int32_t r3_20 = r1_2 << 6;
                    int32_t temp9_1 = arg1;
                    arg1 -= r3_20;
                    c_10 = temp9_1 >= r3_20;
                }
                
                int32_t r2_10 = r2_9 + r2_9;
                bool c_11 = arg1 >> 5 >= r1_2;
                
                if (c_11)
                {
                    int32_t r3_22 = r1_2 << 5;
                    int32_t temp10_1 = arg1;
                    arg1 -= r3_22;
                    c_11 = temp10_1 >= r3_22;
                }
                
                int32_t r2_11 = r2_10 + r2_10;
                bool c_12 = arg1 >> 4 >= r1_2;
                
                if (c_12)
                {
                    int32_t r3_24 = r1_2 << 4;
                    int32_t temp12_1 = arg1;
                    arg1 -= r3_24;
                    c_12 = temp12_1 >= r3_24;
                }
                
                int32_t r2_12 = r2_11 + r2_11;
                bool c_13 = arg1 >> 3 >= r1_2;
                
                if (c_13)
                {
                    int32_t r3_26 = r1_2 << 3;
                    int32_t temp13_1 = arg1;
                    arg1 -= r3_26;
                    c_13 = temp13_1 >= r3_26;
                }
                
                int32_t r2_13 = r2_12 + r2_12;
                bool c_14 = arg1 >> 2 >= r1_2;
                
                if (c_14)
                {
                    int32_t r3_28 = r1_2 << 2;
                    int32_t temp16_1 = arg1;
                    arg1 -= r3_28;
                    c_14 = temp16_1 >= r3_28;
                }
                
                r2_8 = r2_13 + r2_13;
                
                if (r2_13 + r2_13 >= r2_13 && (!c_14 || r2_13 + r2_13 != r2_13))
                    break;
                
                r1_2 u>>= 6;
            }
            
            bool c_16 = arg1 >> 1 >= r1_2;
            
            if (c_16)
            {
                int32_t r3_30 = r1_2 << 1;
                int32_t temp18_1 = arg1;
                arg1 -= r3_30;
                c_16 = temp18_1 >= r3_30;
            }
            
            int32_t r2_14 = r2_8 + r2_8;
            bool c_18 = /* bool c_18 = unimplemented  {asrs r3, r3, #1} */;
            int32_t result = r2_14 + r2_14;
            
            if (c_18)
                result = 0 - result;
            
            return result;
        }
        
        bool c_1 = arg1 >> 7 >= arg2;
        
        if (c_1)
        {
            int32_t r3_3 = arg2 << 7;
            int32_t temp2_1 = arg1;
            arg1 -= r3_3;
            c_1 = temp2_1 >= r3_3;
        }
        
        int32_t r2 = 0 + 0;
        bool c_2 = arg1 >> 6 >= arg2;
        
        if (c_2)
        {
            int32_t r3_5 = arg2 << 6;
            int32_t temp5_1 = arg1;
            arg1 -= r3_5;
            c_2 = temp5_1 >= r3_5;
        }
        
        int32_t r2_1 = r2 + r2;
        bool c_3 = arg1 >> 5 >= arg2;
        
        if (c_3)
        {
            int32_t r3_7 = arg2 << 5;
            int32_t temp6_1 = arg1;
            arg1 -= r3_7;
            c_3 = temp6_1 >= r3_7;
        }
        
        int32_t r2_2 = r2_1 + r2_1;
        bool c_4 = arg1 >> 4 >= arg2;
        
        if (c_4)
        {
            int32_t r3_9 = arg2 << 4;
            int32_t temp8_1 = arg1;
            arg1 -= r3_9;
            c_4 = temp8_1 >= r3_9;
        }
        
        r2_3 = r2_2 + r2_2;
    }
    
    bool c_5 = arg1 >> 3 >= arg2;
    
    if (c_5)
    {
        int32_t r3_11 = arg2 << 3;
        int32_t temp0_1 = arg1;
        arg1 -= r3_11;
        c_5 = temp0_1 >= r3_11;
    }
    
    int32_t r2_4 = r2_3 + r2_3;
    bool c_6 = arg1 >> 2 >= arg2;
    
    if (c_6)
    {
        int32_t r3_13 = arg2 << 2;
        int32_t temp1_1 = arg1;
        arg1 -= r3_13;
        c_6 = temp1_1 >= r3_13;
    }
    
    int32_t r2_5 = r2_4 + r2_4;
    bool c_7 = arg1 >> 1 >= arg2;
    
    if (c_7)
    {
        int32_t r3_15 = arg2 << 1;
        int32_t temp4_1 = arg1;
        arg1 -= r3_15;
        c_7 = temp4_1 >= r3_15;
    }
    
    int32_t r2_6 = r2_5 + r2_5;
    return r2_6 + r2_6;
}

int32_t sub_12b3e(int32_t arg1, int32_t arg2)
{
    if ((arg1 | arg2) >= 0)
    {
        int32_t r2 = 0;
        
        if (arg1 >> 1 < arg2)
            return r2 + r2;
        
        if (arg1 >> 4 < arg2)
        {
        label_12b8e:
            bool c_5 = arg1 >> 3 >= arg2;
            
            if (c_5)
            {
                int32_t r3_13 = arg2 << 3;
                int32_t temp1_1 = arg1;
                arg1 -= r3_13;
                c_5 = temp1_1 >= r3_13;
            }
            
            int32_t r2_4 = r2 + r2;
            bool c_6 = arg1 >> 2 >= arg2;
            
            if (c_6)
            {
                int32_t r3_15 = arg2 << 2;
                int32_t temp3_1 = arg1;
                arg1 -= r3_15;
                c_6 = temp3_1 >= r3_15;
            }
            
            int32_t r2_5 = r2_4 + r2_4;
            bool c_7 = arg1 >> 1 >= arg2;
            
            if (c_7)
            {
                int32_t r3_17 = arg2 << 1;
                int32_t temp9_1 = arg1;
                arg1 -= r3_17;
                c_7 = temp9_1 >= r3_17;
            }
            
            r2 = r2_5 + r2_5;
            return r2 + r2;
        }
        
        if (arg1 >> 8 >= arg2)
            goto label_12bde;
        
        bool c_1 = arg1 >> 7 >= arg2;
        
        if (c_1)
        {
            int32_t r3_5 = arg2 << 7;
            int32_t temp4_1 = arg1;
            arg1 -= r3_5;
            c_1 = temp4_1 >= r3_5;
        }
        
        int32_t r2_1 = 0 + 0;
        bool c_2 = arg1 >> 6 >= arg2;
        
        if (c_2)
        {
            int32_t r3_7 = arg2 << 6;
            int32_t temp10_1 = arg1;
            arg1 -= r3_7;
            c_2 = temp10_1 >= r3_7;
        }
        
        int32_t r2_2 = r2_1 + r2_1;
        bool c_3 = arg1 >> 5 >= arg2;
        
        if (c_3)
        {
            int32_t r3_9 = arg2 << 5;
            int32_t temp12_1 = arg1;
            arg1 -= r3_9;
            c_3 = temp12_1 >= r3_9;
        }
        
        int32_t r2_3 = r2_2 + r2_2;
        bool c_4 = arg1 >> 4 >= arg2;
        
        if (c_4)
        {
            int32_t r3_11 = arg2 << 4;
            int32_t temp16_1 = arg1;
            arg1 -= r3_11;
            c_4 = temp16_1 >= r3_11;
        }
        
        r2 = r2_3 + r2_3;
        goto label_12b8e;
    }
    
    if (arg2 >> 0x1f)  /* "0117" */
        arg2 = 0 - arg2;
    
    bool c_9 = /* bool c_9 = unimplemented  {asrs r3, r0, #0x20} */;  /* "117" */
    
    if (c_9)
        arg1 = 0 - arg1;
    
    int32_t r2_8 = 0;
    
    if (arg1 >> 4 < arg2)
        goto label_12c34;
    
    if (arg1 >> 8 >= arg2)
    {
    label_12bde:
        arg2 <<= 6;
        r2_8 = 0xfc000000;
        uint32_t r3_22 = arg1 >> 8;
        
        if (r3_22 >= arg2)
        {
            arg2 <<= 6;
            r2_8 = 0xfff00000;
            
            if (r3_22 >= arg2)
            {
                arg2 <<= 6;
                r2_8 = 0xffffc000;
                
                if (r3_22 >= arg2)
                {
                    arg2 <<= 6;
                    
                    if (!arg2)
                    {
                        bool c_20 = /* bool c_20 = unimplemented  {asrs r3, r3, #1} */;
                        
                        if (c_20)
                            arg1 = 0 - arg1;
                        
                        int32_t var_8 = arg1;
                        return 0;
                    }
                    
                    r2_8 = 0xffffff00;
                }
            }
        }
    }
    
    while (true)
    {
        bool c_10 = arg1 >> 7 >= arg2;
        
        if (c_10)
        {
            int32_t r3_24 = arg2 << 7;
            int32_t temp8_1 = arg1;
            arg1 -= r3_24;
            c_10 = temp8_1 >= r3_24;
        }
        
        int32_t r2_9 = r2_8 + r2_8;
        bool c_11 = arg1 >> 6 >= arg2;
        
        if (c_11)
        {
            int32_t r3_26 = arg2 << 6;
            int32_t temp11_1 = arg1;
            arg1 -= r3_26;
            c_11 = temp11_1 >= r3_26;
        }
        
        int32_t r2_10 = r2_9 + r2_9;
        bool c_12 = arg1 >> 5 >= arg2;
        
        if (c_12)
        {
            int32_t r3_28 = arg2 << 5;
            int32_t temp15_1 = arg1;
            arg1 -= r3_28;
            c_12 = temp15_1 >= r3_28;
        }
        
        int32_t r2_11 = r2_10 + r2_10;
        bool c_13 = arg1 >> 4 >= arg2;
        
        if (c_13)
        {
            int32_t r3_30 = arg2 << 4;
            int32_t temp18_1 = arg1;
            arg1 -= r3_30;
            c_13 = temp18_1 >= r3_30;
        }
        
        r2_8 = r2_11 + r2_11;
    label_12c34:
        bool c_14 = arg1 >> 3 >= arg2;
        
        if (c_14)
        {
            int32_t r3_32 = arg2 << 3;
            int32_t temp2_1 = arg1;
            arg1 -= r3_32;
            c_14 = temp2_1 >= r3_32;
        }
        
        int32_t r2_12 = r2_8 + r2_8;
        bool c_15 = arg1 >> 2 >= arg2;
        
        if (c_15)
        {
            int32_t r3_34 = arg2 << 2;
            int32_t temp7_1 = arg1;
            arg1 -= r3_34;
            c_15 = temp7_1 >= r3_34;
        }
        
        r2_8 = r2_12 + r2_12;
        
        if (r2_12 + r2_12 >= r2_12 && (!c_15 || r2_12 + r2_12 != r2_12))
            break;
        
        arg2 u>>= 6;
    }
    
    bool c_17 = arg1 >> 1 >= arg2;
    
    if (c_17)
    {
        int32_t r3_36 = arg2 << 1;
        int32_t temp14_1 = arg1;
        arg1 -= r3_36;
        c_17 = temp14_1 >= r3_36;
    }
    
    int32_t r2_13 = r2_8 + r2_8;
    bool c_19 = /* bool c_19 = unimplemented  {asrs r3, r3, #1} */;
    int32_t result = r2_13 + r2_13;
    
    if (c_19)
        result = 0 - result;
    
    return result;
}

void sub_12c84(uint32_t arg1, int32_t arg2, uint32_t arg3, int32_t arg4) __pure
{
    uint32_t r7 = arg1 - arg3;
    int32_t r4_1 = arg2 - arg4;
    bool c_1 = arg1 >= arg3;
    bool cond:0 = ~c_1;
    
    if (arg2 - arg4 >= arg2 && (arg2 - arg4 != arg2 || !c_1))
    {
        uint32_t temp1_1 = arg1;
        arg1 -= r7;
        arg2 = arg2 - r4_1;
        uint32_t temp2_1 = arg3;
        arg3 += r7;
        arg4 = arg4 + r4_1;
    }
    
    uint32_t r5_2 = arg2 >> 0x14;  /* "_3.00.33_250117" */
    uint32_t r7_1 = arg4 >> 0x14;  /* "_3.00.33_250117" */
    uint32_t r4_2 = r5_2 - r7_1;
    
    if (!(0x7ff & ~r5_2) || !(r7_1 << 0x15 >> 0x15))  /* "3.00.33_250117" */
        return;
    
    int32_t r1 = arg2 & ~(r5_2 << 0x14);  /* "_3.00.33_250117" */
    int32_t r5_6 = arg4 << 0xb >> 0xb | 0x100000;
    int32_t r3 = 0x20 - r4_2;  /* "117" */
    
    if (0x20 - r4_2 < 0)  /* "117" */
    {
        if (arg3)
            arg3 = 1;
        
        arg3 += r5_6 << 1;
        r3 = 0x1f - (r4_2 - 0x20);  /* "0117" */  /* "117" */
        
        if (0x1f - (r4_2 - 0x20) >= 0)  /* "0117" */  /* "117" */
        {
            uint32_t r5_8 = r5_6 >> (r4_2 - 0x20);  /* "117" */
            r1 = r1 + 0;
        }
        else
            r3 = 0;
        
        if (!(r1 >> 0x14))  /* "_3.00.33_250117" */
            goto label_12ce4;
        
        goto label_12d40;
    }
    
    uint32_t r7_5 = arg3 >> r4_2;
    int32_t r5_7 = r5_6 << r3;
    
    if ((0 + r1 + 0 + (r5_6 >> r4_2)) >> 0x14)  /* "_3.00.33_250117" */
    {
    label_12d40:
        goto label_12cf8;
    }
    
label_12ce4:
    int32_t r2 = arg3 << r3;
    
    if (r2 < 0 && !(r2 << 1))
    label_12cf8:
}

void sub_12da6(uint32_t arg1, int32_t arg2, uint32_t arg3, int32_t arg4) __pure
{
    int32_t r4;
    int32_t var_14 = r4;
    int32_t var_18 = r4;
    int32_t var_1c = arg4;
    uint32_t var_20 = arg3;
    int32_t var_24 = arg2;
    uint32_t var_28 = arg1;
    int32_t r4_1 = arg2;
    uint32_t r1 = arg1 - arg3;
    bool c_1 = arg1 >= arg3;
    bool cond:0 = ~c_1;
    
    if (r4_1 - arg4 >= r4_1 && (r4_1 - arg4 != r4_1 || !c_1))
    {
        int32_t r7_2 = (arg2 - arg4) ^ 0x80000000;
        uint32_t temp1_1 = arg1;
        arg1 -= r1;
        r4_1 = r4_1 - r7_2;
        uint32_t temp2_1 = arg3;
        arg3 += r1;
        arg4 = arg4 + r7_2;
    }
    
    uint32_t r1_1 = r4_1 >> 0x14;  /* "_3.00.33_250117" */
    uint32_t r6_1 = arg4 >> 0x14;  /* "_3.00.33_250117" */
    uint32_t r5_2 = r1_1 - r6_1;
    
    if (!(0x7ff & ~r1_1) || !(r6_1 << 0x15 >> 0x15))  /* "3.00.33_250117" */
        return;
    
    int32_t r4_2 = r4_1 & ~(r1_1 << 0x14);  /* "_3.00.33_250117" */
    int32_t r2 = 0 - arg3;
    int32_t r5_7 = 0xfff00000 - (arg4 << 0xc >> 0xc);
    int32_t r3_2 = 0x20 - r5_2;  /* "117" */
    int32_t r6_3;
    
    if (0x20 < r5_2)  /* "117" */
    {
        int32_t r3_4 = r2 * 2;
        r2 = (r5_7 + r5_7) << 1;
        
        if (r3_4)
            r2 += 1;
        
        r3_2 = 0x1e - (r5_2 - 0x20);  /* "50117" */  /* "117" */
        
        if (r3_2 > 0)
        {
            int32_t r5_9 = r5_7 >> (r5_2 - 0x20);  /* "117" */
            uint32_t temp10_1 = arg1;
            arg1 += r5_9;
            r6_3 = (r5_9 >> 0x1f) + r4_2;  /* "0117" */
            
            if (r6_3 >= 0)
                goto label_12e16;
            
            goto label_12e40;
        }
    }
    else
    {
        uint32_t r7_4 = r2 >> r5_2;
        uint32_t r0 = r7_4 + arg1;
        int32_t r4_4 = r4_2 + 0 + (r5_7 >> r5_2);
        int32_t r5_8 = r5_7 << r3_2;
        arg1 = r5_8 + r0;
        r6_3 = 0 + r4_4;
        
        if (r6_3 < 0)
        {
        label_12e40:
            int32_t r3_7 = r6_3 + r6_3 + (r1_1 << 0x15);  /* "3.00.33_250117" */
            
            if (TEST_BIT(r3_7, 0x14) && r3_7 >> 0x15)  /* "_3.00.33_250117" */  /* "3.00.33_250117"
                    */
                goto label_12e60;
        }
        else
        {
        label_12e16:
            
            if (r2 << r3_2 < 0)
            label_12e60:
        }
    }
}

int32_t sub_12f7c(uint32_t arg1, int32_t arg2, uint32_t arg3, int32_t arg4)
{
    if ((arg2 ^ arg4) >= 0)
        return sub_12c84(arg1, arg2, arg3, arg4);
    
    return sub_12da6(arg1, arg2, arg3, arg4 ^ 0x80000000);
}

int32_t sub_12f96(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    if ((arg2 ^ arg4) >= 0)
        /* tailcall */
        return sub_12da6(arg1, arg2, arg3, arg4);
    
    /* tailcall */
    return sub_12c84(arg1, arg2, arg3, arg4 ^ 0x80000000);
}

int32_t sub_12fac(uint32_t arg1, int32_t arg2, uint32_t arg3, int32_t arg4)
{
    int32_t r1 = arg2 ^ 0x80000000;
    
    if ((r1 ^ arg4) < 0)
        return sub_12da6(arg1, r1, arg3, arg4 ^ 0x80000000);
    
    return sub_12c84(arg1, r1, arg3, arg4);
}

void sub_12fdc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r5 = 0x7ff0000;
    int32_t r4_1 = arg2 >> 4 & 0x7ff0000;
    int32_t r6_1 = arg4 >> 4 & 0x7ff0000;
    bool cond:0 = !(0x7ff0000 & ~r4_1);
    
    while (true)
    {
        if (cond:0)
        {
            int32_t r5_92 = arg2 + arg2;
            bool c_27 = 0 >= arg1 * 2;
            bool cond:7_1 = ~c_27;
            
            if (0xffe00000 - r5_92 < 0xffe00000 || (0xffe00000 - r5_92 == 0xffe00000 && c_27))
                bool c_30 = 0 >= arg3 * 2;
            
            break;
        }
        
        r5 &= ~r6_1;
        cond:0 = !r5;
        
        if (r5)
        {
            bool cond:1_1 = !r6_1;
            
            while (!cond:1_1)
            {
                cond:1_1 = !r4_1;
                
                if (r4_1)
                {
                    int32_t r5_5 = arg1 << 0xb;
                    int32_t r1_2 = arg2 << 0xb | arg1 >> 0x15 | 0x80000000;  /* "3.00.33_250117" */
                    int32_t r4_7 = arg4 << 0xb | arg3 >> 0x15 | 0x80000000;  /* "3.00.33_250117" */
                    int32_t r2 = arg3 << 0xb;
                    uint32_t r0_1 = r4_7 >> 0x10;  /* "RY02_3.00.33_250117" */
                    uint32_t r1_3 = r2 >> 0x10;  /* "RY02_3.00.33_250117" */
                    uint32_t r1_4 = r0_1 << 0x10;  /* "RY02_3.00.33_250117" */
                    int32_t r3_1 = r4_7 & ~r1_4;
                    uint32_t r1_6 = r1_3 << 0x10;  /* "RY02_3.00.33_250117" */
                    int32_t r2_1 = r2 & ~r1_6;
                    uint32_t r1_10 = *((r0_1 >> 8) + 0x1a971);
                    uint32_t r5_10 = (0x20000000 - (((((0x800000 - (r1_10 * r0_1 + r1_10)) * r1_10)
                        >> 0x13) + 2) * (r4_7 >> 0xd)
                        + (((0x800000 - (r1_10 * r0_1 + r1_10)) * r1_10) >> 0x13) + 2)) >> 0x10;
                        /* "RY02_3.00.33_250117" */  /* "2_3.00.33_250117" */
                    int32_t r4_12 = (0x20000000 - (((((0x800000 - (r1_10 * r0_1 + r1_10)) * r1_10)
                        >> 0x13) + 2) * (r4_7 >> 0xd)
                        + (((0x800000 - (r1_10 * r0_1 + r1_10)) * r1_10) >> 0x13) + 2))
                        & ~(r5_10 << 0x10);  /* "RY02_3.00.33_250117" */  /* "2_3.00.33_250117" */
                    int32_t r1_15 =
                        ((((0x800000 - (r1_10 * r0_1 + r1_10)) * r1_10) >> 0x13) + 2) * r5_10 + (((
                        (((0x800000 - (r1_10 * r0_1 + r1_10)) * r1_10) >> 0x13) + 2) * r4_12)
                        >> 0x10);  /* "RY02_3.00.33_250117" */  /* "2_3.00.33_250117" */
                    uint32_t r1_16 = r1_15 >> 6;
                    int32_t r1_17 = r5_5 << 0x1f;  /* "0117" */
                    
                    if (r1_17)
                        r1_17 = 0x80000000;
                    
                    int32_t r7_2 = r5_5 >> 1 | r1_2 << 0x1f;  /* "0117" */
                    uint32_t r4_15 = r1_2 >> 1;
                    uint32_t r5_16 = ((r4_15 >> 0xf) * r1_16) >> 0x10;  /* "RY02_3.00.33_250117" */
                    int32_t r5_17 = r1_3 * r5_16;
                    int32_t r5_21 = r7_2 - r5_17;
                    int32_t r5_23 = r3_1 * r5_16;
                    int32_t r5_25 = r2_1 * r5_16;
                    int32_t var_38_2 = r5_25 >> 0x10 | r5_23 << 0x10;  /* "RY02_3.00.33_250117" */
                    uint32_t var_34_1 = r5_23 >> 0x10;  /* "RY02_3.00.33_250117" */
                    int32_t r5_29 = r5_25 << 0x10;  /* "RY02_3.00.33_250117" */
                    int32_t r4_19 = r1_17 - r5_29;
                    
                    if (r1_17 < r5_29)
                    {
                        var_34_1 = var_34_1 + 0;
                        var_38_2 += 1;
                    }
                    
                    int32_t r5_33 = r5_21 - var_38_2;
                    int32_t r4_23 = r4_15 - r0_1 * r5_16 - var_34_1;
                    uint32_t r1_24 = ((r4_23 >> 2) * r1_16) >> 0x10;  /* "RY02_3.00.33_250117" */
                    int32_t r4_26 = r0_1 * r1_24;
                    int32_t r4_28 = r1_3 * r1_24;
                    uint32_t var_34_2 = r4_26 >> 0xd;
                    int32_t var_38_3 = r4_28 >> 0xd | r4_26 << 0x13;  /* "2_3.00.33_250117" */
                    int32_t r4_32 = r4_28 << 0x13;  /* "2_3.00.33_250117" */
                    int32_t r4_33 = r4_19 - r4_32;
                    
                    if (r4_19 < r4_32)
                    {
                        var_34_2 = var_34_2 + 0;
                        var_38_3 += 1;
                    }
                    
                    int32_t r5_39 = r5_33 - var_38_3;
                    int32_t r4_39 = r3_1 * r1_24;
                    int32_t r4_41 = r2_1 * r1_24;
                    uint32_t var_34_3 = r4_39 >> 0x1d;  /* "250117" */
                    int32_t var_38_4 = r4_41 >> 0x1d | r4_39 << 3;  /* "250117" */
                    int32_t r4_45 = r4_41 << 3;
                    int32_t r4_46 = r4_33 - r4_45;
                    
                    if (r4_33 < r4_45)
                    {
                        var_34_3 = var_34_3 + 0;
                        var_38_4 += 1;
                    }
                    
                    int32_t r5_45 = r5_39 - var_38_4;
                    int32_t r7_10 = r5_45 << 0x1a | r4_46 >> 6;  /* "33_250117" */
                    int32_t r5_49 = r4_46 << 0x1a;  /* "33_250117" */
                    int32_t r4_52 = (r4_23 - var_34_2 - var_34_3) << 0x1a | r5_45 >> 6;
                        /* "33_250117" */
                    uint32_t r5_53 = ((r4_52 >> 0xf) * r1_16) >> 0x10;  /* "RY02_3.00.33_250117" */
                    int32_t r5_54 = r1_3 * r5_53;
                    int32_t r5_58 = r7_10 - r5_54;
                    int32_t r5_60 = r3_1 * r5_53;
                    int32_t r5_62 = r2_1 * r5_53;
                    int32_t var_38_6 = r5_62 >> 0x10 | r5_60 << 0x10;  /* "RY02_3.00.33_250117" */
                    uint32_t var_34_4 = r5_60 >> 0x10;  /* "RY02_3.00.33_250117" */
                    int32_t r5_66 = r5_62 << 0x10;  /* "RY02_3.00.33_250117" */
                    int32_t r4_56 = r5_49 - r5_66;
                    
                    if (r5_49 < r5_66)
                    {
                        var_34_4 = var_34_4 + 0;
                        var_38_6 += 1;
                    }
                    
                    int32_t r5_70 = r5_58 - var_38_6;
                    int32_t r4_60 = r4_52 - r0_1 * r5_53 - var_34_4;
                    uint32_t r1_33 = ((r4_60 >> 2) * r1_16) >> 0x10;  /* "RY02_3.00.33_250117" */
                    int32_t r5_72 = r0_1 * r1_33;
                    uint32_t r0_2 = r5_72 >> 0xd;
                    int32_t r5_74 = r1_3 * r1_33;
                    int32_t r4_67 = r5_74 >> 0xd | r5_72 << 0x13;  /* "2_3.00.33_250117" */
                    int32_t r5_75 = r5_74 << 0x13;  /* "2_3.00.33_250117" */
                    int32_t r5_76 = r4_56 - r5_75;
                    
                    if (r4_56 < r5_75)
                    {
                        int32_t temp21_1 = r4_67;
                        r4_67 += 1;
                        r0_2 = r0_2 + 0;
                    }
                    
                    int32_t r7_15 = r5_70 - r4_67;
                    int32_t r0_4 = r3_1 * r1_33;
                    uint32_t r6_14 = r0_4 >> 0x1d;  /* "250117" */
                    int32_t r4_69 = r2_1 * r1_33;
                    int32_t r0_6 = r4_69 >> 0x1d | r0_4 << 3;  /* "250117" */
                    int32_t r4_70 = r4_69 << 3;
                    int32_t r4_71 = r5_76 - r4_70;
                    
                    if (r5_76 < r4_70)
                    {
                        int32_t temp25_1 = r0_6;
                        r0_6 += 1;
                        r6_14 = r6_14 + 0;
                    }
                    
                    int32_t r7_16 = r7_15 - r0_6;
                    int32_t r0_9 = (r4_60 - r0_2 - r6_14) << 0x1a | r7_16 >> 6;  /* "33_250117" */
                    int32_t r4_72 = r4_71 << 0x1a;  /* "33_250117" */
                    uint32_t r6_16 = (r1_33 << 9) + (r5_53 << 0x16);  /* ".00.33_250117" */
                    bool c_15 = /* bool c_15 = unimplemented  {orrs r7, r0} */;
                    int32_t r1_36 = r1_4 | r3_1;
                    int32_t var_40_7 = 0;
                    int32_t r3_3 = r1_6 | r2_1;
                    bool c_16 = /* bool c_16 = unimplemented  {orrs r3, r2} */;
                    int32_t r0_13 = r0_9 + r0_9;
                    int32_t r4_73 = r4_72 << 1;
                    int32_t r2_3 = r4_72 >> 0x1f | ((r7_16 << 0x1a | r4_71 >> 6) * 2);
                        /* "33_250117" */  /* "0117" */
                    int32_t r4_75 = r0_13 - r1_36;
                    
                    if (r0_13 > r4_75)
                    {
                        var_40_7 = 1;
                        r0_13 = r4_75;
                        r2_3 -= r3_3;
                    }
                    
                    int32_t r0_14 = r0_13 + r0_13;
                    int32_t r2_6 = r4_73 >> 0x1f | (r2_3 * 2);  /* "0117" */
                    int32_t r12_5 = var_40_7 << 1;
                    int32_t r4_82 = r0_14 - r1_36;
                    
                    if (r0_13 >> 0x1f || r0_14 > r4_82)  /* "0117" */
                    {
                        r12_5 += 1;
                        r2_6 -= r3_3;
                        r0_14 = r4_82;
                    }
                    
                    int32_t r0_17 = r0_14 + r0_14;
                    int32_t r2_9 = r4_73 << 1 >> 0x1f | (r2_6 * 2);  /* "0117" */
                    int32_t r4_86 = r12_5 << 1;
                    int32_t r5_86 = r0_17 - r1_36;
                    
                    if (r0_14 >> 0x1f || r0_17 > r5_86)  /* "0117" */
                    {
                        r0_17 = r5_86;
                        r2_9 -= r3_3;
                        r4_86 += 1;
                    }
                    
                    if (r0_17 | r2_9)
                        r6_16 |= 1;
                    
                    int32_t r1_38 = r4_86 << 9;
                    int32_t r1_39;
                    
                    if (0 + 0 + (r5_16 << 0x10) + (r1_24 << 3) + (r5_53 >> 0xa) >= 0)  /* "
                            RY02_3.00.33_250117" */
                        int32_t temp29_1 = r1_39;
                    break;
                }
            }
            
            break;
        }
    }
}

int32_t sub_1340c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    return sub_12fdc(arg3, arg4, arg1, arg2);
}

uint32_t sub_13424(int32_t arg1, int32_t arg2) __pure
{
    int32_t r0_1 = arg1 >> 0x15 | arg2 << 0xb;  /* "3.00.33_250117" */
    int32_t r2_1 = arg2 >> 0x14;  /* "_3.00.33_250117" */
    
    if (r2_1)
        r0_1 |= 0x80000000;
    
    if (r2_1 && r2_1 < 0)
    {
        uint32_t r2_4 = r2_1 << 0x15 >> 0x15;  /* "3.00.33_250117" */
        
        if (!r2_4)
            r0_1 = r0_1 << 1 >> 1;
        
        if (0x41e - r2_4 < 0)
            goto label_1346c;
        
        int32_t result = 0 - (r0_1 >> (0x41e - r2_4));
        
        if (0x41e - r2_4 <= 0xff)
        {
            if (result <= 0)
                return result;
            
            goto label_1346c;
        }
    }
    else if (0x41e - r2_1 <= 0)
    {
    label_1346c:
        int32_t r0_5;
        
        r0_5 = !arg1 ? 0 : 1;
        
        int32_t r0_6 = (arg2 << 1) + r0_5;
        
        if (r0_6 == 0xffe00000 || r0_6 + 0x200000 >= r0_6)
            return ~(arg2 >> 0x1f) ^ 0x80000000;  /* "0117" */
    }
    else if (0x41e - r2_1 <= 0xff)
        return r0_1 >> (0x41e - r2_1);
    
    return 0;
}

uint32_t sub_13490(int32_t arg1, int32_t arg2) __pure
{
    int32_t r0_1 = arg1 >> 0x15 | arg2 << 0xb;  /* "3.00.33_250117" */
    int32_t r2_1 = arg2 >> 0x14;  /* "_3.00.33_250117" */
    
    if (r2_1)
        r0_1 |= 0x80000000;
    
    if (!r2_1 || r2_1 >= 0)
    {
        if (0x41e - r2_1 < 0)
        {
            int32_t r0_3;
            
            r0_3 = !arg1 ? 0 : 1;
            
            int32_t r0_4 = (arg2 << 1) + r0_3;
            
            if (r0_4 == 0xffe00000 || r0_4 + 0x200000 >= r0_4)
                return ~(arg2 >> 0x1f);  /* "0117" */
        }
        else if (0x41e - r2_1 <= 0xff)
            return r0_1 >> (0x41e - r2_1);
    }
    
    return 0;
}

int32_t sub_134d8(int32_t arg1, int32_t arg2) __pure
{
    if (!(arg1 >> 0x10))  /* "RY02_3.00.33_250117" */
    {
        arg1 <<= 0x10;  /* "RY02_3.00.33_250117" */
        
        if (!arg1)
            return 0;
    }
    
    if (!(arg1 >> 0x18))  /* "0.33_250117" */
        arg1 <<= 8;
    
    if (!(arg1 >> 0x1c))  /* "_250117" */
        arg1 <<= 4;
    
    if (!(arg1 >> 0x1e))  /* "50117" */
        arg1 <<= 2;
    
    if (arg1 >= 0)
        arg1 <<= 1;
    
    return arg1 << 0x15;  /* "3.00.33_250117" */
}

int32_t sub_1351a(int32_t arg1)
{
    uint32_t r1 = arg1 >> 0x1f << 0x1f;  /* "0117" */
    
    if (r1)
        arg1 = 0 - arg1;
    
    /* tailcall */
    return sub_134d8(arg1, r1 | 0x40000000);
}

int32_t j_sub_134d8(int32_t arg1)
{
    /* tailcall */
    return sub_134d8(arg1, 0x40000000);
}

int32_t sub_13530(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4) __pure
{
    int32_t r4 = 0x7ff0000;
    bool cond:0 = !(0x7ff0000 & ~(arg2 >> 4));
    int32_t result;
    
    while (true)
    {
        if (cond:0)
        {
            int32_t r4_26 = arg2 + arg2;
            bool c_12 = 0 >= arg1 * 2;
            bool cond:2_1 = ~c_12;
            int32_t r2_21;
            bool c_15;
            bool cond:3_1;
            
            if (0xffe00000 - r4_26 < 0xffe00000 || (0xffe00000 - r4_26 == 0xffe00000 && c_12))
            {
                r2_21 = arg4 + arg4;
                c_15 = 0 >= arg3 * 2;
                cond:3_1 = ~c_15;
            }
            
            result = (0xffe00000 - r4_26 >= 0xffe00000
                && (0xffe00000 - r4_26 != 0xffe00000 || !c_12)) || (0xffe00000 - r2_21 >= 0xffe00000
                && (0xffe00000 - r2_21 != 0xffe00000 || !c_15)) || arg2 << 1 < 0x200000
                || arg4 << 1 < 0x200000 ? 0 : 0;
            
            break;
        }
        
        uint32_t r5_1 = arg4 >> 4;
        int32_t r6_1 = 0x7ff0000 & ~r5_1;
        cond:0 = !r6_1;
        
        if (r6_1)
        {
            bool cond:1_1 = !(r5_1 & 0x7ff0000);
            
            while (true)
            {
                if (cond:1_1)
                {
                    result = 0;
                    break;
                }
                
                r4 <<= 4;
                int32_t temp4_1 = arg2 & r4;
                cond:1_1 = !temp4_1;
                
                if (temp4_1)
                {
                    int32_t r1_4 = (arg2 << 0xb >> 0xb | 0x100000) << 4 | arg1 >> 0x1c;
                        /* "_250117" */
                    uint32_t r0 = r1_4 >> 0xe;
                    int32_t r1_5 = r1_4 & ~(r0 << 0xe);
                    uint32_t r5_6 = arg1 << 4 >> 4;
                    uint32_t r1_6 = r5_6 >> 0xe;
                    int32_t r6_7 = (arg4 << 0xb >> 0xb | 0x100000) << 4 | arg3 >> 0x1c;
                        /* "_250117" */
                    int32_t r5_7 = r5_6 & ~(r1_6 << 0xe);
                    uint32_t r3_4 = r6_7 >> 0xe;
                    int32_t r6_8 = r6_7 & ~(r3_4 << 0xe);
                    uint32_t r7_3 = arg3 << 4 >> 4;
                    uint32_t r2_3 = r7_3 >> 0xe;
                    uint32_t r7_4 = r7_3 & ~(r2_3 << 0xe);
                    int32_t r6_10 = r7_4 * r5_7;
                    int32_t r6_11 = r1_6 + r5_7;
                    uint32_t r7_5 = r2_3 + r7_4;
                    int32_t r4_4 = r2_3 * r1_6;
                    int32_t r7_7 = r7_5 * r6_11 - r4_4 - r6_10;
                    int32_t r6_14 = r6_10 << 4;
                    int32_t r4_5 = r7_7 << 0x12;  /* "02_3.00.33_250117" */
                    int32_t r4_6 = (r7_7 >> 0xe) + r4_4;
                    
                    if (r6_14 + r4_5 < r6_14)
                    {
                        r4_6 += 1;
                        int32_t var_38_2 = r4_6;
                    }
                    
                    int32_t r4_7 = r4_6 << 1;
                    
                    if (r6_14 + r4_5)
                        r4_7 |= 1;
                    
                    int32_t r5_8 = r6_8 * r5_7;
                    int32_t r6_20 = r7_4 * r1_5;
                    int32_t r4_9 = (r5_8 << 1) + (r6_20 << 1) + r4_7;
                    int32_t r4_11 = r3_4 + r6_8;
                    int32_t r5_11 = r0 + r1_5;
                    int32_t r1_7 = r3_4 * r1_6;
                    int32_t r1_8 = r4_11 * r6_11 - r5_8 - r1_7;
                    int32_t r1_10 = r2_3 * r0;
                    int32_t r1_11 = r5_11 * r7_5 - r6_20 - r1_10;
                    uint32_t r1_14;
                    
                    r1_14 = !(r4_9 << 0x1b) ? r4_9 >> 5 : r4_9 >> 5 | 1;  /* "3_250117" */
                    
                    int32_t r5_14 = r1_7 << 0x18;  /* "0.33_250117" */
                    int32_t r1_15 = r5_14 + r1_14;
                    int32_t r5_16 = r1_10 << 0x18;  /* "0.33_250117" */
                    int32_t r1_16 = r5_16 + r1_15;
                    int32_t r5_18 = r1_8 << 0xa;
                    int32_t r5_19 = r5_18 + r1_16;
                    int32_t r2_7 = r1_11 << 0xa;
                    int32_t r5_20 = r2_7 + r5_19;
                    int32_t r1_18 =
                        (r1_11 >> 0x16) + (r1_8 >> 0x16) + (r1_10 >> 8) + (r1_7 >> 8) + 0;
                        /* ".00.33_250117" */
                    int32_t r0_1 = r3_4 * r0;
                    int32_t r4_21 = r6_8 * r1_5;
                    int32_t r3_6 = r4_11 * r5_11 - r0_1 - r4_21;
                    int32_t r3_7 = r3_6 << 6;
                    int32_t r3_8 = r3_7 + r1_18;
                    int32_t r0_2 = r0_1 << 0x14;  /* "_3.00.33_250117" */
                    int32_t r3_9 = r0_2 + r3_8;
                    int32_t r1_20 = (r0_1 >> 0xc) + (r3_6 >> 0x1a) + 0;  /* "33_250117" */
                    int32_t r0_3 = r4_21 << 0x18;  /* "0.33_250117" */
                    int32_t r4_22 = r0_3 + r5_20;
                    int32_t r2_15 = (r4_21 >> 8) + r3_9;
                    
                    if (r2_15 < r3_9)
                        r1_20 += 1;
                    
                    int32_t r3_10;
                    int32_t r6_26;
                    
                    if (r1_20 < 0x200)
                    {
                        r3_10 = 0x14;  /* "_3.00.33_250117" */
                        r6_26 = 0xfffffffc;
                    }
                    else
                    {
                        r3_10 = 0x15;  /* "3.00.33_250117" */
                        r6_26 = 0xfffffffd;
                    }
                    
                    result = r4_22 >> r3_10 | r2_15 << (0x20 - r3_10);  /* "117" */
                    int32_t r4_23 = r4_22 << (0x20 - r3_10);  /* "117" */
                    
                    if (r4_23 && TEST_BIT(r4_23, 0x1f))  /* "0117" */
                    {
                        result += 1;
                        
                        if (!(r4_23 << 1))
                            result = result >> 1 << 1;
                    }
                    
                    int32_t r5_2;
                    uint32_t r7;
                    
                    if (r6_26 + ((r5_2 + ((arg2 ^ arg4) >> 0x1f | (r7 & 0x7ff0000)) - 0x3fc0000)
                            >> 0x10) >= 0x7fe)  /* "RY02_3.00.33_250117" */  /* "0117" */
                        return 0;
                    
                    break;
                }
            }
            
            break;
        }
    }
    
    return result;
}

int32_t sub_13778(int32_t arg1, int32_t arg2, int32_t arg3) __pure
{
    uint32_t r4 = arg2 << 1 >> 0x15;  /* "3.00.33_250117" */
    int32_t r3 = 0x7ff;
    int32_t r0_1 = 0;
    
    if (r4)
        r3 = 0x7ff ^ r4;
    
    if (!r4 || !r3 || arg3 >= r3 || arg3 <= 0 - r4)
    {
        if (!r4)
            return 0;
        
        if (!r3)
        {
            if (!(arg1 | arg2 << 0xc))
                return arg1;
            
            return 0;
        }
        
        if (arg3 >= 0)
            return 0;
    }
    else
        r0_1 = arg1;
    
    return r0_1;
}

uint32_t sub_137d8(int32_t arg1, int32_t arg2)
{
    int32_t r6_2 = (arg1 >> 7 & 0xff0000) | 0x100;
    int32_t r0 = arg1 ^ arg2;
    int32_t r2_1 = arg1 >> 7 & 0xff0000;
    int32_t r3_1 = arg2 >> 7 & 0xff0000;
    
    if (!r2_1 || !r3_1 || r2_1 == 0xff0000 || r3_1 == 0xff0000)
    {
        if (r0 < 0)
            r2_1 = r6_2;
        
        uint32_t r0_12 = 0x7fc00000;
        
        if (r2_1 < 0xff0000 && r3_1 < 0xff0000)
        {
            if (r3_1 << 8 >> 0x18)  /* "0.33_250117" */
                return r0 >> 0x1f << 0x1f;  /* "0117" */
            
            if (!(r2_1 << 8 >> 0x18))  /* "0.33_250117" */
                return r0_12;
            
            return (r2_1 | 0xff) << 0x17;  /* "00.33_250117" */
        }
        
        int32_t r3_11 = arg1 << 1;
        
        if (r3_11 <= 0xff000000)
        {
            int32_t r1_11 = arg2 << 1;
            
            if (r1_11 <= 0xff000000 && (r3_11 != 0xff000000 || r1_11 != 0xff000000))
            {
                uint32_t r1_12;
                
                r1_12 = r1_11 != 0xff000000 ? arg1 << 1 >> 1 : 0;
                
                return r2_1 << 0x17 | r1_12;  /* "00.33_250117" */
            }
        }
        
        return r0_12;
    }
    
    if (r0 < 0)
        r2_1 = r6_2;
    
    uint32_t r1_2 = (arg2 | 0x800000) << 8 >> 8;
    uint32_t r0_2 = (arg1 | 0x800000) << 8 >> 8;
    uint32_t r3_5 = *(&data_1aa71 + 0x7f - (r1_2 >> 0x11)) << 1;  /* "Y02_3.00.33_250117" */
    int32_t r2_4 = ((r2_1 - r3_1 + 0x7d0000) >> 0x10) + r2_1 - r3_1 + 0x7d0000;
        /* "RY02_3.00.33_250117" */
    
    if (r0_2 < r1_2)
        r0_2 <<= 1;
    else
        r2_4 += 1;
    
    int32_t r3_7 = ((r3_5 * ((r3_5 * (0 - r1_2)) >> 4)) >> 0x15) + (r3_5 << 7);
        /* "3.00.33_250117" */
    uint32_t r0_3 = (r3_7 * (r0_2 >> 8)) >> 0x14;  /* "_3.00.33_250117" */
    int32_t r4_12 = r0_3 * (0 - r1_2) + (r0_2 << 0xb);
    uint32_t r4_13 = (r3_7 * (r4_12 >> 8)) >> 0x13;  /* "2_3.00.33_250117" */
    uint32_t r0_5 = (r0_3 << 0xc) + r4_13;
    int32_t r3_9 = r4_13 * (0 - r1_2) + (r4_12 << 0xc);
    
    if (r3_9 >= r1_2)
    {
        r3_9 += 0 - r1_2;
        r0_5 += 1;
    }
    
    int32_t r0_6 = (r2_4 << 0x17) + r0_5;  /* "00.33_250117" */
    
    if (r3_9)
    {
        int32_t r3_10 = r3_9 << 1;
        
        if (0 - r1_2 + r3_10 < 0 - r1_2)
        {
            r0_6 += 1;
            
            if (!(0 - r1_2 + r3_10))
                r0_6 = r0_6 >> 1 << 1;
        }
    }
    
    if (r2_4 >= 0xfc0000)
    {
        if (r2_4 > 0)
        {
            if ((r0_6 << 1) + 0x1000000 < 0xfe000000)
            {
                if (r0_6 - 0x60000000 >= 0)
                    return 0x7f800000;
                
                return 0xff800000;
            }
        }
        else if (r2_4 << 0x18 >> 0x1c)  /* "0.33_250117" */  /* "_250117" */
            return (r0_6 + 0x60000000) >> 0x1f << 0x1f;  /* "0117" */
    }
    
    return r0_6;
}

int32_t sub_13926(int32_t arg1, int32_t arg2)
{
    /* tailcall */
    return sub_137d8(arg2, arg1);
}

uint32_t sub_13938(int32_t arg1) __pure
{
    int32_t r0 = arg1 << 8;
    int32_t r2 = arg1 >> 0x17;  /* "00.33_250117" */
    
    if (r2)
        r0 |= 0x80000000;
    
    if (r2 && r2 < 0)
    {
        uint32_t r2_3 = r2 << 0x18 >> 0x18;  /* "0.33_250117" */
        
        if (!r2_3)
            r0 = r0 << 1 >> 1;
        
        if (0x9e - r2_3 >= 0)
        {
            uint32_t result = 0 - (r0 >> (0x9e - r2_3));
            
            if (result <= 0)
                return result;
        }
    }
    else if (0x9e - r2 > 0)
        return r0 >> (0x9e - r2);
    
    if (arg1 << 1 <= 0xff000000)
        return ~(arg1 >> 0x1f) ^ 0x80000000;  /* "0117" */
    
    return 0;
}

uint32_t sub_13984(int32_t arg1) __pure
{
    int32_t r1 = arg1 << 8;
    int32_t r2 = arg1 >> 0x17;  /* "00.33_250117" */
    
    if (r2)
        r1 |= 0x80000000;
    
    if (!r2 || r2 >= 0)
    {
        if (0x9e - r2 >= 0)
            return r1 >> (0x9e - r2);
        
        if (arg1 << 1 <= 0xff000000)
            return ~(arg1 >> 0x1f);  /* "0117" */
    }
    
    return 0;
}

int32_t sub_139b4(int32_t arg1, int32_t arg2) __pure
{
    int32_t r2 = 0x1f;  /* "0117" */
    
    if (!(arg1 >> 0x10))  /* "RY02_3.00.33_250117" */
    {
        r2 = 0xf;
        arg1 <<= 0x10;  /* "RY02_3.00.33_250117" */
        
        if (!arg1)
            return arg1;
    }
    
    if (!(arg1 >> 0x18))  /* "0.33_250117" */
    {
        arg1 <<= 8;
        r2 -= 8;
    }
    
    if (!(arg1 >> 0x1c))  /* "_250117" */
    {
        arg1 <<= 4;
        r2 -= 4;
    }
    
    if (!(arg1 >> 0x1e))  /* "50117" */
    {
        arg1 <<= 2;
        r2 -= 2;
    }
    
    if (arg1 >= 0)
    {
        arg1 <<= 1;
        r2 -= 1;
    }
    
    int32_t r1_1 = (arg1 >> 8) + (r2 << 0x17) + arg2;  /* "00.33_250117" */
    
    if (TEST_BIT(arg1, 7))
    {
        r1_1 += 1;
        
        if (!(arg1 << 0x19))  /* ".33_250117" */
            return r1_1 >> 1 << 1;
    }
    
    return r1_1;
}

int32_t sub_139fc(int32_t arg1)
{
    uint32_t r1 = arg1 >> 0x1f << 0x1f;  /* "0117" */
    
    if (r1)
        arg1 = 0 - arg1;
    
    /* tailcall */
    return sub_139b4(arg1, r1 | 0x40000000);
}

int32_t j_sub_139b4(int32_t arg1)
{
    /* tailcall */
    return sub_139b4(arg1, 0x40000000);
}

int32_t sub_13a12()
{
    return *0x20dc2c;
}

int32_t sub_13a1c(int32_t arg1)
{
    *0x20dc2c = arg1;
    return 0x20dc2c;
}

int32_t sub_13a28(int32_t* arg1, int32_t arg2, void* arg3, int32_t arg4)
{
    int32_t var_20 = arg2;
    int32_t* var_24 = arg1;
    int32_t r5 = arg2;
    int32_t r1 = *arg1;
    int32_t r0_2;
    
    if (r1 << 0x1a >= 0)  /* "33_250117" */
        r0_2 = 1;
    else
    {
        r0_2 = arg1[7];
        *arg1 = r1 & 0xffffffef;
    }
    
    int32_t r7;
    
    r7 = r0_2 <= r5 ? 0 : r0_2 - r5;
    
    arg1[6] -= r7 + r5 + arg4;
    
    if (*arg1 << 0x1b >= 0)  /* "3_250117" */
        sub_12808(arg1);
    
    int32_t r6 = 0;
    
    while (r6 < arg4)
    {
        arg1[1](*(arg3 + r6), arg1[2]);
        r6 += 1;
        arg1[8] += 1;
    }
    
    if (*arg1 << 0x1b < 0)  /* "3_250117" */
        sub_12808(arg1);
    
    while (true)
    {
        int32_t r0_19 = r7;
        r7 -= 1;
        
        if (r0_19 <= 0)
            break;
        
        arg1[1](0x30, arg1[2]);  /* "RY02_V3.0" */
        arg1[8] += 1;
    }
    
    while (true)
    {
        int32_t r0_24 = r5;
        r5 -= 1;
        
        if (r0_24 <= 0)
            break;
        
        arg1[1](*(&arg1[9] + r5), arg1[2]);
        arg1[8] += 1;
    }
    
    sub_12834(arg1);
    
    if (*arg1 << 0x18 >= 0)  /* "0.33_250117" */
        return 1;
    
    return 2;
}

uint32_t sub_13ad8(void* arg1)
{
    char* r1 = *(arg1 + 0x10);  /* "RY02_3.00.33_250117" */
    *(arg1 + 0x10) = &r1[1];  /* "RY02_3.00.33_250117" */
    return *r1;
}

int32_t sub_13ae2(int32_t arg1, int32_t arg2, void* arg3)
{
    int32_t var_38 = arg2;
    int32_t var_2c = 0;
    int32_t r3;
    int32_t var_3c = r3;
    void* const var_34 = sub_13ad8;
    int32_t var_30 = arg1;
    void var_40;
    return sub_12900(&var_40, arg3);
}

void sub_13b08(char arg1, int32_t* arg2)
{
    char* r2_1 = *arg2;
    *r2_1 = arg1;
    *arg2 = &r2_1[1];
}

void sub_13b12(char arg1, int32_t* arg2)
{
    char* r2 = *arg2;
    
    if (r2 < arg2[1])
    {
        *arg2 = &r2[1];
        *r2 = arg1;
    }
}

int32_t sub_13b22(char* arg1, void* arg2, int32_t arg3)
{
    if (!*(arg1 + 0x14))  /* "_3.00.33_250117" */
        sub_12856(arg1, arg2, arg3);
    
    return 1;
}

int32_t sub_13b38(void* arg1, int32_t arg2, char* arg3)
{
    *(arg1 + 0x24) = *arg3;
    *(arg1 + 0x25) = 0;
    /* tailcall */
    return sub_13b22(arg1, arg1 + 0x24, 1);
}

int32_t sub_13b48(int32_t arg1, int32_t arg2, int32_t* arg3)
{
    /* tailcall */
    return sub_13b22(arg1, *arg3, 0xffffffff);
}

uint32_t sub_13b50(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5)
{
    int32_t var_18_1 = arg4;
    int32_t r6 = arg2 << 1;
    
    if (r6 <= 0xffe00000 && (r6 != 0xffe00000 || !arg1))
    {
        int32_t r6_1 = arg4 << 1;
        
        if (r6_1 <= 0xffe00000 && (r6_1 != 0xffe00000 || !arg3))
        {
            if ((arg2 | arg4) >= 0)
                return __mrs(apsr);
            
            uint32_t result;
            
            if (arg4 != arg2)
            {
                result = __mrs(apsr) & 0x6fffffff;
                
                if (arg4 < arg2)
                    result |= 0x80000000;
            }
            else if (arg3 < arg1)
                result = (__mrs(apsr) & 0x6fffffff) | 0x80000000;
            else
                result = __mrs(apsr) & 0x6fffffff;
            
            __msr(apsr_nzcvq, result);
            return result;
        }
    }
    
    if (arg5 & 0xd0000)
        return sub_13ce8(0, arg5);
    
    int32_t var_18 = arg5;
    return sub_13d18(arg1);
}

int32_t sub_13be0(int32_t arg1, int32_t arg2) __pure
{
    int32_t r2 = arg1;
    
    if (arg2 & 0x7ff00000)
    {
        if (0x7ff00000 & ~arg2)
        {
            if (arg2 < 0)
                return 0;
            
            int32_t r1_1 = (arg2 & ~(arg2 >> 0x14 << 0x14)) | 0x100000;  /* "_3.00.33_250117" */
            uint32_t r3_1;
            
            if (TEST_BIT(r3_1 + 0xfd, 0))
            {
                int32_t temp1_1 = r2;
                int32_t temp2_1 = r2;
                r2 *= 2;
                r1_1 = r1_1 + r1_1;
            }
            
            int32_t r1_2 = 0x40000000;
            int32_t r2_1 = r2 << 0xa;
            int32_t r7 = 0;
            int32_t r3_8 = (r1_1 << 0xa | r2 >> 0x16) - 0x40000000;  /* ".00.33_250117" */
            
            for (uint32_t i = 0x10000000; i; i u>>= 1)
            {
                int32_t r5_1 = r3_8 - r1_2;
                
                if (r3_8 - r1_2 >= 0 && r5_1 - i >= 0)
                {
                    r3_8 = r5_1 - i;
                    r1_2 += i << 1;
                }
                
                int32_t temp3_1 = r2_1;
                int32_t temp4_1 = r2_1;
                r2_1 *= 2;
                r3_8 = r3_8 + r3_8;
            }
            
            if (r3_8 - r1_2 >= 0)
            {
                int32_t r4_4 = r3_8 - r1_2 - 1;
                
                if (r4_4 >= 0)
                {
                    r2_1 -= 0x80000000;
                    r3_8 = r4_4;
                    r1_2 += 1;
                }
            }
            
            int32_t r4_5 = r2_1 * 2;
            int32_t r3_9 = r3_8 + r3_8;
            
            for (uint32_t i_1 = 0x40000000; i_1 != 0x80; i_1 u>>= 1)
            {
                int32_t r6_1 = r4_5 - r7;
                int32_t r5_6 = r3_9 - r1_2;
                
                if (r5_6 >= 0)
                {
                    int32_t r5_7 = r5_6 - 0;
                    
                    if (r5_7 >= 0)
                    {
                        r3_9 = r5_7;
                        r4_5 = r6_1 - i_1;
                        r7 += i_1 << 1;
                    }
                }
                
                int32_t temp7_1 = r4_5;
                int32_t temp8_1 = r4_5;
                r4_5 *= 2;
                r3_9 = r3_9 + r3_9;
            }
            
            int32_t r3_10 = r3_9 | r4_5;
            
            if (r3_10)
                r3_10 = 2;
            
            if (TEST_BIT(r7, 9))
                r3_10 |= 1;
            
            int32_t r0_2 = r7 >> 0xa | r1_2 << 0x16;  /* ".00.33_250117" */
            
            if (r3_10)
            {
                if (TEST_BIT(r3_10, 0))
                    r0_2 += 1;
                
                if (!(r3_10 >> 1))
                    return r0_2 >> 1 << 1;
            }
            
            return r0_2;
        }
        
        if (arg2 << 0xc | r2 || arg2 < 0)
            return 0;
    }
    else if (arg2 << 0xc | r2)
        return 0;
    
    return r2;
}

int32_t sub_13ce0() __pure
{
    return 0x20dc2c;
}

uint32_t sub_13ce8(int32_t arg1, int32_t arg2)
{
    if (arg2 << 0xb >= 0)
        return 0;
    
    if (arg2 << 0xd >> 0x1d)  /* "250117" */
        return ~(arg2 << 0xf) << 1;
    
    uint32_t result = __mrs(apsr) << 4 >> 4 | 0x30000000;
    __msr(apsr_nzcvq, result);
    return result;
}

int32_t sub_13d18(int32_t arg1)
{
    return sub_13d2c(0, 0x7ff80000, arg1);
}

void sub_13d2c(uint32_t arg1, uint32_t arg2, int32_t arg3)
{
    if (arg3 << 0x1c >> 0x1c == 9)  /* "_250117" */
        sub_13ce8(8, arg3);
}

int32_t sub_13d8a(int32_t* arg1, int32_t arg2)
{
    char var_48[0x1c];
    0xff81b968(&var_48, 0x1c);  /* "_250117" */
    int32_t lr = var_48[0];
    int32_t i = 0;
    int32_t var_24 = 0;
    int32_t r2 = 0;
    int32_t r3 = 0;
    int32_t r12 = 0;
    int32_t var_1c = 0;
    
    for (; i < arg2; i = i + 1)
        var_48[i] = 0;
    
    int32_t j_2 = 0;
    int32_t i_1 = arg2 - 1;
    int32_t i_5 = i_1;
    
    for (; j_2 < i_1; i_1 = i_5)
    {
        int32_t j = j_2 + 1;
        int32_t j_1 = j;
        
        for (; j < arg2; j = j + 1)
        {
            int32_t r6_3 = arg1[j_2];
            int32_t r7_2 = arg1[j];
            
            if (r6_3 == r7_2 && r6_3 && r7_2)
            {
                var_48[j_2] += 1;
                arg1[j] = 0;
            }
        }
        
        if (arg1[j_2])
            var_48[j_2] += 1;
        
        j_2 = j_1;
    }
    
    if (*(&arg1[arg2] - 4))
        *(&var_48[arg2] - 1) += 1;
    
    for (int32_t i_2 = 0; i_2 < arg2; i_2 = i_2 + 1)
    {
        int32_t r1_2 = var_48[i_2];
        
        if (r1_2 > lr)
        {
            lr = r1_2;
            r2 = arg1[i_2];
        }
    }
    
    for (int32_t i_3 = 0; i_3 < arg2; i_3 = i_3 + 1)
    {
        int32_t r1_4 = var_48[i_3];
        
        if (r1_4 > var_24 && r1_4 <= lr)
        {
            int32_t r6_8 = arg1[i_3];
            
            if (r6_8 != r2)
            {
                r3 = r6_8;
                var_24 = r1_4;
            }
        }
    }
    
    for (int32_t i_4 = 0; i_4 < arg2; i_4 = i_4 + 1)
    {
        int32_t r1_5 = var_48[i_4];
        
        if (r1_5 > var_1c && r1_5 <= var_24)
        {
            int32_t r6_12 = arg1[i_4];
            
            if (r6_12 != r3 && r6_12 != r2)
            {
                r12 = r6_12;
                var_1c = r1_5;
            }
        }
    }
    
    if (!r3)
        r3 = r2;
    
    if (!r12)
        r12 = r2;
    
    return sub_12b3e(r2 + r3 + r12, 3);
}

int32_t sub_13eb4(int32_t arg1)
{
    void var_1c;
    0xff81b898(&var_1c, arg1, 6);
    void var_14;
    0xff81b91a(&var_14, 6, 0xff);
    int16_t var_28 = 0x33;  /* "2_V3.0" */
    char var_26 = 6;
    void* var_24 = &var_1c;
    void* var_20 = &var_14;
    0xff7e1a56(0x23000000, "Ready to update MAC!\n");
    return sub_14198(0x801400, 0x801400, &var_28, 1);
}

int32_t sub_13f18(int32_t, int32_t, int32_t, uint32_t arg4)
{
    int32_t lr;
    uint32_t r5 = *(lr - 1);
    
    if (arg4 < r5)
        r5 = arg4;
    
    /* jump -> lr + (*(lr + r5) << 1) */
}

int32_t sub_13f34()
{
    int32_t r0 = sub_14a1c();
    
    if (r0 > 0xea6)
        return 0x7d;
    
    if (r0 >= 0x9f6)
        return sub_12b3e(0x64 * r0, 0xbb8);
    
    return 0x55;
}

int32_t sub_13f68(char* arg1)
{
    uint32_t r0 = sub_12b14(arg1);
    
    if (r0 == 0x8721bee2)
        return 1;
    
    0xff7e1a56(0x23000000, "wrong signature! Read %8X != Requried %8X\n", r0, 0x8721bee2);
    return 0;
}

int32_t sub_13fb8(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0 = 0xff7eec80(0, 0x400, 0x83e93a, 0x27);
    
    if (!r0)
        return 0xff7e1a56(0x23000000, "malloc %d bytes fail!", 0x400);
    
    int32_t var_28 = 0x800;
    int32_t r0_1 = 0xff7eec80(0, 0x800, 0x83e93a, 0x30, var_28);  /* "RY02_V3.0" */
    int32_t r0_12;
    
    if (!r0_1)
    {
        0xff7e1a56(0x23000000, "malloc %d bytes fail!", var_28);
        r0_12 = r0;
    }
    else
    {
        char var_24 = 0;
        0xff81b898(r0, arg1 - 0x400, 0x400);
        0xff81b898(r0_1, arg1 + 0x400, var_28);
        0xff7e498c(arg1 - 0x400, &var_24);
        0xff7e41f0(2, arg1 - 0x400);
        0xff7e4650(arg1 - 0x400, 0x400, r0);
        0xff7e4650(arg1, arg3, arg2);
        0xff7e4650(arg1 + 0x400, var_28, r0_1);
        0xff7e4966(var_24, &var_28);
        0xff7eed9c(r0);
        r0_12 = r0_1;
    }
    
    return 0xff7eed9c(r0_12);
}

int32_t sub_14088(int32_t arg1) __pure
{
    if (arg1 - 0x30 >= 0xa)  /* "RY02_V3.0" */
        return 0;
    
    return 1;
}

int32_t sub_14098(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    uint32_t r0 = *0x2084a9;
    int32_t r4_1 = sub_13f18(r0, arg2, arg3, r0, arg4) << 0x10;  /* "RY02_3.00.33_250117" */
    int32_t r0_3 = sub_14a1c();
    int32_t r7;
    
    if (r0_3 > 0x1a5e)
        r7 = 0x87;
    else if (r0_3 >= 0xfa0)
        r7 = sub_12b3e(0x64 * r0_3, 0x1388);
    else
        r7 = 0x50;
    
    *(r4_1 + 6) = sub_12b3e(0x28 * r7 * *0x2084a6, 0x2710);
    char result = sub_12b3e(0x37 * r7 * *0x2084b0, 0x2710);  /* ".0" */
    *(r4_1 + 5) = result;
    return result;
}

uint32_t sub_14148(int32_t arg1)
{
    if (!arg1)
        return 0;
    
    int32_t r0_2 = arg1 - *0x2084a4;
    
    if (r0_2 <= 0)
        return 5;
    
    int32_t r0_3;
    int32_t r1_1;
    int32_t r2_1;
    int32_t r3_1;
    
    if (!*0x2084a8)
    {
        r0_3 = sub_1351a(r0_2);
        r2_1 = 0xcccccccd;
        r3_1 = 0x3ff4cccc;
    }
    else
    {
        r0_3 = sub_1351a(r0_2);
        r2_1 = 0x9999999a;
        r3_1 = 0x3ff19999;
    }
    
    int32_t r0_4;
    int32_t r1_2;
    r0_4 = sub_13530(r0_3, r1_1, r2_1, r3_1);
    return sub_13424(r0_4, r1_2);
}

int32_t sub_14198(char* arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    char* var_24 = arg1;
    void var_30;
    void* var_34 = &var_30;
    int32_t r6 = 0;
    
    if (arg4 > 0x20)  /* "117" */
        return 0;
    
    uint32_t r5_1 = (arg1[5] << 8 | arg1[4]) + 6;
    0xff7e1a56(0x23000000, "old config len %d");
    int16_t var_80[0x20];
    
    for (uint32_t i = 0; i < arg4; i = i + 1)
    {
        int16_t* r7_1 = i * 0xc + arg3;
        
        if (sub_14380(arg1, r7_1, &var_80[i]))
            r6 |= 1 << i;
        
        0xff7e1a56(0x23000000, "item[%d] len %d", i, r7_1[1]);
        
        if (!(1 << i & r6))
            r5_1 = (r7_1[1] << 1) + r5_1 + 3;
    }
    
    void* r5_3 = (r5_1 + 3) & &data_fffc;
    void* r0_14 = 0xff7eecda(0, r5_3, 0x83e94e, 0xae);
    
    if (!r0_14)
    {
        0xff7e1a56(0x23000000, "malloc %d bytes fail!", r5_3);
        return 0;
    }
    
    0xff81b91a(r0_14, r5_3, 0xff);
    uint32_t r4_2 = (arg1[5] << 8 | arg1[4]) + 6;
    0xff81b898(r0_14, arg1, r4_2);
    uint32_t i_1 = 0;
    void* var_40_1 = r0_14 + r4_2;
    
    for (; i_1 < arg4; i_1 = i_1 + 1)
    {
        void* r4_3 = i_1 * 0xc + arg3;
        
        if (!(1 << i_1 & r6))
        {
            int32_t r0_30 = (*(r0_14 + 5) << 8 | *(r0_14 + 4)) + (*(r4_3 + 2) << 1) + 3;
            *(r0_14 + 4) = r0_30;
            *(r0_14 + 5) = r0_30 >> 8;
            0xff81b898(var_40_1, r4_3, 3);
            uint32_t r2_10 = *(r4_3 + 2);
            0xff81b898(var_40_1 + 3, *(r4_3 + 4), r2_10);
            void* r0_36 = var_40_1 + 3 + r2_10;
            0xff81b898(r0_36, *(r4_3 + 8));
            var_40_1 = r0_36 + r2_10;
        }
        else
        {
            void* r0_24 = var_80[i_1] + r0_14 + 3;
            *(var_34 + 4) = r0_24;
            *(var_34 + 8) = r0_24 + *(r4_3 + 2);
            0xff81b898(r0_24, *(r4_3 + 4), *(r4_3 + 2));
            0xff81b898(*(var_34 + 8), *(r4_3 + 8), *(r4_3 + 2));
        }
    }
    
    0xff7e1a56(0x23000000, "new config len %d, backup_len %d", *(r0_14 + 5) << 8 | *(r0_14 + 4), 
        r5_3);
    sub_13fb8(arg2, r0_14, r5_3);
    0xff7eed9c(r0_14);
    return 1;
}

int32_t sub_14380(char* arg1, int16_t* arg2, uint16_t* arg3)
{
    if (!sub_13f68(arg1))
        0xff7e1a56(0x23000000, "Header is invalid\n");
    else
    {
        uint16_t var_30_1 = arg1[6] + (arg1[7] << 8);
        uint32_t r1_2 = arg1[8];
        uint8_t var_2e_1 = r1_2;
        void* var_2c_1 = &arg1[9];
        uint32_t i = 6;
        void* r5_2 = &arg1[6];
        void* var_28_1 = &arg1[9 + r1_2];
        
        while ((arg1[5] << 8 | arg1[4]) + 6 > i)
        {
            0xff7e1a56(0x23000000, "pos %02x, offset %02x\n", i, var_30_1, var_30_1, var_2c_1, 
                var_28_1, 0, arg1, arg2, arg3);
            
            if (var_30_1 == *arg2)
            {
                uint32_t r2_1 = var_2e_1;
                
                if (r2_1 == arg2[1] && !0xff81b7f8(var_28_1, *(arg2 + 8), r2_1))
                {
                    if (arg3)
                        *arg3 = i;
                    
                    0xff7e1a56(0x23000000, &data_14478, var_30_1);
                    return 1;
                }
            }
            
            int32_t r0_13 = (var_2e_1 << 1) + 3;
            r5_2 += r0_13;
            var_30_1 = *r5_2 + (*(r5_2 + 1) << 8);
            uint32_t r2_4 = *(r5_2 + 2);
            var_2e_1 = r2_4;
            var_2c_1 = r5_2 + 3;
            i = i + r0_13;
            var_28_1 = r2_4 + r5_2 + 3;
            
            if (i >= 0x3fa)
                break;
        }
    }
    
    return 0;
}

int32_t sub_1448c()
{
    0xff81b898(0x20dae4, 0x202cf1, 0xe);
    return 0x20dae4;
}

int32_t sub_1449c(int32_t arg1, char arg2, void* arg3 @ r4, int32_t arg4 @ r6, void* arg5 @ r7)
{
    if (arg3 < 0 != arg3 - 0xf1)
        /* tailcall */
        return sub_144a4(arg3);
    
    data_31 = arg2;
    *(arg3 + 0x60) = *(arg5 + 0x5b);
    data_70 = arg5;
    data_9f = arg4;
    /* tailcall */
    return sub_1448c();
}

void sub_144a4(uint32_t arg1)
{
    uint32_t r1 = *0x20d953;
    
    if (r1)
    {
        uint32_t r1_3 = (r1 - 1) << 0x18 >> 0x18;  /* "0.33_250117" */
        *0x20d953 = r1_3;
        
        if (r1_3)
            *0x20d953 = r1_3 - 1;
    }
    
    uint32_t r2 = *0x2084a5;
    uint32_t r3 = *0x20d951;
    uint32_t r1_5 = *0x20d952;
    
    if (r3 >= r2)
    {
        uint16_t r7_1 = r1_5 + arg1;
        *0x20d944 += r7_1;
        *0x20d952 = 0;
        uint32_t r0_8 = *0x20d948 + r7_1;
        *0x20d948 = r0_8;
        
        if (r0_8 >= 0x14)  /* "_3.00.33_250117" */
        {
            sub_14098(r0_8, r1_5, r2, r3);
            *0x20d948 = 0;
        }
        
        sub_15300(r7_1);
    }
    else
    {
        if (r1_5)
        {
            *0x20d951 = r3 + r1_5;
            *0x20d952 = 0;
        }
        
        if (arg1)
        {
            uint32_t r1_7 = *0x20d951;
            arg1 = r1_7 + arg1;
            *0x20d951 = arg1;
            
            if (arg1 >= r2)
            {
                sub_14098(arg1, r1_7, r2, r3);
                uint16_t r0_3 = *0x20d944 + *0x20d951;
                *0x20d944 = r0_3;
                *0x20d955 = 1;
                *0x20d954 = 0;
                *0x20d948 = 0;
                sub_15300(r0_3);
            }
        }
    }
}

int32_t sub_14530(int32_t arg1, int32_t arg2)
{
    int32_t var_20_1 = arg2;
    int32_t r0_3 = sub_12b3e(*0x20d990 * 7 + arg1 * 3, 0xa);
    *0x20d990 = r0_3;
    int32_t r0_4 = r0_3 * 3;
    char* r0_7;
    
    r0_7 = ((r0_4 >> 0x1f >> 0x1e) + r0_4) >> 2 > arg1 ? 0x20d994 : 0x20d9a8;
        /* "50117" */  /* "0117" */
    
    if (arg2 < 5)
        return 0;
    
    *0x20d98c ^= 1;
    uint32_t r1_7 = *r0_7;
    
    if (r1_7 < 4)
        *r0_7 = r1_7 + 1;
    
    void* r1_11 = &r0_7[r0_7[1] << 1];
    *(r0_7 + 8) += arg1 - *(r1_11 + 0xc);
    *(r1_11 + 0xc) = arg1;
    uint32_t r1_14 = r0_7[1] + 1;
    r0_7[1] = r1_14;
    
    if (r1_14 >= 4)
        r0_7[1] = 0;
    
    int32_t r0_10 = sub_12b2a(*(r0_7 + 8), *r0_7);
    uint32_t r1_16 = *0x20d994;
    uint32_t r4 = 0;
    
    if (r1_16)
        r4 = sub_12b2a(*0x20d99c, r1_16);
    
    uint32_t r1_17 = *0x20d9a8;
    
    if (r1_17)
        r4 = (sub_12b2a(*0x20d9b0, r1_17) + r4) >> 1;
    
    int32_t var_20 = 7;
    int32_t r7 = 0x25;
    
    if (r4 >= 0x1770)
    {
        r7 = 0x1e;  /* "50117" */
        var_20 = 5;
    }
    else if (r4 >= 0xfa0)
    {
        r7 = 0x20;  /* "117" */
        var_20 = 6;
    }
    
    int32_t r0_17 = arg1 - r0_10;
    
    if (arg1 - r0_10 < 0)
        r0_17 = 0 - r0_17;
    
    int32_t r0_20 = sub_12b3e(r0_10 << 2, 0xa);
    
    if (r0_20 < 0xa8c)
        r0_20 = 0xa8c;
    else if (r0_20 > 0x1b58)
        r0_20 = 0x1b58;
    
    if (r0_17 >= r0_20)
    {
        sub_14824(1);
        sub_12b3e(r0_17, 0xa8c);
        sub_14854();
    }
    else
    {
        uint32_t r1_19 = *0x20d951;
        
        if (r1_19 < *0x2084a5 && arg1 < 0x7d0)  /* "17 10:58:10 2022" */
            sub_14824(0);
        else if (arg2 < var_20 || arg2 > r7)
        {
            if (arg2 > r7 && !r1_19)
                *0x20d988 += 1;
            
            if (arg2 <= r7)
                sub_14824(0);
            else
                sub_14824(1);
        }
        else
            *0x20d988 += 1;
    }
    
    return 1;
}

int32_t sub_14694(int32_t arg1, int32_t arg2)
{
    int32_t r4 = arg2;
    
    if (arg1 >= 0x190)
    {
        if (r4 >= 5)
        {
            uint32_t r1 = *0x20d9bc;
            
            if (r1 < 4)
                *0x20d9bc = r1 + 1;
            
            *0x20d9c4 += arg1 - *((*0x20d9bd << 1) + 0x20d9c8);
            *((*0x20d9bd << 1) + 0x20d9c8) = arg1;
            uint32_t r1_9 = *0x20d9bd + 1;
            *0x20d9bd = r1_9;
            
            if (r1_9 >= 4)
                *0x20d9bd = 0;
            
            int32_t r1_10 = *0x20d988;
            
            if (!r1_10)
                sub_14824(0);
            else
            {
                int32_t r0_3 = sub_12b2a(*0x20d9c4, *0x20d9bc);
                int32_t var_24_1 = 0x25;
                int32_t r7_1 = 7;
                
                if (arg1 >= 0x1770)
                {
                    r7_1 = 5;
                    var_24_1 = 0x1e;  /* "50117" */
                }
                else if (arg1 >= 0xfa0)
                {
                    r7_1 = 6;
                    var_24_1 = 0x20;  /* "117" */
                }
                
                uint32_t var_28_1 = 1;
                uint32_t r0_5 = *0x20d9e6;
                
                if (r0_5)
                {
                    int32_t r0_8 = sub_12b3e(r4 * 0x64, sub_12b2a(r0_5, *0x20d9e4));
                    
                    if (r0_8 < 0x32)  /* "02_V3.0" */
                    {
                        sub_14824(0);
                        var_28_1 = 0;
                    }
                    else if (r1_10 <= 1)
                    {
                        if (!*0x20d952 && r0_8 > 0xa0 && r7_1 << 1 < r4)
                            *0x20d952 = 1;
                    }
                    else if (r0_8 > 0x4b && r7_1 << 1 < r4)
                    {
                        var_28_1 = 2;
                        *0x20d952 = 0;
                        r4 s>>= 1;
                    }
                }
                else if (r1_10 > 1 && r7_1 << 1 < r4)
                {
                    var_28_1 = 2;
                    *0x20d952 = 0;
                    r4 s>>= 1;
                }
                
                uint32_t r1_16 = *0x20d9e5;
                *0x20d9e6 += r4 - *(r1_16 + 0x20d9e8);
                *(r1_16 + 0x20d9e8) = r4;
                uint32_t r0_13 = *0x20d9e5 + 1;
                *0x20d9e5 = r0_13;
                
                if (r0_13 >= 4)
                    *0x20d9e5 = 0;
                
                uint32_t r0_14 = *0x20d9e4;
                
                if (r0_14 < 4)
                    *0x20d9e4 = r0_14 + 1;
                
                int32_t r0_18 = sub_12b3e(r0_3 << 2, 0xa);
                
                if (r0_18 > 0x1b58)
                    r0_18 = 0x1b58;
                
                if (r0_3 - arg1 >= r0_18)
                {
                    sub_14824(var_28_1);
                    *0x20d988 = 0;
                }
                else if (r4 < r7_1 || r4 > var_24_1)
                    sub_14824(0);
                else
                {
                    sub_144a4(var_28_1);
                    *0x20d988 = 0;
                }
            }
            
            return 1;
        }
        
        sub_14854();
    }
    
    return 0;
}

void sub_14824(uint32_t arg1)
{
    uint32_t r3 = *0x20d953 + 1;
    *0x20d953 = r3;
    *0x20d952 += arg1;
    
    if (r3 >= 5)
    {
        *0x20d951 = 0;
        *0x20d953 = 0;
        *0x20d952 = 0;
    }
    
    if (*0x20d952 == arg1 && !*0x20d951)
        *0x20d953 = 0;
}

int32_t sub_14854()
{
    if (*0x20d951 < *0x2084a5)
    {
        uint32_t r1_3 = *0x20d954 + 1;
        *0x20d954 = r1_3;
        
        if (r1_3 > 5)
        {
            *0x20d951 = 0;
            *0x20d953 = 0;
            *0x20d952 = 0;
        }
    }
    
    return 0x20d950;
}

uint32_t sub_14880(int32_t arg1)
{
    uint32_t r2 = *0x20d9d0;
    
    if (r2 < 3)
        *0x20d9d0 = r2 + 1;
    
    void* r3_2 = (*0x20d9d1 << 1) + 0x20d9d0;
    *0x20d9d8 += arg1 - *(r3_2 + 0xc);
    *(r3_2 + 0xc) = arg1;
    uint32_t r0_2 = *0x20d9d1 + 1;
    *0x20d9d1 = r0_2;
    
    if (r0_2 >= 3)
        *0x20d9d1 = 0;
    
    uint32_t result = 0x7fffffff;
    
    for (int32_t i = 0; *0x20d9d0 > i; i += 1)
    {
        uint32_t result_1 = *((i << 1) + 0x20d9dc);
        
        if (result_1 < result)
            result = result_1;
    }
    
    *0x20d9d4 = result;
    return result;
}

int32_t sub_148e0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    int32_t r0_3 = ((arg1 >> 0x1f >> 0x1d) + arg1) >> 3;  /* "250117" */  /* "0117" */
    int32_t r1_3 = ((arg2 >> 0x1f >> 0x1d) + arg2) >> 3;  /* "250117" */  /* "0117" */
    int32_t r2_3 = ((arg3 >> 0x1f >> 0x1d) + arg3) >> 3;  /* "250117" */  /* "0117" */
    int32_t r0_7;
    int32_t r1_5;
    r0_7 = sub_1351a(r0_3 * r0_3 + r1_3 * r1_3 + r2_3 * r2_3);
    int32_t r0_8;
    int32_t r1_6;
    r0_8 = sub_154fc(r0_7, r1_5);
    int32_t r0_9;
    int32_t r1_7;
    r0_9 = sub_13778(r0_8, r1_6, 3);
    uint32_t r0_10;
    int32_t r2_5;
    int32_t r3;
    r0_10 = sub_13490(r0_9, r1_7);
    int32_t r1_8 = *0x20da8c;
    
    if (!r1_8)
        *0x20da8c = r0_10;
    else
        r0_10 = sub_12b2a(r1_8 * 3 + r0_10 * 7, 0xa);
    
    *0x20da8c = r0_10;
    sub_14a7c(r0_10, r1_8, r2_5, r3);
    void* r1_13 = (*0x20da90 << 1) + 0x20da90;
    *0x20daa0 += arg1 - *(r1_13 + 2);
    *(r1_13 + 2) = arg1;
    void* r1_17 = (*0x20da90 << 1) + 0x20da90;
    *0x20daa4 += arg2 - *(r1_17 + 6);
    *(r1_17 + 6) = arg2;
    void* r1_21 = (*0x20da90 << 1) + 0x20da90;
    *0x20daa8 += arg3 - *(r1_21 + 0xa);
    *(r1_21 + 0xa) = arg3;
    uint32_t r1_24 = *0x20da90 + 1;
    *0x20da90 = r1_24;
    
    if (r1_24 >= 2)
        *0x20da90 = 0;
    
    int32_t r0_13 = *0x20daa0;
    int32_t r0_16 = ((r0_13 >> 0x1f) + r0_13) >> 1;  /* "0117" */
    *0x2084aa = r0_16;
    int32_t r1_26 = *0x20daa4;
    int32_t r1_29 = ((r1_26 >> 0x1f) + r1_26) >> 1;  /* "0117" */
    *0x2084ac = r1_29;
    int32_t r2_15 = *0x20daa8;
    int32_t r2_18 = ((r2_15 >> 0x1f) + r2_15) >> 1;  /* "0117" */
    *0x2084ae = r2_18;
    
    if (*0x20d947)
        sub_14d70(r0_16, r1_29, r2_18);
    
    return sub_15478(*0x2084ac);
}

uint32_t sub_149ec()
{
    uint32_t result = *0x20d945;
    *0x20d945 = 0;
    return result;
}

uint32_t sub_149fc()
{
    uint32_t result = *0x20d94e;
    *0x20d94e = 0;
    return result;
}

uint32_t sub_14a0c()
{
    uint32_t result = *0x20d94c;
    *0x20d94c = 0;
    return result;
}

int32_t sub_14a1c()
{
    int32_t result = *0x20d990;
    
    if (result >= 0)
        return result;
    
    return 0 - result;
}

uint32_t sub_14a2c()
{
    uint32_t result = *0x20d944;
    *0x20d944 = 0;
    return result;
}

int32_t sub_14a3c()
{
    if (*0x20d946 < 0x7d)
        return 0;
    
    return 1;
}

int32_t sub_14a50()
{
    0xff81b968(0x20d950, 0x15c);
    sub_14cc4(0, 0xaa, 0x46);
    sub_153a4(2);
    *0x2084a5 = 0xf;
    return 0xf;
}

int32_t sub_14a7c(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_20 = arg2;
    int16_t r7 = arg1;
    int32_t r2 = *0x20d968;
    
    if (!r2)
    {
        *0x20d968 = arg1 * 3;
        
        for (int32_t i = 0; i < 3; )
        {
            void* r2_6 = (i << 1) + 0x20d950;
            i += 1;
            *(r2_6 + 0x1c) = r7;  /* "_250117" */
        }
    }
    else
    {
        void* r1_2 = (*0x20d964 << 1) + 0x20d950;
        *0x20d968 = r2 + arg1 - *(r1_2 + 0x1c);  /* "_250117" */
        *(r1_2 + 0x1c) = r7;  /* "_250117" */
        uint32_t r1_5 = *0x20d964 + 1;
        *0x20d964 = r1_5;
        
        if (r1_5 >= 3)
            *0x20d964 = 0;
    }
    
    *((*0x20d974 << 1) + 0x20d976) = sub_12b2a(*0x20d968, 3);
    uint32_t r0_5 = *0x20d9ec;
    
    if (r0_5 < 0x4b)
        *0x20d9ec = r0_5 + 1;
    
    void* r0_9 = (*0x20d9ed << 1) + 0x20d9d0;
    *0x20da84 += arg1 - *(r0_9 + 0x1e);  /* "50117" */
    *(r0_9 + 0x1e) = r7;  /* "50117" */
    uint32_t r0_12 = *0x20d9ed + 1;
    *0x20d9ed = r0_12;
    
    if (r0_12 >= 0x4b)
        *0x20d9ed = 0;
    
    int32_t r0_14 = sub_12b2a(*0x20da84, *0x20d9ec);
    uint32_t r0_15 = *0x20d946;
    
    if (r0_15 < 0x7d)
    {
        uint32_t r0_17 = r0_15 + 1;
        *0x20d946 = r0_17;
        
        if (r0_17 >= 0x7d)
        {
            int32_t r0_19;
            int32_t r1_10;
            r0_19 = j_sub_134d8(*0x2084a6);
            int32_t r0_20;
            int32_t r1_11;
            r0_20 = sub_13530(r0_19, r1_10, 0x851eb852, 0x3fd851eb);
            *0x20d94a = sub_13490(r0_20, r1_11);
            *0x20d949 = sub_12b3e(0x2f * *0x2084b0, 0x64);
        }
    }
    
    uint32_t r0_26 = sub_1531c(&var_1c, &var_18);
    uint32_t r0_27 = *0x20d950;
    
    if (!r0_27)
    {
        if (var_1c)
        {
            if (!*0x20d960)
            {
                *0x20d960 = r0_14;
                *0x20d958 = *0x20da88;
                sub_14880(r0_14);
            }
            
            if (r0_26)
            {
                *0x20d950 = 2;
                *0x20d95c = *0x20da88;
                *0x20d962 = r0_26;
                *0x20d988 = 1;
            }
        }
    }
    else if (r0_27 == 1)
    {
        if (var_1c)
        {
            *0x20d950 = 2;
            int32_t r2_7 = r0_26 - r0_14;
            int32_t r3_2 = r0_26 - *0x20d9d4;
            
            if (r2_7 >= 0x2bc)
            {
                if (r2_7 >= 0xbb8)
                    *0x20d945 += 1;
                
                *0x20d945 += 1;
                *0x20d946 = 0;
            }
            
            *0x20d990 = r2_7;
            
            if (r3_2 >= 0x708 && r2_7 >= 0)
            {
                if (!sub_14530(r3_2, *0x20da88 - *0x20d95c))
                    sub_14824(0);
                else
                {
                    *0x20d95c = *0x20da88;
                    *0x20d962 = r0_26;
                    *0x20d956 = 0;
                }
            }
        }
    }
    else if (r0_27 == 2 && var_18)
    {
        *0x20d950 = 1;
        int32_t r6_2 = r0_14 - r0_26;
        
        if (!sub_14694(r6_2, *0x20da88 - *0x20d958))
            sub_14880(r0_26);
        else
        {
            sub_14880(r0_26);
            *0x20d958 = *0x20da88;
            *0x20d960 = r0_26;
        }
        
        *0x20d990 = r6_2;
    }
    
    int32_t r0_46 = *0x20da88 + 1;
    *0x20da88 = r0_46;
    uint32_t r2_8 = *0x20d974 + 1;
    *0x20d974 = r2_8;
    
    if (r2_8 >= 9)
    {
        r2_8 = 0x20d970;
        *0x20d974 = 0;
    }
    
    int32_t result = r0_46 - *0x20d95c;
    
    if (result < 0x50)
        return result;
    
    return 0xff81b968(0x20d950, 0x15c, r2_8);
}

void sub_14c90(int32_t arg1)
{
    if (arg1 < 0xa)
        arg1 = 0xa;
    else if (arg1 > 0x28)
        arg1 = 0x28;
    
    *0x2084a5 = arg1;
}

int32_t sub_14ca8(char arg1, int32_t arg2)
{
    *0x2084a9 = arg1;
    int32_t r0_1 = arg2 - 0x28;
    
    if (r0_1 >= 0x3d)
        arg2 = 0x41;
    
    *0x2084a4 = arg2;
    int32_t entry_r3;
    return sub_14098(r0_1, arg2, 0x2084a4, entry_r3);
}

uint32_t sub_14cc4(char arg1, int32_t arg2, int32_t arg3)
{
    if (arg2 < 0x50)
        arg2 = 0x50;
    else if (arg2 > 0xfa)
        arg2 = 0xfa;
    
    uint32_t r0 = arg2;
    *0x2084a6 = r0;
    
    if (r0 < 0xa0)
        *0x2084a6 = ((((0xa0 - r0) >> 0x1f) + 0xa0 - r0) >> 1) + r0;  /* "0117" */
    
    if (arg3 < 0x14)  /* "_3.00.33_250117" */
        arg3 = 0x14;  /* "_3.00.33_250117" */
    else if (arg3 > 0xdc)
        arg3 = 0xdc;
    
    uint32_t r0_2 = arg3;
    uint32_t r2 = arg1;
    *0x2084a7 = r0_2;
    *0x2084a8 = r2;
    int32_t r0_4;
    int32_t r1_3;
    
    if (r2 == 1)
    {
        if (r0_2 <= 0x32)  /* "02_V3.0" */
        {
            *0x2084b0 = 0x64;
            return r0_2;
        }
        
        r0_4 = 0x32 * (r0_2 - 0x32);  /* "02_V3.0" */
        r1_3 = 0xf;
    }
    else
    {
        if (r0_2 <= 0x41)
        {
            *0x2084b0 = 0x64;
            return r0_2;
        }
        
        r0_4 = 0x32 * (r0_2 - 0x41);  /* "02_V3.0" */
        r1_3 = 0x14;  /* "_3.00.33_250117" */
    }
    
    int32_t r0_7 = sub_12b3e(r0_4, r1_3) + 0x65;
    *0x2084b0 = r0_7;
    
    if (r0_7 <= 0xc8)
        return r0_7;
    
    *0x2084b0 = 0xc8;
    return r0_7;
}

void sub_14d44(uint32_t arg1)
{
    if (*0x2084a9 > 4)
        *0x20d94c = sub_14148(arg1) + *0x20d94c;
}

int32_t sub_14d64()
{
    *0x20d946 = 0;
    return 0;
}

int32_t sub_14d70(int32_t arg1, int32_t arg2, int32_t arg3)
{
    *((*0x208560 << 1) + 0x208562) = arg1;
    *((*0x208560 << 1) + 0x208594) = arg2;
    *((*0x208560 << 1) + 0x2085c6) = arg3;
    int32_t result_1 = 0;
    *((*0x208560 << 1) + 0x2085f8) = arg1 - *0x20862a;
    *0x20862a = arg1;
    uint32_t r1_8 = *0x208560 + 1;
    *0x208560 = r1_8;
    
    if (r1_8 >= 0x19)  /* ".33_250117" */
        *0x208560 = 0;
    
    if (*0x208558)
    {
        int32_t r0_5;
        
        if (arg2 + 0xd1f < 0x1a3f)
        {
            int32_t r0_4 = sub_12b3e(*0x208634, 9);
            r0_5 = arg2 - r0_4;
            
            if (arg2 - r0_4 < 0)
                r0_5 = 0 - r0_5;
        }
        
        if (arg2 + 0xd1f >= 0x1a3f || r0_5 >= 0x4b0)
            *0x20864d = 0;
        else
        {
            uint32_t r0_6 = *0x20864d;
            
            if (r0_6 < 0xc8)
                *0x20864d = r0_6 + 1;
        }
        
        int32_t r0_9 = sub_12b3e(*0x208630, 9);
        int32_t r0_10 = arg1 - r0_9;
        
        if (arg1 - r0_9 < 0)
            r0_10 = 0 - r0_10;
        
        if (r0_10 >= 0x4b0)
            *0x20864c = 0;
        else
        {
            uint32_t r0_11 = *0x20864c;
            
            if (r0_11 < 0xc8)
                *0x20864c = r0_11 + 1;
        }
    }
    
    uint32_t r0_13 = *0x20862d;
    int32_t r2_16 = *0x208630 + *((r0_13 << 1) + 0x208562);
    *0x208630 = r2_16;
    uint32_t r0_15 = *0x20862c;
    int32_t r0_17 = r2_16 - *((r0_15 << 1) + 0x208562);
    *0x208630 = r0_17;
    int32_t r2_18 = *0x208634 + *((r0_13 << 1) + 0x208594);
    *0x208634 = r2_18;
    int32_t r0_20 = r2_18 - *((r0_15 << 1) + 0x208594);
    *0x208634 = r0_20;
    int32_t r1_13 = *0x208638 + *((r0_13 << 1) + 0x2085c6);
    *0x208638 = r1_13;
    *0x208638 = r1_13 - *((r0_15 << 1) + 0x2085c6);
    int32_t r0_25 = sub_12b3e(r0_17, 9);
    int32_t r0_27 = sub_12b3e(r0_20, 9);
    int32_t r1_14 = *((r0_15 << 1) + 0x208562);
    int32_t var_64 = r1_14;
    int32_t r12_1 = r1_14;
    int32_t r1_15 = *((r0_15 << 1) + 0x208594);
    uint32_t r0_29 = r0_15;
    int32_t var_6c_1 = r1_15;
    int32_t var_5c_1 = r1_15;
    
    while (true)
    {
        int32_t r1_16 = *((r0_29 << 1) + 0x208562);
        
        if (r1_16 < var_64)
            var_64 = r1_16;
        
        if (r1_16 > r12_1)
            r12_1 = r1_16;
        
        int32_t r1_17 = *((r0_29 << 1) + 0x208594);
        
        if (r1_17 < var_5c_1)
            var_5c_1 = r1_17;
        
        if (r1_17 > var_6c_1)
            var_6c_1 = r1_17;
        
        if (r0_13 == r0_29)
            break;
        
        if (r0_29 < 0x18)  /* "0.33_250117" */
            r0_29 += 1;
        else
            r0_29 = 0;
    }
    
    int32_t r0_32 = r12_1 - var_64;
    uint32_t r0_38 = r0_15 + 1;
    *0x20862c = r0_38;
    
    if (r0_38 >= 0x19)  /* ".33_250117" */
        *0x20862c = 0;
    
    uint32_t r0_41 = r0_13 + 1;
    *0x20862d = r0_41;
    
    if (r0_41 >= 0x19)  /* ".33_250117" */
        *0x20862d = 0;
    
    uint32_t r0_42 = *0x20863d;
    int32_t r2_26 = *0x208640 + *((r0_42 << 1) + 0x208562);
    *0x208640 = r2_26;
    uint32_t r0_44 = *0x20863c;
    int32_t r0_46 = r2_26 - *((r0_44 << 1) + 0x208562);
    *0x208640 = r0_46;
    int32_t r2_28 = *0x208644 + *((r0_42 << 1) + 0x208594);
    *0x208644 = r2_28;
    int32_t r0_49 = r2_28 - *((r0_44 << 1) + 0x208594);
    *0x208644 = r0_49;
    int32_t r1_23 = *0x208648 + *((r0_42 << 1) + 0x2085c6);
    *0x208648 = r1_23;
    int32_t r0_52 = r1_23 - *((r0_44 << 1) + 0x2085c6);
    *0x208648 = r0_52;
    int32_t r0_54 = sub_12b3e(r0_46, 9);
    int32_t r0_56 = sub_12b3e(r0_49, 9);
    int32_t r0_58 = sub_12b3e(r0_52, 9);
    int32_t r1_24 = *((r0_44 << 1) + 0x208562);
    int32_t var_64_2 = r1_24;
    int32_t r12_3 = r1_24;
    int32_t r1_25 = *((r0_44 << 1) + 0x208594);
    uint32_t r0_60 = r0_44;
    int32_t var_6c_3 = r1_25;
    int32_t var_5c_2 = r1_25;
    
    while (true)
    {
        int32_t r1_26 = *((r0_60 << 1) + 0x208562);
        
        if (r1_26 < var_64_2)
            var_64_2 = r1_26;
        
        if (r1_26 > r12_3)
            r12_3 = r1_26;
        
        int32_t r1_27 = *((r0_60 << 1) + 0x208594);
        
        if (r1_27 < var_5c_2)
            var_5c_2 = r1_27;
        
        if (r1_27 > var_6c_3)
            var_6c_3 = r1_27;
        
        if (r0_42 == r0_60)
            break;
        
        if (r0_60 < 0x18)  /* "0.33_250117" */
            r0_60 += 1;
        else
            r0_60 = 0;
    }
    
    int32_t r2_34 = r12_3 - var_64_2;
    uint32_t r0_68 = r0_44 + 1;
    *0x20863c = r0_68;
    
    if (r0_68 >= 0x19)  /* ".33_250117" */
        *0x20863c = 0;
    
    uint32_t r0_71 = r0_42 + 1;
    *0x20863d = r0_71;
    
    if (r0_71 >= 0x19)  /* ".33_250117" */
        *0x20863d = 0;
    
    int32_t r7 = 0;
    
    for (int32_t i = 0; i < 0x19; i += 1)  /* ".33_250117" */
    {
        int32_t r1_32 = *((i << 1) + 0x2085f8);
        
        if (r1_32 > r7)
            r7 = r1_32;
    }
    
    uint32_t r0_72 = *0x20864e;
    
    if (!r0_72)
    {
        if (r2_34 < 0x2710 && arg2 < 0x9c4 && arg2 > 0xfffff63c)
        {
            int32_t r1_35 = arg1 - r0_54;
            
            if ((r1_35 > 0x1d4c && arg1 > 0xfffff63c && r0_54 < 0xffffea20 && r7 > 0x9c4)
                || (r1_35 > 0x1d4c && arg1 > 0x15e0 && r0_54 > 0xfffff63c && r7 > 0x5dc) || (
                arg3 - 0x15e1 < 0xa1f && r0_58 < 0xffffea20 && r0_58 > 0xffffe000
                && arg3 - r0_58 > 0x2710) || (r0_56 > 0x15e0 && r0_56 - arg2 > 0xfa0
                && r0_54 < 0xfffffa24 && arg1 > 0xfffffc18 && r1_35 > 0x1068 && r7 > 0x3e8
                && r7 < 0xdac))
            {
                result_1 = 1;
                *0x20864e = 0x19;  /* ".33_250117" */
            }
            else if (r0_56 < 0xffffea20 && arg2 - r0_56 > 0xfa0 && r0_54 < 0xfffffa24
                && arg1 > 0xfffffc18 && r1_35 > 0x1068 && r7 > 0x3e8 && r7 < 0xdac)
            {
                result_1 = 1;
                *0x20864e = 0x19;  /* ".33_250117" */
            }
        }
        else if (r0_25 > 0xfffff63c && r0_27 < 0xbb8 && r0_27 > 0xfffff448 && r0_32 > 0x7d0
            && r2_34 > 0xbb8)  /* "17 10:58:10 2022" */
        {
            int32_t r0_82;
            int32_t r1_39;
            r0_82 = sub_1351a(sub_12b3e(r2_34, r0_32));
            sub_19870(r0_82, r1_39, 0, 0x3ff80000);
            
            if (r2_34 < 0xbb8)
            {
                int32_t r0_85;
                int32_t r1_41;
                r0_85 = sub_1351a(sub_12b3e(var_6c_3 - var_5c_2, var_6c_1 - var_5c_1));
                sub_19870(r0_85, r1_41, 0, 0x3ff40000);
                
                if (r2_34 < 0xbb8 && r0_25 - r0_54 > sub_2260)
                {
                    *0x20864e = 0x19;  /* ".33_250117" */
                    result_1 = 1;
                }
            }
        }
        
        if (*0x208558 && !result_1 && r7 > 0x5dc && *0x20864c >= 3 && *0x20864d > 3)
        {
            int32_t r0_91 = *0x208630;
            int32_t r0_93;
            
            if (r0_91 - *0x208640 <= 0x5dc0 || r0_91 <= 0xffffd120)
            {
                int32_t r3_13 = *0x208644;
                int32_t r0_92 = *0x208634;
                r0_93 = r0_92 - r3_13;
                
                if (r0_92 - r3_13 < 0)
                    r0_93 = 0 - r0_93;
            }
            
            if ((r0_91 - *0x208640 > 0x5dc0 && r0_91 > 0xffffd120) || r0_93 > 0x5dc0)
            {
                *0x20864e = 0x19;  /* ".33_250117" */
                int32_t r0_94 = *0x208638;
                result_1 = 1;
                
                if (r0_94 < 0)
                    r0_94 = 0 - r0_94;
                
                if (r0_94 < 0x5dc)
                {
                    int32_t r0_95 = *0x208648;
                    
                    if (r0_95 < 0)
                        r0_95 = 0 - r0_95;
                    
                    if (r0_95 < 0x5dc)
                    {
                        result_1 = 0;
                        *0x20864e = 0;
                    }
                }
            }
        }
    }
    else
        *0x20864e = r0_72 - 1;
    
    int32_t result = 0x208559;
    uint32_t r1_43 = *0x208559;
    
    if (r1_43 == 1)
    {
        if (arg1 > 0xfffff510 && r0_25 > 0xfffff510)
            *0x208559 = 0;
    }
    else if (!r1_43)
    {
        char r1_45;
        
        if (arg1 < 0xffffea20 || r0_25 < 0xffffea20)
            r1_45 = *0x20855c + 1;
        else
            r1_45 = 0;
        
        *0x20855c = r1_45;
        
        if (*0x20864e < 0xc && *0x20855c >= 0xc)
        {
            *0x208559 = 1;
            
            if (!result_1)
                result_1 = 3;
        }
    }
    
    uint32_t r1_48 = *0x20855a;
    
    if (r1_48 == 2)
    {
        if (arg2 + 0xaef < 0x15df)
            *0x20855a = 0;
        
        goto label_152d0;
    }
    
    if (!r1_48)
    {
        char r1_54;
        
        if (arg2 + 0x15e0 < 0x2bc1)
            r1_54 = 0;
        else
            r1_54 = *0x20855d + 1;
        
        *0x20855d = r1_54;
        
        if (*0x20864e >= 0xc || *0x20855d < 0xc)
            goto label_152d0;
        
        *0x20855a = 2;
        
        if (!result_1)
            result_1 = 3;
        
        result = result_1;
    }
    else
    {
    label_152d0:
        
        if (result_1)
            result = result_1;
    }
    
    return result;
}

int32_t sub_15300(int16_t arg1)
{
    *0x20d94c += arg1 * *0x20d949;
    int16_t result = *0x20d94e + arg1 * *0x20d94a;
    *0x20d94e = result;
    return result;
}

int32_t sub_1531a(int32_t arg1 @ r4)
{
    int32_t entry_r1;
    /* tailcall */
    return sub_1531c(arg1, entry_r1);
}

uint32_t sub_1531c(char* arg1, char* arg2)
{
    uint32_t r0 = *0x20d974;
    uint32_t result = 0;
    uint32_t i_1 = sub_12b2a(r0 + 1, 9);
    int32_t r1 = sub_12b2a(r0 + 4, 9);
    *arg1 = 0;
    uint32_t result_2 = 0;
    *arg2 = 0;
    uint32_t i_2 = i_1;
    uint32_t i = i_1;
    uint32_t i_3 = i_1;
    uint32_t result_1 = *((i_1 << 1) + 0x20d976);
    
    while (*0x20d974 != i)
    {
        uint32_t result_3 = *((i << 1) + 0x20d976);
        
        if (result_3 >= result_2)
        {
            result_2 = result_3;
            i_2 = i;
        }
        
        if (result_3 <= result_1)
        {
            result_1 = result_3;
            i_3 = i;
        }
        
        i = i + 1;
        
        if (i >= 9)
            i = 0;
    }
    
    if (i_2 == r1)
    {
        result = result_2;
        *arg1 = 1;
    }
    else if (i_3 == r1)
    {
        result = result_1;
        *arg2 = 1;
    }
    
    return result;
}

int32_t sub_153a4(int32_t arg1)
{
    *0x20d947 = arg1;
    char result;
    
    result = arg1 == 2 ? 1 : 0;
    
    sub_1541c(result);
    return result;
}

int32_t sub_153c0(int32_t arg1)
{
    void var_1c;
    0xff81b91a(&var_1c, 6, 0xff);
    int16_t var_28 = 0x33;  /* "2_V3.0" */
    char var_26 = 6;
    void* var_20 = &var_1c;
    
    if (!sub_13f68(0x801400))
        return 1;
    
    uint16_t var_14;
    
    if (!sub_14380(0x801400, &var_28, &var_14))
        return 2;
    
    0xff81b898(arg1, var_14 + 0x801403, 6);
    return 0;
}

void sub_1541c(char arg1)
{
    *0x208558 = arg1;
}

int32_t sub_15428()
{
    int32_t r3;
    int32_t var_8 = r3;
    int32_t r2;
    int32_t var_c = r2;
    int32_t r1;
    int32_t var_10 = r1;
    int32_t lr;
    return 0xff7e1a56(0x23000000, "sdk lib version: %d.%d.%d.%d ,commit ID:%x ", 1, 2, 0, 7, 
        0xc6e7bc3e, lr);
}

void sub_15478(uint32_t arg1)
{
    char r2_1 = *0x20daae + 1;
    uint32_t r4 = *0x20daad;
    
    if (arg1 > 0x1000)
    {
        *0x20dab0 = 0;
        *0x20dab4 = 0;
        
        if (r4 != 1)
        {
            arg1 = *0x20dab2 + 1;
            *0x20dab2 = arg1;
            
            if (arg1 >= 0x64)
            {
                *0x20daad = 1;
                *0x20daae = r2_1;
            }
        }
    }
    else if (arg1 >= 0xfffff000)
    {
        *0x20dab4 = 0;
        *0x20dab2 = 0;
        
        if (r4)
        {
            arg1 = *0x20dab0 + 1;
            *0x20dab0 = arg1;
            
            if (arg1 >= 0x64)
            {
                *0x20daad = 0;
                *0x20daae = r2_1;
            }
        }
    }
    else
    {
        *0x20dab0 = 0;
        *0x20dab2 = 0;
        
        if (r4 != 2)
        {
            arg1 = *0x20dab4 + 1;
            *0x20dab4 = arg1;
            
            if (arg1 >= 0x64)
            {
                *0x20daad = 2;
                *0x20daae = r2_1;
            }
        }
    }
}

int32_t j_sub_154e8()
{
    /* tailcall */
    return sub_154e8();
}

int32_t sub_154e8()
{
    if (!*0x20b850)
        return 1;
    
    return 0;
}

int32_t sub_154fc(int32_t arg1, int32_t arg2)
{
    int32_t result_1;
    int32_t r1;
    result_1 = sub_13be0(arg1, arg2);
    int32_t result = result_1;
    
    if (result_1)
        result_1 = 1;
    
    if ((0x7ff00000 - ((r1 | result_1) << 1 >> 1)) >> 0x1f)  /* "0117" */
    {
        int32_t r1_6;
        
        r1_6 = !arg1 ? 0 : 1;
        
        if (!((0x7ff00000 - ((arg2 | r1_6) << 1 >> 1)) >> 0x1f))  /* "0117" */
            sub_13a1c(1);
    }
    
    return result;
}

uint32_t sub_15544()
{
    uint32_t result = *0x20daae;
    *0x20daae = 0;
    return result;
}

void* sub_15554(int32_t* arg1)
{
    char* r2 = *0x20850c;
    *0x208519 = r2[0xf68];
    *0x20851a = r2[0xf69];
    *0x208520 = *r2;
    int32_t r2_1 = *(r2 + 8);
    *0x20851c = r2_1;
    int32_t r3 = *0x208520;
    *arg1 = *0x208518;
    arg1[1] = r2_1;
    arg1[2] = r3;
    return &arg1[3];
}

void* sub_15580(int32_t arg1, int32_t arg2, int16_t arg3)
{
    uint32_t var_34 = 0;
    uint32_t r1 = arg2;
    uint32_t r0 = *arg2[3];
    uint16_t r2 = r0 << 2;
    uint16_t r6 = r0 << 1;
    int16_t r6_1;
    int16_t r7;
    
    if (r1 <= 0x19)  /* ".33_250117" */
    {
        r7 = 0x73 - r2 - r0;
        r6_1 = 0x49 - r6;
    }
    else if (r1 <= 0x1e)  /* "50117" */
    {
        r7 = 0x73 - r6 - r0;
        r6_1 = 0x4b - r6;
    }
    else if (r1 <= 0x23)
    {
        r7 = 0x75 - r6 - r0;
        r6_1 = 0x4c - r6;
    }
    else if (r1 <= 0x28)
    {
        r7 = 0x78 - r2;
        r6_1 = 0x50 - r6 - r0;
    }
    else if (r1 <= 0x2d)
    {
        r7 = 0x7c - r6;
        r6_1 = 0x51 - r6 - r0;
    }
    else if (r1 <= 0x32)  /* "02_V3.0" */
    {
        r7 = 0x80;
        r6_1 = 0x52 - r6 - r0;
    }
    else if (r1 <= 0x37)  /* ".0" */
    {
        r7 = 0x86;
        r6_1 = 0x54 - r2;
    }
    else if (r1 > 0x3c)
    {
        r7 = 0x94 - r6 - r0;
        r6_1 = 0x56 - r6 - r0;
    }
    else
    {
        r7 = r6 + 0x89;
        r6_1 = 0x54 - r6;
    }
    
    int32_t r4 = ((arg1 - 0x46) * 3) >> 1;
    int32_t r4_1;
    int32_t r5_1;
    
    if (arg1 >= 0x41)
    {
        int32_t r1_9;
        
        if (arg1 <= 0x55)
        {
            r4_1 = r4 + 0x6e;
            r1_9 = sub_12b2a(arg1, 0xa) + 0x44;
        }
        else
        {
            r4_1 = r4 + 0x5f;
            r1_9 = sub_12b2a(arg1, 0xa) + 0x49;
        }
        
        r5_1 = r1_9;
    }
    else if (arg1 >= 0x3a)
    {
        r5_1 = arg1 + 5;
        r4_1 = r4 + 0x78;
    }
    else
    {
        r5_1 = arg1 + 0xf;
        r4_1 = r4 + 0x82;
    }
    
    if (r4_1 > 0x8c)
        r4_1 = sub_12b2a(arg1, 0xa) + 0x87;
    
    uint32_t r0_7 = *arg2[1];
    
    if (r0_7)
    {
        uint32_t r0_8 = *arg2[2];
        
        if (r0_8)
            var_34 = sub_12b2a(0x13880 * r0_8, r0_7 * r0_7);
    }
    
    if (r1)
    {
        if (!r0)
        {
            if (r1 >= 0x23)
            {
                r4_1 = sub_12b3e(0x2e * (var_34 - 0xb8), 0x50) + ((r4_1 - 0x73) >> 1) + r7;
                    /* "sdk#####" */
                r5_1 = ((r5_1 - 0x4a) >> 1) + r6_1;
                
                if (r0_7 < 0xa5 && var_34 > 0xc8)
                    r4_1 = r4_1 + 0xa;
            }
            else
            {
                r4_1 = ((r4_1 - 0x73) >> 1) + r7;
                r5_1 = ((r5_1 - 0x4a) >> 1) + r6_1;
                
                if (var_34 && var_34 < 0xb8 && arg1 > 0x46)  /* "sdk#####" */
                    r4_1 = r4_1 - 5;
            }
        }
        else if (r0 == 1)
        {
            if (r1 >= 0x23)
            {
                r4_1 = ((r4_1 - 0x6e) >> 1) + r7 + ((var_34 - 0xb8) >> 2);  /* "sdk#####" */
                r5_1 = ((r5_1 - 0x48) >> 1) + r6_1;
            }
            else
            {
                r4_1 = ((r4_1 - 0x6e) >> 2) + r7;
                r5_1 = ((r5_1 - 0x48) >> 2) + r6_1;
                
                if (var_34 && var_34 < 0xb0)
                    r4_1 = r4_1 - 5;
            }
        }
    }
    
    uint32_t r0_43 = arg3;
    
    if (r0_43)
    {
        uint32_t r1_17 = *arg3[1];
        
        if (r1_17)
        {
            if (!r0)
            {
                r4_1 = r0_43 + r4_1 - 0x76;
                r5_1 = r1_17 + r5_1 - 0x4b;
            }
            else if (r0 == 1)
            {
                r4_1 = r0_43 + r4_1 - 0x70;
                r5_1 = r1_17 + r5_1 - 0x46;
            }
        }
    }
    
    void* result = *0x20850c + 0xf60;
    *(result + 8) = r4_1;
    *(result + 9) = r5_1;
    return result;
}

int32_t sub_1576c(int32_t* arg1)
{
    uint32_t i = 0;
    int32_t r2 = 0;
    int32_t r3 = 0;
    
    do
    {
        r2 += arg1[i];
        i = i + 1;
    } while (i < 0x10);  /* "RY02_3.00.33_250117" */
    
    int32_t r5 = r2 >> 4;
    
    for (uint32_t i_1 = 0; i_1 < 0x10; i_1 = i_1 + 1)  /* "RY02_3.00.33_250117" */
    {
        int32_t r1_2 = arg1[i_1];
        int32_t r1_3 = r1_2 - r5;
        
        if (r1_2 - r5 < 0)
            r1_3 = 0 - r1_3;
        
        if (r1_3 > 0x7d0)  /* "17 10:58:10 2022" */
            r1_3 = 0x7d0;  /* "17 10:58:10 2022" */
        
        r3 += r1_3;
    }
    
    return r3 >> 4;
}

uint32_t sub_157a8(int32_t arg1, int32_t arg2, int32_t arg3)
{
    void* r7 = *0x2084d0;
    int32_t r3_1 = *(r7 + 0xd34) + 1;
    *(r7 + 0xd34) = r3_1;
    
    if (r3_1 == 0x186a0)
        *(r7 + 0xd34) = 0;
    
    int32_t r3_2 = arg1 >> 3;
    int32_t r5_1 = arg3 >> 3;
    int32_t r2_2 = r3_2 - *(r7 + 0xd84);
    int32_t r2_3 = *(r7 + 0xd80);
    *(r7 + 0xd80) = r3_2;
    *(r7 + 0xd84) = r2_3;
    int32_t r2_4 = *(r7 + 0xd88);
    int32_t r6_3 = r2_2 - ((0xffffff93 * r2_4 + 0x33 * *(r7 + 0xd8c)) >> 6);  /* "2_V3.0" */
    *(r7 + 0xd90) = r6_3;
    *(r7 + 0xd88) = r6_3;
    *(r7 + 0xd8c) = r2_4;
    int32_t r2_10 = r6_3 - *(r7 + 0xd98);
    int32_t r2_11 = *(r7 + 0xd94);
    *(r7 + 0xd94) = r6_3;
    *(r7 + 0xd98) = r2_11;
    int32_t r2_12 = *(r7 + 0xd9c);
    int32_t r3_7 = r2_10 - ((0xffffffad * r2_12 + 0x2a * *(r7 + 0xda0)) >> 6);
    *(r7 + 0xda4) = r3_7;
    *(r7 + 0xda0) = r2_12;
    *(r7 + 0xd9c) = r3_7;
    int32_t r1 = arg2 >> 3;
    int32_t r6_5 = r1 - *(r7 + 0xdac);
    *(r7 + 0xdac) = *(r7 + 0xda8);
    *(r7 + 0xda8) = r1;
    int32_t r1_1 = *(r7 + 0xdb0);
    int32_t r6_9 = r6_5 - ((0xffffff93 * r1_1 + 0x33 * *(r7 + 0xdb4)) >> 6);  /* "2_V3.0" */
    *(r7 + 0xdb8) = r6_9;
    *(r7 + 0xdb0) = r6_9;
    *(r7 + 0xdb4) = r1_1;
    int32_t r1_7 = r6_9 - *(r7 + 0xdc0);
    int32_t r1_8 = *(r7 + 0xdbc);
    *(r7 + 0xdbc) = r6_9;
    *(r7 + 0xdc0) = r1_8;
    int32_t r1_9 = *(r7 + 0xdc4);
    int32_t r2_23 = r1_7 - ((0xffffffad * r1_9 + 0x2a * *(r7 + 0xdc8)) >> 6);
    *(r7 + 0xdcc) = r2_23;
    *(r7 + 0xdc8) = r1_9;
    *(r7 + 0xdc4) = r2_23;
    int32_t r1_15 = r5_1 - *(r7 + 0xdd4);
    int32_t r1_16 = *(r7 + 0xdd0);
    *(r7 + 0xdd0) = r5_1;
    *(r7 + 0xdd4) = r1_16;
    int32_t r1_17 = *(r7 + 0xdd8);
    int32_t r6_14 = r1_15 - ((0xffffff93 * r1_17 + 0x33 * *(r7 + 0xddc)) >> 6);  /* "2_V3.0" */
    *(r7 + 0xde0) = r6_14;
    *(r7 + 0xdd8) = r6_14;
    *(r7 + 0xddc) = r1_17;
    int32_t r1_23 = r6_14 - *(r7 + 0xde8);
    int32_t r1_24 = *(r7 + 0xde4);
    *(r7 + 0xde4) = r6_14;
    *(r7 + 0xde8) = r1_24;
    int32_t r1_25 = *(r7 + 0xdec);
    int32_t r6_18 = r1_23 - ((0xffffffad * r1_25 + 0x2a * *(r7 + 0xdf0)) >> 6);
    *(r7 + 0xdf4) = r6_18;
    *(r7 + 0xdec) = r6_18;
    *(r7 + 0xdf0) = r1_25;
    int32_t r0_3 = r3_7 >> 2;
    int32_t r1_30 = r2_23 >> 2;
    int32_t r2_25 = r6_18 >> 2;
    int32_t r0_7;
    int32_t r1_32;
    r0_7 = sub_1351a(r0_3 * r0_3 + r1_30 * r1_30 + r2_25 * r2_25);
    int32_t r0_8;
    int32_t r1_33;
    r0_8 = sub_154fc(r0_7, r1_32);
    int16_t r0_9 = sub_13424(r0_8, r1_33);
    uint32_t i = 4;
    int32_t r3_8 = *0x2084d0;
    
    do
    {
        *((i << 1) + r3_8 + 0xcee) = *((i << 1) + r3_8 + 0xcec);
        i = (i - 1) << 0x10 >> 0x10;  /* "RY02_3.00.33_250117" */
    } while (i);
    
    int32_t r5_5 = r0_9;
    void* r3_9 = *0x2084d0;
    *(r3_9 + 0xcee) = r5_5;
    int32_t r2_30 = *(r3_9 + 0xcf2);
    
    if (r2_30 > *(r3_9 + 0xcf6) && r2_30 > *(r3_9 + 0xcf4) && r2_30 > *(r3_9 + 0xcf0)
        && r2_30 > r5_5)
    {
        for (uint32_t i_1 = 3; i_1; i_1 = (i_1 - 1) << 0x10 >> 0x10)  /* "RY02_3.00.33_250117" */
            *((i_1 << 1) + r3_9 + 0xd14) = *((i_1 << 1) + r3_9 + 0xd12);
        
        void* r1_39 = *0x2084d0;
        *(r1_39 + 0xd14) = *(r1_39 + 0xcf2);
    }
    
    void* r0_10 = *0x2084d0;
    int32_t r2_36 = *(r0_10 + 0xd1a);
    
    if (r2_36)
        *(r0_10 + 0xd30) = (r2_36 + *(r0_10 + 0xd18) + *(r0_10 + 0xd16) + *(r0_10 + 0xd14)) >> 2;
    
    int32_t r2_40 = *(r0_10 + 0xd30);
    
    if (r2_40 < *0x2084e0)
        *(r0_10 + 0xd6f) = 0;
    else if (r2_40 < 0xc8)
        *(r0_10 + 0xd6f) = 1;
    else if (r2_40 - 0xc8 < 0x12c)
        *(r0_10 + 0xd6f) = 2;
    else if (r2_40 >= 0x1f4)
        *(r0_10 + 0xd6f) = 3;
    
    return *(r0_10 + 0xd6f);
}

int32_t sub_159d0()
{
    uint32_t i = 0;
    void* r2 = *0x20850c;
    
    do
    {
        void* r4_2 = (i << 1) + r2 + 0xfc0;
        i = i + 1;
        *(r4_2 + 0x24) = 0;
    } while (i < 5);
    
    *(r2 + 0xfee) = 0;
    *(r2 + 0xff4) = 0;
    *(r2 + 0xff8) = 0;
    *(r2 + 0xff9) = 0;
    *(r2 + 0xffa) = 0;
    *(r2 + 0xffb) = 0;
    *(r2 + 0xffc) = 0;
    *(r2 + 0xffd) = 0;
    *(r2 + 0xffe) = 0;
    *(r2 + 0xfff) = 0;
    *(r2 + 0x1000) = 0;
    *(r2 + 0x1001) = 0;
    *(r2 + 0x1002) = 0;
    *(r2 + 0x1003) = 0;
    *(r2 + 0x1004) = 0;
    *(r2 + 0x1005) = 0;
    __builtin_memset(r2 + 0x1008, 0, 0x78);
    *(r2 + 0x1087) = 0;
    *(r2 + 0x1088) = 0;
    *(r2 + 0x1089) = 0;
    *(r2 + 0x1080) = 0;
    *(r2 + 0x1081) = 0;
    *(r2 + 0x1082) = 0;
    
    for (uint32_t i_1 = 0; i_1 < 4; )
    {
        void* r4_4 = r2 + i_1 + 0x1080;
        i_1 = i_1 + 1;
        *(r4_4 + 3) = 0;
    }
    
    return 1;
}

uint32_t sub_15a88(void* arg1, int32_t* arg2)
{
    int32_t var_40 = 0;
    int32_t r12 = 0;
    int32_t r1 = 0;
    int32_t r2 = 0;
    uint32_t i = arg2[5];
    uint32_t r0 = 0x12;  /* "02_3.00.33_250117" */
    uint32_t i_9 = i;
    
    for (; i > 0xf4240; i u>>= 2)
        r0 = r0 + 1;
    
    uint32_t i_1 = 0;
    int32_t r6 = *0x20850c;
    
    do
    {
        int32_t r5_2 = *((i_1 << 3) + r6 + 0x208) >> r0;
        int32_t r4_7 = *((i_1 << 3) + r6 + 0x20c) >> r0;
        i_1 = i_1 + 1;
        var_40 += r5_2 * r5_2 + r4_7 * r4_7;
    } while (i_1 < 0x6e);
    
    uint32_t r3_3 = *(arg1 + 0xa);
    
    if (r3_3 - 7 <= 0x5f)
    {
        for (uint32_t i_2 = r3_3 - 7; r3_3 + 7 >= i_2; i_2 = i_2 + 1)
        {
            int32_t r3_7 = *((i_2 << 3) + r6 + 0x208) >> r0;
            int32_t r4_16 = *((i_2 << 3) + r6 + 0x20c) >> r0;
            r12 += r3_7 * r3_7 + r4_16 * r4_16;
        }
    }
    else if (r3_3 < 7)
    {
        for (uint32_t i_3 = 0; r3_3 + 7 >= i_3; i_3 = i_3 + 1)
        {
            int32_t r3_12 = *((i_3 << 3) + r6 + 0x208) >> r0;
            int32_t r4_24 = *((i_3 << 3) + r6 + 0x20c) >> r0;
            r12 += r3_12 * r3_12 + r4_24 * r4_24;
        }
    }
    else if (r3_3 > 0x66)
    {
        for (uint32_t i_4 = r3_3 - 7; i_4 < 0x6e; i_4 = i_4 + 1)
        {
            int32_t r3_17 = *((i_4 << 3) + r6 + 0x208) >> r0;
            int32_t r4_31 = *((i_4 << 3) + r6 + 0x20c) >> r0;
            r12 += r3_17 * r3_17 + r4_31 * r4_31;
        }
    }
    
    uint32_t r5_11 = (0x2ee * (r3_3 + 0x1b)) >> 9;  /* "3_250117" */
    uint32_t i_5 = 0;
    uint32_t r5_12 = r5_11 << 1;
    
    do
    {
        uint32_t r5_14 = *(arg1 + (i_5 << 1));
        uint32_t r5_17 = (0x2ee * (r5_14 + 0x1b)) >> 9;  /* "3_250117" */
        
        if ((r5_12 - r5_17 + 3 <= 6 || (r5_17 << 1) - r5_11 + 3 <= 6) && i_9 > arg2[i_5] << 1
            && r5_14)
        {
            r1 = 0;
            
            if (r5_14 - 7 <= 0x5f)
            {
                uint32_t r7_6 = r5_14 - 7;
                int32_t j = r5_14 + 7;
                int32_t j_6 = j;
                
                for (; j >= r7_6; j = j_6)
                {
                    int32_t r6_11 = *((r7_6 << 3) + r6 + 0x208) >> r0;
                    int32_t r5_32 = *((r7_6 << 3) + r6 + 0x20c) >> r0;
                    r1 += r6_11 * r6_11 + r5_32 * r5_32;
                    r7_6 = r7_6 + 1;
                }
            }
            else if (r5_14 < 7)
            {
                uint32_t r7_7 = 0;
                int32_t j_1 = r5_14 + 7;
                int32_t j_7 = j_1;
                
                for (; j_1 >= r7_7; j_1 = j_7)
                {
                    int32_t r6_14 = *((r7_7 << 3) + r6 + 0x208) >> r0;
                    int32_t r5_43 = *((r7_7 << 3) + r6 + 0x20c) >> r0;
                    r1 += r6_14 * r6_14 + r5_43 * r5_43;
                    r7_7 = r7_7 + 1;
                }
            }
            else if (r5_14 > 0x66)
            {
                for (uint32_t j_2 = r5_14 - 7; j_2 < 0x6e; j_2 = j_2 + 1)
                {
                    int32_t r6_17 = *((j_2 << 3) + r6 + 0x208) >> r0;
                    int32_t r5_53 = *((j_2 << 3) + r6 + 0x20c) >> r0;
                    r1 += r6_17 * r6_17 + r5_53 * r5_53;
                }
            }
        }
        
        uint32_t r5_57 = r3_3 - r5_14;
        
        if (r3_3 - r5_14 < 0)
            r5_57 = 0 - r5_57;
        
        int32_t r5_58 = r5_57 - 0xa;
        
        if (r5_57 - 0xa < 0)
            r5_58 = 0 - r5_58;
        
        if (r5_58 <= 1 && i_9 > arg2[i_5] << 1 && r5_14)
        {
            if (r5_14 - 3 <= 0x67)
            {
                uint32_t r7_10 = r5_14 - 3;
                int32_t j_3 = r5_14 + 3;
                int32_t j_8 = j_3;
                
                for (; j_3 >= r7_10; j_3 = j_8)
                {
                    int32_t r6_25 = *((r7_10 << 3) + r6 + 0x208) >> r0;
                    int32_t r5_68 = *((r7_10 << 3) + r6 + 0x20c) >> r0;
                    r2 += r6_25 * r6_25 + r5_68 * r5_68;
                    r7_10 = r7_10 + 1;
                }
            }
            else if (r5_14 < 3)
            {
                uint32_t r7_11 = 0;
                int32_t j_4 = r5_14 + 3;
                int32_t j_9 = j_4;
                
                for (; j_4 >= r7_11; j_4 = j_9)
                {
                    int32_t r6_28 = *((r7_11 << 3) + r6 + 0x208) >> r0;
                    int32_t r5_79 = *((r7_11 << 3) + r6 + 0x20c) >> r0;
                    r2 += r6_28 * r6_28 + r5_79 * r5_79;
                    r7_11 = r7_11 + 1;
                }
            }
            else if (r5_14 > 0x6a)
            {
                for (uint32_t j_5 = r5_14 - 3; j_5 < 0x6e; j_5 = j_5 + 1)
                {
                    int32_t r6_31 = *((j_5 << 3) + r6 + 0x208) >> r0;
                    int32_t r5_89 = *((j_5 << 3) + r6 + 0x20c) >> r0;
                    r2 += r6_31 * r6_31 + r5_89 * r5_89;
                }
            }
        }
        
        i_5 = i_5 + 1;
    } while (i_5 < 5);
    
    uint32_t r6_33 = *(arg1 + 8);
    uint32_t r3_25 = (0x2ee * (r6_33 + 0x1b)) >> 9;  /* "3_250117" */
    
    if ((r5_12 - r3_25 + 4 <= 8 || (r3_25 << 1) - r5_11 + 4 <= 8) && !r1)
    {
        if (r6_33 - 7 <= 0x5f)
        {
            for (uint32_t i_6 = r6_33 - 7; r6_33 + 7 >= i_6; i_6 = i_6 + 1)
            {
                int32_t r4_40 = *((i_6 << 3) + r6 + 0x208) >> r0;
                int32_t r5_97 = *((i_6 << 3) + r6 + 0x20c) >> r0;
                r1 += r4_40 * r4_40 + r5_97 * r5_97;
            }
        }
        else if (r6_33 < 7)
        {
            for (uint32_t i_7 = 0; r6_33 + 7 >= i_7; i_7 = i_7 + 1)
            {
                int32_t r4_45 = *((i_7 << 3) + r6 + 0x208) >> r0;
                int32_t r5_104 = *((i_7 << 3) + r6 + 0x20c) >> r0;
                r1 += r4_45 * r4_45 + r5_104 * r5_104;
            }
        }
        else if (r6_33 > 0x66)
        {
            for (uint32_t i_8 = r6_33 - 7; i_8 < 0x6e; i_8 = i_8 + 1)
            {
                int32_t r5_107 = *((i_8 << 3) + r6 + 0x208) >> r0;
                int32_t r4_54 = *((i_8 << 3) + r6 + 0x20c) >> r0;
                r1 += r5_107 * r5_107 + r4_54 * r4_54;
            }
        }
    }
    
    int32_t r0_4 = r12 + r1 + r2;
    
    if (r0_4 + 0x40 < var_40)
    {
        uint32_t result = sub_12b2a(r0_4, (var_40 - r12 - r1 - r2) >> 3);
        
        if (result <= 0x64)
        {
            if (result)
                return result;
            
            return 1;
        }
    }
    
    return 0x64;
}

int32_t sub_15e14(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t var_24 = arg1;
    int32_t r5 = arg1;
    int32_t var_58 = 0;
    uint32_t i_24 = 0;
    int32_t var_6c = 0;
    int32_t var_68 = 0;
    int32_t var_64 = 0;
    int32_t var_d8 = 0;
    int32_t var_d4 = 0;
    int16_t var_d0 = 0;
    void var_b4;
    0xff81b968(&var_b4, 0x14);  /* "_3.00.33_250117" */
    int32_t var_80 = 0;
    int32_t var_7c = 0;
    int32_t var_78 = 0;
    int32_t var_e4 = 0;
    int32_t var_e0 = 0;
    int32_t var_dc = 0;
    int32_t var_cc[0x4];
    0xff81b968(&var_cc, 0x18);  /* "0.33_250117" */
    int32_t var_ec = 0;
    int32_t var_48_1;
    __builtin_memset(&var_48_1, 0, 0x14);  /* "_3.00.33_250117" */
    uint32_t var_74 = 0;
    int32_t var_5c = 0;
    int16_t var_70 = 0;
    int32_t r7 = 0;
    uint32_t var_54 = 0;
    int32_t var_50 = 0;
    int16_t var_e8 = 0;
    int32_t var_60 = 0;
    int32_t r0_3 = arg2 >> 4;
    int32_t r0_5 = arg3 >> 4;
    int32_t r0_7 = arg4 >> 4;
    void* r4 = *0x20850c;
    *(r4 + 0x40) = *(r4 + 0x3c);
    int32_t r2 = *(r4 + 0x38);  /* "0" */
    *(r4 + 0x3c) = r2;
    int32_t r1 = *(r4 + 0x34);  /* "_V3.0" */
    *(r4 + 0x34) = r5;  /* "_V3.0" */
    *(r4 + 0x38) = r1;  /* "0" */
    int32_t r0_9 = *(r4 + 8);
    
    if (r0_9 > 7)
    {
        int32_t r6_1 = r1 - r2;
        
        if ((r6_1 <= 0x4e20 || r1 - r5 <= 0x4e20) && (r6_1 >= 0xffffb1e0 || r1 - r5 >= 0xffffb1e0))
            r5 = r1;
        else
        {
            r5 = r2;
            *(r4 + 0x38) = r2;  /* "0" */
        }
    }
    
    int32_t var_90;
    int32_t r1_5;
    
    if (r0_9 <= 9)
    {
        r1_5 = r5;
        var_90 = r5;
    }
    else
    {
        int32_t r3 = *(r4 + 0x48);
        int32_t r1_2 = r5 - *(r4 + 0x44);
        int32_t r1_3 = r1_2 - r3;
        
        if (r1_2 - r3 < 0)
            r1_3 = 0 - r1_3;
        
        int32_t r1_4;
        
        if (r1_3 > 0x4e20)
        {
            r1_4 = r5 - r3;
            *(r4 + 0x44) = r1_4;
        }
        else
            r1_4 = *(r4 + 0x44);
        
        r1_5 = r5 - r1_4;
        var_90 = r1_5;
    }
    
    *(r4 + 0x48) = r1_5;
    int32_t r1_7 = *(r4 + 0xf50);
    int32_t r1_8 = r5 - r1_7;
    
    if (r5 - r1_7 < 0)
        r1_8 = 0 - r1_8;
    
    int32_t r3_1 = 0xc350;
    void* r6_4 = *0x20850c + 0xf40;
    uint32_t r1_9 = *(r6_4 + 0x14);  /* "_3.00.33_250117" */
    
    if (r1_8 > 0xc350)
    {
        if (r1_9 >= 0xa)
            goto label_15f16;
        
        r1_9 += 1;
        goto label_15f12;
    }
    
    if (!r1_9)
    {
    label_15f26:
        uint32_t r1_12 = *(r6_4 + 0x15);  /* "3.00.33_250117" */
        
        if (r1_12)
            *(r6_4 + 0x15) = r1_12 - 1;  /* "3.00.33_250117" */
    }
    else
    {
        r1_9 -= 1;
    label_15f12:
        *(r6_4 + 0x14) = r1_9;  /* "_3.00.33_250117" */
    label_15f16:
        
        if (r1_9 < 5 || r0_9 <= 0x140)
            goto label_15f26;
        
        *(r6_4 + 0x15) = 0x32;  /* "3.00.33_250117" */  /* "02_V3.0" */
    }
    
    *(r4 + 0xf50) = r5;
    
    if (r0_9 == 9)
    {
        int32_t r0_10 = *(r4 + 0x38);  /* "0" */
        *(r4 + 0xc) = r0_10;
        *(r4 + 0x10) = r0_10;  /* "RY02_3.00.33_250117" */
        *(r4 + 0x1008) = r0_3;
        *(r4 + 0x100c) = r0_3;
        *(r4 + 0x1030) = r0_5;
        *(r4 + 0x1034) = r0_5;
        *(r4 + 0x1058) = r0_7;
        *(r4 + 0x105c) = r0_7;
    }
    else
    {
        if (r0_9 > 0x19)  /* ".33_250117" */
        {
            int32_t r1_14;
            r1_14 = sub_12b2a(r0_9, 3);
            
            if (!r1_14)
            {
                uint32_t i;
                
                do
                {
                    *((i_24 << 2) + r4 + 0xf6c) = *((i_24 << 2) + r4 + 0xf70);
                    i = i_24 + 1;
                    i_24 = i;
                } while (i < 0xf);
                *(r4 + 0xfa8) = var_90 >> 3;
            }
        }
        
        int32_t r0_14 = *(r4 + 8);
        
        if (r0_14 < 0x64)
        {
        label_15ffc:
            
            if (*(*0x20850c + 8) > 9)
                goto label_1600a;
        }
        else
        {
            int32_t r1_27;
            r1_27 = sub_12b2a(r0_14, 0x19);  /* ".33_250117" */
            
            if (!r1_27)
            {
                if (*(r4 + 0xf28))
                    *(r6_4 + 0x1c) = 0xff;  /* "_250117" */
                
                int32_t r0_18 = sub_1576c(r4 + 0xf6c);
                void* r0_19 = *0x20850c;
                *(r0_19 + 0xfac) = r0_18;
                int32_t r0_21;
                
                if (*(r0_19 + 8) == 0x64)
                {
                    for (uint32_t i_1 = 0; i_1 < 5; )
                    {
                        int32_t r4_3 = *(r0_19 + 0xfac);
                        void* r5_12 = (i_1 << 2) + r0_19 + 0xf80;
                        r7 += r4_3;
                        i_1 = i_1 + 1;
                        *(r5_12 + 0x34) = r4_3;  /* "_V3.0" */
                    }
                    
                    r0_21 = r7;
                }
                else
                {
                    for (uint32_t i_2 = 0; i_2 < 4; )
                    {
                        void* r3_4 = (i_2 << 2) + r0_19 + 0xf80;
                        int32_t r4_1 = *(r3_4 + 0x38);  /* "0" */
                        r7 += r4_1;
                        i_2 = i_2 + 1;
                        *(r3_4 + 0x34) = r4_1;  /* "_V3.0" */
                    }
                    
                    int32_t r0_20 = *(r0_19 + 0xfac);
                    *(r0_19 + 0xfc4) = r0_20;
                    r0_21 = r0_20 + r7;
                }
                
                int32_t r0_22;
                r0_22 = sub_12b3e(r0_21, 5);
                *(r0_19 + 0xfb0) = r0_22;
                goto label_15ffc;
            }
            
        label_1600a:
            
            if (arg2 | arg3 | arg4)
                sub_18100(r0_3, r0_5, r0_7, r3_1);
            
            void* r4_2 = *0x20850c;
            int32_t r2_7 = *(r4_2 + 0x10);  /* "RY02_3.00.33_250117" */
            int32_t r0_36;
            
            if (!*(r4_2 + 0xf28))
            {
                *(r4_2 + 0x10) = *(r4_2 + 0xc);  /* "RY02_3.00.33_250117" */
                *(r4_2 + 0xc) = var_90;
                int32_t r2_14 = *(r4_2 + 0x14);  /* "_3.00.33_250117" */
                int32_t r0_38 = var_90 - r2_7 - ((0xffffff91 * r2_14 + 0x33 * *(r4_2 + 0x18)) >> 6);
                    /* "0.33_250117" */  /* "2_V3.0" */
                *(r4_2 + 0x1c) = r0_38;  /* "_250117" */
                *(r4_2 + 0x18) = r2_14;  /* "0.33_250117" */
                *(r4_2 + 0x14) = r0_38;  /* "_3.00.33_250117" */
                int32_t r2_15 = *(r4_2 + 0x24);
                *(r4_2 + 0x24) = *(r4_2 + 0x20);  /* "117" */
                *(r4_2 + 0x20) = r0_38;  /* "117" */
                int32_t r5_18 = *(r4_2 + 0x28);
                r0_36 = r0_38 - r2_15 - ((r5_18 * 0xffffffbc + (*(r4_2 + 0x2c) << 5)) >> 6);
                *(r4_2 + 0x2c) = r5_18;
                *(r4_2 + 0x30) = r0_36;  /* "RY02_V3.0" */
            }
            else
            {
                *(r4_2 + 0x10) = *(r4_2 + 0xc);  /* "RY02_3.00.33_250117" */
                *(r4_2 + 0xc) = var_90;
                int32_t r0_33 = *(r4_2 + 0x14);  /* "_3.00.33_250117" */
                int32_t r2_9 = var_90 - r2_7 - ((0xffffff93 * r0_33 + 0x33 * *(r4_2 + 0x18)) >> 6);
                    /* "0.33_250117" */  /* "2_V3.0" */
                *(r4_2 + 0x1c) = r2_9;  /* "_250117" */
                *(r4_2 + 0x14) = r2_9;  /* "_3.00.33_250117" */
                *(r4_2 + 0x18) = r0_33;  /* "0.33_250117" */
                int32_t r0_34 = *(r4_2 + 0x24);
                *(r4_2 + 0x24) = *(r4_2 + 0x20);  /* "117" */
                *(r4_2 + 0x20) = r2_9;  /* "117" */
                int32_t r2_10 = *(r4_2 + 0x28);
                r0_36 = r2_9 - r0_34 - ((r2_10 * 0xffffffad + 0x2a * *(r4_2 + 0x2c)) >> 6);
                *(r4_2 + 0x2c) = r2_10;
                *(r4_2 + 0x30) = r0_36;  /* "RY02_V3.0" */
            }
            
            *(r4_2 + 0x28) = r0_36;
            
            for (uint32_t i_3 = 0; i_3 < 0xa; )
            {
                void* r2_19 = (i_3 << 2) + r4_2 + 0x1080;
                i_3 = i_3 + 1;
                *(r2_19 + 0xc) = *(r2_19 + 0x10);  /* "RY02_3.00.33_250117" */
            }
            
            int32_t r2_20 = *(r4_2 + 0x30);  /* "RY02_V3.0" */
            *(r4_2 + 0x10b4) = r2_20;
            int32_t r0_43 = *(r4_2 + 0x10a0);
            
            if (r0_43 <= *(r4_2 + 0x109c) || r0_43 <= *(r4_2 + 0x1098) || r0_43 <= *(r4_2 + 0x1094)
                || r0_43 <= *(r4_2 + 0x1090) || r0_43 <= *(r4_2 + 0x108c)
                || r0_43 <= *(r4_2 + 0x10a4) || r0_43 <= *(r4_2 + 0x10a8)
                || r0_43 <= *(r4_2 + 0x10ac) || r0_43 <= *(r4_2 + 0x10b0) || r0_43 <= r2_20)
            {
            label_162b2:
                
                if (*(*0x20850c + 0x10b8))
                {
                label_162b8:
                    void* r1_61 = *0x20850c + 0x1080;
                    *(r1_61 + 0x38) -= 1;  /* "0" */
                }
                
                if (*(*0x20850c + 0xf28))
                    *(*0x20850c + 0x10c4) = 0;
            }
            else
            {
                if (*(r4_2 + 0x10b8))
                    goto label_162b8;
                
                if (*(r4_2 + 0xf28))
                    *(*0x20850c + 0x10c4) = 0;
                else
                {
                    int32_t r2_21 = *(r4_2 + 8);
                    
                    if (r2_21 >= 0x32)  /* "02_V3.0" */
                    {
                        *(r4_2 + 0x10bc) = r2_21 - 5;
                        int32_t r3_7 = *(r4_2 + 0x10c0);
                        
                        if (r3_7)
                            *(r4_2 + 0x10c4) = 0x28 * (r2_21 - 5 - r3_7);
                        
                        *(r4_2 + 0x10c0) = r2_21 - 5;
                        
                        if (r2_21 <= 0x12c)
                            *(r4_2 + 0x10b8) = 0xa;
                        else
                        {
                            uint32_t r0_47 = *(r4_2 + 1);
                            
                            if (r0_47 - 0x32 > 0x64)  /* "02_V3.0" */
                            {
                                *(r4_2 + 0x10c4) = 0x320;
                                *(r4_2 + 0x10b8) = 0xa;
                            }
                            else
                            {
                                int32_t r0_49 = sub_12b2a(0x5dc, r0_47);
                                *(r4_2 + 0x10b8) = r0_49 - 5;
                                int32_t r0_51 = sub_12b2a(0x11940, r0_47);
                                int32_t r7_9 = *(r4_2 + 0x10c4);
                                int32_t r0_52;
                                
                                if (r0_51 >= r7_9)
                                    r0_52 = sub_12b2a(&data_bb80, r0_47);
                                
                                if (r0_51 < r7_9 || r0_52 > r7_9)
                                    *(r4_2 + 0x10c4) = 0x28 * r0_49;
                            }
                        }
                        
                        if (*(r4_2 + 0x10c4) - 0x12d < 0x4af)
                        {
                            for (uint32_t i_4 = 0; i_4 < 0xf; )
                            {
                                void* r1_37 = (i_4 << 2) + r4_2 + 0x1080;
                                i_4 = i_4 + 1;
                                *(r1_37 + 0x4c) = *(r1_37 + 0x50);
                            }
                            
                            *(r4_2 + 0x1108) = *(r4_2 + 0x10c4);
                        }
                        
                        if (*(r4_2 + 0x10c8) >= 0x14 && *(r4_2 + 0x10cc))  /* "_3.00.33_250117" */
                        {
                            int32_t r1_44;
                            
                            for (uint32_t i_5 = 0; i_5 < 0x10; )  /* "RY02_3.00.33_250117" */
                            {
                                r1_44 = *((i_5 << 2) + r4_2 + 0x10cc) + var_70;
                                i_5 = i_5 + 1;
                                var_70 = r1_44;
                            }
                            
                            int32_t r2_24 = r1_44 >> 4;
                            
                            for (uint32_t i_6 = 0; i_6 < 0x10; i_6 = i_6 + 1)  /* "
                                RY02_3.00.33_250117" */
                            {
                                int32_t r3_10 = *((i_6 << 2) + r4_2 + 0x10cc);
                                int32_t r1_47 = r3_10 - r2_24;
                                
                                if (r3_10 - r2_24 < 0)
                                    r1_47 = 0 - r1_47;
                                
                                var_50 = r1_47 + var_50;
                                
                                if (i_6)
                                {
                                    int32_t r1_50 = *((i_6 << 2) + r4_2 + 0x10c8);
                                    int32_t r1_51 = r3_10 - r1_50;
                                    
                                    if (r3_10 - r1_50 < 0)
                                        r1_51 = 0 - r1_51;
                                    
                                    if (r1_51 < 8)
                                        r1_51 = 8;
                                    else if (r1_51 > 0x6c)
                                        r1_51 = 0x6c;
                                    
                                    var_60 += r1_51 * r1_51;
                                }
                            }
                            
                            int32_t r0_66;
                            int32_t r1_54;
                            r0_66 = sub_1351a(var_60 >> 4);
                            int32_t r0_67;
                            int32_t r1_55;
                            r0_67 = sub_154fc(r0_66, r1_54);
                            uint32_t r0_68 = sub_13490(r0_67, r1_55);
                            void* r4_4 = *0x20850c + 0x1100;
                            *(r4_4 + 0x10) = r0_68;  /* "RY02_3.00.33_250117" */
                            
                            if (r0_68 > 0x50)
                                *(r4_4 + 0x10) = sub_12b2a(r0_68, 0xa) + 0x50;
                                    /* "RY02_3.00.33_250117" */
                            
                            *(r4_4 + 0xc) = var_50 >> 4;
                        }
                        
                        void* r1_58 = *0x20850c + 0x1080;
                        *(r1_58 + 0x48) += 1;
                        goto label_162b2;
                    }
                }
            }
            
            void* r3_12 = *0x20850c;
            
            if (*(r3_12 + 8) > 0x19)  /* ".33_250117" */
            {
                for (uint32_t i_7 = 0; i_7 < 0x6e; )
                {
                    uint32_t r1_65 = *((i_7 << 1) + r3_12 + 0x4e) + i_7 + 0x1c;  /* "_250117" */
                    *((i_7 << 1) + r3_12 + 0x4e) = r1_65;
                    
                    if (r1_65 >= 0x400)
                    {
                        r1_65 -= 0x400;
                        *((i_7 << 1) + r3_12 + 0x4e) = r1_65;
                    }
                    
                    uint32_t r4_7 = r1_65;
                    uint32_t r0_86;
                    
                    r0_86 = r4_7 < 0x300 ? r4_7 : r4_7;
                    
                    uint32_t r0_87 = *(0x83e7ef + r0_86);
                    uint32_t r1_66 = *(0x83e7ef + 0xff - r0_86);
                    
                    if (r4_7 > 0xff)
                    {
                        if (r4_7 < 0x200)
                        {
                            uint32_t r4_8 = r0_87;
                            r0_87 = r1_66;
                            r1_66 = 0 - r4_8;
                        }
                        else if (r4_7 >= 0x300)
                        {
                            uint32_t r4_9 = r0_87;
                            r0_87 = 0 - r1_66;
                            r1_66 = r4_9;
                        }
                        else
                        {
                            r0_87 = 0 - r0_87;
                            r1_66 = 0 - r1_66;
                        }
                    }
                    
                    void* r4_11 = (i_7 << 3) + r3_12;
                    *(r4_11 + 0x208) += r1_66 * (*(r3_12 + 0x30) >> 3);  /* "RY02_V3.0" */
                    *(r4_11 + 0x20c) += r0_87 * (*(r3_12 + 0x30) >> 3);  /* "RY02_V3.0" */
                    *(r4_11 + 0x578) += r1_66 * *(r3_12 + 0x102c);
                    i_7 = i_7 + 1;
                    *(r4_11 + 0x57c) += r0_87 * *(r3_12 + 0x102c);
                }
            }
        }
        
        void* r0_89 = *0x20850c;
        
        if (*(r0_89 + 8) > 0xe1)
        {
            for (uint32_t i_8 = 0; i_8 < 0x6e; )
            {
                uint32_t r4_20 = *((i_8 << 1) + r0_89 + 0x12a) + i_8 + 0x1c;  /* "_250117" */
                *((i_8 << 1) + r0_89 + 0x12a) = r4_20;
                
                if (r4_20 >= 0x400)
                {
                    r4_20 -= 0x400;
                    *((i_8 << 1) + r0_89 + 0x12a) = r4_20;
                }
                
                uint32_t r4_21 = r4_20;
                uint32_t r1_75;
                
                r1_75 = r4_21 < 0x300 ? r4_21 : r4_21;
                
                uint32_t var_98_1 = *(0x83e7ef + r1_75);
                uint32_t r1_77 = *(0x83e7ef + 0xff - r1_75);
                
                if (r4_21 > 0xff)
                {
                    if (r4_21 >= 0x200)
                    {
                        uint32_t r4_23 = var_98_1;
                        
                        if (r4_21 >= 0x300)
                        {
                            var_98_1 = 0 - r1_77;
                            r1_77 = r4_23;
                        }
                        else
                        {
                            r1_77 = 0 - r1_77;
                            var_98_1 = 0 - r4_23;
                        }
                    }
                    else
                    {
                        uint32_t r4_22 = var_98_1;
                        var_98_1 = r1_77;
                        r1_77 = 0 - r4_22;
                    }
                }
                
                void* r7_14 = (i_8 << 3) + r0_89;
                *(r7_14 + 0x208) -= r1_77 * (*((*(r0_89 + 0x4c) << 2) + r0_89 + 0x8e8) >> 3);
                *(r7_14 + 0x20c) -= var_98_1 * (*((*(r0_89 + 0x4c) << 2) + r0_89 + 0x8e8) >> 3);
                *(r7_14 + 0x578) -= r1_77 * *((*(r0_89 + 0x4c) << 2) + r0_89 + 0xc08);
                i_8 = i_8 + 1;
                *(r7_14 + 0x57c) -= var_98_1 * *((*(r0_89 + 0x4c) << 2) + r0_89 + 0xc08);
            }
        }
        
        if (*(r0_89 + 8) > 0x19)  /* ".33_250117" */
        {
            *((*(r0_89 + 0x4c) << 2) + r0_89 + 0x8e8) = *(r0_89 + 0x30);  /* "RY02_V3.0" */
            *((*(r0_89 + 0x4c) << 2) + r0_89 + 0xc08) = *(r0_89 + 0x102c);
            uint32_t r0_93 = *(r0_89 + 0x4c) + 1;
            *(r0_89 + 0x4c) = r0_93;
            
            if (r0_93 > 0xc7)
                *(r0_89 + 0x4c) = 0;
        }
    }
    
    void* r4_44 = *0x20850c;
    uint32_t r2_34 = *(r4_44 + 0xff8);
    *(r4_44 + 0xf28) = r2_34;
    uint32_t r1_90 = *(r4_44 + 2);
    int32_t r3_19;
    
    if (r1_90 < 0x46)
        r3_19 = 0x52;
    else if (r1_90 < 0x5a)
        r3_19 = 0x48;
    else if (r1_90 < 0x6e || r1_90 < 0x8c)
        r3_19 = 0x3e;
    else
        r3_19 = 0x32;  /* "02_V3.0" */
    
    uint32_t r3_20 = *0x208501;
    int32_t var_60_1;
    
    if (r3_20 == 1)
    {
        if (r1_90 >= 0x82)
            goto label_16502;
        
        var_60_1 = 0x1e;  /* "50117" */
    }
    else if (r3_20 == 2 && r1_90 < 0x82)
        var_60_1 = 0x1e;  /* "50117" */
    else
    {
    label_16502:
        var_60_1 = 0x28;
        
        if (r2_34 >= 4)
            var_60_1 = 0x1e;  /* "50117" */
    }
    
    int32_t r0_94 = *(r4_44 + 8);
    
    if (!sub_12b2a(r0_94, 0x19) && r0_94 >= 0xe1)  /* ".33_250117" */
    {
        int32_t var_34_1 = 3;
        int32_t r0_95 = 0xd693a400;
        int32_t r2_35 = 0xdc898500;
        uint32_t i_9 = 0;
        int32_t var_4c_1 = 0;
        
        do
        {
            int32_t r6_39 = *((i_9 << 3) + r4_44 + 0x578) >> 0x12;  /* "02_3.00.33_250117" */
            int32_t r3_24 = *((i_9 << 3) + r4_44 + 0x57c) >> 0x12;  /* "02_3.00.33_250117" */
            int32_t r3_26 = r6_39 * r6_39 + r3_24 * r3_24;
            
            if (r3_26 > var_4c_1)
                var_4c_1 = r3_26;
            
            if (r3_26 < r0_95 && r0_95 >= r2_35)
            {
                for (uint32_t j = 0; j < 5; j = j + 1)
                {
                    int32_t r6_42 = j << 2;
                    int32_t r3_28 = *(&var_b4 + r6_42);
                    
                    if (r3_28 < r0_95)
                    {
                        if (j)
                        {
                            int32_t r3_29 = j << 1;
                            *(r3_29 + &var_6c - 2) = *(&var_6c + r3_29);
                            *(&var_b4 + r6_42 - 4) = r3_28;
                            *(r3_29 + &var_d8 - 2) = *(&var_d8 + r3_29);
                        }
                        
                        int32_t r3_32 = j << 1;
                        *(&var_6c + r3_32) = i_9;
                        *(&var_d8 + r3_32) = (0x17700 * (i_9 + 0x1b)) >> 0x10;
                            /* "RY02_3.00.33_250117" */  /* "3_250117" */
                        *(&var_b4 + r6_42) = r0_95;
                    }
                }
            }
            
            r2_35 = r0_95;
            i_9 = i_9 + 1;
            r0_95 = r3_26;
        } while (i_9 < 0x6e);
        
        uint32_t r0_96 = var_d0;
        uint32_t r3_34 = *(r4_44 + 0xf28);
        uint32_t r1_93 = r0_96;
        void* r6_50;
        
        if (r3_34 >= 4)
        {
            if (r1_93 > 0x64)
                goto label_165dc;
            
            r1_93 = r1_93 << 0x19 >> 0x18;  /* "0.33_250117" */  /* ".33_250117" */
        label_16624:
            
            if (r1_93 < 0x3c)
                r1_93 = 0x3c << 1;
            else if (r1_93 < 0x64)
                r1_93 <<= 1;
            
            char r1_103 = (((r1_93 - 0x28) >> 0x1f >> 0x1e) + r1_93 - 0x28) >> 2;
                /* "50117" */  /* "0117" */
            r6_50 = r4_44 + 0x1000;
            *(r6_50 + 3) = r1_103 - 0x7e;
            *(r6_50 + 4) = r1_103 + 0x50;
        }
        else if (!r3_34)
        {
            *(r4_44 + 0x1003) = 0x6e;
            *(r4_44 + 0x1004) = 0x3c;
        }
        else
        {
        label_165dc:
            
            if (r1_93 <= 0x3c)
                r1_93 = r1_93 << 0x19 >> 0x18;  /* "0.33_250117" */  /* ".33_250117" */
            
            if (!r3_34)
            {
                *(r4_44 + 0x1003) = 0x6e;
                *(r4_44 + 0x1004) = 0x3c;
            }
            else
            {
                if (r3_34 >= 4)
                    goto label_16624;
                
                if (r1_93 > 0x78)
                    r1_93 = 0x78;
                else if (r1_93 < 0x3c)
                    r1_93 = 0x3c;
                
                char r1_99 = (((r1_93 - 0x28) >> 0x1f >> 0x1e) + r1_93 - 0x28) >> 2;
                    /* "50117" */  /* "0117" */
                r6_50 = r4_44 + 0x1000;
                *(r6_50 + 3) = r1_99 + 0x64;
                *(r6_50 + 4) = r1_99 + 0x32;  /* "02_V3.0" */
            }
        }
        
        for (uint32_t i_10 = 0; i_10 < 5; i_10 = i_10 + 1)
        {
            if (r0_96 >= 0x8c)
            {
                uint32_t r2_37 = *(&var_d8 + (i_10 << 1));
                uint32_t r3_43 = r0_96 >> 1;
                uint32_t r2_38 = r3_43 - r2_37;
                
                if (r3_43 - r2_37 < 0)
                    r2_38 = 0 - r2_38;
                
                if (r2_38 <= 3)
                {
                    var_48_1 = 1;
                    *(r4_44 + 0xf4a) = r3_43;
                }
            }
            else if (r0_96 >= 0x46)
            {
                uint32_t r2_41 = *(&var_d8 + (i_10 << 1)) >> 1;
                uint32_t r2_42 = r2_41 - r0_96;
                
                if (r2_41 - r0_96 < 0)
                    r2_42 = 0 - r2_42;
                
                if (r2_42 <= 3)
                {
                    var_48_1 = 1;
                    *(r4_44 + 0xf4a) = r0_96;
                }
            }
        }
        
        if (r0_96 >= 0x8c)
        {
            uint32_t r1_105 = *var_d4[2];
            uint32_t r2_44 = r0_96 >> 1;
            uint32_t r1_106 = r2_44 - r1_105;
            
            if (r2_44 - r1_105 < 0)
                r1_106 = 0 - r1_106;
            
            if (r1_106 <= 5)
            {
                *(r4_44 + 0xf4a) = r2_44;
            label_166f4:
                
                if (*(r4_44 + 0xf28) < 4)
                    goto label_16710;
                
                goto label_166fa;
            }
        }
        else if (r0_96 >= 0x46)
        {
            uint32_t r1_109 = *var_d4[2] >> 1;
            uint32_t r1_110 = r1_109 - r0_96;
            
            if (r1_109 - r0_96 < 0)
                r1_110 = 0 - r1_110;
            
            if (r1_110 <= 5)
            {
                *(r4_44 + 0xf4a) = r0_96;
                goto label_166f4;
            }
        }
        
        int32_t var_70_1;
        uint32_t r1_116;
        
        if (!var_48_1 || *(r4_44 + 0xf28) < 4)
        {
        label_16710:
            var_70_1 = 0;
            uint32_t r1_117 = *(r4_44 + 0xf39);
            
            if (!r1_117)
                *(r4_44 + 0xf4a) = 0;
            else
            {
                r1_116 = r1_117 - 1;
                *(r4_44 + 0xf39) = r1_116;
            label_1671e:
                
                if (r1_116 < 0xa)
                    *(r4_44 + 0xf4a) = 0;
            }
        }
        else
        {
        label_166fa:
            var_70_1 = 1;
            r1_116 = *(r4_44 + 0xf39) + 1;
            *(r4_44 + 0xf39) = r1_116;
            
            if (r1_116 <= 0x14)  /* "_3.00.33_250117" */
                goto label_1671e;
            
            *(r4_44 + 0xf39) = 0x14;  /* "_3.00.33_250117" */
        }
        int32_t var_a8;
        int32_t var_40_1;
        int32_t var_a4;
        
        if (r0_96 - *(r4_44 + 0xf3c) + 3 <= 6 && var_a8)
        {
            if (var_a4 >> 2 > var_a8)
            {
            label_1676a:
                var_40_1 = 1;
                
                if (r0_96 < 0x5a)
                    *(r4_44 + 0xf48) = r0_96;
                else
                    *(r4_44 + 0xf48) = r0_96 >> 1;
            }
            else
            {
                uint32_t r6_53 = *var_d4[2];
                uint32_t r7_24 = r0_96 >> 1;
                uint32_t r1_126 = r7_24 - r6_53;
                
                if (r7_24 - r6_53 < 0)
                    r1_126 = 0 - r1_126;
                
                if (r1_126 <= 2)
                    goto label_1676a;
                
                uint32_t r1_127 = r6_53 >> 1;
                uint32_t r1_128 = r1_127 - r0_96;
                
                if (r1_127 - r0_96 < 0)
                    r1_128 = 0 - r1_128;
                
                if (r1_128 <= 2)
                    goto label_1676a;
            }
        }
        *(r4_44 + 0xf3c) = r0_96;
        uint32_t r0_99;
        
        if (var_40_1 & ~var_70_1)
            r0_99 = *(r4_44 + 0xf28);
        
        uint32_t r0_102;
        
        if (!(var_40_1 & ~var_70_1) || r0_99 <= 1 || r0_99 >= 4)
        {
            uint32_t r0_103 = *(r4_44 + 0xf3a);
            
            if (!r0_103)
                *(r4_44 + 0xf48) = 0;
            else
            {
                r0_102 = r0_103 - 1;
                *(r4_44 + 0xf3a) = r0_102;
            label_167b6:
                
                if (r0_102 < 0xa)
                    *(r4_44 + 0xf48) = 0;
            }
        }
        else
        {
            r0_102 = *(r4_44 + 0xf3a) + 1;
            *(r4_44 + 0xf3a) = r0_102;
            
            if (r0_102 <= 0x14)  /* "_3.00.33_250117" */
                goto label_167b6;
            
            *(r4_44 + 0xf3a) = 0x14;  /* "_3.00.33_250117" */
        }
        uint32_t r0_106 = *(r4_44 + 1);
        uint32_t i_11 = 0;
        int32_t r0_107 = 0xd693a400;
        int32_t r7_25 = 0xdc898500;
        
        do
        {
            int32_t r3_48 = *((i_11 << 3) + r4_44 + 0x208) >> 0x12;  /* "02_3.00.33_250117" */
            int32_t r2_52 = *((i_11 << 3) + r4_44 + 0x20c) >> 0x12;  /* "02_3.00.33_250117" */
            int32_t r2_54 = r3_48 * r3_48 + r2_52 * r2_52;
            uint32_t r2_58 = (0x2ee * (i_11 + 0x1b)) >> 9;  /* "3_250117" */
            int32_t r6_57;
            
            if (r2_58 - r0_106 < r3_19 && r0_106 - r2_58 < var_60_1)
                r6_57 = 1;
            else if (!*(r4_44 + 0xf29) || i_11 >= 0x50)
            {
                if (!*(r4_44 + 0xf28))
                    r6_57 = 1;
                else
                    r6_57 = 0;
            }
            else if (i_11 > 0xa || !*(r4_44 + 0xf28))
                r6_57 = 1;
            else
                r6_57 = 0;
            
            int32_t r2_59;
            
            if (!*(r4_44 + 0xf28))
            {
                if (!r6_57 || r2_58 <= 0x28)
                    r2_59 = 0;
                else
                    r2_59 = 1;
            }
            else if (!r6_57 || r2_58 <= 0x32)  /* "02_V3.0" */
                r2_59 = 0;
            else
                r2_59 = 1;
            
            if (r2_54 < r0_107 && r0_107 >= r7_25 && r2_59)
            {
                for (uint32_t j_1 = 0; j_1 < 6; j_1 = j_1 + 1)
                {
                    int32_t r3_61 = var_cc[j_1];
                    
                    if (r3_61 < r0_107)
                    {
                        if (j_1)
                        {
                            int32_t r3_62 = j_1 << 1;
                            *(r3_62 + &var_80 - 2) = *(&var_80 + r3_62);
                            *(&var_cc[j_1] - 4) = r3_61;
                            *(r3_62 + &var_e4 - 2) = *(&var_e4 + r3_62);
                        }
                        
                        int32_t r3_67 = j_1 << 1;
                        *(&var_80 + r3_67) = i_11;
                        var_cc[j_1] = r0_107;
                        *(&var_e4 + r3_67) = (0x17700 * (i_11 + 0x1b)) >> 0x10;
                            /* "RY02_3.00.33_250117" */  /* "3_250117" */
                    }
                }
            }
            
            r7_25 = r0_107;
            r0_107 = r2_54;
            
            if (r2_54 > var_58)
                var_58 = r0_107;
            
            i_11 = i_11 + 1;
        } while (i_11 < 0x6e);
        
        if (!*(r4_44 + 0xf28) && (*(r4_44 + 8) <= 0x190 || *0x208500))
            var_54 = sub_15a88(&var_80, &var_cc);
        
        int32_t r2_62 = 0xa;
        
        if (var_70_1 && *(*0x20850c + 0xf39) >= 0xa)
            r2_62 = 0x1f4;
        
        uint32_t i_12 = 0;
        uint8_t* r4_45 = *0x20850c;
        
        do
        {
            int32_t r3_68 = i_12 << 1;
            int32_t r12_7 = 0;
            uint32_t j_2 = 6;
            uint32_t r5_29 = *(&var_80 + r3_68);
            
            do
            {
                if (r5_29 && !r12_7 && *(&var_e4 + r3_68) - r4_45[j_2 + 0xf2c] + 5 <= 0xa
                    && var_cc[i_12] >= r2_62)
                {
                    *(&var_ec + i_12) = r4_45[j_2 + 0xf32] + 1;
                    r12_7 = 1;
                }
                
                j_2 = (j_2 - 1) << 0x10 >> 0x10;  /* "RY02_3.00.33_250117" */
            } while (j_2);
            
            i_12 = i_12 + 1;
        } while (i_12 < 6);
        
        for (uint32_t i_13 = 0; i_13 < 6; )
        {
            if (*(&var_ec + i_13) > 0x1e)  /* "50117" */
                *(&var_ec + i_13) = 0x1e;  /* "50117" */
            
            void* r2_64 = &r4_45[i_13 + 0xf20];
            *(r2_64 + 0xd) = *(&var_e4 + (i_13 << 1));
            char r3_81 = *(&var_ec + i_13);
            i_13 = i_13 + 1;
            *(r2_64 + 0x13) = r3_81;  /* "2_3.00.33_250117" */
        }
        
        uint32_t r0_117 = *var_dc[2];
        int32_t var_bc;
        int32_t var_b8;
        uint32_t r3_95;
        
        if (r0_117 - *(r4_45 + 0xf46) + 3 > 6
            || (var_b8 >> 2 < var_bc && (r0_117 << 1) - var_dc + 3 > 6))
        {
        label_169e8:
            r3_95 = *(r4_45 + 0xf42);
            
            if (r3_95)
            {
                r3_95 -= 1;
                *(r4_45 + 0xf42) = r3_95;
            }
        }
        else
        {
            uint32_t r3_90 = var_d0;
            
            if (r0_117 - r3_90 + 4 <= 8 || r0_117 - (r3_90 << 1) + 4 <= 8)
                goto label_169e8;
            
            uint32_t r3_91 = r3_90 >> 1;
            uint32_t r3_92 = r0_117 - r3_91;
            
            if (r0_117 - r3_91 < 0)
                r3_92 = 0 - r3_92;
            
            if (r3_92 < 5)
                goto label_169e8;
            
            *(r4_45 + 0xf3e) = r0_117;
            r3_95 = *(r4_45 + 0xf42) + 2;
            *(r4_45 + 0xf42) = r3_95;
        }
        
        *(r4_45 + 0xf46) = r0_117;
        
        if (r3_95 >= 0x14)  /* "_3.00.33_250117" */
            *(r4_45 + 0xf42) = 0x14;  /* "_3.00.33_250117" */
        
        if (r4_45[0xf39] >= 5 || r4_45[0xf3a] >= 5)
            *(r4_45 + 0xf42) = 0;
        
        if ((r4_45[0xf39] < 5 && r4_45[0xf3a] < 5) || r4_45[0xf3a] < 0xa)
        {
            *(r4_45 + 0xf40) = 0;
            *(r4_45 + 0xf44) = 0;
        }
        else
        {
            uint32_t r1_143 = r4_45[2];
            uint32_t r3_97 = *(r4_45 + 0xf48);
            int32_t var_3c_1;
            
            if (r1_143 > r3_97 && r1_143 < (r3_97 << 1) + 0xa)
            {
                uint32_t r2_66 = *(r4_45 + 0xf48);
                
                for (uint32_t i_14 = 0; i_14 < 6; i_14 = i_14 + 1)
                {
                    uint32_t r2_70 = *(&var_e4 + (i_14 << 1));
                    
                    if (r2_70 > (0xa * r2_66) >> 3)
                    {
                        uint32_t r7_32 = r2_66 << 1;
                        
                        if (r2_70 < r7_32 - 0xa && *(&var_ec + i_14) >= 5)
                        {
                            uint32_t r6_77 = r2_70 - r7_32;
                            
                            if (r2_70 - r7_32 < 0)
                                r6_77 = 0 - r6_77;
                            
                            int32_t r6_78 = r6_77 - 0xb;
                            
                            if (r6_77 - 0xb < 0)
                                r6_78 = 0 - r6_78;
                            
                            if (r6_78 > 2)
                            {
                                int32_t r6_79 = var_cc[i_14];
                                
                                if (r6_79 > var_58 >> 2 && r6_79 > 0x1770)
                                {
                                    *(r4_45 + 0xf40) = r2_70;
                                    var_3c_1 = 1;
                                }
                            }
                        }
                    }
                }
            }
            
            if (r1_143 <= r3_97 || r1_143 >= (r3_97 << 1) + 0xa || !var_3c_1)
            {
                uint32_t r1_147 = *(r4_45 + 0xf44);
                
                if (r1_147)
                    *(r4_45 + 0xf44) = r1_147 - 1;
            }
            else
                *(r4_45 + 0xf44) = 5;
        }
        
        int32_t var_44_1;
        
        if (var_58 <= 0x32)  /* "02_V3.0" */
            var_44_1 = 1;
        
        int32_t r2_71 = *(r4_45 + 8);
        
        if (r2_71 > 0x274)
        {
            for (uint32_t i_15 = 0; i_15 < 6; i_15 = i_15 + 1)
            {
                uint32_t r6_81 = *(&var_ec + i_15);
                uint32_t var_38_1;
                
                if (r6_81 > var_38_1)
                    var_38_1 = r6_81;
            }
        }
        
        uint32_t r2_74 = r4_45[0xf2a];
        
        if (r2_74 > 0xa)
            var_44_1 = 0;
        
        if (r2_74 > 0x14)  /* "_3.00.33_250117" */
            r4_45[0xf2a] = 0;
        
        uint32_t r2_75 = r4_45[1];
        r4_45[2] = r2_75;
        uint32_t r2_77 = r4_45[0xf28];
        
        if (r2_77 < 4 || r4_45[0xf39] <= 5)
        {
            uint32_t r2_82 = r4_45[0xf4c];
            
            if (r2_82 > 1)
                r4_45[0xf4c] = r2_82 - 2;
        }
        else
        {
            uint32_t r2_80 = r4_45[0xf4c];
            
            if (r2_80 < 0x3c)
                r4_45[0xf4c] = r2_80 + 1;
        }
        
        if (r2_71 == 0x1db)
            *0x208503 = 1;
        
        uint32_t var_88_4;
        
        if (r4_45[0xf29] != 1)
        {
            if (r2_77)
                goto label_16b46;
            
            if (r2_71 > 0x280 && r0_117 - 0x3c >= 0x29)
            {
                uint32_t r2_101;
                
                r2_101 =
                    var_b8 <= 0xfa0 || *var_e8[1] <= 5 || var_b8 <= var_bc << 1 ? r2_75 : r0_117;
                
                var_88_4 = r2_101;
                
                if (*var_e8[1] > 0x14 && var_b8 > var_bc << 1)  /* "_3.00.33_250117" */
                    var_88_4 = r0_117;
            }
            else if (*var_78[2])
                var_88_4 = r0_117;
            else
                var_88_4 = 0x50;
            
            uint32_t r2_106 = var_dc;
            
            if (r0_117 - (r2_106 << 1) + 3 <= 6 && var_b8 < var_bc << 1 && r2_106 < 0x37)  /* ".0"
                    */
                var_88_4 = r2_106;
            
            if (*0x208501 == 1 && var_88_4 < 0x5a && r2_75 - 0xa > var_88_4 && r2_71 > 0x320)
            {
                for (uint32_t i_16 = 0; i_16 < 6; i_16 = i_16 + 1)
                {
                    uint32_t r2_109 = *(&var_e4 + (i_16 << 1));
                    
                    if (r2_109 - (r0_117 << 1) + 3 > 6 && r2_109 > r0_117 && r2_109 > 0x5a
                            && r2_109 < 0x8c && 6 * var_cc[i_16] > var_b8)
                        var_88_4 = r2_109;
                }
            }
            
            r4_45[0xf2a] = 0;
        }
        else if (!r2_77)
        {
            var_88_4 = r0_117;
            
            if (var_44_1)
            {
                for (uint32_t i_17 = 0; i_17 < 6; i_17 = i_17 + 1)
                {
                    uint32_t r2_93 = *(&var_e4 + (i_17 << 1));
                    
                    if (r2_93 <= 0x64)
                        var_88_4 = r2_93;
                }
            }
        }
        else
        {
        label_16b46:
            uint32_t i_18 = 0;
            int32_t var_50_3 = 0;
            
            do
            {
                int32_t r3_100 = i_18 << 1;
                int32_t var_88_3 = 0;
                
                if (*(&var_80 + r3_100))
                {
                    uint32_t j_3 = 0;
                    uint32_t r3_101 = *0x208501;
                    
                    do
                    {
                        if (r3_101 == 1)
                        {
                            if (r4_45[0xf3a] < 0xa && r4_45[0xf39] < 0xa && *(r4_45 + 8) > 0x7d0
                                    && *(&var_e4 + r3_100) < 0x50)  /* "17 10:58:10 2022" */
                                var_88_3 = 1;
                            
                            uint32_t r3_133 = j_3 << 1;
                            
                            if ((*(&var_6c + r3_133) && *(&var_d8 + r3_133) < 0x5a)
                                || *(&var_d8 + r3_133) > 0x87)
                            {
                                uint32_t r7_39 = *(&var_e4 + r3_100);
                                uint32_t r3_134 = *(&var_d8 + r3_133);
                                uint32_t r3_135 = r7_39 - r3_134;
                                
                                if (r7_39 - r3_134 < 0)
                                    r3_135 = 0 - r3_135;
                                
                                if (r3_135 <= var_34_1 && (var_cc[i_18] <= var_58 >> 3
                                        || *(&var_b4 + (j_3 << 2)) >= var_4c_1 >> 4))
                                    var_88_3 = 1;
                            }
                        }
                        else
                        {
                            int32_t r3_104 = j_3 << 1;
                            
                            if (*(&var_6c + r3_104))
                            {
                                uint32_t r7_37 = *(&var_e4 + r3_100);
                                uint32_t r3_105 = *(&var_d8 + r3_104);
                                uint32_t r3_106 = r7_37 - r3_105;
                                
                                if (r7_37 - r3_105 < 0)
                                    r3_106 = 0 - r3_106;
                                
                                if (r3_106 <= var_34_1)
                                    var_88_3 = 1;
                                
                                if (j_3 != 4)
                                {
                                    uint32_t r3_108 = var_d0;
                                    
                                    if ((r3_105 << 1) - r3_108 + 2 > 4
                                            && r3_105 - (r3_108 << 1) + 2 > 4
                                            && var_cc[i_18] > var_58 >> 3
                                            && *(&var_b4 + (j_3 << 2)) < var_4c_1 >> 4)
                                        var_88_3 = 0;
                                }
                            }
                        }
                        
                        j_3 = j_3 + 1;
                    } while (j_3 < 5);
                    
                    uint32_t r2_87 = var_d0;
                    
                    if (r2_87 <= 0x8c)
                    {
                        if (r2_87 < 0x5a && r2_77 >= 4
                                && *(&var_e4 + r3_100) - (r2_87 << 1) + 2 <= 4)
                            var_88_3 = 1;
                    }
                    else if (r2_77 >= 4)
                    {
                        uint32_t r2_90 = *(&var_e4 + r3_100);
                        uint32_t r3_118 = r2_87 >> 1;
                        uint32_t r2_91 = r2_90 - r3_118;
                        
                        if (r2_90 - r3_118 < 0)
                            r2_91 = 0 - r2_91;
                        
                        if (r2_91 <= 2)
                            var_88_3 = 1;
                    }
                    
                    if (var_58 <= 0x64 && *(&var_e4 + r3_100) - r2_75 + 9 > 0x12)  /* "
                            02_3.00.33_250117" */
                        var_88_3 = 1;
                    
                    if (*(r4_45 + 0xf42) > 4 && *(&var_e4 + r3_100) - *(r4_45 + 0xf3e) + 9 > 0x12)
                            /* "02_3.00.33_250117" */
                        var_88_3 = 1;
                    
                    if (r4_45[0xf3a] >= 0xa && !*(r4_45 + 0xf44))
                    {
                        uint32_t r2_129 = *(r4_45 + 0xf48);
                        uint32_t r7_40 = r2_129 << 1;
                        
                        if (r2_75 <= r7_40)
                        {
                            uint32_t r3_145 = *(&var_e4 + r3_100);
                            
                            if (r3_145 < (0xa * r2_129) >> 3 || r3_145 > r7_40 || r3_145 > 0x8c)
                                var_88_3 = 1;
                        }
                    }
                    
                    uint32_t r2_133 = r4_45[0xf39];
                    uint32_t r2_134;
                    uint32_t r7_42;
                    
                    if (r2_133 >= 0xa)
                    {
                        r2_134 = *(&var_e4 + r3_100);
                        uint32_t r7_41 = *(r4_45 + 0xf4a);
                        uint32_t r3_147 = r2_134 - r7_41;
                        
                        if (r2_134 - r7_41 < 0)
                            r3_147 = 0 - r3_147;
                        
                        int32_t r3_148 = r3_147 - 0xb;
                        
                        if (r3_147 - 0xb < 0)
                            r3_148 = 0 - r3_148;
                        
                        if (r3_148 <= 2 && var_cc[i_18] < var_b8 >> 3 && *(&var_ec + i_18) > 0xa)
                            var_88_3 = 1;
                        
                        r7_42 = r7_41 << 1;
                        uint32_t r3_151 = r2_134 - r7_42;
                        
                        if (r2_134 - r7_42 < 0)
                            r3_151 = 0 - r3_151;
                        
                        int32_t r3_152 = r3_151 - 0xb;
                        
                        if (r3_151 - 0xb < 0)
                            r3_152 = 0 - r3_152;
                        
                        if (r3_152 <= 2 && var_cc[i_18] < var_b8 >> 3 && *(&var_ec + i_18) > 0xa)
                            var_88_3 = 1;
                    }
                    
                    if (r2_133 >= 0xa && r2_75 >= 0x8c)
                    {
                        if (r2_134 <= 0x82 && *(&var_ec + i_18) < 0xa)
                            var_88_3 = 1;
                        
                        if (i_18 != 5)
                            goto label_17014;
                        
                        if (r0_117 - r7_42 + 1 <= 2 && var_74 < 2 && *var_e8[1] >= 0xa)
                            var_88_3 = 0;
                        
                        if (!var_88_3)
                            goto label_1700a;
                        
                        goto label_16f12;
                    }
                    
                    if (i_18 == 5 && var_88_3)
                    {
                    label_16f12:
                        
                        if ((var_74 < 4 || *(&var_e4 + (var_74 << 1)) < 0x78)
                                && var_cc[var_74] << 2 < var_b8 && r0_117 - r2_75 + 0xa <= 0x14
                                && *(&var_e4 + (var_74 << 1)) < r2_75 - 0xa)  /* "_3.00.33_250117" */
                            var_88_3 = 0;
                        
                        if (var_cc[var_74] << 3 < var_b8 && r2_77 >= 4
                                && r0_117 - r2_75 + 0xa <= 0x14 && r0_117 > 0x96 && r0_117 < 0xbe)  /* "
                                _3.00.33_250117" */
                            var_88_3 = 0;
                        
                        uint32_t r6_122 = r0_117 - r2_75;
                        
                        if (r6_122 + 0x14 <= 0x28)  /* "_3.00.33_250117" */
                        {
                            uint32_t r2_159 = *(&var_e4 + (var_74 << 1));
                            
                            if (r2_159 < r2_75 - 5 && r0_117 > 0x8c && r2_159 < 0x78 && r2_77 >= 4)
                                var_88_3 = 0;
                            
                            if (r0_117 > 0x5a && r2_77 && r2_77 < 4)
                            {
                                if (var_74 <= 2 || r2_159 < 0x46)
                                    var_88_3 = 0;
                                else if (r3_101 == 2 && r0_117 > 0x78
                                        && r2_159 - r2_75 + 0x14 > 0x28)  /* "_3.00.33_250117" */
                                    var_88_3 = 0;
                            }
                            
                            if (r2_159 < r2_75 - 0x14 && r2_77 >= 4 && r2_133 >= 0xa)  /* "
                                    _3.00.33_250117" */
                                var_88_3 = 0;
                        }
                        
                        if (r6_122 + 0xa <= 0x14
                            && *(&var_e4 + (var_74 << 1)) - r2_75 + 0x14 > 0x28)  /* "_3.00.33_250117"
                            */
                        {
                            if (r2_77 < 4)
                            {
                                if (r0_117 > 0x5a)
                                    var_88_3 = 0;
                            }
                            else if (r0_117 > 0x8c)
                                var_88_3 = 0;
                        }
                        
                        if (r2_75 > 0x5a && r0_117 > 0x50 && *(&var_e4 + (var_74 << 1)) < 0x50)
                            var_88_3 = 0;
                    }
                    
                label_1700a:
                    
                    if (r2_133 < 0xa)
                    {
                    label_1702c:
                        uint32_t r2_166 = *(&var_e4 + r3_100);
                        
                        if (r2_166 > 0xb4 && r2_166 - r2_75 + 0xa > 0x14
                                && *(&var_ec + i_18) <= 0xa)  /* "_3.00.33_250117" */
                            var_88_3 = 1;
                    }
                    else
                    {
                    label_17014:
                        
                        if (*(&var_e4 + r3_100) >= 0xb4)
                        {
                            if (i_18 < 4 && *(&var_ec + i_18) <= 0xa)
                                var_88_3 = 1;
                            
                            goto label_1702c;
                        }
                    }
                    
                    uint32_t r2_170 = r4_45[0xf4c];
                    
                    if (r2_170 >= 0x1e && r2_133 >= 0xa && r2_77 >= 4 && var_74
                            && *(&var_e4 + (var_74 << 1)) >= r2_75 - 0x14
                            && *(&var_e4 + r3_100) < r2_75 - 0x14 && r2_75 > 0x78)  /* "_3.00.33_250117" */
                            /* "50117" */
                        var_88_3 = 1;
                    
                    uint32_t r7_43 = *(&var_e4 + r3_100);
                    uint32_t r3_203 = r7_43 - r2_87;
                    
                    if (r7_43 - r2_87 < 0)
                        r3_203 = 0 - r3_203;
                    
                    int32_t r3_204 = r3_203 - 5;
                    
                    if (r3_203 - 5 < 0)
                        r3_204 = 0 - r3_204;
                    
                    if (r3_204 <= 3 && var_cc[i_18] << 2 < var_b8 && r7_43 - r2_75 + 0xa > 0x14)
                            /* "_3.00.33_250117" */
                        var_88_3 = 1;
                    
                    if (r2_77 - 1 < 3)
                    {
                        if (r7_43 > 0x6e && *(&var_ec + i_18) <= 6 && i_18 < 3)
                            var_88_3 = 1;
                        
                        if (r7_43 > 0x96 && r2_75 < r7_43 - 0x1e)  /* "50117" */
                            var_88_3 = 1;
                    }
                    
                    if (r2_77 >= 4 && *(&var_e4 + (var_74 << 1)) > r2_75 && r7_43 < r2_75 - 0xa)
                    {
                        uint32_t r3_218 = r7_43 - r0_117;
                        
                        if (r7_43 - r0_117 < 0)
                            r3_218 = 0 - r3_218;
                        
                        int32_t r3_219 = r3_218 - 0xa;
                        
                        if (r3_218 - 0xa < 0)
                            r3_219 = 0 - r3_219;
                        
                        if (r3_219 <= 2 && r0_117 < 0x78)
                            var_88_3 = 1;
                    }
                    
                    if (r2_170 <= 0x14 || r2_77 < 4)  /* "_3.00.33_250117" */
                    {
                        if (r2_170 > 5 && r2_77 >= 4 && r2_75 < 0x6e && r7_43 < r2_75 - 0xa)
                            var_88_3 = 1;
                    }
                    else if (r7_43 < r2_170 + 0x32)  /* "02_V3.0" */
                        var_88_3 = 1;
                    
                    if (r2_77 - 1 < 3)
                    {
                        if (r2_75 <= 0xa0)
                        {
                            if (r2_75 <= 0x8c)
                            {
                                if (r7_43 > 0x96)
                                    var_88_3 = 1;
                            }
                            else if (r7_43 > r2_75 + 0xa)
                                var_88_3 = 1;
                        }
                        else if (r7_43 > r2_75)
                            var_88_3 = 1;
                    }
                    
                    if (r3_101 == 1)
                    {
                        if (r2_77 && *(&var_e4 + (var_74 << 1)) > r2_75 - 0xf
                                && var_cc[var_74] << 1 > var_b8 && r7_43 <= r2_75 - 0xf)
                            var_88_3 = 1;
                        
                        uint32_t r2_190 = r4_45[0x1005];
                        
                        if ((r2_190 >= 0xa && r7_43 < 0x5a) || (r2_190 > 0x14 && r7_43 < 0x64))
                                /* "_3.00.33_250117" */
                            var_88_3 = 1;
                        else if (r2_190 > 0x1e && r7_43 < 0x6e)  /* "50117" */
                            var_88_3 = 1;
                    }
                    else
                    {
                        if (r2_77 - 1 < 3 && r2_87 > 0x64 && (r7_43 << 1) - r2_87 + 2 <= 4)
                            var_88_3 = 1;
                        
                        if (r3_101 == 5 && r4_45[0xfe3] >= 0x28 && r2_77 >= 3)
                        {
                            if (r7_43 < 0x5a || r7_43 < 0x6e)
                                var_88_3 = 1;
                            
                            if (r7_43 + 0xa < r2_75 && r2_75 < 0x82)
                                var_88_3 = 1;
                        }
                    }
                    
                    if (!(var_88_3 | var_50_3))
                    {
                        var_50_3 = 1;
                        var_74 = i_18;
                    }
                    else if (!var_88_3)
                        var_74 = i_18;
                }
                
                i_18 = i_18 + 1;
            } while (i_18 < 6);
            
            if (!var_50_3)
            {
                uint32_t r0_131;
                
                if (r2_77 < 4 || r4_45[0xf39] < 0xa || r2_75 >= 0x8c)
                    r0_131 = r2_75;
                else
                    r0_131 = r2_75 + 1;
                
                var_88_4 = r0_131;
                r4_45[0xf2c] += 1;
                r4_45[0xf2a] += 1;
            }
            else
            {
                uint32_t r0_124;
                
                if (!r4_45[0xf55] || r2_71 <= 0x140)
                    r0_124 = *(&var_e4 + (var_74 << 1));
                else
                    r0_124 = r2_75;
                
                var_88_4 = r0_124;
                r4_45[0xf2a] = 0;
                r4_45[0xf2b] = 0;
                r4_45[0xf2c] = 0;
            }
            
            r4_45[0x1081] = 0;
            r4_45[0x1080] = 0;
            r4_45[0x1082] = 0;
            
            if (!var_50_3)
            {
                for (uint32_t i_19 = 3; i_19; i_19 = (i_19 - 1) << 0x10 >> 0x10)  /* "
                        RY02_3.00.33_250117" */
                    r4_45[i_19 + 0x1083] = r4_45[i_19 + 0x1082];
                
                r4_45[0x1083] = 0;
                r4_45[0x1081] = 0;
                r4_45[0x1080] = 0;
                r4_45[0x1082] = 0;
                uint32_t r1_178 = r4_45[0x1088] + 1;
                r4_45[0x1088] = r1_178;
                
                if (r1_178 >= 3)
                {
                    r4_45[0x1088] = 0;
                    r4_45[0x1087] = 0;
                }
            }
            else
            {
                if (var_74 >= 5)
                    r4_45[0x1081] = 1;
                else
                {
                    int32_t r0_140 = var_cc[var_74];
                    
                    if (r0_140 << 1 > var_b8)
                        r4_45[0x1081] = 2;
                    else if (r0_140 << 3 > var_b8)
                        r4_45[0x1081] = 1;
                    else
                        r4_45[0x1081] = 0;
                }
                
                uint32_t i_20;
                
                for (i_20 = 3; i_20; i_20 = (i_20 - 1) << 0x10 >> 0x10)  /* "RY02_3.00.33_250117" */
                    r4_45[i_20 + 0x1083] = r4_45[i_20 + 0x1082];
                
                uint32_t r2_205 = *(&var_e4 + (var_74 << 1));
                r4_45[0x1083] = r2_205;
                
                if (r2_205 - r4_45[0x1084] + 3 <= 6
                    || (r2_205 - r4_45[0x1085] + 5 <= 0xa && r2_205 - r4_45[0x1086] + 8 <= 0x10))  /* "
                    RY02_3.00.33_250117" */
                {
                    r4_45[0x1080] = 1;
                    uint32_t r2_210 = r4_45[0x1087] + 1;
                    r4_45[0x1087] = r2_210;
                    
                    if (r2_210 >= 0xa)
                    {
                        r4_45[0x1087] = 0xa;
                        r4_45[0x1088] = 0;
                    }
                    else if (r2_210 >= 3)
                        r4_45[0x1088] = 0;
                }
                else
                {
                    r4_45[0x1080] = 0;
                    uint32_t r3_241 = r4_45[0x1088] + 1;
                    r4_45[0x1088] = r3_241;
                    
                    if (r3_241 >= 3)
                    {
                        r4_45[0x1088] = 0;
                        r4_45[0x1087] = 0;
                    }
                }
                
                r4_45[0x1089] = 0;
                
                if (var_74 >= 5)
                    r4_45[0x1089] = 3;
                else
                {
                    for (; i_20 < var_74; i_20 = i_20 + 1)
                    {
                        if (var_cc[i_20] << 1 > var_cc[var_74])
                            r4_45[0x1089] += 1;
                    }
                }
                
                uint32_t r0_147 = r4_45[0x1081];
                int32_t r0_149;
                int32_t r1_172;
                
                if (r4_45[0x1083] >= 0xaa)
                {
                    r1_172 = 6 - r4_45[0x1089];
                    r0_149 = 0xa * r0_147 + (r4_45[0x1087] << 1) - 0xa;
                }
                else
                {
                    r0_149 = 0xa * r0_147 + (r4_45[0x1087] << 1);
                    r1_172 = 6 - r4_45[0x1089];
                }
                
                r4_45[0x1082] = sub_12b3e(r4_45[0x1080] * r1_172 * r0_149, 6);
            }
        }
        
        if (r4_45[0xf2c] > 0x64)
            r4_45[0xf2c] = 0x64;
        
        r4_45[1] = var_88_4;
        uint32_t r3_244 = r4_45[0xfff];
        uint32_t r1_180 = r4_45[0xff8];
        
        if (r3_244 != r1_180)
        {
            r4_45[0x1000] = r3_244;
            r4_45[0xfff] = r1_180;
            r4_45[0x1001] = 0;
            r4_45[0x1002] = 0;
        }
        
        uint32_t r2_217 = r4_45[0xfff];
        uint32_t r7_47 = r4_45[0x1000];
        
        if (r2_217 > r7_47)
        {
            uint32_t r6_138 = r4_45[0x1001] + 1;
            r4_45[0x1001] = r6_138;
            
            if (r6_138 >= 0x20)  /* "117" */
                r4_45[0x1001] = 0x20;  /* "117" */
            
            r4_45[0x1002] = 0;
        }
        
        if (r2_217 < r7_47)
        {
            r4_45[0x1001] = 0;
            uint32_t r2_220 = r4_45[0x1002] + 1;
            r4_45[0x1002] = r2_220;
            
            if (r2_220 >= 0x20)  /* "117" */
                r4_45[0x1002] = 0x20;  /* "117" */
        }
        
        uint32_t r2_222 = r4_45[0xf28];
        int32_t r6_139;
        int32_t r7_48;
        
        if (!r2_222)
        {
            uint32_t r1_187 = r4_45[2];
            
            if (r1_187 < 0x46)
            {
                r6_139 = 2;
                r7_48 = 1;
            }
            else if (r1_187 <= 0x64)
            {
                r6_139 = 2;
                r7_48 = 2;
            }
            else
            {
                r6_139 = 1;
                r7_48 = 2;
            }
        }
        else if (r2_222 >= 4)
        {
            uint32_t r2_226 = r4_45[0x1082];
            
            if (r2_226 >= 0x23)
            {
                uint32_t r2_227 = r4_45[2];
                
                r6_139 = r2_227 <= 0x82 ? 4 : 3;
                
                r7_48 = 2;
                
                if (r2_227 >= r4_45[0x1003])
                    r6_139 = 2;
                
                if (r2_227 > 0xaa)
                    r6_139 = 1;
            }
            else if (r2_226 - 0x14 >= 0xf)  /* "_3.00.33_250117" */
            {
                uint32_t r2_230 = r4_45[2];
                
                if (r2_230 >= 0x6e)
                {
                    if (r2_230 >= 0x8c)
                    {
                        if (r2_230 <= r4_45[0x1003] + 0xa)
                            r6_139 = 1;
                        else
                            r6_139 = 0;
                        
                        r7_48 = 1;
                        goto label_17546;
                    }
                    
                label_17528:
                    r6_139 = 2;
                    r7_48 = 1;
                    
                    if (r2_230 > 0x78)
                    {
                    label_17546:
                        
                        if (var_88_4 - r2_230 + 2 <= 4)
                        {
                            r6_139 = 1;
                            r7_48 = 1;
                        }
                    }
                }
                else
                {
                    if (r4_45[0xf39] < 0xa)
                        goto label_17528;
                    
                    r6_139 = 3;
                    r7_48 = 0xffffffff;
                }
            }
            else
            {
                uint32_t r3_250 = r4_45[0x1003];
                uint32_t r2_229 = r4_45[0x1004];
                uint32_t r1_191 = r4_45[2];
                
                if ((r3_250 + r2_229) >> 1 < r1_191)
                    r6_139 = 2;
                else if (r1_191 > r2_229)
                    r6_139 = 3;
                else
                    r6_139 = 5;
                
                r7_48 = r1_191 < r3_250 ? 1 : 2;
            }
            
            uint32_t r1_198 = var_d0;
            
            if (r1_198 < 0x5a)
            {
                uint32_t r1_199 = r1_198 << 1;
                uint32_t r1_200 = var_88_4 - r1_199;
                uint32_t r2_231 = r1_200;
                
                if (var_88_4 - r1_199 < 0)
                    r1_200 = 0 - r2_231;
                
                int32_t r1_201 = r1_200 - 0xa;
                
                if (r1_200 - 0xa < 0)
                    r1_201 = 0 - r1_201;
                
                if (r1_201 <= 2 || r2_231 + 3 <= 6)
                {
                    if (!r4_45[0xf6a])
                    {
                        r4_45[0xf6a] = 1;
                        r6_139 = 0;
                        r7_48 = 0;
                    }
                    else
                    {
                        r4_45[0xf6a] = 0;
                        r6_139 = 1;
                        r7_48 = 1;
                    }
                }
            }
        }
        else
        {
            uint32_t r2_224 = r4_45[2];
            uint32_t r1_186 = (r4_45[0x1003] + r4_45[0x1004]) >> 1;
            
            r6_139 = r1_186 >= r2_224 ? 2 : 1;
            
            uint32_t r3_247 = r4_45[0x1082];
            r7_48 = 1;
            
            if (r3_247 >= 0x23)
            {
                r6_139 = 2;
                r7_48 = 2;
            }
            else if (r3_247 < 0xa)
            {
                if (r1_186 + 0xa < r2_224)
                    r6_139 = 0;
                else if (r1_186 - 0xa > r2_224)
                {
                    r6_139 = 1;
                    r7_48 = 0;
                }
            }
        }
        
        uint32_t r1_203 = *0x208501;
        
        if (r1_203 == 1)
        {
            if (r2_222)
            {
                if (r4_45[2] >= 0x78)
                    r6_139 = 1;
                else
                    r6_139 = 2;
                
                r7_48 = 1;
            }
            
            goto label_175c4;
        }
        
        if (r1_203 == 2)
        {
            if (r2_222)
            {
                if (r4_45[2] >= 0x78)
                    r6_139 = 1;
                else
                    r6_139 = 2;
                
                r7_48 = 1;
            }
            
            goto label_175e6;
        }
        
        if (r1_203 == 4)
        {
            if (r2_222)
            {
                uint32_t r2_234 = r4_45[2];
                
                if (r2_222 >= 4)
                {
                    if (r2_234 > 0xa * r2_222 + 0x64)
                        r6_139 = 1;
                }
                else if (r2_234 > 0x64)
                    r6_139 = 1;
                else if (r2_234 > 0xa * r2_222 + 0x64)
                    r6_139 = 0;
            }
            
            goto label_17676;
        }
        
        if (r1_203 == 5)
        {
            if (r2_222 > 1)
            {
                uint32_t r1_219 = r4_45[2];
                
                if (r1_219 >= 0x64)
                {
                    if (r1_219 >= 0x78)
                    {
                        if (r1_219 >= 0x8c || r2_222 == 2)
                        {
                            r6_139 = 2;
                            r7_48 = 1;
                        }
                        else
                        {
                            r6_139 = 3;
                            r7_48 = 1;
                        }
                    }
                    else if (r2_222 == 2)
                    {
                        r6_139 = 3;
                        r7_48 = 1;
                    }
                    else if (r2_222 == 3)
                    {
                        r6_139 = 3;
                        r7_48 = 0;
                    }
                    else
                    {
                        r6_139 = 3;
                        r7_48 = 0xffffffff;
                    }
                }
                else if (r2_222 == 2)
                {
                    r6_139 = 3;
                    r7_48 = 0;
                }
                else
                {
                    r6_139 = 3;
                    r7_48 = 0xffffffff;
                }
            }
            
            goto label_17676;
        }
        
        if (r1_203 == 1)
        {
        label_175c4:
            
            if (r4_45[0xf4d] > 2 && r2_222)
                r7_48 = 0;
        }
        else if (r1_203 == 2)
        {
        label_175e6:
            
            if (r4_45[0xf4d] > 2 && r2_222 && r4_45[2] < 0x6e)
                r7_48 = 0;
        }
        else
        {
        label_17676:
            
            if (r4_45[0xf4c] > 0x14 && r4_45[0xf4d] > 3 && r2_222 >= 4)  /* "_3.00.33_250117" */
            {
                uint32_t r1_226 = r4_45[2];
                
                if (r1_226 < 0x78)
                    r7_48 = 0xffffffff;
                else if (r1_226 < 0x8c)
                    r7_48 = 0;
            }
            
            if (r1_203 == 5)
            {
                if (r1_180 >= 4 || r1_180 >= 3)
                {
                    uint32_t r1_230 = r4_45[0xfe3];
                    
                    if (r1_230 < 0x3c)
                        r4_45[0xfe0 + 3] = r1_230 + 1;
                }
                else
                {
                    uint32_t r1_233 = r4_45[0xfe3];
                    
                    if (r1_233)
                        r4_45[0xfe0 + 3] = r1_233 - 2;
                }
                
                if (r2_222 >= 3)
                {
                    if (r4_45[0xfe3] >= 0x28)
                    {
                        uint32_t r1_237 = r4_45[2];
                        
                        if (r1_237 < 0x64)
                        {
                            r6_139 = 3;
                            r7_48 = 0xffffffff;
                        }
                        else if (r1_237 < 0x78)
                        {
                            r6_139 = 3;
                            r7_48 = 0;
                        }
                        else if (r1_237 < 0x8c)
                        {
                            r6_139 = 3;
                            r7_48 = 1;
                        }
                        else if (r1_237 > 0xa0 && var_88_4 > r1_237 + 0xa)
                        {
                            if (r2_222 >= 4)
                                r6_139 = 1;
                            else
                                r6_139 = 0;
                        }
                    }
                    else if (r6_139 > 1)
                        r6_139 = 1;
                }
            }
        }
        
        int32_t r1_240 = *(r4_45 + 8);
        
        if (r1_240 == 0xe1)
        {
            if (r1_203 == 4)
            {
                if (!r2_222 && var_54 > 0x10)  /* "RY02_3.00.33_250117" */
                {
                    if (var_88_4 <= 0x78)
                        goto label_17742;
                    
                    r4_45[1] = sub_12b2a(var_88_4, 0xa) + 0x78;
                }
                else if (var_88_4 <= 0x64)
                {
                label_17742:
                    
                    if (var_88_4 < 0x4b)
                        r4_45[1] = sub_12b2a(var_88_4, 0xa) + 0x46;
                }
                else
                    r4_45[1] = sub_12b2a(var_88_4, 0xa) + 0x64;
            }
            else if ((r2_222 || var_54 <= 0x10) && var_88_4 > 0x5f)  /* "RY02_3.00.33_250117" */
                r4_45[1] = sub_12b2a(var_88_4, 0xa) + 0x5a;
            
            r4_45[0xf29] = 0;
            r4_45[2] = r4_45[1];
            *0x208502 = 2;
        }
        
        if (!r2_222)
        {
            if (r1_240 == 0xe1)
            {
                for (uint32_t i_21 = 0; i_21 < 5; )
                {
                    *((i_21 << 2) + r4_45 + 0xfc8) = var_54;
                    i_21 = i_21 + 1;
                    var_5c += var_54;
                }
                
                r4_45[0xf6b] = sub_12b3e(var_5c, 5);
            }
            else if (r1_240 > 0xe1 && var_54)
            {
                for (uint32_t i_22 = 0; i_22 < 4; )
                {
                    int32_t r2_238 = *((i_22 << 2) + r4_45 + 0xfcc);
                    *((i_22 << 2) + r4_45 + 0xfc8) = r2_238;
                    i_22 = i_22 + 1;
                    var_5c += r2_238;
                }
                
                *(r4_45 + 0xfd8) = var_54;
                r4_45[0xf6b] = sub_12b3e(var_54 + var_5c, 5);
            }
            
            r4_45[0xf5c] = r4_45[0xf6b];
        }
        else if (r2_222 != 1)
            r4_45[0xf5c] = -1;
        else if (r1_240 == 0xe1)
        {
            for (uint32_t i_23 = 0; i_23 < 5; )
            {
                void* r3_257 = &r4_45[(i_23 << 2) + 0xf80];
                i_23 = i_23 + 1;
                *(r3_257 + 0x48) = 0xa;
            }
            
            r4_45[0xf6b] = 0xa;
        }
        
        if (!r4_45[0xf29])
        {
            uint32_t r1_260 = r4_45[2];
            uint32_t r2_239 = r4_45[1];
            uint32_t r0_165 = r1_260 - r7_48;
            
            if (r0_165 > r2_239)
                r4_45[1] = r0_165;
            else
            {
                r0_165 = r1_260 + r6_139;
                
                if (r0_165 < r2_239)
                    r4_45[1] = r0_165;
            }
        }
        else
            r4_45[1] = var_88_4;
        
        if (r1_203 != 1 && r1_203 != 2)
        {
            if (r4_45[0xf4c] <= 0x14 || r4_45[1] >= r4_45[2])  /* "_3.00.33_250117" */
                goto label_17864;
            
            goto label_1784a;
        }
        
        if (r4_45[1] >= r4_45[2] || !r4_45[0xf28])
        {
        label_17864:
            uint32_t r0_185 = r4_45[0xf4d];
            
            if (r0_185)
                r4_45[0xf4d] = r0_185 - 1;
        }
        else
        {
        label_1784a:
            uint32_t r0_180 = r4_45[0xf4d];
            
            if (r0_180 < 0xa)
                r4_45[0xf4d] = r0_180 + 1;
        }
        
        int32_t r6_141 = *(r4_45 + 8);
        
        if (r6_141 > 0x2ee)
        {
            int32_t r0_186;
            
            if (r6_141 < 0x3a98)
                r0_186 = 6;
            else if (r6_141 >= 0xafc8)
                r0_186 = 0xa;
            else
                r0_186 = 8;
            
            uint32_t r1_263 = r4_45[1];
            void* r0_187;
            
            if (r1_263 < 0x50)
            {
                r0_187 = &r4_45[0xf00];
                *(r0_187 + 0x60) += 0xf;
            }
            else if (r1_263 >= 0x64)
            {
                int32_t r0_188;
                void* r1_267;
                int32_t r3_258;
                
                if (r1_263 < 0x78)
                {
                    r1_267 = &r4_45[0xf00];
                    r3_258 = *(r1_267 + 0x60);
                    r0_188 = 0xa * r0_186;
                }
                else if (r1_263 >= 0x8c)
                {
                    int32_t r5_32;
                    
                    if (r1_263 < 0xa0)
                    {
                        r1_267 = &r4_45[0xf00];
                        r5_32 = 0x14;  /* "_3.00.33_250117" */
                        r3_258 = *(r1_267 + 0x60);
                    }
                    else if (r1_263 >= 0xb4)
                    {
                        r1_267 = &r4_45[0xf00];
                        r3_258 = *(r1_267 + 0x60);
                        r5_32 = 0x19;  /* ".33_250117" */
                    }
                    else
                    {
                        r1_267 = &r4_45[0xf00];
                        r5_32 = 0x16;  /* ".00.33_250117" */
                        r3_258 = *(r1_267 + 0x60);
                    }
                    
                    r0_188 = r5_32 * r0_186;
                }
                else
                {
                    r1_267 = &r4_45[0xf00];
                    r0_188 = r0_186 * 0xf;
                    r3_258 = *(r1_267 + 0x60);
                }
                
                *(r1_267 + 0x60) = r3_258 + r0_188;
            }
            else
            {
                r0_187 = &r4_45[0xf00];
                *(r0_187 + 0x60) += 0x14;  /* "_3.00.33_250117" */
            }
        }
        
        uint32_t r5_34 = r4_45[1];
        
        if (r5_34 > *(r4_45 + 0xfdc))
            *(r4_45 + 0xfdc) = r5_34;
        
        if (r5_34 < *(r4_45 + 0xfde))
            *(r4_45 + 0xfde) = r5_34;
        
        int16_t r1_270;
        
        if (r5_34 < 0x4b)
            r1_270 = 0;
        else if (r5_34 >= 0x5f)
            r1_270 = 0x14;  /* "_3.00.33_250117" */
        else
            r1_270 = r5_34 - 0x4b;
        
        *(r4_45 + 0xfe0) = r1_270;
        uint32_t r2_240 = *(r4_45 + 0xfdc);
        uint32_t r1_272 = *(r4_45 + 0xfde);
        
        if (r2_240 > r1_272 && r1_272 && r6_141 > 0x1f4)
        {
            uint32_t r0_193 = (r5_34 >> 2) + (r5_34 << 1) - r2_240 - r1_272 + *(r4_45 + 0xfe0);
            r4_45[0xfe2] = r0_193;
            
            if (r0_193 < 0x14)  /* "_3.00.33_250117" */
                r4_45[0xfe2] = sub_12b2a(r0_193, 0xa) + 0x14;  /* "_3.00.33_250117" */
            
            uint32_t r0_196 = r4_45[0xfe2];
            
            if (r0_196 > 0x3c)
                r4_45[0xfe2] = sub_12b2a(r0_196, 0xa) + 0x3c;
        }
        
        uint32_t r0_198 = *(r4_45 + 4);
        uint32_t r0_202;
        
        r0_202 = !r0_198 ? r5_34 << 3 : (r0_198 * 3 + (r5_34 << 3)) << 0xe >> 0x10;
            /* "RY02_3.00.33_250117" */
        
        *(r4_45 + 4) = r0_202;
        uint32_t r0_204 = r0_202 << 0x15 >> 0x18;  /* "3.00.33_250117" */  /* "0.33_250117" */
        *r4_45 = r0_204;
        
        if (r6_141 > 0x190 && r0_204 && !r4_45[0xf68])
            sub_15580(r0_204, *0x208510, *0x208514);
    }
    
    *0x208508 = 0;
    uint32_t r2_243 = *0x208504;
    
    if (r2_243 == 1)
    {
        void* r2_244 = *0x20850c;
        
        if (*(r2_244 + 8) < 0x64)
        {
        label_17a54:
            *0x208508 = 6;
            *0x208507 = 0;
        }
        else
        {
            *0x208508 = 1;
            
            if (*(r2_244 + 0xfb0) < *0x208506)
            {
                *0x208508 = 4;
                *0x208507 = 2;
            }
            else
            {
                *0x208508 = 2;
                
                if (*(r2_244 + 0xf5c) >= *0x208505)
                {
                    *0x208508 = 3;
                    *0x208507 = 1;
                }
            }
        }
    }
    else
    {
        if (r2_243 != 2)
            goto label_17a54;
        
        void* r2_248 = *0x20850c;
        
        if (*(r2_248 + 8) < 0x64)
            goto label_17a54;
        
        *0x208508 = 5;
        uint32_t r1_288;
        uint32_t r2_249;
        
        if (*(r2_248 + 0xfb0) < *0x208506)
        {
            r1_288 = *(r2_248 + 0xf5c);
            r2_249 = (*0x208505 * 3) >> 1;
        }
        else
        {
            r1_288 = *(r2_248 + 0xf5c);
            r2_249 = *0x208505;
        }
        
        if (r1_288 >= r2_249)
            *0x208507 = 1;
    }
    
    void* r0_205 = *0x20850c;
    *(r0_205 + 8) += 1;
    return 1;
}

int32_t sub_17a70()
{
    if (*0x20850c)
        *0x20850c = 0;
    
    return 0x208500;
}

int32_t sub_17a84(int32_t arg1)
{
    uint8_t var_38;
    0xff81b968(&var_38, 0x28);
    uint32_t r0_1 = *0x208502;
    var_38 = r0_1;
    uint32_t r3 = *0x208507;
    uint8_t var_37 = r3;
    char* r1 = *0x20850c;
    int32_t var_34 = *(r1 + 8);
    char var_2c = r1[0xf5c];
    int32_t var_28 = *(r1 + 0xfb0);
    
    if (r0_1 != 2 || (r3 != 1 && *0x208504))
    {
        char var_30 = 0;
        int16_t var_2e = 0;
        char var_14 = 0;
    }
    else
    {
        char var_30_1 = *r1;
        uint16_t var_2e_1 = *(r1 + 0xf60) << 6 >> 0x10;  /* "RY02_3.00.33_250117" */
        char var_14_1 = r1[0xfe2];
    }
    
    int32_t var_24 = *(r1 + 0x10c4);
    int32_t var_20 = *(r1 + 0x10c8);
    int32_t var_18 = *(r1 + 0x1110);
    int32_t r1_2 = *(r1 + 0x110c);
    
    if (r1_2 - 1 <= 0x27)
        int32_t var_1c_1 = r1_2 + 0x5b;
    else if (r1_2 - 0x29 <= 0x1c)  /* "_250117" */
        var_1c_1 = r1_2 + 0x45;
    else if (r1_2 - 0x46 <= 0x1e)  /* "50117" */
        var_1c_1 = r1_2 + 0x26;
    else if (r1_2 > 0x64)
        int32_t var_1c_2 = 0x8b;
    
    return 0xff7dc2f8(arg1, &var_38, 0x28);
}

int32_t sub_17b50()
{
    *0x208502 = 1;
    *0x208507 = 0;
    *0x20850c = 0x20c194;
    *0x20c194 = 0;
    *0x20c195 = 0x48;
    *0x20c196 = 0x48;
    *0x20c198 = 0;
    *0x20c19c = 0;
    __builtin_memset(0x20c1a8, 0, 0x39);
    
    for (uint32_t i = 0; i < 0x6e; )
    {
        *((i << 1) + 0x20c1e2) = 0;
        *((i << 1) + 0x20c2be) = 0;
        *((i << 3) + 0x20c39c) = 0;
        *((i << 3) + 0x20c3a0) = 0;
        void* r3_9 = (i << 3) + 0x20c694;
        *(r3_9 + 0x78) = 0;
        i = i + 1;
        *(r3_9 + 0x7c) = 0;
    }
    
    for (uint32_t i_1 = 0; i_1 < 0xc8; )
    {
        void* r3_12 = (i_1 << 2) + 0x20cd94;
        *((i_1 << 2) + 0x20ca7c) = 0;
        i_1 = i_1 + 1;
        *(r3_12 + 8) = 0;
    }
    
    *0x20d0bc = 0;
    *0x20d0bd = 1;
    *0x20d0be = 0;
    *0x20d0bf = 0;
    *0x20d0c0 = 0;
    
    for (uint32_t i_2 = 0; i_2 < 6; )
    {
        void* r5_3 = i_2 + 0x20d0b4;
        *(r5_3 + 0xd) = 0;
        i_2 = i_2 + 1;
        *(r5_3 + 0x13) = 0;  /* "2_3.00.33_250117" */
    }
    
    *0x20d0cd = 0;
    *0x20d0ce = 0;
    __builtin_memset(0x20d0d0, 0, 0x12);  /* "02_3.00.33_250117" */
    *0x20d0e4 = 0;
    *0x20d0e8 = 0;
    *0x20d0e9 = 0;
    *0x20d0ea = 0x50;
    *0x20d0eb = 0x50;
    
    for (uint32_t i_3 = 0; i_3 < 4; )
    {
        void* r6_2 = i_3 + 0x20d0d4;
        i_3 = i_3 + 1;
        *(r6_2 + 0x18) = 0;  /* "0.33_250117" */
    }
    
    *0x20d0f0 = 4;
    *0x20d0f4 = 0;
    *0x20d0f8 = 0;
    *0x20d0fc = 0;
    *0x20d0fd = 0;
    *0x20d0fe = 0;
    *0x20d0ff = 0x14;  /* "_3.00.33_250117" */
    
    for (uint32_t i_4 = 0; i_4 < 0x10; )  /* "RY02_3.00.33_250117" */
    {
        void* r3_15 = (i_4 << 2) + 0x20d094;
        i_4 = i_4 + 1;
        *(r3_15 + 0x6c) = 0;
    }
    
    *0x20d140 = 0;
    *0x20d144 = 0;
    
    for (uint32_t i_5 = 0; i_5 < 5; )
    {
        void* r4_5 = (i_5 << 2) + 0x20d114;
        *(r4_5 + 0x34) = 0;  /* "_V3.0" */
        i_5 = i_5 + 1;
        *(r4_5 + 0x48) = 0;
    }
    
    *0x20d177 = 0;
    *0x20d170 = 0;
    *0x20d172 = 0xc8;
    *0x20d174 = 0;
    *0x20d176 = 0;
    
    for (uint32_t i_6 = 0; i_6 < 0xb; )
    {
        void* r4_7 = (i_6 << 2) + 0x20d214;
        i_6 = i_6 + 1;
        *(r4_7 + 0xc) = 0;
    }
    
    __builtin_memset(0x20d24c, 0, 0x14);  /* "_3.00.33_250117" */
    
    for (uint32_t i_7 = 0; i_7 < 0x10; )  /* "RY02_3.00.33_250117" */
    {
        void* r4_9 = (i_7 << 2) + 0x20d214;
        i_7 = i_7 + 1;
        *(r4_9 + 0x4c) = 0;
    }
    
    *0x20d2a0 = 0;
    *0x20d2a4 = 0;
    sub_159d0();
    return 1;
}

int32_t sub_17cec()
{
    sub_17b50();
    return 1;
}

int32_t sub_17cf8(int32_t* arg1, int32_t arg2, void* arg3, void* arg4, void* arg5)
{
    void* var_1c = arg3;
    int32_t var_20 = arg2;
    int32_t* var_24 = arg1;
    uint32_t i = 0;
    int32_t result = *0x20850c;
    
    if (!result)
        return result;
    
    if (!arg3)
    {
        for (; i < arg2; i = i + 1)
            sub_15e14(arg1[i], 0, 0, 0);
    }
    else
    {
        for (; i < arg2; i = i + 1)
        {
            int32_t r0_2 = i << 1;
            sub_15e14(arg1[i], *(arg3 + r0_2), *(arg4 + r0_2), *(arg5 + r0_2));
        }
    }
    
    return 1;
}

void sub_17d50(char arg1, char arg2, char arg3)
{
    *0x208504 = arg1;
    *0x208505 = arg2;
    *0x208506 = arg3;
}

uint32_t sub_17d60()
{
    uint32_t i_10 = 0;
    int32_t var_2c = 0;
    int32_t var_38 = 0;
    int16_t var_34 = 0;
    int32_t var_50[0x5];
    0xff81b968(&var_50, 0x18);  /* "0.33_250117" */
    int32_t var_28 = 0;
    int32_t r12 = 0;
    int32_t r1 = 0;
    int32_t r3 = 0;
    void* r2 = *0x2084d0;
    int32_t r0_1 = 0xd693a400;
    int32_t r6 = 0xdc898500;
    uint32_t i;
    
    do
    {
        void* r2_3 = (i_10 << 3) + r2;
        int32_t r4_4 = *(r2_3 + 0x6fc) >> 0xf;
        int32_t r2_6 = *(r2_3 + 0x700) >> 0xf;
        int32_t r4_6 = r4_4 * r4_4 + r2_6 * r2_6;
        var_28 += r4_6;
        
        if (r4_6 < r0_1 && r0_1 >= r6)
        {
            for (uint32_t j = 0; j < 6; j = j + 1)
            {
                int32_t r5_5 = var_50[j];
                
                if (r5_5 < r0_1)
                {
                    if (j)
                    {
                        *(&var_38 + j - 1) = *(&var_38 + j);
                        *(&var_50[j] - 4) = r5_5;
                    }
                    
                    *(&var_38 + j) = i_10 - 1;
                    var_50[j] = r0_1;
                }
            }
        }
        
        r6 = r0_1;
        r0_1 = r4_6;
        
        if (r4_6 > var_2c)
            var_2c = r0_1;
        
        i = i_10 + 1;
        i_10 = i;
    } while (i < 0x64);
    int32_t var_3c;
    *(r2 + 0xc8c) = var_3c;
    uint32_t r7_3 = *var_34[1];
    
    if (r7_3 - 0xa <= 0x4f)
    {
        for (uint32_t i_1 = r7_3 - 0xa; r7_3 + 0xa >= i_1; i_1 = i_1 + 1)
        {
            void* r0_11 = (i_1 << 3) + r2;
            int32_t r4_10 = *(r0_11 + 0x6fc) >> 0xf;
            int32_t r0_14 = *(r0_11 + 0x700) >> 0xf;
            r12 += r4_10 * r4_10 + r0_14 * r0_14;
        }
    }
    else if (r7_3 < 0xa)
    {
        for (uint32_t i_2 = 0; r7_3 + 0xa >= i_2; i_2 = i_2 + 1)
        {
            void* r0_22 = (i_2 << 3) + r2;
            int32_t r4_14 = *(r0_22 + 0x6fc) >> 0xf;
            int32_t r0_25 = *(r0_22 + 0x700) >> 0xf;
            r12 += r4_14 * r4_14 + r0_25 * r0_25;
        }
    }
    else if (r7_3 > 0x59)
    {
        uint32_t i_3 = r7_3 - 0xa;
        int16_t var_30_2 = i_3;
        
        while (i_3 < 0x64)
        {
            void* r0_31 = (i_3 << 3) + r2;
            int32_t r4_18 = *(r0_31 + 0x6fc) >> 0xf;
            int32_t r0_34 = *(r0_31 + 0x700) >> 0xf;
            r12 += r4_18 * r4_18 + r0_34 * r0_34;
            i_3 = var_30_2 + 1;
            var_30_2 = i_3;
        }
    }
    
    uint32_t r2_14 = 0;
    int32_t r4_21 = (r7_3 << 1) + 0x5a;
    int32_t var_20_2 = r4_21;
    
    while (true)
    {
        uint32_t r5_11 = *(&var_38 + r2_14);
        
        if ((r4_21 - r5_11 - 0x29 <= 8 || (r5_11 << 1) + 0x5a - r7_3 - 0x29 <= 8)
            && var_3c > var_50[r2_14] << 1 && r5_11)
        {
            r1 = 0;
            
            if (r5_11 - 0xa <= 0x4f)
            {
                for (uint32_t i_4 = r5_11 - 0xa; r5_11 + 0xa >= i_4; i_4 = i_4 + 1)
                {
                    void* r4_36 = (i_4 << 3) + r2;
                    int32_t r5_15 = *(r4_36 + 0x6fc) >> 0xf;
                    int32_t r4_39 = *(r4_36 + 0x700) >> 0xf;
                    r1 += r5_15 * r5_15 + r4_39 * r4_39;
                }
            }
            else if (r5_11 < 0xa)
            {
                for (uint32_t i_5 = 0; r5_11 + 0xa >= i_5; i_5 = i_5 + 1)
                {
                    void* r4_49 = (i_5 << 3) + r2;
                    int32_t r5_21 = *(r4_49 + 0x6fc) >> 0xf;
                    int32_t r4_52 = *(r4_49 + 0x700) >> 0xf;
                    r1 += r5_21 * r5_21 + r4_52 * r4_52;
                }
            }
            else if (r5_11 > 0x59)
            {
                uint32_t i_6 = r5_11 - 0xa;
                int16_t var_30_3 = i_6;
                
                while (i_6 < 0x64)
                {
                    void* r4_60 = (i_6 << 3) + r2;
                    int32_t r5_26 = *(r4_60 + 0x6fc) >> 0xf;
                    int32_t r4_63 = *(r4_60 + 0x700) >> 0xf;
                    r1 += r5_26 * r5_26 + r4_63 * r4_63;
                    i_6 = var_30_3 + 1;
                    var_30_3 = i_6;
                }
            }
        }
        
        uint32_t r4_69 = r7_3 - r5_11;
        
        if (r7_3 - r5_11 < 0)
            r4_69 = 0 - r4_69;
        
        int32_t r4_70 = r4_69 - 0xe;
        
        if (r4_69 - 0xe < 0)
            r4_70 = 0 - r4_70;
        
        if (r4_70 <= 2 && var_3c > var_50[r2_14] << 1 && r5_11)
        {
            if (r5_11 - 5 <= 0x59)
            {
                uint32_t i_11 = r5_11 - 5;
                uint32_t i_7 = i_11;
                
                while (r5_11 + 5 >= i_7)
                {
                    void* r4_79 = (i_7 << 3) + r2;
                    int32_t r5_31 = *(r4_79 + 0x6fc) >> 0xf;
                    int32_t r4_82 = *(r4_79 + 0x700) >> 0xf;
                    r3 += r5_31 * r5_31 + r4_82 * r4_82;
                    i_7 = i_11 + 1;
                    i_11 = i_7;
                }
            }
            else if (r5_11 < 5)
            {
                for (uint32_t i_8 = 0; r5_11 + 5 >= i_8; i_8 = i_8 + 1)
                {
                    void* r4_89 = (i_8 << 3) + r2;
                    int32_t r5_36 = *(r4_89 + 0x6fc) >> 0xf;
                    int32_t r4_92 = *(r4_89 + 0x700) >> 0xf;
                    r3 += r5_36 * r5_36 + r4_92 * r4_92;
                }
            }
            else if (r5_11 > 0x5e)
            {
                uint32_t i_9 = r5_11 - 5;
                int16_t lr_4 = i_9;
                
                while (i_9 < 0x64)
                {
                    void* r4_99 = (i_9 << 3) + r2;
                    int32_t r5_41 = *(r4_99 + 0x6fc) >> 0xf;
                    int32_t r4_102 = *(r4_99 + 0x700) >> 0xf;
                    r3 += r5_41 * r5_41 + r4_102 * r4_102;
                    i_9 = lr_4 + 1;
                    lr_4 = i_9;
                }
            }
        }
        
        r2_14 = r2_14 + 1;
        
        if (r2_14 >= 5)
            break;
        
        r4_21 = var_20_2;
    }
    
    int32_t r0_42 = r12 + r1 + r3;
    
    if (r0_42 + 8 >= var_28)
        *(r2 + 0xc92) = 0xa0;
    else
        *(r2 + 0xc92) = sub_12b2a(r0_42, (var_28 - r12 - r1 - r3) >> 3);
    
    return r7_3 + 0x2d;
}

int32_t sub_18100(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    void* r4 = *0x20850c;
    int32_t r2_1 = *(r4 + 0xff4) + 1;
    *(r4 + 0xff4) = r2_1;
    
    if (r2_1 == 0x186a0)
        *(r4 + 0xff4) = 0;
    
    int32_t r2_4 = arg1 - *(r4 + 0x100c);
    *(r4 + 0x100c) = *(r4 + 0x1008);
    *(r4 + 0x1008) = arg1;
    int32_t r0 = *(r4 + 0x1010);
    int32_t r2_7 = r2_4 - ((0xffffff93 * r0 + 0x33 * *(r4 + 0x1014)) >> 6);  /* "2_V3.0" */
    *(r4 + 0x1018) = r2_7;
    *(r4 + 0x1014) = r0;
    *(r4 + 0x1010) = r2_7;
    int32_t r4_2 = r2_7 - *(r4 + 0x1020);
    int32_t r0_6 = *(r4 + 0x101c);
    *(r4 + 0x101c) = r2_7;
    *(r4 + 0x1020) = r0_6;
    int32_t r4_3 = *(r4 + 0x1024);
    int32_t r0_11 = r4_2 - ((0xffffffad * r4_3 + 0x2a * *(r4 + 0x1028)) >> 6);
    *(r4 + 0x102c) = r0_11;
    *(r4 + 0x1028) = r4_3;
    *(r4 + 0x1024) = r0_11;
    int32_t r2_10 = arg2 - *(r4 + 0x1034);
    *(r4 + 0x1034) = *(r4 + 0x1030);
    *(r4 + 0x1030) = arg2;
    int32_t r1 = *(r4 + 0x1038);
    int32_t r2_13 = r2_10 - ((0xffffff93 * r1 + 0x33 * *(r4 + 0x103c)) >> 6);  /* "2_V3.0" */
    *(r4 + 0x1040) = r2_13;
    *(r4 + 0x103c) = r1;
    *(r4 + 0x1038) = r2_13;
    int32_t r4_7 = r2_13 - *(r4 + 0x1048);
    int32_t r1_6 = *(r4 + 0x1044);
    *(r4 + 0x1044) = r2_13;
    *(r4 + 0x1048) = r1_6;
    int32_t r4_8 = *(r4 + 0x104c);
    int32_t r1_11 = r4_7 - ((0xffffffad * r4_8 + 0x2a * *(r4 + 0x1050)) >> 6);
    *(r4 + 0x1054) = r1_11;
    *(r4 + 0x1050) = r4_8;
    *(r4 + 0x104c) = r1_11;
    int32_t r4_12 = arg3 - *(r4 + 0x105c);
    *(r4 + 0x105c) = *(r4 + 0x1058);
    *(r4 + 0x1058) = arg3;
    int32_t r2_18 = *(r4 + 0x1060);
    int32_t r4_16 = r4_12 - ((0xffffff93 * r2_18 + 0x33 * *(r4 + 0x1064)) >> 6);  /* "2_V3.0" */
    *(r4 + 0x1068) = r4_16;
    *(r4 + 0x1060) = r4_16;
    *(r4 + 0x1064) = r2_18;
    int32_t r0_12 = r0_11;
    int32_t r6_6 = r4_16 - *(r4 + 0x1070);
    int32_t r2_25 = *(r4 + 0x106c);
    *(r4 + 0x106c) = r4_16;
    *(r4 + 0x1070) = r2_25;
    int32_t r2_26 = *(r4 + 0x1074);
    int32_t r4_19 = r6_6 - ((0xffffffad * r2_26 + 0x2a * *(r4 + 0x1078)) >> 6);
    *(r4 + 0x107c) = r4_19;
    *(r4 + 0x1074) = r4_19;
    int32_t r1_12 = r1_11;
    *(r4 + 0x1078) = r2_26;
    int32_t r2_31 = r4_19;
    int32_t r0_16;
    int32_t r1_14;
    r0_16 = sub_1351a(r0_12 * r0_12 + r1_12 * r1_12 + r2_31 * r2_31);
    int32_t r0_17;
    int32_t r1_15;
    r0_17 = sub_154fc(r0_16, r1_14);
    int16_t r0_18 = sub_13424(r0_17, r1_15);
    uint32_t i = 4;
    char const* const r4_20 = *0x20850c;
    
    do
    {
        *((i << 1) + r4_20 + 0xfe4) = *((i << 1) + r4_20 + 0xfe2);
        i = (i - 1) << 0x10 >> 0x10;  /* "RY02_3.00.33_250117" */
    } while (i);
    
    int32_t r3_5 = r0_18;
    *(r4_20 + 0xfe4) = r3_5;
    int32_t r1_18 = *(r4_20 + 0xfe8);
    int32_t r6_9 = *(r4_20 + 0xfec);
    
    if (r1_18 > r6_9 && r1_18 > *(r4_20 + 0xfea) && r1_18 > *(r4_20 + 0xfe6) && r1_18 > r3_5)
        *(r4_20 + 0xfee) = r1_18;
    else if (r1_18 == r6_9 && r1_18 == *(r4_20 + 0xfea) && r1_18 == *(r4_20 + 0xfe6)
            && r1_18 == r3_5 && r1_18 <= 0x14)  /* "_3.00.33_250117" */
        *(r4_20 + 0xfee) = r1_18;
    
    int32_t r1_19 = *(r4_20 + 0xfee);
    int32_t r2_37 = *(r4_20 + 0xff0);
    int16_t r1_21;
    
    r1_21 = r1_19 <= 0x1f4 ? (r2_37 * 0xf + r1_19) >> 4 : (r2_37 * 0x7f + r1_19) >> 7;
    
    *(r4_20 + 0xff0) = r1_21;
    int32_t r1_23 = r1_21;
    int32_t r1_24;
    
    if (r1_23 < *0x20850a)
    {
        uint32_t r2_41 = r4_20[0xffa];
        r1_24 = 0;
        
        if (r2_41)
            r4_20[0xffa] = r2_41 - 1;
        
        uint32_t r2_43 = r4_20[0xff9];
        
        if (r2_43 < 0x19)  /* ".33_250117" */
            r4_20[0xff9] = r2_43 + 1;
        
        goto label_18350;
    }
    
    if (r1_23 < 0x1f4)
        r1_24 = 1;
    else if (r1_23 < 0x5dc)
        r1_24 = 2;
    else if (r1_23 < 0xfa0)
        r1_24 = 3;
    else if (r1_23 >= 0x1f40)
        r1_24 = 5;
    else
        r1_24 = 4;
    
    uint32_t r3_7 = r4_20[0xffa];
    
    if (r3_7 < 0x19)  /* ".33_250117" */
        r4_20[0xffa] = r3_7 + 1;
    
    uint32_t r3_9 = r4_20[0xff9];
    
    if (r3_9)
        r4_20[0xff9] = r3_9 - 1;
    
    if (r1_24 <= 1)
    {
    label_18350:
        uint32_t r2_46 = r4_20[0xffb];
        
        if (r2_46)
            r4_20[0xffb] = r2_46 - 1;
    }
    else
    {
        uint32_t r3_11 = r4_20[0xffb];
        
        if (r3_11 < 0x19)  /* ".33_250117" */
            r4_20[0xffb] = r3_11 + 1;
    }
    
    void* r3_14;
    
    if (r1_24 <= 2)
    {
        r3_14 = &r4_20[0xfe0];
        uint32_t r2_50 = *(r3_14 + 0x1c);  /* "_250117" */
        
        if (r2_50)
            *(r3_14 + 0x1c) = r2_50 - 1;  /* "_250117" */
    }
    else
    {
        r3_14 = &r4_20[0xfe0];
        uint32_t r2_48 = *(r3_14 + 0x1c);  /* "_250117" */
        
        if (r2_48 < 0x19)  /* ".33_250117" */
            *(r3_14 + 0x1c) = r2_48 + 1;  /* "_250117" */
    }
    void* r3_15;
    
    if (r1_24 <= 3)
    {
        r3_15 = &r4_20[0xfe0];
        uint32_t r2_53 = *(r3_15 + 0x1d);  /* "250117" */
        
        if (r2_53)
            *(r3_15 + 0x1d) = r2_53 - 1;  /* "250117" */
    }
    else
    {
        r3_15 = &r4_20[0xfe0];
        uint32_t r2_51 = *(r3_15 + 0x1d);  /* "250117" */
        
        if (r2_51 < 0x19)  /* ".33_250117" */
            *(r3_15 + 0x1d) = r2_51 + 1;  /* "250117" */
    }
    void* r2_54;
    
    if (r1_24 <= 4)
    {
        r2_54 = &r4_20[0xfe0];
        uint32_t r1_27 = *(r2_54 + 0x1e);  /* "50117" */
        
        if (r1_27)
            *(r2_54 + 0x1e) = r1_27 - 1;  /* "50117" */
    }
    else
    {
        r2_54 = &r4_20[0xfe0];
        uint32_t r1_25 = *(r2_54 + 0x1e);  /* "50117" */
        
        if (r1_25 < 0x19)  /* ".33_250117" */
            *(r2_54 + 0x1e) = r1_25 + 1;  /* "50117" */
    }
    void* r6_12 = &r4_20[0xfe0];
    
    if (*(r6_12 + 0x19) >= 0x19)  /* ".33_250117" */
        *(r6_12 + 0x18) = 0;  /* "0.33_250117" */
    else
    {
        uint32_t r2_55 = *(r6_12 + 0x18);  /* "0.33_250117" */
        int32_t r0_21;
        int32_t r2_56;
        r0_21 = sub_13f18(1, 4, r2_55, r2_55, arg4);
        r6_12 = r0_21 << 0x10;  /* "RY02_3.00.33_250117" */
        r4_20 = ".33_250117";
        
        if (*(r6_12 + 0x1a) == 0x19)  /* ".33_250117" */  /* "33_250117" */
            *(r6_12 + 0x18) = r0_21;  /* "0.33_250117" */
    }
    
    int32_t r1_29;
    int32_t r2_58;
    r1_29 = sub_12b2a(*(r4_20 + 8), 0x19);  /* ".33_250117" */
    
    if (!r1_29)
    {
        uint32_t r0_23 = *(r6_12 + 0x18);  /* "0.33_250117" */
        int32_t r0_24;
        int32_t r1_30;
        r0_24 = sub_13f18(r0_23, r1_29, r2_58, r0_23, arg4);
        uint32_t r0_25 = r4_20[0x1005];
        
        if (r0_25)
        {
            char r0_26;
            
            if (r0_25 < 0xa)
                r0_26 = r0_25 - 1;
            else if (r0_25 < 0x32)  /* "02_V3.0" */
                r0_26 = r0_25 - 2;
            else
                r0_26 = r0_25 - 3;
            
            r4_20[0x1005] = r0_26;
        }
    }
    
    return 1;
}

int32_t sub_183f4(int32_t arg1, char arg2, void* arg3 @ r4, int32_t arg4 @ r5, void* arg5 @ r6, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, int32_t arg10)
{
    if (!*(arg5 + 0x1c))  /* "_250117" */
        *(arg5 + 0x18) = 2;  /* "0.33_250117" */
    else if (*(arg5 + 0x1d) == 0x19)  /* ".33_250117" */  /* "250117" */
        *(arg5 + 0x18) = arg2;  /* "0.33_250117" */
    
    int32_t r1;
    int32_t r2;
    r1 = sub_12b2a(*(arg3 + 8), 0x19);  /* ".33_250117" */
    
    if (!r1)
    {
        uint32_t r0_2 = *(arg5 + 0x18);  /* "0.33_250117" */
        int32_t r0_3;
        int32_t r1_1;
        r0_3 = sub_13f18(r0_2, r1, r2, r0_2);
        void* r1_2 = arg3 + arg4;
        uint32_t r0_4 = *(r1_2 + 5);
        
        if (r0_4)
        {
            char r0_5;
            
            if (r0_4 < 0xa)
                r0_5 = r0_4 - 1;
            else if (r0_4 < 0x32)  /* "02_V3.0" */
                r0_5 = r0_4 - 2;
            else
                r0_5 = r0_4 - 3;
            
            *(r1_2 + 5) = r0_5;
        }
    }
    
    return 1;
}

int32_t sub_1840a(void* arg1 @ r4, int32_t arg2 @ r5, void* arg3 @ r6, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    if (!*(arg3 + 0x1d))  /* "250117" */
        *(arg3 + 0x18) = 3;  /* "0.33_250117" */
    else if (*(arg3 + 0x1e) == 0x19)  /* ".33_250117" */  /* "50117" */
        *(arg3 + 0x18) = 5;  /* "0.33_250117" */
    
    int32_t r1;
    int32_t r2;
    r1 = sub_12b2a(*(arg1 + 8), 0x19);  /* ".33_250117" */
    
    if (!r1)
    {
        uint32_t r0_3 = *(arg3 + 0x18);  /* "0.33_250117" */
        int32_t r0_4;
        int32_t r1_1;
        r0_4 = sub_13f18(r0_3, r1, r2, r0_3);
        void* r1_2 = arg1 + arg2;
        uint32_t r0_5 = *(r1_2 + 5);
        
        if (r0_5)
        {
            char r0_6;
            
            if (r0_5 < 0xa)
                r0_6 = r0_5 - 1;
            else if (r0_5 < 0x32)  /* "02_V3.0" */
                r0_6 = r0_5 - 2;
            else
                r0_6 = r0_5 - 3;
            
            *(r1_2 + 5) = r0_6;
        }
    }
    
    return 1;
}

int32_t sub_18458(void* arg1 @ r4, int32_t arg2 @ r5, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    void* r1 = arg1 + arg2;
    uint32_t r0 = *(r1 + 5);
    char r0_1;
    
    if (r0 < 0xa)
        r0_1 = r0 + 1;
    else if (r0 < 0x28)
        r0_1 = r0 - 1;
    else
        r0_1 = r0 - 2;
    
    *(r1 + 5) = r0_1;
    return 1;
}

int32_t sub_1847e(void* arg1 @ r4, int32_t arg2 @ r5, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    void* r1 = arg1 + arg2;
    uint32_t r0 = *(r1 + 5);
    
    if (r0 < 0x3c)
        *(r1 + 5) = r0 + 3;
    else if (r0 < 0x50)
        *(r1 + 5) = r0 + 2;
    else if (r0 < 0x64)
        *(r1 + 5) = r0 + 1;
    
    return 1;
}

int32_t sub_184bc(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7)
{
    int32_t var_18 = arg4;
    int32_t var_1c = arg3;
    int32_t var_24 = arg1;
    int32_t r6 = 0;
    int32_t r4 = arg1;
    int32_t var_50 = 1;
    int32_t var_38 = 1;
    int32_t var_4c = 1;
    int32_t var_3c = 0;
    int32_t var_44 = 0;
    int32_t var_48 = 0;
    int32_t var_40 = 1;
    void* r7 = *0x2084d0;
    *(r7 + 0xc87) = arg4;
    *(r7 + 0xc86) = arg3;
    
    for (uint32_t i = 3; i; i = (i - 1) << 0x10 >> 0x10)  /* "RY02_3.00.33_250117" */
    {
        int32_t r2 = i << 2;
        *(0x20dab8 + r2) = *(r2 + 0x20dab4);
        *(0x20dac8 + r2) = *(r2 + 0x20dac4);
    }
    
    *0x20dab8 = r4;
    *0x20dac8 = arg2;
    
    if (*0x2084b8 == 1)
        *0x2084b4 = sub_157a8(arg5, arg6, arg7);
    else
    {
        *(r7 + 0xd6f) = 0;
        *0x2084b4 = 0;
    }
    
    void* r0_4 = *0x2084d0;
    int32_t r2_2 = *(r0_4 + 4);
    int32_t var_5c;
    int32_t var_58;
    
    if (r2_2 > 0x1e)  /* "50117" */
    {
        int32_t r1_1 = *0x20dabc;
        int32_t r2_3 = *0x20dac0;
        int32_t r3_6 = *0x2084e8;
        int32_t r5 = r1_1 - r2_3;
        
        if ((r5 <= r3_6 || r1_1 - r4 <= r3_6) && (r5 >= 0 - r3_6 || r1_1 - r4 >= 0 - r3_6))
            r4 = r1_1;
        else
        {
            r4 = r2_3;
            *0x20dabc = r2_3;
        }
        
        int32_t r1_3 = *0x20dacc;
        int32_t r2_5 = *0x20dad0;
        int32_t r5_1 = r1_3 - r2_5;
        
        if (r5_1 > r3_6 && r1_3 - arg2 > r3_6)
        {
            r1_3 = r2_5;
            *0x20dacc = r2_5;
        }
        else if (r5_1 < 0 - r3_6 && r1_3 - arg2 < 0 - r3_6)
        {
            r1_3 = r2_5;
            *0x20dacc = r2_5;
        }
        
        int32_t r5_4 = *0x2084c0;
        int32_t r3_9 = r4 - *0x2084c8;
        int32_t r3_10 = r3_9 - r5_4;
        
        if (r3_9 - r5_4 < 0)
            r3_10 = 0 - r3_10;
        
        int32_t r2_6 = *0x2084ec;
        
        if (r3_10 > r2_6)
            *0x2084c8 = r4 - r5_4;
        
        int32_t r5_7 = r4 - *0x2084c8;
        var_5c = r5_7;
        *0x2084c0 = r5_7;
        int32_t r7_5 = *0x2084c4;
        int32_t r5_9 = r1_3 - *0x2084cc;
        int32_t r5_10 = r5_9 - r7_5;
        
        if (r5_9 - r7_5 < 0)
            r5_10 = 0 - r5_10;
        
        int32_t r2_7;
        
        if (r5_10 > r2_6)
        {
            r2_7 = r1_3 - r7_5;
            *0x2084cc = r2_7;
        }
        else
            r2_7 = *0x2084cc;
        
        int32_t r1_4 = r1_3 - r2_7;
        var_58 = r1_4;
        *0x2084c4 = r1_4;
        goto label_185fc;
    }
    
    int32_t r3_11 = *0x20dabc;
    var_5c = r3_11;
    int32_t r5_11 = *0x20dacc;
    var_58 = r5_11;
    *0x2084c4 = r5_11;
    *0x2084c0 = r3_11;
    
    if (r2_2 == 0x1e)  /* "50117" */
    {
        *(r0_4 + 0x34) = var_58;  /* "_V3.0" */
        *(r0_4 + 0x38) = var_58;  /* "0" */
    label_18ae6:
        void* r1_70 = *0x2084d0;
        *(r1_70 + 0xc) = var_5c;
        *(r1_70 + 0x10) = var_5c;  /* "RY02_3.00.33_250117" */
    }
    else
    {
        if (r2_2 > 0x1e)  /* "50117" */
        {
        label_185fc:
            int32_t r1_6 = var_58 - *(r0_4 + 0x38);  /* "0" */
            *(r0_4 + 0x38) = *(r0_4 + 0x34);  /* "_V3.0" */  /* "0" */
            *(r0_4 + 0x34) = var_58;  /* "_V3.0" */
            int32_t r2_11 = *(r0_4 + 0x3c);
            int32_t r1_7 = r1_6 - ((0xffffff8f * r2_11 + 0x34 * *(r0_4 + 0x40)) >> 6);
                /* "_V3.0" */
            *(r0_4 + 0x44) = r1_7;
            *(r0_4 + 0x40) = r2_11;
            *(r0_4 + 0x3c) = r1_7;
            int32_t r2_12 = *(r0_4 + 0x4c);
            *(r0_4 + 0x4c) = *(r0_4 + 0x48);
            *(r0_4 + 0x48) = r1_7;
            int32_t r1_8 = *(r0_4 + 0x50);
            int32_t r2_14 = r1_7 - r2_12 - ((r1_8 * 0xffffffb2 + 0x24 * *(r0_4 + 0x54)) >> 6);
            *(r0_4 + 0x58) = r2_14;
            *(r0_4 + 0x50) = r2_14;
            *(r0_4 + 0x54) = r1_8;
            uint32_t i_1;
            
            for (i_1 = 7; i_1; i_1 = (i_1 - 1) << 0x10 >> 0x10)  /* "RY02_3.00.33_250117" */
                *((i_1 << 2) + r0_4 + 0x288) = *((i_1 << 2) + r0_4 + 0x284);
            
            void* r0_7 = *0x2084d0;
            *(r0_7 + 0x288) = *(r0_7 + 0x58);
            
            do
            {
                r6 += *((i_1 << 2) + r0_7 + 0x288);
                i_1 = i_1 + 1;
            } while (i_1 < 8);
            
            *(r0_7 + 0x320) = r6 >> 3;
            uint32_t i_2;
            
            for (i_2 = 6; i_2; i_2 = (i_2 - 1) << 0x10 >> 0x10)  /* "RY02_3.00.33_250117" */
                *((i_2 << 2) + r0_7 + 0x250) = *((i_2 << 2) + r0_7 + 0x24c);
            
            void* r0_8 = *0x2084d0;
            int32_t r7_6 = *(r0_8 + 0x320);
            *(r0_8 + 0x250) = r7_6;
            int32_t r3_33 = *(r0_8 + 0x25c);
            
            while (true)
            {
                if (r3_33 < *((i_2 << 2) + r0_8 + 0x250) || r3_33 < 0)
                {
                    var_50 = 0;
                    break;
                }
                
                i_2 = i_2 + 1;
                
                if (i_2 >= 7)
                    break;
                
                continue;
            }
            
            int32_t r3_34 = *(r0_8 + 0x25c);
            uint32_t r1_17 = 0;
            
            while (true)
            {
                if (r3_34 > *((r1_17 << 2) + r0_8 + 0x250) || r3_34 > 0)
                {
                    var_38 = 0;
                    break;
                }
                
                r1_17 = r1_17 + 1;
                
                if (r1_17 >= 7)
                    break;
                
                continue;
            }
            
            if (var_50)
                *(r0_8 + 0x39c) = *(r0_8 + 0x25c);
            
            if (var_38)
                *(r0_8 + 0x3a0) = *(r0_8 + 0x25c);
            
            if (var_50)
            {
                int32_t r1_26 = *(r0_8 + 0x39c) - *(r0_8 + 0x3a0);
                *(r0_8 + 0x330) = r1_26;
                *(r0_8 + 0x334) = r1_26 >> 5;
            }
            
            int32_t r1_28 = r7_6 >> 7;
            
            if (*(r0_8 + 4) > 0x32)  /* "02_V3.0" */
            {
                for (uint32_t i_3 = 0; i_3 < 0x64; )
                {
                    uint32_t r2_27 = *((i_3 << 1) + r0_8 + 0x56c) + i_3 + 0x2d;
                    *((i_3 << 1) + r0_8 + 0x56c) = r2_27;
                    
                    if (r2_27 >= 0x5dc)
                    {
                        r2_27 -= 0x5dc;
                        *((i_3 << 1) + r0_8 + 0x56c) = r2_27;
                    }
                    
                    uint32_t r5_32 = r2_27;
                    uint32_t r1_33;
                    
                    if (r5_32 >= 0x465)
                        r1_33 = r5_32 - 0x465;
                    else if (r5_32 >= 0x2ee)
                        r1_33 = r5_32 - 0x2ee;
                    else if (r5_32 < 0x177)
                        r1_33 = r5_32;
                    else
                        r1_33 = r5_32 - 0x177;
                    
                    uint32_t r1_34 = *(0x83e678 + r1_33);
                    uint32_t r2_29 = *(0x83e678 + 0x176 - r1_33);
                    
                    if (r5_32 >= 0x177)
                    {
                        if (r5_32 < 0x2ee)
                        {
                            uint32_t r5_33 = r1_34;
                            r1_34 = r2_29;
                            r2_29 = 0 - r5_33;
                        }
                        else if (r5_32 >= 0x465)
                        {
                            uint32_t r5_34 = r1_34;
                            r1_34 = 0 - r2_29;
                            r2_29 = r5_34;
                        }
                        else
                        {
                            r1_34 = 0 - r1_34;
                            r2_29 = 0 - r2_29;
                        }
                    }
                    
                    void* r6_2 = (i_3 << 3) + r0_8;
                    *(r6_2 + 0x6fc) += r1_28 * r2_29;
                    i_3 = i_3 + 1;
                    *(0x700 + r6_2) += r1_28 * r1_34;
                }
            }
            
            void* r3_37 = *0x2084d0;
            
            if (*(r3_37 + 4) > 0xc8)
            {
                for (uint32_t i_4 = 0; i_4 < 0x64; )
                {
                    uint32_t r0_15 = *((i_4 << 1) + r3_37 + 0x634) + i_4 + 0x2d;
                    *((i_4 << 1) + r3_37 + 0x634) = r0_15;
                    
                    if (r0_15 >= 0x5dc)
                    {
                        r0_15 -= 0x5dc;
                        *((i_4 << 1) + r3_37 + 0x634) = r0_15;
                    }
                    
                    uint32_t r5_39 = r0_15;
                    uint32_t r0_17;
                    
                    if (r5_39 >= 0x465)
                        r0_17 = r5_39 - 0x465;
                    else if (r5_39 < 0x2ee)
                    {
                        r0_17 = r5_39;
                        
                        if (r5_39 >= 0x177)
                            r0_17 -= 0x177;
                    }
                    else
                        r0_17 = r5_39 - 0x2ee;
                    
                    uint32_t r0_19 = *(0x83e678 + r0_17);
                    uint32_t r1_40 = *(0x83e678 + 0x176 - r0_17);
                    
                    if (r5_39 >= 0x177)
                    {
                        if (r5_39 < 0x2ee)
                        {
                            uint32_t r5_40 = r0_19;
                            r0_19 = r1_40;
                            r1_40 = 0 - r5_40;
                        }
                        else if (r5_39 >= 0x465)
                        {
                            uint32_t r5_41 = r0_19;
                            r0_19 = 0 - r1_40;
                            r1_40 = r5_41;
                        }
                        else
                        {
                            r0_19 = 0 - r0_19;
                            r1_40 = 0 - r1_40;
                        }
                    }
                    
                    void* r6_5 = (i_4 << 3) + r3_37;
                    *(r6_5 + 0x6fc) -= r1_40 * *((*(r3_37 + 0xc90) << 2) + r3_37 + 0xa1c);
                    i_4 = i_4 + 1;
                    *(0x700 + r6_5) -= r0_19 * *((*(r3_37 + 0xc90) << 2) + r3_37 + 0xa1c);
                }
            }
            
            void* r0_21 = *0x2084d0;
            
            if (*(r0_21 + 4) <= 0x32)  /* "02_V3.0" */
                goto label_18a06;
            
            *((*(r0_21 + 0xc90) << 2) + r0_21 + 0xa1c) = r1_28;
            void* r2_38 = *0x2084d0;
            uint32_t r1_47 = *(r2_38 + 0xc90) + 1;
            *(r2_38 + 0xc90) = r1_47;
            
            if (r1_47 > 0x95)
                *(r2_38 + 0xc90) = 0;
            
            int32_t r0_24 = *(r2_38 + 4);
            
            if (r0_24 < 0xc8)
                goto label_18a06;
            
            if (sub_12b2a(r0_24, 0x19))  /* ".33_250117" */
                goto label_18a12;
            
            uint32_t r0_25 = sub_17d60();
            void* r7_16 = *0x2084d0;
            *(r7_16 + 0xc88) = r0_25;
            
            if (*0x2084b4)
            {
            label_189a0:
                *(r7_16 + 0xca0) = 0x37;  /* ".0" */
            }
            else
            {
                uint32_t r3_39 = *(r7_16 + 0xc92);
                int32_t r3_40;
                
                if (r3_39 < 0x32)  /* "02_V3.0" */
                {
                    if (r3_39 >= 0x18)  /* "0.33_250117" */
                    {
                        r3_40 = 2;
                        goto label_1895a;
                    }
                    
                    if (r3_39 >= 0xa)
                    {
                        r3_40 = 1;
                        goto label_1895a;
                    }
                    
                label_18974:
                    int32_t r3_42 = *(r7_16 + 0xca0);
                    
                    if (r3_42 <= 0)
                        goto label_18982;
                    
                    if (r3_42 != 0x37)  /* ".0" */
                    {
                        *(r7_16 + 0xca0) = r3_42 - 1;
                        goto label_18982;
                    }
                }
                else
                {
                    r3_40 = 3;
                label_1895a:
                    int32_t r5_49 = *(r7_16 + 0xca0);
                    
                    if (r5_49 >= 0x10)  /* "RY02_3.00.33_250117" */
                    {
                        if (!r3_40)
                            goto label_18974;
                        
                        if (r3_40 == 0x37)  /* ".0" */
                            goto label_189a0;
                        
                        goto label_18982;
                    }
                    
                    *(r7_16 + 0xca0) = r5_49 + r3_40;
                label_18982:
                    char* r1_49 = r7_16 + 0xca0;
                    
                    if (*r1_49 < 0)
                        *r1_49 = 0;
                }
            }
            
            int32_t r1_50 = *(r7_16 + 4);
            
            if (r1_50 == 0xc8)
            {
                if (*(r7_16 + 0xc92) > 0x1e || r0_25 - 0x47 < 0x13)  /* "2_3.00.33_250117" */  /* "
                        50117" */
                    *(r7_16 + 0xc89) = r0_25;
                else
                    *(r7_16 + 0xc89) = 0x50;
            }
            else if (r1_50 > 0xc8 && !*(r7_16 + 0xc89))
                *(r7_16 + 0xc89) = 0x4e;
            
            uint32_t r1_56 = *(r7_16 + 0xc92);
            int32_t r1_57;
            
            if (r1_56 > 0x28)
                r1_57 = 4;
            else if (r1_56 > 0x1e)  /* "50117" */
                r1_57 = 2;
            else if (r1_56 <= 0x14)  /* "_3.00.33_250117" */
                r1_57 = 0;
            else
                r1_57 = 1;
            
            uint32_t r3_46 = *(r7_16 + 0xc89);
            int32_t r5_51 = r3_46 + r1_57;
            
            if (r0_25 <= r5_51 || !r0_25)
            {
                int32_t r1_58 = r3_46 - r1_57;
                
                if (r0_25 >= r1_58 || !r0_25)
                    *(r7_16 + 0xc88) = r3_46;
                else
                    *(r7_16 + 0xc88) = r1_58;
            }
            else
                *(r7_16 + 0xc88) = r5_51;
            
            *(r7_16 + 0xc89) = *(r7_16 + 0xc88);
            goto label_18a06;
        }
        
    label_18a06:
        int32_t r0_28 = *(*0x2084d0 + 4);
        
        if (r0_28 == 0x1e)  /* "50117" */
            goto label_18ae6;
        
        if (r0_28 > 0x1e)  /* "50117" */
        {
        label_18a12:
            void* r0_29 = *0x2084d0;
            int32_t r1_61 = var_5c - *(r0_29 + 0x10);  /* "RY02_3.00.33_250117" */
            *(r0_29 + 0x10) = *(r0_29 + 0xc);  /* "RY02_3.00.33_250117" */
            *(r0_29 + 0xc) = var_5c;
            int32_t r3_50 = *(r0_29 + 0x14);  /* "_3.00.33_250117" */
            int32_t r1_62 = r1_61 - ((r3_50 * 0xffffff8f + 0x34 * *(r0_29 + 0x18)) >> 6);
                /* "0.33_250117" */  /* "_V3.0" */
            *(r0_29 + 0x1c) = r1_62;  /* "_250117" */
            *(r0_29 + 0x18) = r3_50;  /* "0.33_250117" */
            *(r0_29 + 0x14) = r1_62;  /* "_3.00.33_250117" */
            int32_t r3_51 = *(r0_29 + 0x24);
            *(r0_29 + 0x24) = *(r0_29 + 0x20);  /* "117" */
            *(r0_29 + 0x20) = r1_62;  /* "117" */
            int32_t r1_63 = *(r0_29 + 0x28);
            int32_t r3_53 = r1_62 - r3_51 - ((r1_63 * 0xffffffb2 + 0x24 * *(r0_29 + 0x2c)) >> 6);
            *(r0_29 + 0x30) = r3_53;  /* "RY02_V3.0" */
            *(r0_29 + 0x28) = r3_53;
            *(r0_29 + 0x2c) = r1_63;
            uint32_t i_5;
            
            for (i_5 = 7; i_5; i_5 = (i_5 - 1) << 0x10 >> 0x10)  /* "RY02_3.00.33_250117" */
                *((i_5 << 2) + r0_29 + 0x2d4) = *((i_5 << 2) + r0_29 + 0x2d0);
            
            void* r0_30 = *0x2084d0;
            *(r0_30 + 0x2d4) = *(r0_30 + 0x30);  /* "RY02_V3.0" */
            int32_t r5_66;
            
            do
            {
                r5_66 = *((i_5 << 2) + r0_30 + 0x2d4) + var_3c;
                i_5 = i_5 + 1;
                var_3c = r5_66;
            } while (i_5 < 8);
            
            *(r0_30 + 0x348) = r5_66 >> 3;
            uint32_t i_6;
            
            for (i_6 = 6; i_6; i_6 = (i_6 - 1) << 0x10 >> 0x10)  /* "RY02_3.00.33_250117" */
                *((i_6 << 2) + r0_30 + 0x26c) = *((i_6 << 2) + r0_30 + 0x268);
            
            void* r0_31 = *0x2084d0;
            *(r0_31 + 0x26c) = *(r0_31 + 0x348);
            int32_t r3_55 = *(r0_31 + 0x278);
            
            while (true)
            {
                if (r3_55 < *((i_6 << 2) + r0_31 + 0x26c) || r3_55 < 0)
                {
                    var_4c = 0;
                    break;
                }
                
                i_6 = i_6 + 1;
                
                if (i_6 >= 7)
                    break;
                
                continue;
            }
            
            int32_t r3_56 = *(r0_31 + 0x278);
            uint32_t r1_72 = 0;
            
            while (true)
            {
                if (r3_56 > *((r1_72 << 2) + r0_31 + 0x26c) || r3_56 > 0)
                {
                    var_40 = 0;
                    break;
                }
                
                r1_72 = r1_72 + 1;
                
                if (r1_72 >= 7)
                    break;
                
                continue;
            }
            
            if (var_4c)
                *(r0_31 + 0x394) = *(r0_31 + 0x278);
            
            if (var_40)
                *(r0_31 + 0x398) = *(r0_31 + 0x278);
            
            if (var_4c)
            {
                int32_t r0_35 = *(r0_31 + 0x394) - *(r0_31 + 0x398);
                *(r0_31 + 0x358) = r0_35;
                *(r0_31 + 0x35c) = r0_35 >> 5;
            }
        }
    }
    
    if (*0x2084b6 == 1)
    {
        uint32_t i_7 = 0;
        int32_t r2_44 = *0x2084d0;
        
        do
        {
            void* r1_81 = (i_7 << 2) + r2_44;
            i_7 = i_7 + 1;
            *(r1_81 + 0x5c) = *(r1_81 + 0x60);
        } while (i_7 < 0x31);  /* "Y02_V3.0" */
        
        void* r0_39 = *0x2084d0;
        *(r0_39 + 0x120) = *(r0_39 + 0x124);
        
        for (uint32_t i_8 = 0; i_8 < 0x31; )  /* "Y02_V3.0" */
        {
            void* r2_49 = (i_8 << 2) + r0_39 + 0x100;
            i_8 = i_8 + 1;
            *(r2_49 + 0x24) = *(r2_49 + 0x28);
        }
        
        void* r5_85 = *0x2084d0;
        *(&data_1e8 + r5_85) = *(r5_85 + 0x348);
        int32_t r0_41 = *(r5_85 + 4);
        
        if (r0_41 >= 0x96 && !sub_12b2a(r0_41, 0x19))  /* ".33_250117" */
        {
            sub_19768(r5_85 + 0x5c, r5_85 + 0x124, r5_85 + 0x1ec, 0x32);  /* "02_V3.0" */
            *(*0x2084d0 + 0x370) = sub_195e8(*0x2084d0 + 0x1ec);
        }
    }
    
    uint32_t i_9 = 0;
    int32_t r3_60 = *0x2084d0;
    
    do
    {
        void* r5_86 = (i_9 << 2) + r3_60;
        *(r5_86 + 0x3a4) = *(r5_86 + 0x3a8);
        i_9 = i_9 + 1;
        *(r5_86 + 0x408) = *(r5_86 + 0x40c);
    } while (i_9 < 0x18);  /* "0.33_250117" */
    
    void* r5_88 = *0x2084d0;
    *(r5_88 + 0x404) = *(r5_88 + 0x35c);
    *(r5_88 + 0x468) = *(r5_88 + 0x334);
    *(r5_88 + 0x340) = (0x1fbd0 * *(r5_88 + 0xc87) + var_58) >> 0xa;
    *(r5_88 + 0x368) = (0x1fbd0 * *(r5_88 + 0xc86) + var_5c) >> 0xa;
    
    if (*(r5_88 + 0xc92) < *0x2084d5 || *(r5_88 + 0xd6f) || *(r5_88 + 0x370) < *0x2084d4)
        *(r5_88 + 0xc95) = *0x2084d6;
    else
    {
        uint32_t r0_51 = *(r5_88 + 0xc95);
        
        if (r0_51)
            *(r5_88 + 0xc95) = r0_51 - 1;
    }
    
    int32_t r0_53 = *(r5_88 + 4);
    
    if (!sub_12b2a(r0_53, 0x19) && !*(r5_88 + 0xc95) && r0_53 >= 0x96)  /* ".33_250117" */
    {
        for (uint32_t i_10 = 0; i_10 < 0x19; i_10 = i_10 + 1)  /* ".33_250117" */
        {
            void* r1_106 = (i_10 << 2) + r5_88;
            int32_t r6_23 = *(r1_106 + 0x3a4);
            
            if (r6_23 > 0)
            {
                int32_t r1_108 = *(r1_106 + 0x408);
                
                if (r1_108 > 0 && r6_23 < r1_108 << 2 && r6_23 > r1_108 >> 2)
                {
                    int32_t r7_22 = *(r5_88 + 0x36c) << 1;
                    
                    if (r6_23 > r7_22 && *((*0x2084e4 << 2) + r5_88 + 0x468) > 0)
                        *(r1_106 + 0x3a4) = r7_22;
                    
                    int32_t r2_64 = *(r5_88 + 0x344) << 1;
                    
                    if (r1_108 > r2_64 && *((*0x2084e4 << 2) + r5_88 + 0x4e8) > 0)
                        *(r1_106 + 0x408) = r2_64;
                }
            }
        }
        
        int32_t r0_59 = sub_13d8a(*0x2084d0 + 0x408, 0x19);  /* ".33_250117" */
        int32_t r0_62 = sub_13d8a(*0x2084d0 + 0x3a4, 0x19);  /* ".33_250117" */
        char r12_5 = 0;
        void* r0_63 = *0x2084d0;
        int32_t i_11;
        
        do
        {
            if (*(r0_63 + 0x4a8) > 0)
            {
                uint32_t j = *(r0_63 + 0x4e8);
                
                if (!j)
                {
                    do
                    {
                        void* r3_65 = (j << 2) + r0_63;
                        var_44 += *(r3_65 + 0x46c);
                        j = j + 1;
                        var_48 += *(r3_65 + 0x4ec);
                    } while (j < 0x10);  /* "RY02_3.00.33_250117" */
                    
                    for (uint32_t j_1 = 0x10; j_1 < 0x20; )  /* "RY02_3.00.33_250117" */  /* "117"
                        */
                    {
                        void* r6_29 = (j_1 << 2) + r0_63;
                        *(r6_29 + 0x46c) = var_44 >> 4;
                        j_1 = j_1 + 1;
                        *(r6_29 + 0x4ec) = var_48 >> 4;
                    }
                }
            }
            
            int32_t r3_75;
            int32_t r5_95;
            
            if (*(r0_63 + 0xc92) <= (*0x2084d5 * 3) >> 1 || *(r0_63 + 0x370) <= *0x2084d4 + 5)
            {
                int32_t r3_76 = 0;
                int32_t r5_96 = 0;
                
                for (uint32_t j_2 = 0x1f; j_2; j_2 = (j_2 - 1) << 0x10 >> 0x10)  /* "
                    RY02_3.00.33_250117" */  /* "0117" */
                {
                    void* r6_49 = (j_2 << 2) + r0_63;
                    int32_t r6_50 = *(r6_49 + 0x4e8);
                    *(r6_49 + 0x4ec) = r6_50;
                    r3_76 += r6_50;
                    int32_t r6_51 = *(r6_49 + 0x468);
                    *(r6_49 + 0x46c) = r6_51;
                    r5_96 += r6_51;
                }
                
                r3_75 = r0_59 + r3_76;
                *(r0_63 + 0x4ec) = r0_59;
                *(r0_63 + 0x46c) = r0_62;
                r5_95 = r0_62 + r5_96;
            }
            else
            {
                r3_75 = 0;
                r5_95 = 0;
                
                for (uint32_t j_3 = 0x1f; j_3; j_3 = (j_3 - 1) << 0x10 >> 0x10)  /* "
                    RY02_3.00.33_250117" */  /* "0117" */
                {
                    void* r6_33 = (j_3 << 2) + r0_63;
                    *(r6_33 + 0x4ec) = *(r6_33 + 0x4e8);
                    *(r6_33 + 0x46c) = *(r6_33 + 0x468);
                }
                
                *(r0_63 + 0x4ec) = r0_59;
                *(r0_63 + 0x46c) = r0_62;
                uint32_t j_4;
                
                for (j_4 = 0x1f; j_4; j_4 = (j_4 - 1) << 0x10 >> 0x10)  /* "RY02_3.00.33_250117" */
                    /* "0117" */
                {
                    void* r6_38 = (j_4 << 2) + r0_63;
                    *(r6_38 + 0x4ec) = *(r6_38 + 0x4e8);
                    *(r6_38 + 0x46c) = *(r6_38 + 0x468);
                }
                
                *(r0_63 + 0x4ec) = r0_59;
                *(r0_63 + 0x46c) = r0_62;
                
                do
                {
                    void* r6_45 = (j_4 << 2) + r0_63;
                    r3_75 += *(r6_45 + 0x4ec);
                    j_4 = j_4 + 1;
                    r5_95 += *(r6_45 + 0x46c);
                } while (j_4 < 0x20);  /* "117" */
            }
            
            *(r0_63 + 0x374) = 5;
            
            if (*(r0_63 + 0x4e8) > 0)
            {
                *(r0_63 + 0x36c) = r5_95 >> 5;
                *(r0_63 + 0x344) = r3_75 >> 5;
            }
            
            i_11 = r12_5 + 1;
            r12_5 = i_11;
        } while (i_11 < 6);
    }
    
    void* r5_98 = *0x2084d0;
    int32_t r0_64 = *(r5_98 + 4);
    
    if (r0_64 < 0x12c)
    {
        *(r5_98 + 0x380) = 0;
        *(r5_98 + 0x384) = 0;
        *(r5_98 + 8) = 0;
        *(r5_98 + 0xc88) = 0;
        *(r5_98 + 0xc8a) = 0;
        *(r5_98 + 0xc8b) = 0;
    }
    else if (!sub_12b2a(r0_64, 0x19))  /* ".33_250117" */
    {
        int32_t r0_66 = *(r5_98 + 0x344);
        char r0_125;
        void* r1_171;
        
        if (r0_66 <= 0x20)  /* "117" */
        {
            if (*(r5_98 + 0xc95))
                goto label_190fc;
            
        label_1910a:
            r1_171 = r5_98 + 0xc80;
            uint32_t r0_126 = *(r1_171 + 0x14);  /* "_3.00.33_250117" */
            
            if (r0_126)
            {
                r0_125 = r0_126 - 1;
                goto label_19114;
            }
        }
        else
        {
            if (!*(r5_98 + 0xc95))
            {
                int32_t r6_54 = *(r5_98 + 0x340);
                
                if (r6_54 > 0)
                {
                    int32_t r0_69 = *(r5_98 + 0x368);
                    
                    if (r0_69 > 0)
                    {
                        int32_t r1_137 = *0x2084dc;
                        int32_t r6_55 = sub_12b2a(
                            r6_54 * sub_12b2a(r1_137 * (*(r5_98 + 0x36c) >> 5), r0_66 >> 5), r0_69);
                        int32_t r0_78 = sub_12b2a(r1_137, 0x14);  /* "_3.00.33_250117" */
                        int32_t r0_79 = *0x2084fb * r0_78;
                        
                        if (r0_79 < r6_55)
                            r6_55 = r0_79;
                        
                        int32_t r0_81 = *0x2084fc * r0_78;
                        
                        if (r0_81 > r6_55)
                            r6_55 = r0_81;
                        
                        int32_t r0_84;
                        uint32_t r1_144;
                        
                        if (r0_64 <= *0x2084f0)
                        {
                            r1_144 = *0x2084f2;
                            r0_84 = *(r5_98 + 0x38c);
                        }
                        
                        if (r0_64 > *0x2084f0 || r0_84 + (r1_144 << 3) >= r6_55)
                        {
                            void* r0_91 = r5_98 + 0x380;
                            uint32_t r3_79 = *0x2084f4;
                            int32_t r1_159 = *(r0_91 + 0xc);
                            int32_t r1_145;
                            
                            r1_145 = r1_159 + (r3_79 << 3) >= r6_55 ? (r1_159 * 7 + r6_55) >> 3
                                : r1_159 + r3_79;
                            
                            *(r0_91 + 0xc) = r1_145;
                        }
                        else if (*0x2084b7 == 1)
                        {
                            if (*(r5_98 + 0xc92) > (*0x2084d5 * 3) >> 1
                                    && *(r5_98 + 0x370) > *0x2084d4 + 5)
                                *(r5_98 + 0x38c) = (r0_84 * 3 + r6_55) >> 2;
                            else if (r0_84 >= r6_55)
                                *(r5_98 + 0x38c) = (r0_84 * 7 + r6_55) >> 3;
                            else
                            {
                                int32_t r1_156 = (r0_84 * 7 + r6_55) >> 3;
                                int32_t r0_88 = r0_84 + 0x1f4;
                                
                                if (r1_156 <= r0_88)
                                    r0_88 = r1_156;
                                
                                *(r5_98 + 0x38c) = r0_88;
                            }
                        }
                        else
                            *(r5_98 + 0x38c) = r0_84 + r1_144;
                        
                        int32_t r6_56 = *(r5_98 + 0x38c);
                        int32_t r0_93 = *(r5_98 + 0xc98);
                        int32_t r0_96;
                        
                        if (r6_56 <= r0_93 + 0x1388)
                            r0_96 = (*0x2084d8 + r0_93 * 0xf - 0x18e70) >> 4;
                        else
                            r0_96 = (r6_56 + r0_93 * 0x1ff - 0x1388) >> 9;
                        
                        *(r5_98 + 0xc98) = r0_96;
                        
                        if (r6_56 > r0_96 + 0x1388 && r6_56 < r0_96 + 0x2710)
                            *(r5_98 + 0xc9c) = r0_96 - *0x2084d8 + 0x18e70;
                        else if (r6_56 >= r0_96 + 0x2710 && r6_56 < r0_96 + 0x4e20)
                            *(r5_98 + 0xc9c) =
                                sub_12b3e(0x2710 * (r0_96 - *0x2084d8 + 0x18e70), r6_56 - r0_96);
                        else if (r6_56 >= r0_96 + 0x4e20)
                            *(r5_98 + 0xc9c) = (r0_96 - *0x2084d8 + 0x18e70) >> 1;
                        
                        if (r0_64 - 0x258 <= 0x578)
                        {
                            int32_t r0_108 = *(r5_98 + 0x390);
                            
                            if (r6_56 < r0_108 - 0x19258)
                            {
                                int32_t r1_165 = (r6_56 + r0_108 * 0xf + 0x19258) >> 4;
                                *(r5_98 + 0x390) = r1_165;
                                int32_t r0_113 = *0x2084d8 - 0x1388;
                                
                                if (r1_165 < r0_113)
                                    *(r5_98 + 0x390) = r0_113;
                            }
                        }
                        
                        if (r0_64 > 0x7d0)  /* "17 10:58:10 2022" */
                        {
                            int32_t r0_116 = *(r5_98 + 0x390);
                            
                            if (r6_56 > r0_116 - 0x14c08)
                            {
                                int32_t r1_169 = (r6_56 + r0_116 * 0x3f + 0x14c08) >> 6;
                                *(r5_98 + 0x390) = r1_169;
                                int32_t r0_121 = *0x2084d8 + 0xbb8;
                                
                                if (r1_169 > r0_121)
                                    *(r5_98 + 0x390) = r0_121;
                            }
                        }
                    }
                }
                
                goto label_1910a;
            }
            
        label_190fc:
            r1_171 = r5_98 + 0xc80;
            uint32_t r0_124 = *(r1_171 + 0x14);  /* "_3.00.33_250117" */
            
            if (r0_124 < 0xa)
            {
                r0_125 = r0_124 + 1;
            label_19114:
                *(r1_171 + 0x14) = r0_125;  /* "_3.00.33_250117" */
            }
            
            if (*(r5_98 + 0xc94) > 8 && *(r5_98 + 0xc95))
            {
                int32_t r2_88 = *(r5_98 + 0x390);
                int32_t r0_129 = *(r5_98 + 0x38c);
                
                if (r0_129 > r2_88 - 0x17ed0 && r0_129 <= r2_88 - 0x17318)
                    *(r5_98 + 0x38c) = (r2_88 + r0_129 * 7 - 0x17ed0) >> 3;
                else if (r0_129 > r2_88 - 0x17318)
                    *(r5_98 + 0x38c) = r0_129 - 0x96;
            }
        }
        void* r0_135;
        int32_t r1_175;
        
        if (*0x2084fa == 1)
        {
            r0_135 = r5_98 + 0x380;
            r1_175 = *(r0_135 + 0x10) - *(r0_135 + 0xc) + *(r5_98 + 0xc9c);
                /* "RY02_3.00.33_250117" */
        }
        else
        {
            r0_135 = r5_98 + 0x380;
            r1_175 = *(r0_135 + 0x10) - *(r0_135 + 0xc);  /* "RY02_3.00.33_250117" */
        }
        
        *r0_135 = r1_175 >> 0xa;
        int32_t r1_177 = *(r5_98 + 0x380);
        
        if (r1_177 >= 0x63)
            *(r5_98 + 0x380) = 0x63;
        else if (r1_177 <= 0x46)
            *(r5_98 + 0x380) = 0x46;
        
        uint32_t r1_181 = *(*(r5_98 + 0x380) + 0x83e614);
        *(r5_98 + 0x380) = r1_181;
        int32_t r2_94 = *(r5_98 + 0x388);
        int32_t r1_184;
        
        r1_184 = r1_181 < 0x5f ? (r2_94 + (r1_181 << 6)) >> 1 : (r2_94 * 3 + (r1_181 << 6)) >> 2;
        
        *(r5_98 + 0x388) = r1_184;
        char r0_139;
        
        r0_139 = r1_184 - (((r1_184 >> 0x1f >> 0x1a) + r1_184) >> 6 << 6) < 0x20 ? r1_184 >> 6
            : (r1_184 >> 6) + 1;  /* "33_250117" */  /* "0117" */  /* "117" */
        
        *(r5_98 + 8) = r0_139;
        uint32_t r0_140 = r0_139;
        
        if (r0_140 > 0x63)
        {
            *(r5_98 + 8) = 0x63;
        label_191e8:
            int32_t r1_193 = sub_12b2a(r0_64, 0x96);
            uint32_t r0_145;
            
            if (!r1_193)
            {
                if (r4 > 0)
                    *(r5_98 + 8) = 0x63 - sub_12b3e(r4, 3);
                else if (r4 < 0)
                    *(r5_98 + 8) = sub_12b3e(r4, 3) + 0x63;
                
                r0_145 = *(r5_98 + 8);
                *(r5_98 + 9) = r0_145;
            }
            
            if ((r1_193 || r0_145 == 0x63) && r1_193)
                *(r5_98 + 8) = *(r5_98 + 9);
        }
        else if (r0_140 == 0x63)
            goto label_191e8;
        
        if (*(r5_98 + 0xc95) || *(r5_98 + 0xc8c) <= *0x2084f8 || r0_66 <= *0x2084f6)
        {
            uint32_t r1_205 = *(r5_98 + 0xc8a);
            
            if (r1_205)
                *(r5_98 + 0xc8a) = r1_205 - 1;
        }
        else
        {
            uint32_t r1_203 = *(r5_98 + 0xc8a) + 2;
            *(r5_98 + 0xc8a) = r1_203;
            
            if (r1_203 >= 6 && r0_64 >= 0x177)
                *(r5_98 + 2) = 3;
        }
        
        if (r0_64 < 0x190 || *(r5_98 + 8) < 0x5f || *(r5_98 + 0xd6f)
            || *(r5_98 + 0xc8c) <= *0x2084f8)
        {
            uint32_t r1_215 = *(r5_98 + 0xc8b);
            
            if (r1_215)
                *(r5_98 + 0xc8b) = r1_215 - 1;
        }
        else
        {
            uint32_t r1_214 = *(r5_98 + 0xc8b) + 2;
            *(r5_98 + 0xc8b) = r1_214;
            
            if (r1_214 >= 4)
                *(r5_98 + 2) = 3;
        }
        
        if (r0_64 == 0x1f4 && *(r5_98 + 2) != 3)
            *(r5_98 + 2) = 4;
        
        *(r5_98 + 0xc89) = *(r5_98 + 0xc88);
    }
    
    *(r5_98 + 4) = r0_64 + 1;
    return 1;
}

int32_t sub_19318()
{
    if (*0x2084d0)
        *0x2084d0 = 0;
    
    return 0x2084b4;
}

int32_t sub_1932c(int32_t* arg1)
{
    int32_t r3;
    int32_t var_14 = r3;
    int32_t r2;
    int32_t var_18_1 = r2;
    int32_t r1;
    int32_t var_1c_1 = r1;
    int32_t* var_20 = arg1;
    char r2_1 = 0;
    int32_t result = 0;
    int32_t var_18 = 0;
    void* r1_1 = *0x2084d0;
    uint32_t r3_1 = *(r1_1 + 2);
    result = r3_1;
    int32_t r4 = *(r1_1 + 4);
    *var_18[2] = *(r1_1 + 0xc95);
    *var_18[3] = *(r1_1 + 0xca0);
    
    if (r3_1 == 3 || r3_1 == 4)
    {
        var_18 = *(r1_1 + 8);
        r2_1 = *(r1_1 + 0xc88);
    }
    else
        var_18 = 0;
    
    *var_18[1] = r2_1;
    *arg1 = result;
    arg1[1] = r4;
    arg1[2] = var_18;
    arg1[3] = 0;
    return result;
}

int32_t sub_19380()
{
    *0x2084d0 = 0x20c194;
    *0x20c196 = 1;
    uint32_t i = 0;
    *0x20c198 = 0;
    *0x20c19c = 0;
    *0x20c19e = 0;
    *0x20ce34 = 4;
    *0x20ce35 = 0;
    int16_t r1_1 = sub_12b2a(*0x2084bc, 3) + 0x61;
    
    do
    {
        *((i << 2) + 0x20c41c) = 0;
        *((i << 2) + 0x20c468) = 0;
        void* r2_6 = (i << 1) + 0x20cdd4;
        i = i + 1;
        *(r2_6 + 0x34) = r1_1;  /* "_V3.0" */
    } while (i < 8);
    
    int32_t r2_7 = *0x2084d0;
    
    for (uint32_t i_1 = 0; i_1 < 8; )
    {
        void* r3_3 = (i_1 << 2) + r2_7 + 0x280;
        *(r3_3 + 0x28) = 0;
        i_1 = i_1 + 1;
        *(r3_3 + 0x74) = 0;
    }
    
    int32_t r0_1 = *0x2084d0;
    uint32_t i_2 = 0;
    __builtin_memset(r0_1 + 0xc, 0, 0x50);
    
    do
    {
        void* r2_12 = (i_2 << 2) + r0_1 + 0x200;
        *(r2_12 + 0x50) = 0;
        i_2 = i_2 + 1;
        *(r2_12 + 0x6c) = 0;
    } while (i_2 < 7);
    
    void* r5 = *0x2084d0;
    __builtin_memset(r5 + 0x320, 0, 0x20);  /* "117" */
    __builtin_memset(r5 + 0x344, 0, 0x24);
    __builtin_memset(r5 + 0x36c, 0, 0x14);  /* "_3.00.33_250117" */
    *(r5 + 0x380) = 0;
    *(r5 + 0x384) = sub_12b2a(*0x2084bc, 3) + 0x61;
    *(r5 + 9) = 0x63;
    *(r5 + 0x388) = 0x1880;
    int32_t r6_1 = *0x2084d8;
    *(r5 + 0x390) = r6_1;
    *(r5 + 0x38c) = r6_1 - 0x18e70;
    *0x2084b5 = 0;
    *(r5 + 0x394) = 0;
    *(r5 + 0x398) = 0;
    *(r5 + 0x39c) = 0;
    *(r5 + 0x3a0) = 0;
    
    for (uint32_t i_3 = 0; i_3 < 0x20; )  /* "117" */
    {
        void* r2_14 = (i_3 << 2) + r5;
        *(r2_14 + 0x46c) = 0;
        i_3 = i_3 + 1;
        *(r2_14 + 0x4ec) = 0;
    }
    
    uint32_t i_4 = 0;
    int32_t r2_16 = *0x2084d0;
    
    do
    {
        void* r3_6 = (i_4 << 2) + r2_16;
        *(r3_6 + 0x3a4) = 0;
        i_4 = i_4 + 1;
        *(r3_6 + 0x408) = 0;
    } while (i_4 < 0x19);  /* ".33_250117" */
    
    void* r1_6 = *0x2084d0;
    *(r1_6 + 0xc86) = 0;
    *(r1_6 + 0xc87) = 0;
    *(r1_6 + 0xc88) = 0;
    *(r1_6 + 0xc89) = 0;
    *(r1_6 + 0xc8a) = 0;
    *(r1_6 + 0xc8b) = 0;
    *(r1_6 + 0xc8c) = 0;
    
    for (uint32_t i_5 = 0; i_5 < 0x64; )
    {
        void* r2_18 = (i_5 << 1) + r1_6;
        *(r2_18 + 0x56c) = 0;
        *(r2_18 + 0x634) = 0;
        void* r2_21 = (i_5 << 3) + r1_6;
        *(r2_21 + 0x6fc) = 0;
        i_5 = i_5 + 1;
        *(r2_21 + 0x700) = 0;
    }
    
    uint32_t i_6 = 0;
    int32_t r1_7 = *0x2084d0;
    
    do
    {
        void* r3_12 = (i_6 << 2) + r1_7 + 0xa00;
        i_6 = i_6 + 1;
        *(r3_12 + 0x1c) = 0;  /* "_250117" */
    } while (i_6 < 0x96);
    
    void* r1_8 = *0x2084d0;
    *(r1_8 + 0xc90) = 0;
    *(r1_8 + 0xc92) = 0;
    *(r1_8 + 0xc94) = 0;
    
    for (uint32_t i_7 = 0; i_7 < 0x64; )
    {
        void* r3_15 = r1_8 + i_7 + 0x1e0;
        i_7 = i_7 + 1;
        *(r3_15 + 0xc) = 0x40;
    }
    
    int32_t r3_16 = *0x2084d0;
    
    for (uint32_t i_8 = 0; i_8 < 0x32; )  /* "02_V3.0" */
    {
        void* r1_10 = (i_8 << 2) + r3_16;
        *(r1_10 + 0x5c) = 0;
        i_8 = i_8 + 1;
        *(r1_10 + 0x124) = 0;
    }
    
    void* r1_13 = *0x2084d0;
    *(r1_13 + 0xc95) = 0;
    *(r1_13 + 0x370) = 0x40;
    *(r1_13 + 0xc9c) = 0;
    *(r1_13 + 0xc98) = r6_1 - 0x18a88;
    sub_1964c();
    return 1;
}

int32_t sub_19598()
{
    return sub_19380();
}

int32_t sub_195a0(int32_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t arg5, void* arg6, void* arg7, void* arg8)
{
    int32_t* var_20 = arg2;
    int32_t* var_24 = arg1;
    int32_t result = *0x2084d0;
    uint32_t i = 0;
    
    if (!result)
        return result;
    
    for (; i < arg5; i = i + 1)
    {
        int32_t r0 = i << 1;
        sub_184bc(arg1[i], arg2[i], arg3, arg4, *(arg6 + r0), *(arg7 + r0), *(arg8 + r0));
    }
    
    return 1;
}

uint32_t sub_195e8(void* arg1)
{
    int32_t r1 = *arg1;
    
    for (int32_t i = 0; i < 0x64; i += 1)
    {
        int32_t r3_1 = *(arg1 + i);
        
        if (r3_1 > r1)
            r1 = r3_1;
    }
    
    return r1;
}

int32_t sub_19600(int16_t arg1, int32_t arg2, int32_t arg3, int16_t arg4, int16_t arg5, int16_t arg6, int16_t arg7, int16_t arg8, char arg9, char arg10, char arg11)
{
    *0x2084e4 = arg1;
    *0x2084ec = arg3;
    *0x2084e8 = arg2;
    *0x2084f0 = arg4;
    *0x2084f2 = arg5;
    *0x2084f4 = arg6;
    *0x2084f6 = arg7;
    *0x2084f8 = arg8;
    *0x2084fa = arg9;
    *0x2084fb = arg10;
    *0x2084fc = arg11;
    return arg11;
}

void sub_19630(char arg1, char arg2, char arg3, int32_t arg4, int32_t arg5, char arg6)
{
    *0x2084d4 = arg1;
    *0x2084d5 = arg2;
    *0x2084d6 = arg3;
    *0x2084dc = arg5;
    *0x2084d8 = arg4;
    *0x2084e0 = arg6;
}

int32_t sub_1964c()
{
    uint32_t i = 0;
    int32_t r4 = *0x2084d0;
    
    do
    {
        void* r2_3 = (i << 1) + r4 + 0xc80;
        *(r2_3 + 0x24) = 0;
        i = i + 1;
        *(r2_3 + 0x3a) = 0;
    } while (i < 0xb);
    
    uint32_t i_1 = 0;
    int32_t r3 = *0x2084d0;
    
    do
    {
        void* r2_6 = (i_1 << 1) + r3 + 0xd40;
        *(r2_6 + 8) = 0;
        i_1 = i_1 + 1;
        *(r2_6 + 0x18) = 0;  /* "0.33_250117" */
    } while (i_1 < 8);
    
    uint32_t i_2 = 0;
    int32_t r4_1 = *0x2084d0;
    
    do
    {
        void* r2_9 = (i_2 << 1) + r4_1 + 0xcc0;
        *(r2_9 + 0x10) = 0;  /* "RY02_3.00.33_250117" */
        *(r2_9 + 0x1a) = 0;  /* "33_250117" */
        i_2 = i_2 + 1;
        *(r2_9 + 0x24) = 0;
    } while (i_2 < 5);
    
    uint32_t i_3 = 0;
    int32_t r4_2 = *0x2084d0;
    
    do
    {
        void* r5_3 = (i_3 << 1) + r4_2 + 0xd00;
        *(r5_3 + 4) = 0;
        i_3 = i_3 + 1;
        *(r5_3 + 0x14) = 0;  /* "_3.00.33_250117" */
    } while (i_3 < 4);
    
    int32_t r4_3 = *0x2084d0;
    
    for (uint32_t i_4 = 0; i_4 < 6; )
    {
        void* r5_6 = (i_4 << 1) + r4_3 + 0xd00;
        i_4 = i_4 + 1;
        *(r5_6 + 0x1c) = 0;  /* "_250117" */
    }
    
    int32_t r4_4 = *0x2084d0;
    
    for (uint32_t i_5 = 0; i_5 < 4; )
    {
        void* r5_9 = (i_5 << 1) + r4_4 + 0xd00;
        i_5 = i_5 + 1;
        *(r5_9 + 0x28) = 0;
    }
    
    void* r2_13 = *0x2084d0;
    *(r2_13 + 0xcf8) = 0;
    *(r2_13 + 0xcfa) = 0;
    *(r2_13 + 0xcfc) = 0;
    *(r2_13 + 0xd34) = 0;
    *(r2_13 + 0xd38) = 0;
    *(r2_13 + 0xd3a) = 0;
    *(r2_13 + 0xd3c) = 0;
    *(r2_13 + 0xd3e) = 0;
    *(r2_13 + 0xd40) = 0x1e;  /* "50117" */
    *(r2_13 + 0xd44) = 0;
    *(r2_13 + 0xd68) = 0;
    *(r2_13 + 0xd6c) = 0;
    *(r2_13 + 0xd6d) = 0;
    *(r2_13 + 0xd6e) = 0;
    *(r2_13 + 0xd6f) = 0;
    *(r2_13 + 0xd75) = 0;
    *(r2_13 + 0xd72) = 0;
    *(r2_13 + 0xd73) = 0;
    *(r2_13 + 0xd74) = 0;
    *(r2_13 + 0xd71) = 0;
    *(r2_13 + 0xd76) = 0;
    __builtin_memset(r2_13 + 0xd80, 0, 0x78);
    return 1;
}

int32_t sub_19768(int32_t* arg1, int32_t* arg2, char* arg3, int32_t arg4)
{
    int32_t var_18 = arg4;
    int32_t r0 = 0;
    int32_t var_2c = 0;
    int32_t var_30 = 0;
    
    while (r0 < arg4)
    {
        int32_t r1_2 = arg1[r0] >> 0xa;
        var_2c += r1_2 * r1_2;
        int32_t r2_2 = arg2[r0] >> 0xa;
        r0 += 1;
        var_30 += r2_2 * r2_2;
    }
    
    int32_t r6 = arg4 << 1;
    
    if (!var_2c || !var_30)
    {
        for (int32_t i = 0; r6 > i; i += 1)
            arg3[i] = 0;
    }
    else
    {
        for (int32_t i_1 = 0; r6 > i_1; i_1 += 1)
        {
            if (i_1 < arg4)
            {
                int32_t r7_1 = 0;
                
                for (int32_t j = 0; j < i_1 + 1; j += 1)
                    r7_1 += ((arg1[j] >> 9) * (*(&arg2[arg4 - i_1 + j] - 4) >> 9)) >> 2;
                
                arg3[i_1] = sub_12b3e(r7_1 * sub_12b3e(r7_1 << 6, var_2c), var_30);
            }
            
            if (i_1 >= arg4)
            {
                char r0_8;
                
                if (r6 - 1 != i_1)
                {
                    int32_t j_1 = 0;
                    int32_t var_28_1 = 0;
                    
                    while (r6 - i_1 - 1 > j_1)
                    {
                        int32_t r2_13 = (((arg1[i_1 - arg4 + j_1 + 1] >> 9) * (arg2[j_1] >> 9))
                            >> 2) + var_28_1;
                        j_1 += 1;
                        var_28_1 = r2_13;
                    }
                    
                    r0_8 = sub_12b3e(var_28_1 * sub_12b3e(var_28_1 << 6, var_2c), var_30);
                }
                else
                    r0_8 = 0;
                
                arg3[i_1] = r0_8;
            }
        }
    }
    
    return 0;
}

void sub_19870(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4)
{
    int32_t r5 = 0x100000;
    int32_t r4_1 = arg4 | arg2;
    
    if (r4_1 < 0)
    {
        if (r4_1 + 0x100000 < 0)
            return;
        
        r5 = 0x200000;
        int32_t r4_2 = arg4 << 1;
        
        if (r4_2 + 0x200000 >= r4_2)
        {
            int32_t r4_3 = arg2 << 1;
            
            if (r4_3 + 0x200000 >= r4_3)
                return;
        }
    }
    else
    {
        if (r4_1 + 0x100000 >= 0)
            return;
        
        if (arg4 + 0x100000 >= 0 && arg2 + 0x100000 >= 0)
            return;
    }
    
    int32_t var_14_1 = r5;
    sub_13b50(arg3, arg4, arg1, arg2, 0x4160019);
}

uint32_t sub_198d8(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, int32_t arg6 @ r6, int32_t arg7, int32_t arg8)
{
    int32_t lr;
    int32_t var_4 = lr;
    int32_t var_8 = arg6;
    int32_t r5;
    int32_t var_c = r5;
    
    if ((arg1 ^ arg2) >= 0)
        /* tailcall */
        return sub_198e4(arg1, arg2, 0x80000000, arg3, arg4, arg5);
    
    int32_t r1_2;
    int32_t r2_1;
    int32_t r3_1;
    r1_2 = sub_19a20(arg1, arg2 ^ 0x80000000, 0x80000000, arg3, arg4, arg5);
    int32_t r0_1 = 0x800000;
    
    if (TEST_BIT(0x80000001, 7))
        r0_1 = 0x800001;
    
    int32_t result = r0_1 + (arg6 << 0x17);  /* "00.33_250117" */
    
    if (r2_1 + 1 >= 0xff)
        return result >> 0x17 << 0x17;  /* "00.33_250117" */
    
    return result;
}

void sub_198e4(int32_t arg1, int32_t arg2, int32_t arg3 @ r5, int32_t arg4, int32_t arg5, int32_t arg6) __pure
{
    int32_t r4_10 = arg1 - arg2;
    
    if (arg1 < arg2)
    {
        arg1 -= r4_10;
        arg2 += r4_10;
    }
    
    uint32_t r2 = arg1 >> 0x17;  /* "00.33_250117" */
    
    if (r2 == 0xff)
        return;
    
    uint32_t r3_1 = arg2 << 1 >> 0x18;  /* "0.33_250117" */
    
    if (!r3_1)
        return;
    
    int32_t r0_1 = arg1 << 8 | arg3;
    
    if (r0_1 + ((arg2 << 8 | arg3) >> (r2 - r3_1)) < r0_1)
        r2 += 1;
}

int32_t sub_19964(int32_t arg1, int32_t arg2, int32_t arg3 @ r4) __pure
{
    int32_t var_10 = arg3;
    int32_t r3 = arg2 << 1;
    int32_t r4_1 = arg3 + arg3 + r3;
    uint32_t r2_1 = arg1 << 1 >> 0x18;  /* "0.33_250117" */
    uint32_t r3_1;
    
    if (!r2_1)
    {
        r3_1 = r3 >> 0x18;  /* "0.33_250117" */
    label_199e8:
        
        if (r2_1 != 0xff && r3_1 != 0xff)
            return r4_1 << 0x1f;  /* "0117" */
    }
    else
    {
        r3_1 = r3 >> 0x18;  /* "0.33_250117" */
        
        if (!r3_1)
            goto label_199e8;
        
        if (r2_1 != 0xff && r3_1 != 0xff)
        {
            uint32_t r0_1 = arg1 << 9 >> 9;
            uint32_t r1_1 = arg2 << 9 >> 9;
            int32_t r6_2 = r1_1 * r0_1;
            int32_t r0_3 = (r1_1 >> 8) * (r0_1 >> 8);
            int32_t r2_3 = r2_1 + r3_1 - 0x7f;
            int32_t r3_3 = r0_3 + ((r0_1 + r1_1) << 7) + ((r6_2 - (r0_3 << 0x10)) >> 0x10);
                /* "RY02_3.00.33_250117" */
            
            if (r3_3 >> 0x1e)  /* "50117" */
            {
                r3_3 = (r3_3 >> 1) - 0x20000000;
                r2_3 += 1;
            }
            
            uint32_t r0_5 = r3_3 >> 7;
            
            if (TEST_BIT(r3_3, 6))
            {
                r0_5 += 1;
                
                if (!(r6_2 << 0xf) && !(r3_3 << 0x1a))  /* "33_250117" */
                    r0_5 &= 0xfffffffe;
            }
            
            if (r2_3 < 0xff)
            {
                int32_t r5_4 = r2_3 << 0x17;  /* "00.33_250117" */
                
                if (r5_4)
                    return (r0_5 | r4_1 << 0x1f) + r5_4;  /* "0117" */
            }
            
            if (r2_3 <= 0)
                return r4_1 << 0x1f;  /* "0117" */
            
            return (0xff | r4_1 << 8) << 0x17;  /* "00.33_250117" */
        }
    }
    
    if (arg1 << 1 <= 0xff000000 && arg2 << 1 <= 0xff000000 && r2_1 + r3_1 != 0xff)
        return (0xff | r4_1 << 8) << 0x17;  /* "00.33_250117" */
    
    return 0x7fc00000;
}

int32_t sub_19a14(int32_t arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5 @ r4, int32_t arg6, int32_t arg7)
{
    int32_t lr;
    int32_t var_4 = lr;
    int32_t r6;
    int32_t var_8 = r6;
    int32_t r5;
    int32_t var_c = r5;
    int32_t r4_1 = arg1 ^ arg2;
    
    if (r4_1 >= 0)
        /* tailcall */
        return sub_19a20(arg1, arg2, 0x80000000, arg3, arg4, arg5);
    
    int32_t r0_1;
    int32_t r1_2;
    int32_t r3_1;
    r0_1 = sub_198e4(arg1, arg2 ^ 0x80000000, 0x80000000, arg3, arg4, arg5);
    
    if (!((r1_2 << 8 ^ r4_1 << r3_1) << 1))
        return r0_1 & 0xfffffffe;
    
    return r0_1 - 1;
}

void sub_19a20(int32_t arg1, int32_t arg2, int32_t arg3 @ r5, int32_t arg4, int32_t arg5, int32_t arg6) __pure
{
    if (arg1 < arg2)
    {
        int32_t r4 = (arg1 - arg2) ^ arg3;
        arg1 -= r4;
        arg2 += r4;
    }
    
    uint32_t r2 = arg1 >> 0x17;  /* "00.33_250117" */
    
    if (r2 == 0xff)
        return;
    
    uint32_t r3_1 = arg2 << 1 >> 0x18;  /* "0.33_250117" */
    
    if (!r3_1)
        return;
    
    uint32_t r4_3 = (arg2 << 8 | arg3) >> (r2 - r3_1);
    int32_t r0_1 = arg1 << 8 & ~arg3;
    
    if (r0_1 - r4_3 >= 0)
    {
    label_19a56:
        return;
    }
    
    if (!TEST_BIT(r0_1 - r4_3, 0x1e))  /* "50117" */
        return;
    
    if (r2 == 1)
        return;
    
    goto label_19a56;
}

void sub_19b32(int32_t arg1 @ r4, int32_t arg2 @ r5) __noreturn
{
    trap(0x80);
}

int32_t sub_1ae44()
{
    int32_t r4 = *0x40001040;
    int32_t r0 = r4 << 0x1d;  /* "250117" */
    
    if (r0 < 0)
        0x646510(r0);
    
    int32_t r0_1 = r4 << 0x19;  /* ".33_250117" */
    
    if (r0_1 < 0)
        0x646510(r0_1);
    
    int32_t r0_2 = r4 << 0x15;  /* "3.00.33_250117" */
    
    if (r0_2 < 0)
        0x646510(r0_2);
    
    int32_t r0_3 = r4 << 0x11;  /* "Y02_3.00.33_250117" */
    
    if (r0_3 < 0)
        0x646510(r0_3);
    
    int32_t r0_4 = r4 << 0xd;
    
    if (r0_4 < 0)
        0x646510(r0_4);
    
    int32_t r0_5 = r4 << 9;
    
    if (r0_5 < 0)
        0x64065e(r0_5);
    
    int32_t r0_6 = r4 << 5;
    
    if (r0_6 < 0)
        0x646510(r0_6);
    
    int32_t result = r4 << 1;
    
    if (result >= 0)
        return result;
    
    return 0x646510(result);
}

int32_t sub_1ae8c()
{
    int32_t r4 = *0x40001040;
    int32_t r0 = r4 << 0x1e;  /* "50117" */
    
    if (r0 < 0)
        0x646510(r0);
    
    int32_t r0_1 = r4 << 0x16;  /* ".00.33_250117" */
    
    if (r0_1 < 0)
        0x646510(r0_1);
    
    int32_t r0_2 = r4 << 0x12;  /* "02_3.00.33_250117" */
    
    if (r0_2 < 0)
        0x639534(r0_2);
    
    int32_t r0_3 = r4 << 0xe;
    
    if (r0_3 < 0)
        0x646510(r0_3);
    
    int32_t r0_4 = r4 << 0xa;
    
    if (r0_4 < 0)
        0x646510(r0_4);
    
    int32_t r0_5 = r4 << 6;
    
    if (r0_5 < 0)
        0x646510(r0_5);
    
    int32_t result = r4 << 2;
    
    if (result >= 0)
        return result;
    
    return 0x64243c(result);
}

int32_t sub_1aecc()
{
    int32_t r4 = *0x40001040;
    int32_t r0 = r4 << 0x1f;  /* "0117" */
    
    if (r0)
        0x646510(r0);
    
    int32_t r0_1 = r4 << 0x17;  /* "00.33_250117" */
    
    if (r0_1 < 0)
        0x646510(r0_1);
    
    int32_t r0_2 = r4 << 0x13;  /* "2_3.00.33_250117" */
    
    if (r0_2 < 0)
        0x646510(r0_2);
    
    int32_t r0_3 = r4 << 0xf;
    
    if (r0_3 < 0)
        0x646510(r0_3);
    
    int32_t r0_4 = r4 << 0xb;
    
    if (r0_4 < 0)
        0x646510(r0_4);
    
    int32_t r0_5 = r4 << 7;
    
    if (r0_5 < 0)
        0x646510(r0_5);
    
    int32_t result = r4 << 3;
    
    if (result >= 0)
        return result;
    
    return 0x646510(result);
}

int32_t sub_1af10()
{
    *0x4000020c |= 0x4000000;
    *0x4000020c |= 0x10000000;
    *0x4000021c |= 1;
    *0x40000238 |= 0x3000000;
    *0x4001000c = *0x4001000c >> 5 << 5;
    *0x40010050 = *0x20d690;
    *0x40010008 = *0x40010008 >> 0x10 << 0x10;  /* "RY02_3.00.33_250117" */
    *0x40010010 = *0x20d670;
    *0x40010014 = *0x20d674;
    *0x40010018 = *0x20d678;
    *0x4001001c = *0x20d67c;
    *0x40010020 = *0x20d680;
    *0x40010024 = *0x20d684;
    *0x40010028 = *0x20d688;
    *0x4001002c = *0x20d68c;
    *0x40010008 = *0x20d668;
    *0x40010004 = *0x20d664 >> 2 << 2;
    *0x40010054 = *0x20d694;
    *0x40010058 = *0x20d698;
    *0x4001005c = *0x20d69c;
    *0x40010004 |= 0x4000000;
    int32_t r2_3 = *0x4001000c | 0x1f00;
    *0x4001000c = r2_3;
    int32_t r1_11 = *0x20d66c;
    *0x4001000c = r1_11;
    return 0xffe46192(0x110, 0xffe4614c(0x110, r1_11, r2_3, 0x1f00) | 4);
}

int32_t sub_1afb6()
{
    *0x40000210 |= 0x10000;
    *0x40000230 |= 0xc000;
    *0x20d768 = *0x40002000;
    *0x20d76c = *0x40002008;
    *0x20d770 = *0x400020b0;
    *0x20d774 = *0x40002014;
    *0x20d778 = *0x4000201c;
    *0x20d77c = *0x400020b4;
    *0x20d780 = *0x40002028;
    *0x20d784 = *0x40002030;
    *0x20d788 = *0x400020b8;
    *0x20d78c = *0x4000203c;
    *0x20d790 = *0x40002044;
    *0x20d794 = *0x400020bc;
    *0x20d798 = *0x40002050;
    *0x20d79c = *0x40002058;
    *0x20d7a0 = *0x400020c0;
    *0x20d7a4 = *0x40002064;
    *0x20d7a8 = *0x4000206c;
    *0x20d7ac = *0x400020c4;
    *0x20d7b0 = *0x40000360;
    *0x20d7b4 = *0x4000600c;
    *0x20d7b8 = *0x40000384;
    int32_t result = *0x40000364;
    *0x20d638 = result;
    return result;
}

int32_t sub_1b040()
{
    int32_t r3;
    int32_t var_14 = r3;
    int32_t r2;
    int32_t var_18 = r2;
    *0xe000e180 = 1;
    *0x20d7d8 = *0xe000e100;
    *0x20d7dc = *0xe000e200;
    
    for (int32_t i = 0; i < 8; i += 1)
    {
        int32_t r1_1 = i << 2;
        *(0x20d7e4 + r1_1) = *(r1_1 - 0x1fff1c00);
    }
    
    *0x20d7e0 = *0xe000ed08;
    *0x20d634 = *0x4000600c;
    
    for (uint32_t i_1 = 0; i_1 < 0xa; i_1 = i_1 + 1)
    {
        int32_t r1_2 = i_1 << 2;
        *(0x20d63c + r1_2) = *(r1_2 + 0x40000280);
    }
    
    int32_t r0_5 = *0x20d62c;
    
    if (r0_5)
        r0_5();
    
    sub_1b1e0();
    sub_1b262();
    sub_1b334();
    sub_1b414();
    sub_1afb6();
    
    if (*0x200334 << 0x1f)  /* "0117" */
    {
        0x646824(8, 0, 1, 1, 0, 0);
        0x646824(9, 0, 1, 1, 0, 0);
    }
    
    return 0x646824(*0x200398 << 0x1a >> 0x1a, 0, 1, 0, 0, 0);  /* "33_250117" */
}

int32_t sub_1b0fc()
{
    for (uint32_t i = 0; i < 0xa; i = i + 1)
    {
        int32_t r1_1 = i << 2;
        *(r1_1 + 0x40000280) = *(0x20d63c + r1_1);
    }
    
    int32_t var_28 = 0;
    0x646824(*0x200398 << 0x1a >> 0x1a, 1, 1, 2, var_28, 0);  /* "33_250117" */
    
    if (*0x200334 << 0x1f)  /* "0117" */
    {
        var_28 = 0;
        0x646824(8, 1, 1, 0, var_28, 0);
        var_28 = 0;
        0x646824(9, 1, 1, 0, var_28, 0);
    }
    
    sub_1af10();
    sub_1b2ac();
    sub_1b3a4();
    sub_1b486();
    sub_1b4f8();
    int32_t r0_6 = *0x20d630;
    
    if (r0_6)
        r0_6();
    
    char var_20 = 0;
    char var_18 = 1;
    int32_t var_1c = 3;
    0x646710(&var_20, &var_28);
    
    if (*0x20d7d8 & *0x20d7dc)
        0xffe18c60(0x23100101, 0x8801664, 1, *0x20d7dc);
    
    *0xe000e400 |= *0x20d7e4 >> 0x18 << 0x18;  /* "0.33_250117" */
    
    for (int32_t i_1 = 1; i_1 < 8; i_1 += 1)
    {
        int32_t r1_8 = i_1 << 2;
        *(r1_8 - 0x1fff1c00) = *(0x20d7e4 + r1_8);
    }
    
    *0xe000ed08 = *0x20d7e0;
    *0x4000600c = *0x20d634;
    int32_t result = *0x20d7d8;
    *0xe000e100 = result;
    return result;
}

int32_t sub_1b1e0()
{
    *0x4000020c |= 0x4000000;
    *0x4000020c |= 0x10000000;
    *0x4000021c |= 1;
    *0x40000238 |= 0x3000000;
    *0x20d664 = *0x40010004;
    *0x20d668 = *0x40010008;
    *0x20d66c = *0x4001000c;
    *0x20d670 = *0x40010010;
    *0x20d674 = *0x40010014;
    *0x20d678 = *0x40010018;
    *0x20d67c = *0x4001001c;
    *0x20d680 = *0x40010020;
    *0x20d684 = *0x40010024;
    *0x20d688 = *0x40010028;
    *0x20d68c = *0x4001002c;
    *0x20d690 = *0x40010050;
    *0x20d694 = *0x40010054;
    *0x20d698 = *0x40010058;
    *0x20d69c = *0x4001005c;
    return 0xffe46192(0x110, 0xffe4614c(0x110) & 0xfb);
}

int32_t sub_1b262()
{
    *0x4000021c |= 0x100;
    *0x40000230 |= 0x3000000;
    *0x20d6a0 = *0x40001000;
    *0x20d6a4 = *0x40001004;
    *0x20d6a8 = *0x40001008;
    *0x20d6ac = *0x40001030;
    *0x20d6b0 = *0x40001034;
    *0x20d6b4 = *0x40001038;
    *0x20d6b8 = *0x4000103c;
    *0x20d6bc = *0x40001048;
    *0x20d6c0 = *0x40000344;
    *0x20d6c4 = *0x40001068;
    return 0x20d6a0;
}

int32_t sub_1b2ac()
{
    *0x4000021c |= 0x100;
    *0x40000230 |= 0x3000000;
    *0x40001004 = *0x20d6a4;
    *0x40001008 = *0x20d6a8;
    *0x40001034 = *0x20d6b0;
    *0x40001038 = *0x20d6b4;
    *0x4000103c = *0x20d6b8;
    *0x40001048 = *0x20d6bc;
    *0x40001000 = *0x20d6a0;
    *0x4000104c = ~*0x20d6a4;
    *0x40001030 = *0x20d6ac;
    *0x40000344 = *0x20d6c0;
    *0x40001068 = *0x20d6c4;
    /* tailcall */
    return sub_1b2fa();
}

int32_t sub_1b2fa() __pure
{
    return;
}

int32_t sub_1b334()
{
    *0x40000238 |= 3;
    *0x40000218 |= 0x10000;
    *0x20d6c8 = *0x40015000;
    *0x20d6cc = *0x40015004;
    *0x20d6d0 = *0x40015008;
    *0x20d6d4 = *0x4001500c;
    *0x20d6d8 = *0x40015014;
    *0x20d6dc = *0x40015018;
    *0x20d6e0 = *0x4001501c;
    *0x20d6e4 = *0x40015020;
    *0x20d6e8 = *0x40015024;
    *0x20d6ec = *0x40015028;
    *0x20d6f0 = *0x40015030;
    *0x20d6f4 = *0x40015038;
    *0x20d6f8 = *0x4001503c;
    *0x20d6fc = *0x4001506c;
    *0x20d700 = *0x4001507c;
    *0x20d704 = *0x40015084;
    *0x20d708 = *0x40015088;
    *0x20d70c = *0x4001508c;
    *0x20d710 = *0x40015090;
    *0x20d714 = *0x40015094;
    /* tailcall */
    return sub_1b2fa();
}

int32_t sub_1b3a4()
{
    *0x40000238 |= 3;
    *0x40000218 |= 0x10000;
    *0x40015000 = *0x20d6c8;
    *0x40015004 = *0x20d6cc;
    *0x40015008 = *0x20d6d0;
    *0x4001500c = *0x20d6d4;
    *0x40015014 = *0x20d6d8;
    *0x40015018 = *0x20d6dc;
    *0x4001501c = *0x20d6e0;
    *0x40015020 = *0x20d6e4;
    *0x40015024 = *0x20d6e8;
    *0x40015028 = *0x20d6ec;
    *0x40015030 = *0x20d6f0;
    *0x40015038 = *0x20d6f4;
    *0x4001503c = *0x20d6f8;
    *0x4001507c = *0x20d700;
    *0x40015084 = *0x20d704;
    *0x40015088 = *0x20d708;
    *0x4001508c = *0x20d70c;
    *0x40015090 = *0x20d710;
    *0x40015094 = *0x20d714;
    *0x4001506c = *0x20d6fc;
    /* tailcall */
    return sub_1b2fa();
}

int32_t sub_1b414()
{
    *0x40000238 |= 0xc;
    *0x40000218 |= 0x20000;
    *0x20d718 = *0x40015400;
    *0x20d71c = *0x40015404;
    *0x20d720 = *0x40015408;
    *0x20d724 = *0x4001540c;
    *0x20d728 = *0x40015414;
    *0x20d72c = *0x40015418;
    *0x20d730 = *0x4001541c;
    *0x20d734 = *0x40015420;
    *0x20d738 = *0x40015424;
    *0x20d73c = *0x40015428;
    *0x20d740 = *0x40015430;
    *0x20d744 = *0x40015438;
    *0x20d748 = *0x4001543c;
    *0x20d74c = *0x4001546c;
    *0x20d750 = *0x4001547c;
    *0x20d754 = *0x40015484;
    *0x20d758 = *0x40015488;
    *0x20d75c = *0x4001548c;
    *0x20d760 = *0x40015490;
    *0x20d764 = *0x40015494;
    /* tailcall */
    return sub_1b2fa();
}

int32_t sub_1b486()
{
    *0x40000238 |= 0xc;
    *0x40000218 |= 0x20000;
    *0x40015400 = *0x20d718;
    *0x40015404 = *0x20d71c;
    *0x40015408 = *0x20d720;
    *0x4001540c = *0x20d724;
    *0x40015414 = *0x20d728;
    *0x40015418 = *0x20d72c;
    *0x4001541c = *0x20d730;
    *0x40015420 = *0x20d734;
    *0x40015424 = *0x20d738;
    *0x40015428 = *0x20d73c;
    *0x40015430 = *0x20d740;
    *0x40015438 = *0x20d744;
    *0x4001543c = *0x20d748;
    *0x4001547c = *0x20d750;
    *0x40015484 = *0x20d754;
    *0x40015488 = *0x20d758;
    *0x4001548c = *0x20d75c;
    *0x40015490 = *0x20d760;
    *0x40015494 = *0x20d764;
    *0x4001546c = *0x20d74c;
    /* tailcall */
    return sub_1b2fa();
}

int32_t sub_1b4f8()
{
    *0x40000210 |= 0x10000;
    *0x40000230 |= 0xc000;
    *0x40000360 = *0x20d7b0;
    *0x40002000 = *0x20d768;
    *0x40002008 = *0x20d76c;
    *0x400020b0 = *0x20d770;
    *0x40002014 = *0x20d774;
    *0x4000201c = *0x20d778;
    *0x400020b4 = *0x20d77c;
    *0x40002028 = *0x20d780;
    *0x40002030 = *0x20d784;
    *0x400020b8 = *0x20d788;
    *0x4000203c = *0x20d78c;
    *0x40002044 = *0x20d790;
    *0x400020bc = *0x20d794;
    *0x40002050 = *0x20d798;
    *0x40002058 = *0x20d79c;
    *0x400020c0 = *0x20d7a0;
    *0x40002064 = *0x20d7a4;
    *0x4000206c = *0x20d7a8;
    *0x400020c4 = *0x20d7ac;
    int32_t result = *0x20d638;
    *0x40000364 = result;
    return result;
}

int32_t sub_1b708(int32_t arg1 @ r5, int32_t* arg2 @ r6, void* arg3 @ r7, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8)
{
    *arg2 = arg1;
    *(arg3 + 0x30) = arg1;  /* "RY02_V3.0" */
}

