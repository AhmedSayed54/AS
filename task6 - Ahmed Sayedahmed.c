https://github.com/AhmedSayed54/AS.git

#include <stdio.h>
#include<stdlib.h>  
#include <string.h>
#include <malloc.h>
FILE *fptr;

char* reverse(char *string)
{
	fptr = fopen("task.txt", "r");
	int start, end, length;
	char temp, *ptr = NULL;
	int len = strlen(string);
	fptr = malloc(sizeof(char)*(length+1));
	fptr = strcpy(fptr, string);
	for(start=0, end=length-1; start<=end; start++)
	{
		temp = fptr[start];
		fptr[start] = fptr[end];
		fptr[end] = temp;
		end--;
	}
	return fptr;
}

void write(char *output)
{
	output = reverse(output);
	printf("reversed word is:%s", output);
	fprintf(fptr,"\n");
	fprintf(fptr, output);
}
int main()
{
	fptr = fopen("task.txt", "r");
	char input[100];
	fscanf(fptr, "%s" , input[100]);
	fclose(fptr);
	char ch[100];
	char out = reverse(fptr);
	printf("%s", fgets(ch, 100, fptr));
 	write(fptr);
	printf("%s", out);
	fclose(fptr);
	return 0;
}

