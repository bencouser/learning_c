#include <stdio.h>
#include <stdlib.h>

int main()
{

        char grade = 'A';

        switch(grade){
        case 'A':
                printf("You did great");
                break;
        case 'B':
                printf("You did alright");
                break;                  
        case 'F':
                printf("You did shockingly bad");
                break;
        default:
                printf("Invalid grade");

        }
        
        return 0;
}
