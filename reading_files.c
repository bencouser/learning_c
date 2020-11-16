#include <stdio.h>
#include <stdlib.h>

int main(){

  char line[255];
  char line2[255];

  FILE * fpointer = fopen("employees.txt", "r");

  fgets(line, 255, fpointer);
  printf("%s\n", line);
  fgets(line2, 255, fpointer);
  printf("%s\n", line2);

  fclose(fpointer);

  return 0;
}
