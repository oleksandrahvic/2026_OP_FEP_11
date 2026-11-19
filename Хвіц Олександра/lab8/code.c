#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int a[10];

srand(time(NULL));

for (int i = 0; i < 10; i++) {
    a[i] = rand() % 100;
    printf("%d ", a[i]);
}

return 0;
}









#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int *one(int a[], int i) {
if (i >= 0 && i < 10) return &a[i];
return NULL;
}

int *two(int a[12][12], int r, int c) {
if (r >= 0 && r < 12 && c >= 0 && c < 12)
return &a[r][c];
return NULL;
}

int main() {
int a[10], b[12][12];
int i, r, c;

srand(time(NULL));

for (i = 0; i < 10; i++)
    a[i] = rand() % 100;

for (i = 0; i < 12; i++)
    for (int j = 0; j < 12; j++)
        b[i][j] = rand() % 100;

printf("Введіть індекс (0-9): ");
scanf("%d", &i);

if (one(a, i) != NULL)
    printf("Число: %d\n", *one(a, i));
else
    printf("Неправильний індекс\n");

printf("Введіть рядок (0-11): ");
scanf("%d", &r);

printf("Введіть стовпець (0-11): ");
scanf("%d", &c);

if (two(b, r, c) != NULL)
    printf("Число: %d\n", *two(b, r, c));
else
    printf("Неправильний індекс\n");

return 0;
}












#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int a[20], min, max, suma;

srand(time(NULL));

for (int i = 0; i < 20; i++) {
    a[i] = rand() % 100;
}

min = max = a[0];

printf("Масив: ");
for (int i = 0; i < 20; i++) {
    printf("%d ", a[i]);

    if (a[i] < min) min = a[i];
    if (a[i] > max) max = a[i];
}

suma = min + max;

printf("\nМінімум: %d", min);
printf("\nМаксимум: %d", max);
printf("\nСума: %d", suma);

return 0;
}
