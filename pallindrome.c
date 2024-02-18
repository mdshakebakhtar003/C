#include<stdio.h>
int main(){
            int r,n,t,s=0;
            printf("enter n:");
            scanf("%d",&n);
            t=n;
            while(n>0){
               
                        r=n%10;
                         s=s*10+r;
                        n=n/10;
                       
            }
            if(t==s)
            printf("pallindrome");
            else
            printf("not pallindrome");
            return 0; }
                    


