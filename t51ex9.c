// ROCK Paper Scissor  Game  // GAME PROGRAMMING STARTED
#include <stdio.h>
#include <stdlib.h> // srand func available in stdlib   and take seed as input
#include <time.h>

// Create rock paper and scissors game
// Player1: rock
// Player2: (computer) : scissors  --> Player 1 gets 1 point

// rock vs scissors  - rock wins
// paper vs scissors  -scissors wins
// paper vs rock  - paper wins

//  Write a C program  to allow user to play this game three times with computer.
// Log the scores of computer and the player. Display the name of the winer at the end

// Note - You have to display name of the player during the game.Take input from the user ; ankit's turn
int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int main()
{                      // if we give 45 then it will give all time same value
    srand(time(NULL)); // time aage badhta jata hai so we will get random values
    printf("The random number between 0 to 100 is %d", rand() % 100);

    return 0;
}