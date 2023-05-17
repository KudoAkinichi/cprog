//  Write the user defined function to Concatenate 2 string given by a user in C.

#include <stdio.h>
#include <string.h>

void concatStrings(char str1[], char str2[]) {
   // get the length of the first string
   int len1 = strlen(str1);
   
   // loop through each character of the second string and append it to the first string
   for (int i = 0; str2[i] != '\0'; i++) {
      str1[len1 + i] = str2[i];
   }
   
   // add a null terminator at the end of the concatenated string
   str1[len1 + strlen(str2)] = '\0';
}

int main() {
   char str1[100]; // declare a character array to store the first string input
   char str2[100]; // declare a character array to store the second string input
   
   printf("Enter the first string: ");
   scanf("%s", str1); // read a string input from the user and store it in 'str1'
   
   printf("Enter the second string: ");
   scanf("%s", str2); // read a string input from the user and store it in 'str2'
   
   concatStrings(str1, str2); // call the user-defined function to concatenate the two strings
   
   printf("The concatenated string is: %s\n", str1); // print the concatenated string
   
   return 0;
}
