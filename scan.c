// Online C compiler to run C program online
#include <stdio.h>

int main() {  int i,j;
  int roll_marks[5][5];
 for( i=0;i<5;i++){
      for( j=0;j<5;j++){
          scanf("%d",& roll_marks[i][j]);}}
  for( i=0;i<5;i++){
      for( j=0;j<5;j++){
        printf("%d ",roll_marks[i][j]);
      }
      printf("\n");
  }
  

    return 0;
}