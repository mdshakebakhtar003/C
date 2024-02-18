// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() { 
            char s1[11]="college";
            for(int i=6;i>=2;i--){
              s1[i+1]=s1[i];
            }
            s1[2]='k';
            printf("%s",s1);
            return 0;
}