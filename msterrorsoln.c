// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
typedef int*int_pointer;
int main() {
    int x=5,y=7;
    int_pointer a=&x,b=&y;
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}