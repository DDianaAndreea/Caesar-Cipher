#include<stdio.h>
#include <conio.h>

void main()
{
	int i;
	char text[100];

	printf("textul pentru criptare : ");
	gets(text);
	printf("\n");

	for (i = 0; i < strlen(text); i++)
	{
		switch (text[i])
		{
		case 'X':
			text[i] = 'A';
			continue;
		case 'Y':
			text[i] = 'B';
			continue;
		case 'Z':
			text[i] = 'C';
			continue;
		case 'x':
			text[i] = 'a';
			continue;
		case 'y':
			text[i] = 'b';
			continue;
		case 'z':
			text[i] = 'c';
			continue;

		}

		if (text[i] >= 'A' && text[i] < 'X')
			text[i] = text[i] + 3;
		else if (text[i] >= 'a' && text[i] < 'x')
			text[i] = text[i] + 3;
	}

	printf("text criptat : ");
	puts(text);
	printf("\n");

	for (i = 0; i < strlen(text); i++)
	{
		switch (text[i])
		{
		case 'A':
			text[i] = 'X';
			continue;
		case 'B':
			text[i] = 'Y';
			continue;
		case 'C':
			text[i] = 'Z';
			continue;
		case 'a':
			text[i] = 'x';
			continue;
		case 'b':
			text[i] = 'y';
			continue;
		case 'c':
			text[i] = 'z';
			continue;

		}

		if (text[i] >= 'D' && text[i] < 'Z')
			text[i] = text[i] - 3;
		else if (text[i] >= 'd' && text[i] <= 'z')
			text[i] = text[i] - 3;

	}
	printf("text decriptat : ");
	puts(text);


}

