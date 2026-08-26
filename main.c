#include <stdio.h>
#include <stdbool.h>
#include <Record.h>
#include <LuckyNumber.h>

/*
*/

int main() {
    
    // struct declarations
    struct Record user_record = {0, 0, 0};
    bool play_again = true;
    
    // Main program loop
    while(play_again) {
        // getting the user's guess
        int user_guess;
        printf("Guess a number between 1 and 5: \n");
        scanf("%d", &user_guess);
        
        if(user_guess < 1 || user_guess > 5) {
            printf("\nInvalid input.\n");
            continue;
        }
        
        // check the number
        int result = checkLuckyNumber(user_guess);
        if(result > 0) {
            user_record.greater += 1;
        }
        else if(result < 0){
            user_record.smaller += 1;
        } else {
            user_record.wins += 1;
        }
        
        // print results
        printf("\nWins: %d", user_record.wins);
        printf("\nGuesses smaller than target: %d", user_record.smaller);
        printf("\nGuesses greater than target: %d", user_record.greater);
        
        // ask the user if they want to play again
        char user_choice;
        printf("\nPlay again? (Y/N) \n");
        scanf(" %c", &user_choice);
        
        if(user_choice == 'N') {
            play_again = false;
        }
    }
    
    return 0;
}