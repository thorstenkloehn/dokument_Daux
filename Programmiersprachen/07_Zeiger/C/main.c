#include <stdio.h>

void main() {
    int variable_Name = 100;
    int * Zeiger = &variable_Name;

    printf("%d",*Zeiger);
}