#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int j;
    int k;
    int l = 0;

    //Only one command line argument
    if (argc != 2)
    {
        printf("Try Again\n");
        return 1;
    }


    string s = (argv[1]);
    //Command line argument is alpha
    for (int i = 0; i < strlen(s); i++)
    {
        if (isalpha(s[i]) == false)
        {
            printf("Try Again\n");
            return 1;
        }
    }

    //Prompt the user to put a string
    string plainText = get_string("plaintext: ");

    //Print ciphered text
    printf("ciphertext: ");

    for (int i = 0; i < strlen(plainText); i++)
    {
        //Encrypt lower case text
        if islower(plainText[i])
        {
            j = (l % strlen(s));
            k = (tolower(s[j]) - 97);
            printf("%c", (((plainText[i] + k) - 97) % 26) + 97);
            l += 1;
        }
        //Encrypt upper case text
        else if isupper(plainText[i])
        {
            j = (l % strlen(s));
            k = (tolower(s[j]) - 97);
            printf("%c", (((plainText[i] + k) - 65) % 26) + 65);
            l += 1;
        }
        //Print the rest
        else
        {
            printf("%c", plainText[i]);
        }


    }

    printf("\n");
    return 0;

}