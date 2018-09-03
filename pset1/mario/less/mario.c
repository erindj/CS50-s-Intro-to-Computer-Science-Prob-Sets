#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    int j;
    int i;

do
{
n = get_int("Height: ");
}
while (n < 0 || n > 23);
for (i = 0; i < n; i++)
{
for (j = 0; j < n + 1; j++)
if (i + j >= n - 1)

printf("#");

else

printf(" ");

printf("\n");

}
}
