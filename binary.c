// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[10];
    int i,j;
    for( i=0;n>0;i++){
        arr[i]=n%2;
        n=n/2;
        
        
    }
    for(j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    printf("\n");

    return 0;
}