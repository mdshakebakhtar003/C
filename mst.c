// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    int x=5,y=7;
    int *a=&x,b=y;
    printf("%p\n",a);
    printf("%d\n",b);
    return 0;
}