// Online C compiler to run C program online
#include <stdio.h>
int main(){
    int arr[7]={12,7,21,42,21,6,7};
    int x=21,count=0,i;
    for( i=0;i<=6;i++){
        if(arr[i]==x){
            count=1;
            break;
        }
        
    }
    if(count==1)
    printf("%d is present and index is %d",x,i);
    else
    printf("%d is not present",x);
    
}