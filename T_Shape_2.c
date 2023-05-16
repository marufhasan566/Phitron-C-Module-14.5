#include <stdio.h>
int main()
{
    int count;
    scanf("%d", &count);
    int space = count - 1, star = 1;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < space; j++)
        {
            printf(" ");
        }
        space--;
        for (int j = 0; j < star; j++)
        {
            printf("*");
        }
        star += 2;
        printf("\n");
    }

    return 0;
}