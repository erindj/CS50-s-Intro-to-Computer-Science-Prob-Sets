#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
float dollars;

do
{
    dollars = get_float("Change owed: ");
}
while (dollars < 0);

int cents = round(dollars * 100);
int coins = 0;
//Array of all the possibilities
int arr[]={25, 10, 5, 1};

for (int i = 0; i < 4; i++)

while (cents >= arr[i])
{
    cents -= arr[i];
    coins++;
}


//Print Outcome
printf("%i/n", coins);
}