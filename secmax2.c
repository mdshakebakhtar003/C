// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>
int main() {
    int arr[8]={1,2,3,11,9,6,7,8};
    int i,j,max=INT_MIN,smax=INT_MIN;
    for(int i=0;i<=7;i++){
       if(max<arr[i]){
           smax=max;
           max=arr[i];}
          else if(smax<arr[i] && arr[i]!=max)
          smax=arr[i];
       }
       
        printf("max is %d",max);
         printf("smax is %d",smax);
    return 0;
}