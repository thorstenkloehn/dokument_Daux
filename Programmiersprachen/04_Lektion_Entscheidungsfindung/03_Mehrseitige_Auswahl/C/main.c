#include <stdio.h>

void main() {
    unsigned char selector = 3;
    switch(selector) {
        case 1: printf("1");
        break;
        case 2: printf("2");
        break;
        default: printf("3");
        break;
    }
}