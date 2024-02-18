#include<stdio.h>
#include<math.h>

int main()
{
 
    int n,sum,i,t,ld;
  

    for(i = 1; i <= 500; i++)
    {
        t = i;  // as we need to retain the original number
        sum=0;
        while(t>0)
        {
            ld = t%10;
            sum =sum+pow(ld,3);
            t = t/10;
        }

        if(sum == i)
        printf("\n\t\t\t%d", i);
    }

    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}