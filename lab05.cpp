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
