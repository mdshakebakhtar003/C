// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int m,n,p,q,i,j,k;
   printf("enter rows and column of first array");
   scanf("%d%d",&m,&n);
  int arr[m][n];
   printf("enter element of first array");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter rows and column of second array");
    scanf("%d%d",&p,&q);
    int brr[p][q];
    printf("enter element of second array");
     for(i=0;i<p;i++){
        for(j=0;j<q;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    if(n!=p){
   printf("cant mulplied");}
   
   else{ int crr[m][q];
        for(i=0;i<m;i++){
        for(j=0;j<q;j++){
             crr[i][j]=0;
             for(k=0;k<n;k++){
                 crr[i][j]+=arr[i][k]*brr[k][j];
             }
   }}
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            printf("%d ",crr[i][j]);
}
      printf("\n");
      }}
    return 0;
}