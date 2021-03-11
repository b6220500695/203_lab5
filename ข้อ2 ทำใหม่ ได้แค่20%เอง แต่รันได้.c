#include"stdio.h"
int main()
{
    int N,i,j;
    scanf("%d",&N);
    if(N%2==0)
    {
        for(i=1;i<=N/2;i++)
        {
            if(i==1)
            {
                for(j=N/2-1;j>=1;j--) printf("-");
                printf("*");
                for(j=N/2-1;j>=1;j--) printf("-");
            }
            else
            {
                for(j=N/2-i;j>=1;j--) printf("-");
                printf("*");
                for(j=2*i-3;j>=1;j--) printf("-");
                printf("*");
                for(j=N/2-i;j>=1;j--) printf("-");
            }
            printf("\n");
        }
        for(i=N/2;i>=1;i--)
        {
            if(i==1)
            {
                for(j=N/2-1;j>=1;j--) printf("-");
                printf("*");
                for(j=N/2-1;j>=1;j--) printf("-");
            }
            else
            {
                for(j=N/2-i;j>=1;j--) printf("-");
                printf("*");
                for(j=2*i-3;j>=1;j--) printf("-");
                printf("*");
                for(j=N/2-i;j>=1;j--) printf("-");
            }
            printf("\n");
        }
    }
    if(N%2==1)
    {
        N++;
        for(i=1;i<=N/2;i++)
        {
            if(i==1)
            {
                for(j=N/2-1;j>=1;j--) printf("-");
                printf("*");
                for(j=N/2-1;j>=1;j--) printf("-");
            }
            else
            {
                for(j=N/2-i;j>=1;j--) printf("-");
                printf("*");
                for(j=2*i-3;j>=1;j--) printf("-");
                printf("*");
                for(j=N/2-i;j>=1;j--) printf("-");
            }
            printf("\n");
        }
        for(i=N/2-1;i>=1;i--)
        {
            if(i==1)
            {
                for(j=N/2-1;j>=1;j--) printf("-");
                printf("*");
                for(j=N/2-1;j>=1;j--) printf("-");
            }
            else
            {
                for(j=N/2-i;j>=1;j--) printf("-");
                printf("*");
                for(j=2*i-3;j>=1;j--) printf("-");
                printf("*");
                for(j=N/2-i;j>=1;j--) printf("-");
            }
            printf("\n");
        }
    }
    return 0;
}
