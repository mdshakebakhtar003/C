// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>

int main() {  int i,j,t;
  int arr[3][4];
 // int brr[5][2];
 //int sum=0;
  printf("Enter element of 1st array");
 for( i=0;i<3;i++){
      for( j=0;j<4;j++){
          scanf("%d",&arr[i][j]);}}
          int maxsum=INT_MIN;
  for( i=0;i<3;i++){
      int sum=0;
      for( j=0;j<4;j++){
          sum=sum+arr[i][j];
          if(maxsum<sum){
          maxsum=sum;
          t=i+1;}
          
      }
  }printf("%d ",t);
   
    return 0;
}