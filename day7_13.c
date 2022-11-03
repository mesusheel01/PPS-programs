#include <stdio.h>
#include <string.h>

int main() {
   char str[100][50], temp[50];
   int n;
   printf("Enter the value of n\n");
   scanf("%d",&n);
   printf("Enter words:\n ");
        
   // Getting strings input
   for (int i = 0; i < n; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }
   // storing strings in the lexicographical order
   for (int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {

         // swapping strings if they are not in the lexicographical order
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < n; ++i) {
      fputs(str[i], stdout);
   }
   return 0;
}