#include<stdio.h>
int main(){
    int a=5;
    int* x=&a;
    *x=7;
    printf("%p\n",&a);
    printf("%p\n",x);
    printf("%d",*x);
}