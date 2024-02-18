#include<stdio.h>
int main(){
            int r,n,t,s=0;
            
            for(int j=1;j<=1000;j++){
            n=j;
            t=n;
            s=0;
            while(n>0){
               
                        r=n%10;
                         s=s*10+r;
                        n=n/10;
                       
            }
            if(t==s)
            printf("%d\n",s);}
            
            return 0; }
                    


