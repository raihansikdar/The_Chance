/*
n = 5
A
A B
A B C
A B C D
A B C D E
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("n = ");
    while(scanf("%d",&n)==1)
    {
        for (row=1;row<=n;row++)
        {
            for(col=1;col<=row;col++)
            {
                printf("%c ",col+64);
            }
            printf("\n");
        }
    }
}
