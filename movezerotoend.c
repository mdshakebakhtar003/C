// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i,j;
   int arr[9]={5,0,2,0,0,4,1,3,0};
   for(i=0;i<8;i++){
       for(j=0;j<8;j++){
           if(arr[j]==0){
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
   }
  
    for(i=0;i<9;i++){
      printf("%d",arr[i]);}
    return 0;
         
  

}