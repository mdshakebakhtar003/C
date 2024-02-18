#include<stdio.h>
void function(int arr[]){
  int c=arr[0];
  arr[0]=arr[1];
  arr[1]=c;
}
int main(){
  int arr[2]={9,6};
  function(arr);
  printf("%d %d",arr[0],arr[1]);
    return 0;
}