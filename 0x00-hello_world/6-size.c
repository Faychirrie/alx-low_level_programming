
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int intType;
  float floatType;
  long long longType;
  char charType;
  printf("Size of a char:%u\n",sizeof(intType));
  printf("Size of an int:%d\n",sizeof(floatType));
  printf("Size of a long long int:%d bytes\n",sizeof(longType));
  printf("Size of a float:%d bytes\n",sizeof(floatType));
  return (0);
}

