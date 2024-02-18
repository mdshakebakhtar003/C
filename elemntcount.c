#include<stdio.h>
int main(){
int arr[7]={1,2,3,4,5,6,7};
int i,x=4,count=0;
for(i=0;i<=6;i++){
    if(x<arr[i]){
        count++;
    }
    }
    printf("%d",count);
}