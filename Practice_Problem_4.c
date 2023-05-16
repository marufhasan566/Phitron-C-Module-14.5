#include <stdio.h>
char small_to_capital(char character)
{
    char ascii = character - 32;
}
int main()
{
    char c;
    scanf("%c", &c);
    char capital = small_to_capital(c);
    printf("%c", capital);
    return 0;
}