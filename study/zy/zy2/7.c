#include <stdio.h>
int main(){
    unsigned int a1 = 0x12344520;
    unsigned int a2 = 0xff004B1C;
    unsigned int a3 = 0x00553C1E;
    {
        unsigned int temp = a1 & 0xFF;
        unsigned int water = (a1 >> 8) & 0xFF;
        unsigned int men = (a1 >> 16) & 0xF;
        unsigned int deng = (a1 >> 20) & 0xF;
        
        printf("包1\n");
        printf("温度:%u摄氏度\n",temp);
        printf("湿度:%u百分比\n", water);
        printf("门:");
        for (int m = 0; m < 4; m++)
        {
            int status = (men >> m) & 0x1;
            printf("门%d=%d ", m, status);
        }
        printf("\n");
        printf("灯:");
        for (int d = 0; d < 4; d++)
        {
            int status = (deng >> d) & 0x1;
            printf("灯:%d=%d ", d, status);
        }
        printf("\n");
    }
    {
        unsigned int temp = a2 & 0xFF;
        unsigned int water = (a2 >> 8) & 0xFF;
        unsigned int men = (a2 >> 16) & 0xF;
        unsigned int deng = (a2 >> 20) & 0xF;

        printf("包2\n");
        printf("温度:%u摄氏度\n",temp);
        printf("湿度:%u百分比\n", water);
        printf("门:");
        for (int d = 0; d < 4; d++)
        {
            int status = (men >> d) & 0x1;
            printf("门%d=%d ", d, status);
        }
        printf("\n");
        printf("灯:");
        for (int d = 0; d < 4; d++)
        {
            int status = (deng >> d) & 0x1;
            printf("灯%d=%d ", d, status );
        }
        printf("\n");
    }
    {
        unsigned int temp = a3 & 0xFF;
        unsigned int water = (a3 >> 8) & 0xFF;
        unsigned int men = (a3 >> 16) & 0xF;
        unsigned int deng = (a3 >> 20) & 0xF;

        printf("包3\n");
        printf("温度:%u摄氏度\n",temp);
        printf("湿度:%u百分比\n", water);
        printf("门:");
                for (int d = 0; d < 4; d++)
        {
            int status = (men >> d) & 0x1;
            printf("门%d=%d ", d, status);
        }
        printf("\n");
        printf("灯:");
        for (int d = 0; d < 4; d++)
        {
            int status = (deng >> d) & 0x1;
            printf("灯%d=%d ", d, status);
        }
        printf("\n");
    }
    return 0;
}