//NX activated
#include <stdio.h>
#include <string.h>

void vulnerable(void) {
    char buffer[64];
    printf("Entrada: ");
    gets(buffer);
}

int main(void) {
    vulnerable();
    return 0;
}
