// Online C compiler to run C program online
#include <stdio.h>

int main() {  int i,j;
  int arr[5][2];
  int brr[5][2];
  int crr[5][2];
  printf("Enter element of 1st array");
 for( i=0;i<5;i++){
      for( j=0;j<2;j++){
          scanf("%d",&arr[i][j]);}}
     printf("Enter element of 2nd array");
     for( i=0;i<5;i++){
      for( j=0;j<2;j++){
          scanf("%d",&brr[i][j]);}}
          
  for( i=0;i<5;i++){
      for( j=0;j<2;j++){
        printf("%d ",arr[i][j]+brr[i][j]);
      }
      printf("\n");
  }
  

    return 0;
}