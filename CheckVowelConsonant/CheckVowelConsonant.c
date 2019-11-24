#include <stdio.h>
int main()
{
    char character;
    int isLowercaseVowel, isUppercaseVowel;
    printf("Enter an alphabet: ");
    scanf("%c",&character);

    isLowercaseVowel = (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u');
    isUppercaseVowel = (character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U');

    if (isLowercaseVowel || isUppercaseVowel)
        printf("%c is a vowel.", character);
    else
        printf("%c is a consonant.", character);
    return 0;
}
