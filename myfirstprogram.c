#include <stdio.h>

int main() 
{
  printf ("Hello World!\n\nI am lerning C.\n And it is awesome!");//this is a comment
  printf("\t \\\"These are the examples of Escape Sequences\"\\");/*this line has 3 escape sequences.
  horizontal break, slash & quotation marks*/
  //create variables
int myNum = 15;             //myNum is 15
myNum = 69;                 //now myNum is 69, Integer(whole number)
float myFloatNum = 10.42;   //Floating point number
char myLetter = 'D';         //Character
  //print variables
  printf("\n%d\n", myNum);
  printf("%f\n", myFloatNum);
  printf("%c\n", myLetter);
  printf("My favourite number is: %d & my favourite letter is: %c", myNum, myLetter);
  return 0;
}
