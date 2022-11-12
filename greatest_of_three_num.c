// this is a program to find the largest of three numbers 

#include <stdio.h>
int main(){
    int a, b,c ;
    printf("enter the numbera a : ");
    scanf("%d", &a);
    printf("enter the number b: ");
    scanf("%d", &b);
    printf("enter the number c: ");
    scanf("%d", &c);

    if (a > b && a > c){
        printf("%d is greater than %d and %d", a, b,c);
    } else if (b >  a && b > c){
        printf("%d is greater than %d and %d", b, a, c);
    } else {
        printf("%d is greater than %d and %d", c , a, b );
    }
}
