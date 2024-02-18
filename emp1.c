// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
   struct employee{
       int emp_id;
       char name[50];
       float salary;
   };
   struct employee one;
   one.emp_id=544321;
   strcpy(one.name,"shakeb");
   one.salary=120000;
  printf("%s\n",one.name);
  printf("%d",one.emp_id);

    return 0;
}