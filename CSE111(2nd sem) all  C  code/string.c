
#include <stdio.h>
#include <string.h>
int main()
{
	char mystring[50];
	int len, i;


	printf("C Program to reverse a string\n");
    printf("Enter a string: ");

	gets(mystring);

	len = strlen(mystring);

	for(i=len-1; i>=0; i--){
		printf("%c", mystring[i]);
	}
	printf("\n%d",len);
    return 0;
}
