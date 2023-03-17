#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define length 12

int main(void)
{
	int *nump;
	char *letp;
	int i;

	letp=(char*)malloc(sizeof(char));
	nump =(int*) malloc(sizeof(int));

	*nump = 911;
	*letp = 'A';
	printf("%c\n", *letp);
	printf("%d\n", *nump);

	free (nump);
	
	nump =(int*)calloc(length ,(sizeof(int));
	for (i=0; i<length; i++)
		printf("%d  ", nump[i]);

	free(letp);
	letp = (char*) calloc(32, sizeof(char));
	strcpy(letp, "Maltepe University");
	printf("%s\n", letp);

	printf("\n\n"
		      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");


	return (0);
}