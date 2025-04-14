#include <stdio.h>

int main() {
    int a, b, c;

    printf("Введіть довжини трьох сторін трикутника: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        printf("Трикутник з такими сторонами не існує.\n");
    } else {
        if (a == b && b == c) {
            printf("Трикутник рівносторонній.\n");
        } else if (a == b || a == c || b == c) {
            printf("Трикутник рівнобедрений.\n");
        } else {
            printf("Трикутник різносторонній.\n");
        }
    }

    return 0;
}
