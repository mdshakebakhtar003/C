// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int arr[3][4]={1,3,4,7,0,9,2,6,10,76,8,1};
   int i,j;
    //int temp;
   for(i=0;i<3;i++){
       for(j=0;j<=i;j++){
           int temp=arr[i][j];
           arr[i][j]=arr[j][i];
           arr[j][i]=temp;
       }
   }
    for(i=0;i<3;i++){
       for(j=3;j>=0;j--){
           printf("%d ",arr[i][j]);}
           printf("\n");}
    return 0;
}