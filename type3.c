// Online C compiler to run C program online
#include <stdio.h>

int main() {int i=0;
   char arr[]="hello";
   arr[0]='m';
   arr[1]=97;
   while(arr[i]!=0){
   printf("%c",*(arr+i));
   i++;}
    return 0;
}