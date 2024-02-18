// Online C compiler to run C program online
#include <stdio.h>
int powlog(int a,int b){
                            if(b==0)
                            return 1;
                            if(b%2==0)
                            {
                                return powlog(a,b/2)*powlog(a,b/2);
                            }
                            if(b%2!=0){
                                return powlog(a,b/2)*powlog(a,b/2)*a;
                            }
     
}


int main() {    int a,b;
                printf("enter a ,b:");
                scanf("%d %d",&a,&b);
                
                printf("%d",powlog(a,b));

    return 0;
}