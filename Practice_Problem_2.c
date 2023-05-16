#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    int space = 0;
    int star = 2 * count - 1;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        space++;
        star -= 2;
        printf("\n");
    }

    return 0;
}