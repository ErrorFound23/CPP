#include <stdio.h>

void convertToPigLatin(char *str, char *pigLatin)
{
    int i = 0, j = 0;

    while (str[i] != 0)
    {
        while (str[i] == ' ')
        {
            i++;
        }

        if (str[i] != '\0')
        {
            char firstLetter = str[i];
            i++;

            while (str[i] != ' ' && str[i] != '\0')
            {
                pigLatin[j++] = str[i++];
            }

            pigLatin[j++] = firstLetter;
            pigLatin[j++] = 'a';

            if (str[i] != '\0')
            {
                pigLatin[j++] = ' ';
            }
        }
    }
    pigLatin[j] = '\0';
}

int main()
{
    char str[100];
    char pigLatin[200];

    printf("Enter a Sentence: ");
    // scanf("%[^\n]", str);
    fgets(str, sizeof(str), stdin);

    int length = 0;
    while (str[length] != '\0')
    {
        if (str[length] == '\n')
        {
            str[length] = '\0';
            break;
        }
        length++;
    }
    convertToPigLatin(str, pigLatin);
    printf("Pig Latin: %s\n", pigLatin);

    return 0;
}