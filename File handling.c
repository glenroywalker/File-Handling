#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char information[100]; 
}info;

int main()
{
	info inf; //makes instance of record called "inf"
	FILE *fp; //Initializes the file (files use pointers)
	
	fp = fopen("starter.txt", "w+");
	
	printf("write something you may want to input into the file :\n");
	scanf("%s",inf.information);
	fprintf(fp, "%s\n", inf.information );
	fclose(fp);

	do 
	{
		fscanf(fp,"%s",inf.information);
		printf("%s", inf.information);
	}	
	while(!feof(fp));

	return 0;
}