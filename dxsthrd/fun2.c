#include <stdio.h>

void myFunction(int a) {
  printf("value of a\t %d\n", a);
  a=55;
  printf("value of a\t%d\n", a);
}

void main() { 
int a=3;
  printf("value of a= %d\n", a);
  myFunction(a); 
  printf("value of a= %d\n", a);
}
