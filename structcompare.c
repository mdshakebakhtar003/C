// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
#include<stdbool.h>
int main() {
   typedef struct dates{
       int day;
       int month;
       int year;
   }date;
   date a,b;
   a.day=19;
   a.month=12;
   a.year=2000;
   b.day=13;
   b.month=9;
   b.year=2003;
   bool flag =true;
   if(a.day!=b.day)flag=false;
    if(a.month!=b.month)flag=false;
    if(a.year!=b.year)flag=false;
    if(flag==true)printf("the dates are same");
    else
    printf("the dates are not same");
    return 0;
}