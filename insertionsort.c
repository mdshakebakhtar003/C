// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int i,j;
  int arr[5]={11,4,8,2,1};
  for(i=1;i<=4;i++){
      j=i;
      while(j>=1 && arr[j]<arr[j-1]){
          int temp=arr[j];
          arr[j]=arr[j-1];
          arr[j-1]=temp;
          j--;
      }
  }
  for(i=0;i<=4;i++){
      printf("%d",arr[i]);
  }
    return 0;
}