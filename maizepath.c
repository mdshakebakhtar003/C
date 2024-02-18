// Online C compiler to run C program online
#include <stdio.h>
int maizepath(int cr,int cc,int er,int ec){
                        int rw=0;
                        int dw=0;
                        if(cr==er && cc==ec)
                        return;
                        if(cr==er)
                        rw+=(cr,cc+1,er,ec);
                        if(cc==ec)
                        dw+=(cr+1,cc,er,ec);
                        if(cr!=er && cc!=ec){
                        rw+=(cr,cc+1,er,ec);
                        dw+=(cr+1,cc,er,ec);}
                        
                        int tw= rw+ dw;
                        return tw;
                        
    
    
    
    
}

int main() {
    int n,m;
    printf("enter n: m:");
    scanf("%d%d",&n,&m);
    int noofways=maizepath(1,1,n,m);
    printf("total ways is %d",noofways);
    
    
    return 0;
}