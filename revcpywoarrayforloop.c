// Online C compiler to run C program online
#include <stdio.h>
void function(int arr[]){
   
    for(int i=0,j=3;i<j;i++,j--){
        int c=arr[i];
        arr[i]=arr[j];
        arr[j]=c;
    }
    return ;
}
int main(){
int arr[4]={3,2,5,6};
function(arr);
for(int i=0;i<=3;i++){
    
    
    printf("%d",arr[i]);
    
}



    return 0;
}