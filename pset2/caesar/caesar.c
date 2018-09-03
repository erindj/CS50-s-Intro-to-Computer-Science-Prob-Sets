#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* Encrypt user messages using Caesar cipher.
Usage: ./caesar.c key
Where key is a non-negative int that is the cipher key */
int i;
int length;

int main(int argc, string argv[])
{
    if (argc != 2)
{
        printf("Usage: ./caesar.c k\n");
        return 1;
}
    int k = atoi(argv[1]);
   //User must provide a positive number
    if (k < 0)
    {
        printf("Please insert a positive number\n");
        return -1;
    }
    //Prompts the user to insert text to cipher
    string plaintext = get_string("plaintext: \n");
    printf("ciphertext: \n");
    //Check every character in plaintext and prints ciphered text
    for (i = 0, length = strlen(plaintext); i < length; i++)
    {
    if(isupper(plaintext[i]))
    {
    //Add key to upercase letters
    printf("%c", (plaintext[i] - 'A' + k) % 26 + 'A');
    }
    else if(islower(plaintext[i]))
    {
    //Add key to lowercase letters
     printf("%c", (plaintext[i] - 'a' + k) % 26 + 'a');
    }
    else
    {
    //Prints palintext
    printf("%c", plaintext[i]);
    }
    }
    printf("\n");
}
