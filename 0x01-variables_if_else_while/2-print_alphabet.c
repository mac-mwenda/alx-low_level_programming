#include <stdio.h>



/**

 *main - print lowercase a-z

 *Return: Always 0 (Success)

 */



int main(void)
/*returns */
{

	char alpha = 'a';



	while (alpha <= 'z')

	{

		putchar(alpha);

		alpha++;

	}

	putchar('\n');



	return (0);

}
