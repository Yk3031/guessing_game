#include <stdio.h>
#include <time.h>

int main() {
  int guess;
  printf("Enter your guess between 1 and 100: ");
  scanf("%d", &guess);
  printf("\n");
  srand(time(0));
  int number = rand();
  number %= 100;
  number++;
  if (guess == number)
    printf("Your guess was correct!\n");
  else
    printf("Your guess was not number\n");
  printf("The number was: %d\n", number);
}
