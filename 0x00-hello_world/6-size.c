#include <stdio.h>
#include <conio.h>
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
  printf("Size of a char:%zu bytes\n",sizeof(charType));
  printf("Size of an int:%zu bytes\n", sizeof(intType));
  printf("Size of a long long int:%zu bytes\n",sizeof(longType));
  printf("Size of a float:%zu bytes\n",sizeof(floatType));
  return (0);
}
