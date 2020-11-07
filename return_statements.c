#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cube(double num){
        double result = pow(num, 3);
        return result;
        /*
        nothing after return will be exicuted
        */
}


int main()
{
        printf("Answer: %f\n", cube(7.0));
        return 0;
}
