// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("enter n:");
    scanf("%d",&n); 
    int nst=1;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=n-i;j++){
           printf("+");
       }
        for( int k=1;k<=nst;k++){
            printf("*");}
           
    
     nst+=2;
     printf("\n");}

    return 0;
}