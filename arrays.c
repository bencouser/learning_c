#include <stdio.h>
#include <stdlib.h>

int main()
{
        int numbers[] = {1,2,3,4,5};
        numbers[1] = 10;
        printf("%d\n", numbers[1]);


        int luckyNumbers[10];
        luckyNumbers[1] = 80;
        printf("%d\n", luckyNumbers[1]);

        return 0;
}
