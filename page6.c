// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("enter n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        printf("* " );
    }printf("\n");}

    return 0;
}