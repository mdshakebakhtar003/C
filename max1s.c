// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int arr[3][4]={1,1,1,1,0,1,0,1,1,0,0,1};
   int i,j;
   int rowidx;
   int maxcount=0;
   for(i=0;i<3;i++){
       int count=0;
       for(j=0;j<4;j++){
           if(arr[i][j]==1){
              
             count++;
             }
             if(count>maxcount){
              maxcount=count;
            rowidx=i+1;}
           
       }
   }
   printf("max 1s is %d in row %d",maxcount,rowidx);
    return 0;
}