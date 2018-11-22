#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concat(char string[], char sn[], int cin);

int main()
{
	char pseudo[]="";
	char short_name[]="ABC";
	char string[]="";
	int cin=1234;
	concat(string,short_name,cin);
	strcpy(pseudo,string);
	printf("%s\n",pseudo);
	return 0;
}

void concat(char string[],char sn[], int cin)
{
	char scin[5];
	sprintf(scin,"%d",cin);
	strcpy(string,sn);
	strcat(string,scin);
}
