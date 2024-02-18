// Online C compiler to run C program online
#include <stdio.h>
int maizepath(int n,int m){
                        int rw=0;
                        int dw=0;
                        if(n==1 && m==1)
                        return 1;
                        if(n==1)
                        rw+=maizepath(n,m-1);
                        if(m==1)
                        dw+=maizepath(n-1,m);
                        if(n>1 && m>1){
                        rw+=maizepath(n,m-1);
                      dw+=maizepath(n-1,m);}
                        
                        int tw= rw+ dw;
                        return tw;
                        
    
    
    
    
}

int main() {
    int n,m;
    printf("enter n: m:");
    scanf("%d%d",&n,&m);
    int noofways=maizepath(n,m);
    printf("total ways is %d",noofways);
    
    
    return 0;
}