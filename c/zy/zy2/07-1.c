#include <stdio.h>

// 定义位域结构体
struct Packet {
    unsigned int temp   : 8;
    unsigned int humi   : 8;
    unsigned int door   : 4;
    unsigned int light  : 4;
    unsigned int res    : 8;
};

// 联合体用于内存映射
union DataPacket {
    unsigned int raw;
    struct Packet p;
};

// 打印门状态
void print_door(unsigned int door) {
    printf("门状态: ");
    for (int i = 0; i < 4; i++) {
        int status = (door >> i) & 1;
        printf("门%d=%d ", i, status);
    }
    printf("\n");
}

// 打印灯状态
void print_light(unsigned int light) {
    printf("灯状态: ");
    for (int i = 0; i < 4; i++) {
        int status = (light >> i) & 1;
        printf("灯%d=%d ", i, status);
    }
    printf("\n");
}

int main() {
    // 三个数据包
    unsigned int packets[] = {0x12344520, 0xff004B1C, 0x00553C1E};
    int num = sizeof(packets) / sizeof(packets[0]);

    union DataPacket dp;

    for (int i = 0; i < num; i++) {
        dp.raw = packets[i];

        printf("数据包 %d: 0x%08X\n", i + 1, dp.raw);
        printf("温度: %u°C\n", dp.p.temp);
        printf("湿度: %u%%\n", dp.p.humi);
        print_door(dp.p.door);
        print_light(dp.p.light);
        printf("\n");
    }

    return 0;
}