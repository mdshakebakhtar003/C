#include <stdio.h>

int main() {
            int n;
            printf("n");
            scanf("%d",&n);
            int m=n/2+1;
            int nsp=m-1;
            int nst=1;
          for(int i=1;i<=n;i++){
            for(int j=1;j<=nsp;j++){
              printf(" ");
            } for(int k=1;k<=nst;k++){
              printf("*");}
            if(i<m){
              nsp--;
              nst+=2;
            }
            else{
              nsp++;
              nst-=2;
            }
            
            printf("\n");
    
  }
  
  
    return 0;
}
  