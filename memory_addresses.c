#include <stdio.h>
#include <stdlib.h>

int main(){

  int age = 30;
  int * pAge = &age;
  double gpa = 3.4;
  double * pGpa = &gpa;
  char grade = 'A';
  char * pGrade = &grade;
  
  /* derefferencing */
  printf("%d\n", *pAge);
  printf(%d\n", *&*&age);

  printf("age: %p\ngpa: %p\ngrade: %p\n", &age, &gpa, &grade);

  return 0;
}
