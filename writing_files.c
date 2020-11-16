#include <stdio.h>
#include <stdlib.h>

int main(){


  FILE * fpointer = fopen("employees.txt", "w");
  
  fprintf(fpointer, "Jim, Salesman \nPam, Receptionist \nOscar, Accountant");

  fclose(fpointer);
  /* r = read file, w = write file, a = append info on file */

  FILE * fPointer = fopen("employees.txt", "a");

  fprintf(fPointer, "\nKelly, Customer Service");

  fclose(fPointer);

  return 0;

}
