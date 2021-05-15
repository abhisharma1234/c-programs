#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=rows; i<=rows; i--)
    {
        for(j=i; j<=5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
