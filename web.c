// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,j;
   int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
   for(i=0;i<3;i++){
       for(j=0;j<3;j++){
           if(i%2==0){
               printf("%d",a[i][j]);
           }
           else
           printf("%d",a[i][2-j]);
       }
   }
   
   
    return 0;
}