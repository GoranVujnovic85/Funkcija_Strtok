#include <stdio.h>
#include <string.h>

#define First_part
//#define Second_part
//#define Third_part


#ifdef First_part

int main()
{
	char string[] = "Hocu da izdelim ovaj string!";

	char *deo1 = strtok(string, " ");
	printf("%s\n", deo1);

	char *deo2 = strtok(NULL, " ");
	printf("%s\n", deo2);

	char *deo3 = strtok(NULL, " ");
	printf("%s\n", deo3);

	char *deo4 = strtok(NULL, " ");
	printf("%s\n", deo4);

	char *deo5 = strtok(NULL, " ");
	printf("%s\n", deo5);
}

#else

#ifdef Second_part

int main()
{
	char string[] = "Zelim da parsiram ovaj string!";

	char *deo = strtok(string, " ");

	while(deo != NULL)
	{
		printf("%s\n", deo);

		deo = strtok(NULL, " ");
	}

}

#else

#ifdef Third_part

int main()
{

	char string[] = "Zelim da parsiram ovaj string!";

	char *deo = strtok(string, " ");

	printf(" %p\n", string);
	printf(" %p\n", deo);


}


#endif
#endif
#endif

