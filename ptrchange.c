// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {int i=0;
            char str[]="college wallah";
            //char* ptr=str;
            //ptr="phydics wallah";
            char *p=str;
            *p='P';
            printf("%s",str);
            
    return 0;
}