// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for( int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=n;j++){
        printf("*");
    }printf("\n");}

    return 0;
}