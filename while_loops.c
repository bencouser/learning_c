#include <stdio.h>
#include <stdlib.h>

int main(){

 int index = 1;
 while(index <= 5){
  printf("%d\n", index);
  index++;  /*the ++ means plus 1 */
 }
 do{
  printf("%d\n", index);
  index++;  /*the ++ means plus 1 */
 }while(index <= 4);


  return 0;
}
