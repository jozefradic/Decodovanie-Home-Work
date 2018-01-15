/*
* Author: Jozef Radic
* Date: 27-11-2017
* Description:
*
*/
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
	char c;
	FILE *f=fopen ("encodedText.txt", "r"); // algoritmus posun prve i,y, nahrad pismenka o -1 a urob z % medzeru
	FILE *fw=fopen ("decoded.txt", "w");
		
		
	while ((c = fgetc(f)) != EOF) //cyklus do narazenia na koniec
		{
	if (c=='j') //vyriesi icka
	{putc ('y', fw);
	putchar ('y');}
			
	else if (c=='J')
	{putc ('Y', fw);
	putchar ('Y');}
	
	else if (c=='z')
	{putc ('i', fw);
	putchar ('i');}

	else if (c=='Z')
	{putc ('I', fw);
	putchar ('I');}
	
	else if (isalpha (c))  //poposuva pismenka
	{putc (c-1, fw);
	putchar (c-1);}
	
	else if(c=='%')    //urobi medzeri z %
	{putc (' ', fw);
	putchar (32);}
		
}

		
	fclose (f);

	
	return 0;

}
	
