#include <stdio.h>
#include <stdlib.h>

int main(){

  int i = 1;
  while(i <= 5){
    printf("%d\n", i);
    i ++;
  }
  int j;
  for(j = 1; j <= 5; j++){
    printf("%d\n", j);
  }

  int luckyNumbers[] = {4,8,14,12,44,66};
  int k;
  for(k = 0; k < 6; k++){
    printf("%d\n", luckyNumbers[k]);
  }

  return 0;

}
