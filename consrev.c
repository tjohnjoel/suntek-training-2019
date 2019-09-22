#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
	char string[100],copy[100],cons[100];
	int i,end;
	printf("enter the string\n");
	gets(string);
	strcpy(copy,string);
	strrev(string);
	end=strlen(string)-1;
	for(i=0;i<strlen(string);i++)
	{
			if(string[i]=='a' || string[i]=='e' || string[i]=='i' || string[i]=='o' || string[i]=='u' || copy[i]=='a' || copy[i]=='e' || copy[i]=='i' || copy[i]=='o' || copy[i]=='u')
			{
			cons[i]=string[i];	
			}
			else
			{
				cons[i]=string[end];
				end--;
			}
	}
	puts(cons);
	return 0;
}
