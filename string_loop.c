#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
  char carName[] = "Volvo";
 // int length = sizeof(carName) / sizeof(carName[0]);
  //int i;

  //for(i = 0; i < length; ++i){
   // printf("%c\n", carName[i]);
 // }

  printf("%lu", strlen(carName));
  return 0;
}
