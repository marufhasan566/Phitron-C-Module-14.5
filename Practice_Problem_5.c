#include <stdio.h>
char capital_to_small(char character)
{
    char ascii = character + 32;
}
int main()
{
    char c;
    scanf("%c", &c);
    char small = capital_to_small(c);
    printf("%c", small);
    return 0;
}


