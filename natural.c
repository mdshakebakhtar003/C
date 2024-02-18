// Online C compiler to run C program online
#include <stdio.h>
int natural(int n){
                    if(n==0)
                    return;
                    natural(n-1);
                    printf("%d ",n);
}

                int main() {    int n;
                printf("enter n:");
                scanf("%d",&n);
                natural(n);
            
            
           
    return 0;
}