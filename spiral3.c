// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int m,n,i,j;
    printf("enter row m and column n");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    int minr=0;
    int maxr=m-1;
    int minc=0;
    int maxc=n-1;
    int tne=m*n;
    int count=0;
    printf("enter ELements");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    while(count<tne){
    for(j=minc;j<=maxc;j++){
        printf("%d ",arr[minr][j]);
        count++;
    }
    minr++;
    for(i=minr;i<=maxr;i++){
        printf("%d ",arr[i][maxc]);
        count++;
    }
     maxc--;
    for(j=maxc;j>=minc;j--){
        printf("%d ",arr[maxr][j]);
        count++;
    }
     maxr--;
    for(i=maxr;i>=minr;i--){
        printf("%d ",arr[i][minc]);
        count++;
    }
     minc++;
    }
    
    return 0;
}