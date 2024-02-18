// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
   struct employee{
       int emp_id;
       char name[50];
       float salary;
   }a,b,c;
   a.emp_id=123456;
  strcpy(a.name,"akhtar");
  a.salary=230000;
  printf("id is %d\n",a.emp_id);
   printf("%s\n",a.name);
   printf("%f",a.salary);
     
  
    return 0;
}