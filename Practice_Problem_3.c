#include <stdio.h>
int char_to_ascii(char character)
{
    int ascii = character;
}
int main()
{
    char c;
    scanf("%c", &c);
    int ascii = char_to_ascii(c);
    printf("%d", ascii);
    return 0;
}