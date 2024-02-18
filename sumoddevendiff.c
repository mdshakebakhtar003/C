#include<stdio.h>
int main(){
int arr[6]={1,3,5,7,9,11};
int i,sum1=0,sum2=0;
for(i=0;i<=5;i++){
    if(i%2==0){
        sum1+=arr[i];
    }
    else{
        sum2+=arr[i];
    }
    }
    printf("%d",sum2-sum1);
}