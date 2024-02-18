// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {int i=0;
            char str[]="college wallah";
            char* ptr=str;
            while(*ptr!='\0'){
                printf("%c",*ptr);
                ptr++;
                //i++;
            }
    return 0;
}