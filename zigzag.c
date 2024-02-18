// Online C compiler to run C program online
#include <stdio.h>
void preInpost(int n){
    if(n==0) return;
    printf("%d\n",n);
    preInpost(n-1);
    printf("%d\n",n);
    preInpost(n-1);
    printf("%d\n",n);
    return;
}
int main() {    int n;
   printf("enter n:");
   scanf("%d",&n);
   preInpost(n);
    return 0;
}