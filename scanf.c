#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
  int myNum;
  //Ask the user to enter a number
 // printf("Type a number and press enter: \n");
 // scanf("%d", &myNum);

  //Print the number the user typed
 // printf("Your number is: %d", myNum);

  char fullName[30];
  printf("Enter your full name: \n");

  //get and save the text //only get the first word
  //scanf("%s", firstName);
  //output the name
 // printf("Hello %s", firstName);

  //get and save the text --> get all characters entered
  fgets(fullName, sizeof(fullName), stdin);

  printf("Hello %s", fullName);

  return 0;
}
