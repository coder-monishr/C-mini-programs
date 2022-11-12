// this program is to find the area of the circle

#include <stdio.h>

void main(){
    int r; 
    float area;
    printf("enter the radius of the cicle: ");
    scanf("%d", &r);
    printf("the area of the circle is: ");
    area = 3.14*r*r;
    printf("the area is %f", area);
    
}