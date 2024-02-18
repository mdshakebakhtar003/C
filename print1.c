// Online C compiler to run C program online
#include <stdio.h>

int main() {int i,j;
   int arr[4][2]={{1324,56},{1256,43},{1434,32},{1312,96}};
   for(i=0;i<4;i++){
       for(j=0;j<2;j++){
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }
    return 0;
}