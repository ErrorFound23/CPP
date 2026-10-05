#include <stdio.h>

int main()
{
    char sentence[50];
    char newSentence[50];

    printf("Enter a Sentence: ");
    scanf("%[^\n]", sentence);

    printf("%s\n", sentence);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        // printf("%c", sentence[i]);
    }
    return 0;
}