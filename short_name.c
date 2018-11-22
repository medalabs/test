#include <stdio.h>
#include <string.h>

void append(char s[], char c)
{
        int len = strlen(s);
        s[len] = c;
        s[len+1] = '\0';
}

int get_first_caracter(char result[],char string[],int len)
{
	int i=0,j=1;
	char c=string[0];
	append(result,c);
	for (i=1;i<len;i++)
	{
		if ((string[i]==' ') && string[i+1]!=' ')
		{
			result[j]=string[i+1];
			j++;
		}
	}
}

int main()
{
	char string[]="mahmoud ben salah";
	char result[]="\0";
	get_first_caracter(result,string,strlen(string));
	printf("%s\n",result);
	return 0;
}

