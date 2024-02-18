#include <stdio.h>

int main() {
            int n;
            printf("n");
            scanf("%d",&n);
            int m=n-1;
           int nst=m;
           int nsp=1;
            int p=1;
          for(int o=1;o<=2*n-1;o++){char ch=(char)p+64;
            printf("%c",ch);
            p++;
            
          }printf("\n");
          for(int i=1;i<=m;i++){
            
            int q=1;
            for(int j=1;j<=nst;j++){char ch=(char)q+64;
              printf("%c",ch);
              q++;
              
            } for(int k=1;k<=nsp;k++){
              printf(" ");
              q++;}
            
             for(int l=1;l<=nst;l++){char ch=(char)q+64;
              printf("%c",ch);
               q++;
               }
            
            
            nst--;
            nsp+=2;
            printf("\n");
    
  }
  
  
    return 0;
}
  