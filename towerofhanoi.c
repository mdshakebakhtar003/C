// Online C compiler to run C program online
#include <stdio.h>
void tower(int n,char s,char h,char d){
    if(n==0) return;
    //printf("%d\n",n);
    tower(n-1,s,d,h);
    printf("%c - %c\n",s,d);
    tower(n-1,h,s,d);
    //printf("%c -%c\n",h,s);
    return;
}
int main() {    int n;
   printf("enter n:");
   scanf("%d",&n);
   tower(n,'A','B','C');
    return 0;
}
