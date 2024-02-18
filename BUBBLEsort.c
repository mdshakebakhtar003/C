// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int i,j;
   int arr[5]={5,4,2,3,1};
  
for(i=0;i<4;i++){
  for(j=0;j<4-i;j++){
    if(arr[j]>arr[j+1]){
    int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;}
  }
}   
  for(j=0;j<5;j++){
    printf("%d",arr[j]);
  }
    return 0;
}