#include <stdio.h>
#include <stdlib.h>


void sayHi(char name[20], int age){
        printf("Hello %s, you are %d years old.\n", name, age);
}

int main()
{
        
        sayHi("Ben", 22);
        sayHi("Mike", 54);
        sayHi("Elle", 22);
        sayHi("Jemima", 19);

        return 0;
}
