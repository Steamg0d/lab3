#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double f_short = 0, f_full = 0;

    printf("Введіть значення x: ");
    scanf("%lf", &x);

    if (x == 1 || (x > 2 && x + 2 < 0)) { printf("Помилка: некоректне значення x (ділення на нуль або корінь з від’ємного числа)\n"); return 1; }

    // --- Варіант А: скорочена форма if ---
    if (x < 0)
        f_short = 3 * x * x + 2 * x + 6;
    if (x >= 0 && x <= 2)
        f_short = 4 / (x * x - 2 + x);
    if (x > 2)
        f_short = sqrt(x + 2);

    // --- Варіант Б: повна форма if...else if...else ---
    if (x < 0) {
        f_full = 3 * x * x + 2 * x + 6;
    } else if (x <= 2) {
        f_full = 4 / (x * x - 2 + x);
    } else {
        f_full = sqrt(x + 2);
    }

    // Вивід результатів
    printf("\nРезультат (скорочена форма): f(x) = %.4lf\n", f_short);
    printf("Результат (повна форма):     f(x) = %.4lf\n", f_full);

    return 0;
}
