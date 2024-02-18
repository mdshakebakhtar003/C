// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[8]={1,2,3,9,5,6,7,8};
    int i,j,max=arr[0],smax=arr[0];
    for(int i=0;i<=7;i++){
       if(max<arr[i]){
           max=arr[i];}
          if(smax<arr[i] && arr[i]!=max)
          smax=arr[i];
       }
       
        printf("max is %d",max);
         printf("smax is %d",smax);
    return 0;
}