#include <stdio.h>
#include <cs50.h>

int main(void)
{
  int n;
  do
  {
     n = get_int("Height: ");
  } 
  while (n < 1 || n > 8);
  
  for (int i = 0; i < n; i++)
  {
    //for loop for blank spaces (or dots)
    for (int j = n - 1; j > i; j--) 
      {
      printf(" ");
      }
      // for loop for hashes 
    for (int j = 0; j <= i; j++)
      {
      printf("#");
      }
    printf("\n");
  }
   
}