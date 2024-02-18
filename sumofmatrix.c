// Online C compiler to run C program online
#include <stdio.h>

int main() {  int i,j;
  int arr[2][2];
 // int brr[5][2];
 int sum=0;
  printf("Enter element of 1st array");
 for( i=0;i<2;i++){
      for( j=0;j<2;j++){
          scanf("%d",&arr[i][j]);}}
  for( i=0;i<2;i++){
      for( j=0;j<2;j++){
          sum=sum+arr[i][j];
      }
  }
   printf("%d ",sum);
    return 0;
}