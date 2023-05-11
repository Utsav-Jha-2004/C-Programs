#include <stdio.h>

int main() {
  int x = 5, y = 6, z = 69;
  printf("%d\n", x + y + z);
  int a, b, c;
  a = b = c = 9;
  printf("%d\n", a * b * c);
  int sum1 = 10 + 30; // 40 (10 + 30)
  int sum2 = sum1 + 50; // 90 (40 + 50)
  int sum3 = sum1 + sum2; // 130 (40 + 90)
  printf("%d\n", sum1);
  printf("%d\n", sum2);
  printf("%d\n", sum3);
  int i;

  for (i = 0; i < 10; i++){
    if (i == 4) {continue;}
    printf("%d\n", i);
  }
  int myNumber[] = {25, 50, 75, 100};
  myNumber[1] = 33;

  printf("%d\n", myNumber[1]);

  char greetings[] = "Hello World!";
  greetings[0] = 'J' ;
  printf("%s\n", greetings);

  char firstName[30];

  int myAge = 43;
  int* ptr = &myAge;

  printf("%d\n", myAge);
  printf("%p\n", &myAge);
  printf("%d\n", *ptr);

  printf("Enter your first name: \n");
  scanf("%s", firstName);
  printf("Hello %s.\n", firstName);

  return 0;
}
