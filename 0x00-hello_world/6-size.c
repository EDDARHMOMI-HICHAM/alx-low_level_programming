#include <stdio.h>

/** 
 *main programme - print sommting
 *Write a C program that prints the size of various types on the computer it is compiled and run on.
  */

int main(void){
char a;
int b;
long int c;
long long int d;
float f;

printf("size of char : %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of char : %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of char : %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of char : %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of char : %lu byte(s)\n", (unsigned long)sizeof(f));

return (0);
}
