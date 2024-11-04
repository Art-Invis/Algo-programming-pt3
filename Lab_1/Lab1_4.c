#include <stdio.h>
#include <math.h> // Для використання функції M_PI

int main() {
    double r, S;

    // Введення значення радіусу за допомогою scanf
    printf("Input the radius of the circle: ");
    scanf("%lf", &r);

    // Обчислення площі круга S = π * r^2
    S = M_PI * r * r;

    // Виведення результату за допомогою printf
    printf("Radius: %.2f cm\n", r);
    printf("Area of the circle: %.3f square cm\n", S);

    return 0;
}
