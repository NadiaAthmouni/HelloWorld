/*
*  just here to learn to code :)
*  I like linux (ubuntu or debian) and want to master my programming skills in C and C++
*/


#include <stdio.h>

int main(int argc, char **argv)
{
  int counter = 0;
  
  for (counter = 0; counter < MAX; counter++)
    printf ("counter is prime [%i] \n", counter % 2);
  
  return 0; 
}
