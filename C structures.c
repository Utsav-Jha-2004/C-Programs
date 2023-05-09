#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; //string
};

int main() {
  struct myStructure s1;

  s1.myNum = 13;
  s1.myLetter = 'B';
  strcpy(s1.myString, "Some text");

  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);
  printf("My string: %s", s1.myString);

  return 0;
}
