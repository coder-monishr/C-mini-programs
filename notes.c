// An algorithim is a step-bvy-step procedure of solving a problem. defined as the collection of instructions
// which are executed in a specific sequence to produce an output in a finite amount of time for a given set of input data
//persian mathematician Al-Khwarizmi

// finite amount of time  for a given set of input data
// can be written in english or in any standard rep

/*
Properties of algo:
    finiteness = a nalgo must be executed finite number of times.
    definiteness = each step of an algo must be accurate and clear
    effectiveness =  each step must be effective, in teh sense tha tit should be primitive (easily convertible into a program statement)
    independent = it must be independent of any programmming code 
    input/output = each algo must take zero or more quantities as input data and give out one or more output values.  

fdeii

*/
#include <stdio.h>
int main(){
    int i, n;
    printf("enter the value for n \t");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        printf(" %d \n", i);
        i += 1;     
}

