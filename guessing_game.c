#include <stdio.h>
#include <stdlib.h>

int main(){

  int secretNumber = 5;
  int guess;
  int guessCount = 0;
  int guessLimit = 3;
  int outOfGuesses = 0;

  printf("You have %d guesses\n", guessLimit);
  
  while(guess != secretNumber && outOfGuesses == 0){
    if(guessCount < guessLimit){
      printf("Enter a Number: ");
      scanf("%d", &guess);
      guessCount++;
    } else {
        outOfGuesses = 1;
    }
  }
  if(outOfGuesses == 1){
    printf("Out of Guesses!\n");
  } else {
  printf("You win!\n");
  }
  return 0;
}
