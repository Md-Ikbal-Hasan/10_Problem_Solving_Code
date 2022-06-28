// C code run ===============>

// gcc filename.exe -o a.exe && a.exe
// Example : gcc test.c -o a.exe && a.exe
// OR
// gcc filename.c -o filename.exe && filename.exe


#include<stdio.h>
int main()
{
	int number;
	printf("Enter a positive number: ");
	scanf("%d",&number);
	printf("The entered number is : %d",number);
	return 0;
}