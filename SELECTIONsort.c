#include <stdio.h>
#include<limits.h>
int main() {
    int i,j;
    int arr[5]={5,4,3,2,1};
    for(i=0;i<4;i++){
      int min=INT_MAX;
      int minidx=-1;
      for(j=i;j<=4;j++){
        if(min>arr[j]){
          min=arr[j];
          minidx=j;
        }
      }
      int temp=arr[minidx];
      arr[minidx]=arr[i];
      arr[i]=temp;
    }
  for(i=0;i<5;i++)
    printf("%d",arr[i]);
}
  