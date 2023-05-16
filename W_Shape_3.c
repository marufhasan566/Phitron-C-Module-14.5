#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    int space = count - 1, star = 1;
    int space2 = 0, star2 = 2 * count - 1;
    for (int i = 1; i <= 2 * count; i++)
    {
        if (i <= count)
        {
            for (int j = 0; j < space; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < star; j++)
            {
                printf("*");
            }
            space--;
            star += 2;
            printf("\n");
        }
        else
        {
            for (int j = 0; j < space2; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < star2; j++)
            {
                printf("*");
            }
            space2++;
            star2 -= 2;
            printf("\n");
        }
    }

    return 0;
}