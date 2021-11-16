#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    // Declaring startsize outside of scope of the do/while loop
    int startsize;
    // Do/while loop to continuously prompt user for startsize if startsize < 9
    do
    {
        startsize = get_int("What is the starting size of the population? \n");
    }
    while (startsize < 9);

    // TODO: Prompt for end size
    // Declaring endsize outside of scope of the do/while loop
    int endsize;
    // Do/while loop to continuously prompt user for endsize if endsize < startsize
    do
    {
        endsize = get_int("What is the ending size of the population? \n");
    }
    while (endsize < startsize);

    // TODO: Calculate number of years until we reach threshold
    // Setting initial year = 0 and intial population = the startsize
    int year = 0;
    int population = startsize;

    // While loop to track the population growth every year, until the desired number of population has been reached
    while (population < endsize)
    {
    // Keeping track of the year
        year++;
        printf("Year: %i\n", year);
    // This will print the population from the previous year to the current year for comparative purposes
        printf("The population was: %i\n", population);
        population = population + (population / 3) - (population / 4);
        printf("The population is now: %i\n", population);
    }
    // TODO: Print number of years
    // Once the population is greater than or equal to the end size, the if statement will trigger
    // this will print the start size, end size, and no. years to reach the end size
    if (population >= endsize)
    {
        printf("Starting size was: %i\n", startsize);
        printf("Ending size was: %i\n", endsize);
        printf("It took %i years to reach the end size\n", year);
    }
}