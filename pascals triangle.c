#include <stdio.h>

int P(int i,int n)
{
    if(i==0)    return 0;
    if(i==1)    return 1;
    if(i==n)    return 1;

    return (P(i-1,n-1)+P(i,n-1));
}

int main()
{
    int i, j, n;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        for(i=0;i<j+1;i++)
        {
            printf("%d  ",P(i+1,j+1));
        }
        printf("\n");
    }
    return 0;
}



