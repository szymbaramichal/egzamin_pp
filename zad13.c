#include <stdio.h>
#include <string.h>

void f(char *s)
{
    while (*s)
    {
        if (!(strlen(s) % 2))
            *s = '!';
        ++s;
    }
}

int main(void)
{
    char t[20] = "programowanie";
    f(t);
    puts(t);
    return 0;
}

// ODPOWIEDZ: p!o!r!m!w!n!e
