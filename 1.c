#include <math.h>
#include <stdio.h>

int main() {
  int a;
  double c, b;

  printf("Введіть ціле число a: ");
  scanf("%d", &a);

  printf("Введіть дійсне число c: ");
  scanf("%lf", &c);

  // Версія A типу скорочена форма
  if (a !=2 && a !=4 && a != 6) printf("Дібіл правильні значення введи"); return 0;
  if (a == 2) b = (pow(a, 2) - 4 * c) / (a * c);
  if (a == 4) b = sqrt(a * c - 2 * a);
  if (a == 6) b = pow(c, 2) - 2 * a;

  printf("Результат (версія A): b = %lf\n", b);

  // Версія Б Повна форма if else
  if (a == 2) {
    b = (pow(a, 2) - 4 * c) / (a * c);
    printf("Результат (версія B): b = %lf\n", b);
  } else {
    if (a == 4) {
      b = sqrt(a * c - 2 * a);
      printf("Результат (версія B): b = %lf\n", b);
    } else {
      if (a == 6) {
        b = pow(c, 2) - 2 * a;
        printf("Результат (версія B): b = %lf\n", b);
      }
    }
  }

  return 0;
}
