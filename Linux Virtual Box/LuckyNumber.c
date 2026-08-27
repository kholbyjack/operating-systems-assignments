#include "LuckyNumber.h"

int checkLuckyNumber(int guess) {
    // generating a number between 1 and 5 inclusive
    srand(time(NULL));
    int number = (rand() % 5) + 1;
    
    // return value
    int check = guess - number;
    
    //Winning message
    if(guess == number) {
        printf("\nCongratulations! You won!");
    } else {
        printf("\nYou lose!\nLucky number: %d \n", number);
    }
    
    return check;
}
