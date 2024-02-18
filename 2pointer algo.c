// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i=0;
  int j=7;
 int  t=8;
    int arr[8]={1,2,3,4,5,8,9,10};
   while(i<j){
     if(arr[i]+arr[j]==t){
       printf("done two no is %d,%d",arr[i],arr[j]);
       break;}
     else if(arr[i]+arr[j]>t)
       j--;
     else i++;
     
   }
   
    return 0;
}