// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {int i=0,j;
char temp;
   char arr[40];
  gets(arr);
   //puts(arr);
   for(i=0,j=(strlen(arr)-1);i<=j;i++,j--){
       temp=arr[i];
       arr[i]=arr[j];
       arr[j]=temp;
   }
   puts(arr);
    return 0;
}