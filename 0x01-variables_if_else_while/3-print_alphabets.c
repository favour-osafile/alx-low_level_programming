#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * foolwed by a new line
 * Return: Always 0 (Success)
 */
intmain(void)
{
  int ch;
  for (ch = 'a'; ch <= 'z'; ch++)
    putchar(ch);
  for ( ch = 'A'; ch <= 'Z'; ch++)
    putchar('\n');
  return (0);
} 
