/*
 * Program to evaluate card face values.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  char card_name[3];
  int count = 0;
  while (card_name[0] != 'X') {
    puts("Enter the card_name: ");
    scanf("%2s", card_name);

    int val = 0;
    switch(card_name[0]) {
      case 'K': 
        val = 10;
        break;
      case 'Q':
        val = 10;
        break;
      case 'J':
        val = 10;
        break;
      case 'A':
        val = 11;
        break;
      case 'X':
        continue;
      default:
        val = atoi(card_name);
        if ((val < 1) || (val > 10)) {
          puts("The card value is not within 1-10");
          continue;
        }
    }
    if ((val >= 3) && (val <= 6)) {
      count += 1;
    } else if (val == 10) {
      count -= 1;
    }
    printf("Current count: %i\n", count);
  }
  return 0;
}