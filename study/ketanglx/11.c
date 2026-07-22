#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    printf("argv[%d] = %s\n", i, argv[i]);
    
    printf("%s\n", *(argv + 1)+1); 
      
    printf("%c\n", *((*argv) + 2) + 2);  
}
