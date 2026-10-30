#include <stdio.h>
#include <stdbool.h>


//Створити функцію, яка перевіряє, чи введене з консолі число є простим.
bool isSimple(int value){
    if(value <= 1){
        return false;
    }

    for(int i = 2; i <= value / 2; i++){
        if(value % i == 0){
            return false;
        }
    }
    return true;
}

int main() {
    int value = 0;

    printf("Enter your value: ");
    scanf("%d", &value);

    bool result = isSimple(value);

    printf("Your value %s", result ? "is Simple" : "isn't Simple");
    
    return 0;
}


//Написати програму, котра рекурсивно вираховує суму чисел від Вашого 
//порядкового номера в журналі до 100.
int sum(int num){
    int result;

    if(num > 100){
        return 0;
    }

    result = num + sum(num + 1);
    return result;
}

 int main() {
    int num = 0;

    printf("Enter your list num: ");
    scanf("%d", &num);

    int result = sum(num);

    printf("Your value - %d", result);
    
    return 0;
}


// Написати програму, котра знаходить розв’язок рівняння N*x + А = 0 методом
// половинного ділення. N – Ваш порядковий номер в журналі, А – Ваш вік (повних
// років). Розв’язок знаходиться в інтервалі [–100..100].
double N = 9;
double A = 17;

double f(double x) {
    return N * x + A;
}

int main() {
    int x = 0;
    double a = -100, b = 100;
    double epsilon = 0.001;
    double c = 0; 

    if (f(a) * f(b) >= 0) {
        printf("Not Exist\n");
        return 1;
    }

    while ((b - a) >= epsilon) {
        c = (a + b) / 2.0; 

        if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c; 
        }
    }

    printf("The root of the equation %g * x + (%g) = 0 is: %g\n", N, A, c);

    return 0;
}



