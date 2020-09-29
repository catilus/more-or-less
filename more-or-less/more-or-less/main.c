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
    
    // Initialize variables and constants
    const int MAX = 100, MIN = 1;
    int mysteryNumber=0, inputNumber=0, counter=0;
    
    // Random draw for mystery number
    srand(time(NULL));
    mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;
    
    printf("More or less -- the game\n\n\n");
    printf("Guess a number between 1 and 100:\n");
    
    
    while (inputNumber != mysteryNumber) {
        scanf("%d", &inputNumber);
        
        counter++;
        
        if (inputNumber == mysteryNumber)
            printf("You have guessed the mystery number in %d tries!!!", counter);
        else if (inputNumber < mysteryNumber)
            printf("It's more...\n");
        else
            printf("It's less...\n");
        
    }
        return 0;
}
