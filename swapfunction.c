// Online C compiler to run C program online
#include <stdio.h>
void swap(int a,int b){
 int c;
   c=a;
   a=b;
   b=c;
   int d=a;
   int e=b;
   return d,e;

}
int main() {
   int a,b;
   printf(" enter a: b:");
   scanf("%d%d",&a,&b);
  
   
   
   swap(a,b);
   printf("%d\n",a);
   printf("%d",b);
  

    return 0;
}