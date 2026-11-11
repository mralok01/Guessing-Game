#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int random, guess;
    int no_of_guess = 0;
    srand(time(NULL));

    printf("==========================================\n");
    printf("WELCOME TO THE WORLD OF GUESSING NUMBER\n");
    random = rand() % 100 + 1; // ye 1 se 100 tak number generate karega
   printf("==========================================\n");
    

    do
    {
        printf("Enter you guess number btw (1 to 100) = ");
        scanf("%d", &guess);
        no_of_guess++;
        if (guess < random)
            
        {
            printf("guess a large number\n");
        }
        else if (guess > random)
        {
            printf("guess is a smaller number\n ");
        }
        else
        {
            printf("==========================================\n");
            printf("congratualtion !! you have succesfully guessed the number in %d attempts\n", no_of_guess);
        }
        
    } while (guess != random);

    printf("bye bye !! thnks you playing my game.\n");
    printf("\n developed by - MR.ALOK01\n");
    printf("==========================================\n");
    return 0;
}