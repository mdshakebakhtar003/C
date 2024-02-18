#include<stdio.h>
void function(int arr[]){
    arr[2]=7;
}
int main(){
  int arr[4]={1,2,3,4};
  function(arr);
  printf("%d",arr[2]);
    return 0;
}