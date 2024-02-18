// Online C compiler to run C program online
#include <stdio.h>

int main() {int arr[7]={1,2,7,7,5,6,7};
                int i,j;
    
    for( i=0;i<=6;i++){
        for( j=i+1;j<=6;j++){
            if(arr[i]==arr[j]){
               printf(" first index of duplicate of %d is %d",arr[i],j);
               
            } break;
        }  
    }
   
    return 0;
}