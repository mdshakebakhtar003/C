// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int i,j;
  int arr[5]={11,4,8,2,1};
  int k;
  printf("enter kth smallest element u want ");
  scanf("%d",&k);
  for(i=0;i<4;i++){
      for(j=0;j<4-i;j++){
          if(arr[j]>arr[j+1]){
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
          }
      }
  }

  for(i=0;i<5;i++){
     // printf("%d\n",arr[i]);
  }
   printf("kth smallest element is %d",arr[k-1]);

 
    return 0;
}
