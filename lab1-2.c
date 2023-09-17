#include <stdio.h>

void main(){
    double a, b, c, x;

    // Ввод коэффициентов a, b и c
    printf(" Введите коэффициент a: ");
    scanf("%lf", &a);

    printf(" Введите коэффициент b: ");
    scanf("%lf", &b);

    printf(" Введите коэффициент c: ");
    scanf("%lf", &c);

    // Проверка на нулевой коэффициент a
    if (a ==0 ) {
        if (b == c) {
            printf("Уравнение имеет бесконечно много решений.\n");
        }else{
            printf("Уравнение не имеет решений.\n");
        }
    } else {
        // Решение уравнения
        x = (c - b) / a;
        printf("x = %.2f", x);
    }

}