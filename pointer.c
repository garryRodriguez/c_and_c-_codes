#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
  int myAge = 43;
  int* ptr = &myAge;

  printf("%d\n", myAge); //output: 43
  printf("%p\n", &myAge); //output the memory address location of myAge
  printf("%p\n", ptr); //outputs the memory address of myAge with pointer
  return 0;
}
