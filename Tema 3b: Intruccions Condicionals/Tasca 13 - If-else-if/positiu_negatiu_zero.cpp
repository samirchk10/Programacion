#include <stdio.h>

int main() {
    int x;

    printf("Introdueix un nombre enter: ");
    scanf("%i", &x);

    if (x > 0){
        printf("Positiu\n");
    }
    else {
        if (x < 0){
            printf("Negatiu\n");
        }
        else {
            printf("Zero\n");
        }
    }
}