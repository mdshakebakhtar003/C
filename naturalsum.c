// Online C compiler to run C program online
#include <stdio.h>
int sum(int n){ if(n==0)
                return;
                return n+sum(n-1);
}


int main() {    int n;
                printf("enter n:");
                scanf("%d",&n);
                sum(n);
                printf("%d",sum(n));

    return 0;
}