#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {

    float x;
    float y;

    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);


    printf("Введіть значення абсциси та ординати (через пробіл):");
    scanf("%f %f", &x, &y);

    if (((x >= -1 && x <= 0) && (y >= 0 && y <= 1)) ||
        ((x >= 0) && (y <= 0) && (x * x + y * y <= 1))) {
        printf("Точка M належить заштрихованій області.\n");
    }
    else {
        printf("Точка M не належить заштрихованій області.\n");
    }

    return 0;
}

