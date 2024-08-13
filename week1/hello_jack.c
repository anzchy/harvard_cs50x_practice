#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What's your name?\n");
    char c = get_char("input a char\n");
    printf("Hello, %s\n", name);
    printf("%c\n", c);
}