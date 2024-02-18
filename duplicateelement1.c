// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j,n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n+1];
    printf("enter array element:");
    for(i=0;i<n+1;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               printf("%d is duplicate element",arr[i]);
               break;
                
            }break;
           
        } 
    }
    return 0;
}