/*
Highcard was written by Elijah Elrod on the 24th of June 2018.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define UPPER 14
#define LOWER 0

int draw_card(void);
void generate_card(int n);

int main ()
{
    
    srand(time(NULL));
    int option = 0;
    do
    {    
        int sum1, sum2;

        // Displays the dealer card
        printf("\nDealers card\n");
        sum1 = draw_card();

        // Displays the player card
        printf("\nYour card\n");
        sum2 = draw_card();
            
        // Conditional statements to determine the winner.
        
        if (sum1 > sum2)
            printf("Dealer wins!\n");
        else if (sum1 == sum2)
            printf("Tie.\n");
        else
            printf("Player wins!\n");

        printf("Play again? Enter 1 to continue or 2 to exit\n");

        option = 0;
        scanf("%d", &option);
        if (option != 1)
            break;
    } while (option == 1);
    
}

// Randomly generates a number to determine card value and displays the card by calling the generate_card function
int draw_card(void)
{
    int r = (rand() % (UPPER-LOWER+1));
    generate_card(r);
    if (r == 11)
        r += 14;
    else if (r == 0)
        r = 1;
    else
        r++;
    return r;
}

//Functions displays the outline of the card with the value displayed
void generate_card(int n)
{
    if (n == 0)
        n = 1;
    char value = 'A';
    switch(n)
        {
            
            case 11: value = 'A';
                    printf(" ___________________ \t\t\n");
                    printf(" |%c               %c|\t\t\n", value, value);
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |%c               %c|\t\t\n", value, value);
                    printf(" |_________________| \t\t\n");
                    break;
            case 12: value = 'J';
                    printf(" ___________________ \t\t\n");
                    printf(" |%c               %c|\t\t\n", value, value);
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |%c               %c|\t\t\n", value, value);
                    printf(" |_________________| \t\t\n");
                    break;
            case 13: value = 'Q';
                    printf(" ___________________ \t\t\n");
                    printf(" |%c               %c|\t\t\n", value, value);
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |%c               %c|\t\t\n", value, value);
                    printf(" |_________________| \t\t\n");
                    break;
            case 14: value = 'K';
                    printf(" ___________________ \t\t\n");
                    printf(" |%c               %c|\t\t\n", value, value);
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |                 | \t\t\n");
                    printf(" |%c               %c|\t\t\n", value, value);
                    printf(" |_________________| \t\t\n");
                    break;
            default:
                    if (n >= 10)
                    {
                     printf(" ___________________ \t\t\n");
                     printf(" | %d           %d |\t\t\n", n, n);
                     printf(" |                 | \t\t\n");
                     printf(" |                 | \t\t\n");
                     printf(" |                 | \t\t\n");
                     printf(" |                 | \t\t\n");
                     printf(" |                 | \t\t\n");
                     printf(" |                 | \t\t\n");
                     printf(" | %d           %d |\t\t\n", n, n);
                     printf(" |_________________| \t\t\n");
                    }
                    else
                    {
                    printf(" ___________________ \t\t\n");
                     printf(" | %d             %d |\t\t\n", n, n);
                     printf(" |                 | \t\t\n");
                     printf(" |                 | \t\t\n");
                     printf(" |                 | \t\t\n");
                     printf(" |                 | \t\t\n");
                     printf(" |                 | \t\t\n");
                     printf(" |                 | \t\t\n");
                     printf(" | %d             %d |\t\t\n", n, n);
                     printf(" |_________________| \t\t\n");
                    }
        }
}