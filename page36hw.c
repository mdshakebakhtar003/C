#include <stdio.h>

int main() {
            int n;
            printf("enter n:");
            scanf("%d",&n);
           
            for(int i=1;i<=n;i++){
              
              for(int j=1;j<=n-i;j++){
                printf(" ");
              }int num=1;
              for(int k=1;k<=i;k++){char ch=(char)num+64;
                printf("%c",ch);
                num++;
              }int m=i-1;
             
              for(int l=1;l<=i-1;l++){char ch=(char)(m+64);
                printf("%c",ch);
                m--;
              }
              printf("\n");
            }
    
    return 0;
}
  