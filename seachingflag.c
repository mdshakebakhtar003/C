// Online C compiler to run C program online
#include <stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={12,7,21,42,21,6,7};
    int x=21,i,idx=-1;
    bool flag=false;
    for( i=0;i<=6;i++){
        if(arr[i]==x){
           flag=true;
           idx=i;
            break;
        }
        
    }
    if(flag=true)
    printf("%d is present and index is %d",x,idx);
    else
    printf("%d is not present",x);
    
}