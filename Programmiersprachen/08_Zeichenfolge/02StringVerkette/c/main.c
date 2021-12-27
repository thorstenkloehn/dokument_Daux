#include <stdio.h>
#include <string.h>

void main() {
    char zeichenfolgen1[] = "Hallo";
    char zeichenfolgen2[] = " Welt";

    strcat (zeichenfolgen1,zeichenfolgen2);
    printf(zeichenfolgen1);
}