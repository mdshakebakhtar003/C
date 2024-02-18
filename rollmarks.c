// Online C compiler to run C program online
#include <stdio.h>

int main() {  int i,j;
  int roll_marks[5][2];
  //printf("Enter roll and marks:\n");
  printf("Roll Marks");
 for( i=0;i<5;i++){
      for( j=0;j<2;j++){
          scanf("%d",&roll_marks[i][j]);}}
  for( i=0;i<5;i++){
      for( j=0;j<2;j++){
        printf("%d ",roll_marks[i][j]);
      }
      printf("\n");
  }
  

    return 0;
}