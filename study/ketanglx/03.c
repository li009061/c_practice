#include <stdio.h>
#include <string.h>

int main(){
    int fill_me_with_numbers[10] = {1,2,3,4,5,6,7,8,9,10};
    int fill_me_with_numbers1[10];
    int fill_me_with_numbers2[10];

    for (int i = 1; i <= 10; i++)
    {
        fill_me_with_numbers1 [i-1] = i;
    }

    memcpy(fill_me_with_numbers2, fill_me_with_numbers, sizeof(fill_me_with_numbers));
    
    for (int a = 0; a < 10; a++)
    {
         printf("%d ", fill_me_with_numbers[a]);
    }
    printf("\n");
    for (int a = 0; a < 10; a++)
    {
        printf("%d ", fill_me_with_numbers1[a]);
    }
    printf("\n");
    for (int a = 0; a < 10; a++)
    {
        printf("%d ", fill_me_with_numbers2[a]);
    }
    printf("\n");
    
    return 0;
}