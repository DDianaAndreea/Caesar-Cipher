#include<stdio.h>
#include<string.h>

int main(){
    char text[1000],key[100];

    printf("textul pentru criptare : ");
        gets(text);
        printf("\n");

        printf("Cheia de criptare : ");
        gets(key);

    int textLen = strlen(text), keyLen = strlen(key), i, j;

    char newKey[textLen];
    char encryptedText[textLen];
    char decryptedText[textLen];


    for(i = 0, j = 0; i < textLen; ++i, ++j){
        if(j == keyLen)
            j = 0;

        newKey[i] = key[j];
    }

    newKey[i] = '\0';

    //criptare
    for(i = 0; i < textLen; ++i)
        encryptedText[i] = ((newKey[i] - text[i] ) % 26) + 'A';

    encryptedText[i] = '\0';

    //decriptare
    for(i = 0; i < textLen; ++i)
        decryptedText[i] = (((newKey[i] - encryptedText[i] ) + 26) % 26) + 'A';

    decryptedText[i] = '\0';

    printf("Text pentru criptare: %s", text);
    printf("\nCheia de cripta: %s", key);
    printf("\nCheia noua : %s", newKey);
    printf("\nText criptat: %s", encryptedText);
    printf("\nText decriptat: %s", decryptedText);

    return 0;
}
