#include <stdio.h>

int main(int argc, char **argv)
{
    printf("%c %c %c\n", argv[2][0], argv[1][4], '9' - argc);
    printf("%s %c\n", argv[1], *argv[1]);
    return 0;
}
//ODPOWIEDZ:
//p r 6
//programowanie p