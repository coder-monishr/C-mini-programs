
/*
#include <stdio.h>
int main() {
    int base, exp;
    long double result = 1.0;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}
*/
#include <stdio.h>
int main(){
    int a, b;
    int exp;
    printf("enter the base of the number: ");
    scanf("%d", &a);    
    printf("enter the exponent: ");
    scanf("%d", &b);
    while (b != 0) {
        exp *= b;
        --exp;
    }
    printf("answer is %d", exp);
}

