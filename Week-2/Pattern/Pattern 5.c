/*
n = 5

1 1 1 1
2 2 2
3 3
4

*/

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("n = ");
    while(scanf("%d",&n)==1)
    {
        for(row=1;row<=n;row++)
        {
            for(col=1;col<=n-row;col++)
            {

                printf("%d ",row);

            }
            printf("\n");
        }
    }
}




