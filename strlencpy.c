// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
            char s1[11]="raghavg";
            char s2[11];
           int x= strlen(s1);
            printf("%d ",x);
            strcpy(s2,s1);
            printf("%s",s2);
           
            return 0;
}