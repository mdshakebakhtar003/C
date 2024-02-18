// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>


int main() {  int i,j,r,s,t,u;
  int arr[2][2];
  int min=arr[0][0];
  int max=INT_MIN;

 // int brr[5][2];
 int sum=0;
  printf("Enter element of 1st array");
 for( i=0;i<2;i++){
      for( j=0;j<2;j++){
          scanf("%d",&arr[i][j]);}}
  for( i=0;i<2;i++){
      for( j=0;j<2;j++){
            if(arr[i][j]<min){
          min=arr[i][j];
                r=i+1;
                s=j+1;
            }
          if(arr[i][j]>max){
          max=arr[i][j];
          t=i+1;
          u=j+1;
        
          }
      }
  }
   printf("MAX IS %d and its index is (%d,%d) ",max,t,u);
   printf("MIN IS %d and its index is (%d,%d)",min,r,s);
    return 0;
}