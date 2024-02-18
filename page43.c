#include <stdio.h>

int main() {
            int n;
            printf("n");
            scanf("%d",&n);
            int m=n-1;
           int nst=m;
           int nsp=1;
            int p=1;
            int mc=(2*n-1)/2;
          for(int o=1;o<=2*n-1;o++){

            
            if(o<=mc){            printf("%d",p);
                p++;
            }
            else{ printf("%d",p);
                p--;
            }
          }printf("\n");
          for(int i=1;i<=m;i++){
            
            int q=1;
            for(int j=1;j<=nst;j++){
              printf("%d",q);
              q++;
              
            } for(int k=1;k<=nsp;k++){
              printf(" ");
              q++;}
               int r=nst;
             for(int l=1;l<=nst;l++){
              printf("%d",r);
               r--;
               }
            
            
            nst--;
            nsp+=2;
            printf("\n");
    
  }
  
  
    return 0;
}
  