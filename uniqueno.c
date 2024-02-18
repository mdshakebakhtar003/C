// Online C compiler to run C program online
#include <stdio.h>
#include<stdbool.h>

int main() {int arr[7]={1,3,6,1,1,2,3};
                int i,j;
    
    for( i=0;i<=6;i++){
        bool flag=false;
        for( j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
               flag=true;
               
            } 
        }  
        if(flag==false){
            printf("unique no. is %d",arr[i]);
            break;
            
        }
    }
   
    return 0;
}