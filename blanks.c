#include<stdio.h>
int main()
{
  char c, b;
  while ((c = getchar()) != EOF)
    {
      if (c == ' ')
	{
	  while ((b = getchar()) == ' ')
	    ;
	  printf (" ");
	  putchar (b);
	}
      if (c != ' ')
	putchar (c);
    }
}
