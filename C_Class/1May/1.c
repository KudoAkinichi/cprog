// Write the user defined function to find length of a string

#include <stdio.h>

int stringLength(char str[]) {
   int len = 0;
   
   // loop through each character of the string until the null character is encountered
   for (int i = 0; str[i] != '\0'; i++) {
      len++; // increment the length for each character
   }
   
   return len;
}

int main() {
   char str[100]; // declare a character array to store the user input
   
   printf("Enter a string: ");
   scanf("%s", str); // read a string input from the user and store it in 'str'
   
   int len = stringLength(str);
   
   printf("The length of the string '%s' is %d\n", str, len);
   
   return 0;
}
