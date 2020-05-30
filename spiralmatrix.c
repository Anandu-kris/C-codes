
//C code for Spiral matrix


#include <stdio.h>

void main()
{
    int a[10][10], i, j, m, n;
    printf("enter limit");
    scanf("%d\n%d", &m, &n);
    printf("\nenter elements\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    printf("\n Matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n spiral matrix\n");
    int k = 0, l = 0;
    while (k < m && l < n)
    {
        for (i = l; i < n; i++)
        {
            printf("%d\t", a[k][i]);
        }
        k++;
        for (i = k; i < m; i++)
        {
            printf("%d\t", a[i][n - 1]);
        }
        n--;
        if (k < m)
        {
            for (i = n - 1; i >= 0; i--)
            {
                printf("%d\t", a[m - 1][i]);
            }
            m--;
        }
        if (l < n)
        {
            for (i = m - 1; i > 0; i--)
            {
                printf("%d\t", a[i][l]);
            }
            l++;
        }
    }
}
