#include <stdio.h>

int main() {
            int n;
            printf("n");
            scanf("%d",&n);
            int m=n-1;
           int nst=m;
           int nsp=1;
          for(int o=1;o<=2*n-1;o++){
            printf("*");
            
          }printf("\n");
          for(int i=1;i<=m;i++){
      
            for(int j=1;j<=nst;j++){
              printf("*");
              
            } for(int k=1;k<=nsp;k++){
              printf(" ");}
            
             for(int l=1;l<=nst;l++){
              printf("*");
               }
            
            
            nst--;
            nsp+=2;
            printf("\n");
    
  }
  
  
    return 0;
}
  