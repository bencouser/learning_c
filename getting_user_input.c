#include <stdio.h>
#include <stdlib.h>

int main()
{

        /*
        int age;
        printf("Enter your age: ");
        scanf("%d", &age);
        printf("You are %d years old\n", age);

        double gpa;
        printf("Enter your gpa: ");
        scanf("%lf", &gpa);
        printf("Your gpa is %f \n", gpa);

        char grade;
        printf("Enter your grade for maths: ");
        scanf("%c", &grade);
        printf("Your grade was %c \n", grade);

        char name[20];
        printf("Enter your name: ");
        scanf("%s", name);
        printf("Your name is %s \n", name);
        */
        
        char name[20];
        printf("Enter your name: ");
        fgets(name, 20, stdin);
        printf("Your name is %s \n", name);

        return 0;

}
