#include<stdio.h>
int add(int a,int b){
   int sum=a+b;
    return sum;
}
int main(){
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("%d",sum);
}