#include <stdio.h>

int main() {
    float salari_base, salari_final, increment;
    int antiguitat;

    scanf("%f %d", &salari_base, &antiguitat);

    if (antiguitat < 3)
        increment = 0.01;
    else if (antiguitat < 5)
        increment = 0.02;
    else
        increment = 0.035;

    salari_final = salari_base + (salari_base * increment);

    if ((int)salari_final == salari_final)
        printf("El salari final es: %.0f\n", salari_final);
    else
        printf("El salari final es: %.1f\n", salari_final);

    return 0;
}