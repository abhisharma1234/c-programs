#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter number of rows: ");
    scanf("%d",&rows);
    for(i=5; i<=rows; i--)
    {
        for(j=i; j<=5; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
