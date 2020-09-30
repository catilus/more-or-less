//
//  main.c
//  more-or-less
//
//  Created by Helene Piet on 9/28/20.
//  Copyright © 2020 Helene Piet. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    
    srand(time(NULL));
    int keepPlaying=1;
    
    // Keep playing as long as the player wants
    do {
        
        // Initialize variables and constants
        int mysteryNumber=0, inputNumber=0, counter=0, playerMode=0, levelDifficulty=0;
                
        printf("More or less -- the game\n\n");
        printf("Which player mode?\n");
        printf("1. 1 player\n");
        printf("2. 2 players\n");
        scanf("%d", &playerMode);
        
        switch (playerMode) {
            // Case 1: one player
            case 1:
                printf("Difficulty level:\n");
                printf("1. Number between 1 and 100\n");
                printf("2. Number between 1 and 1,000\n");
                printf("3. Number between 1 and 10,000\n");
                scanf("%d", &levelDifficulty);
                
                switch (levelDifficulty) {
                    case 1:
                        {
                        const int MAX = 100, MIN = 1;
                        mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;
                        
                        printf("1 player mode\n\n");
                        printf("Guess a number between 1 and 100:\n");
                                
                        // Loop asking to guess until the mystery number is found
                        while (inputNumber != mysteryNumber) {
                            scanf("%d", &inputNumber);
                                        
                            counter++;
                                        
                            if (inputNumber == mysteryNumber)
                                {
                                printf("You have guessed the mystery number in %d tries!!!\n", counter);
                                printf("To stop the game press [0], to play again press any number: ");
                                scanf("%d", &keepPlaying);
                                        }
                            else if (inputNumber < mysteryNumber)
                                printf("It's more...\n");
                            else
                                printf("It's less...\n");
                            }
                        }
                        break;
                        
                    case 2:
                        {
                        const int MAX = 1000, MIN = 1;
                        mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;
                        
                        printf("1 player mode\n\n");
                        printf("Guess a number between 1 and 1,000:\n");
                                
                        // Loop asking to guess until the mystery number is found
                        while (inputNumber != mysteryNumber) {
                            scanf("%d", &inputNumber);
                                        
                            counter++;
                                        
                            if (inputNumber == mysteryNumber)
                                {
                                printf("You have guessed the mystery number in %d tries!!!\n", counter);
                                printf("To stop the game press [0], to play again press any number: ");
                                scanf("%d", &keepPlaying);
                                        }
                            else if (inputNumber < mysteryNumber)
                                printf("It's more...\n");
                            else
                                printf("It's less...\n");
                            }
                        }
                        break;
                    case 3:
                        {
                        const int MAX = 10000, MIN = 1;
                        mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;
                        
                        printf("1 player mode\n\n");
                        printf("Guess a number between 1 and 10,000:\n");
                                
                        // Loop asking to guess until the mystery number is found
                        while (inputNumber != mysteryNumber) {
                            scanf("%d", &inputNumber);
                                        
                            counter++;
                                        
                            if (inputNumber == mysteryNumber)
                                {
                                printf("You have guessed the mystery number in %d tries!!!\n", counter);
                                printf("To stop the game press [0], to play again press any number: ");
                                scanf("%d", &keepPlaying);
                                        }
                            else if (inputNumber < mysteryNumber)
                                printf("It's more...\n");
                            else
                                printf("It's less...\n");
                            }
                        }
                        break;
                    default:
                        printf("Please enter 1, 2 or 3");
                        break;
                }
                break;
                
            case 2:
                // Case 2: two players
                printf("2 player mode\n\n");
                
                printf("Enter a mystery number between 1 and 100: ");
                scanf("%d", &mysteryNumber);
            
            
                // Loop asking to guess until the mystery number is found
                while (inputNumber != mysteryNumber) {
                    printf("Please enter a guessed number:");
                    scanf("%d", &inputNumber);
                    
                    counter++;
                    
                    if (inputNumber == mysteryNumber)
                        {
                            printf("You have guessed the mystery number in %d tries!!!\n", counter);
                            printf("To stop the game press [0], to play again press any number: ");
                            scanf("%d", &keepPlaying);
                        }
                    else if (inputNumber < mysteryNumber)
                        printf("It's more...\n");
                    else
                        printf("It's less...\n");
                    }
                break;
                
            default:
                printf("Please choose either 1 or 2\n\n");
                break;
            }
        } while (keepPlaying);
    
        return 0;
}
