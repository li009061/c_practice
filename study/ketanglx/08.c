#include <stdio.h>

void Automating_homework(int n , void(*p)(void)){
    printf("已经帮你完成了你的作业。");
    p();
}

void Submit_hoemwork_feiqiu(void){
    printf("帮你提交到飞秋了\n");
}
void Submit_hoemwork_Email(void){
    printf("帮你提交到邮箱了\n");
}

void homework_Subit(int n, char*){
    
}

int main(int argc, char const *argv[])
{
    int homework = 1;
    Automating_homework(homework, Submit_hoemwork_feiqiu);
    Automating_homework(homework, Submit_hoemwork_Email);
    return 0;
}
