#include<stdio.h>
int main(){
    int a=25;
    int* x=&a;
    int** y=&x;
    printf("%d\n",a);
    printf("%d\n",*x);
    printf("%d\n",**y);
    printf("%p\n",x);
    printf("%p",y);
    return 0;
}