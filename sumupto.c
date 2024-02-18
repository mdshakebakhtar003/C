// Online C compiler to run C program online
#include <stdio.h>

int main() {int n,m,i,j,l1,r1,l2,r2;
  
    printf("enter n and m:");
    scanf("%d%d",&n,&m);
    int arr[n][m];
    printf("enter elements");
    for( i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
  printf("enter (l1,r1):");
    scanf("%d%d",&l1,&r1);
    printf("enter (l2,r2):");
    scanf("%d%d",&l2,&r2);
    int sum=0;
    for(i=l1;i<=l2;i++){
        for(j=r1;j<r2;j++){
            sum+=arr[i][j];
        }
        
    }
  printf("sum is %d",sum);
    return 0;
}