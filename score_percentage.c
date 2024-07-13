#include <stdio.h>
#include <stdbool.h>

int main()
{
 float max_score = 500;
 float users_score = 423;

 //calculate percentage
 float percentage = max_score / users_score * 100.0;
 printf("The percentage is %.4f", percentage);
 return 0;
}
