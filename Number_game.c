#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand() % 100 + 1; //To generate the random number between 1 and 100
                               //printf("The random number is %d\n", number);
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please\n");
        }
        else if (guess < number)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("You got to the number at %d attempts\n", nguess);
        }
        nguess++;

    } while (number != guess);

    return 0;
}