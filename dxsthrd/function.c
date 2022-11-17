#include<stdio.h>
int myFunction(){
   printf("hello world");
return(5);
}

int main()
{
  int a;
  a=myFunction();
  printf("%d",a);
  return 0;
}
