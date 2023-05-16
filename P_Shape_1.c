#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = star; j != 0; j--)
        {
            printf("*");
        }
        star--;
        printf("\n");
    }

    return 0;
}
