#include <stdio.h>
#include <string.h>
 
int main()
{
   char string[100];
   int chr = 0, count[26] = {0}, k;
 
   printf("Textul:\n");
   gets(string);
 
   while (string[chr] != '\0') 
   {
      if (string[chr] >= 'A' && string[chr] <= 'Z') {
         k = string[chr] - 'A';
         count[k]++;
      }
 
      chr++;
   }
 
   for (chr = 0; chr < 26; chr++)
         printf("%c apare de %d ori in text.\n", chr + 'A', count[chr]);
 
   return 0;
}


