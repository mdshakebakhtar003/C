// Online C compiler to run C program online
#include <stdio.h>
int main(){
int arr[4]={3,2,5,6};
int brr[4]={};
int i;
for(i=0;i<=3;i++){
    brr[i]=arr[3-i];}
    for(int i=0;i<=3;i++){
    printf("%d",brr[i]);
    
}



    return 0;
}