//  Write the user defined function to find substring in C and take input from user.

#include <stdio.h>
#include <string.h>

int findSubstring(char str[], char sub[]) {
   int lenStr = strlen(str); // get the length of the string
   int lenSub = strlen(sub); // get the length of the substring
   
   // loop through each character of the string
   for (int i = 0; i <= lenStr - lenSub; i++) {
      int j;
      
      // check if the substring matches the characters starting from the current index i
      for (j = 0; j < lenSub; j++) {
         if (str[i + j] != sub[j]) {
            break;
         }
      }
      
      // if the substring was found, return the starting index
      if (j == lenSub) {
         return i;
      }
   }
   
   // if the substring was not found, return -1
   return -1;
}

int main() {
   char str[100]; // declare a character array to store the user input
   char sub[100]; // declare a character array to store the substring input
   
   printf("Enter a string: ");
   scanf("%s", str); // read a string input from the user and store it in 'str'
   
   printf("Enter a substring to find: ");
   scanf("%s", sub); // read a substring input from the user and store it in 'sub'
   
   int index = findSubstring(str, sub);
   
   if (index != -1) {
      printf("The substring '%s' was found in '%s' starting at index %d\n", sub, str, index);
   } else {
      printf("The substring '%s' was not found in '%s'\n", sub, str);
   }
   
   return 0;
}
