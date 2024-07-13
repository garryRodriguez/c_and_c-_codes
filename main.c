#include <stdio.h>

int main(){
  float myFloat = 3.14;
  double myDouble = 19.99;
  printf("Float number: %.2f\n", myFloat);
  printf("Double number: %.4f\n", myDouble);
  printf("The size of myFloat is %lu\n", sizeof(myFloat));
  return 0;
}
