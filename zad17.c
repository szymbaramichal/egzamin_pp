#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = "programowanie ", 
        s2[30] = "programowanie proceduralne", 
        *s3 = "program", *w;
    
    w = s2 + strlen(s1);
    
    puts(w);
    if (!strcmp(s1, s3))
        strcpy(s2, s3);
    
    puts(s2);
    return 0;
}

//ODPOWIEDZ:
//proceduralne
//programowanie proceduralne