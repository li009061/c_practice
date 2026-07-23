// 假设在一个64位的系统中，有如下智能家居的相关结构体位域定义如下：
// // 64位系统
struct smart_home
{
    unsigned int  fan:2;   // 2把风扇
    unsigned char light:4; // 4盏灯
    unsigned long temp:6;  // 温度，范围在[0 ~ 63°C]
};
// 问题：
// 上述结构体占用的比特数是多少？
// unsigned int  fan:2 ---->占两比特
// unsigned char light:4--->占四比特
// unsigned long temp:6 --->占六比特
// 8字节

// 上述结构体占用的字节数是多少？
//8字节

// 若有如下代码，会输出什么？
// struct smart_home sh = {0};
// sh.fan   = 0;   00
// sh.light = 6;  0110
// sh.temp  = 26;  011010
// printf("%ld\n", *(long *)(&sh)); 011010011000  8+16+128+512+1024
// 8+16+128+512+1024 = 1688


