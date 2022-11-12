// this program is to make a fucntion and then call it 

#include <stdio.h>
int sum(int a, int b ){ //creating a function 
    int c = a + b;
    return c;

}

int main(){
    int i = 10;
    int k = 20;
    int j = sum(i, k); // calling the sum function
    printf("%d", j);

    return 0;
}

