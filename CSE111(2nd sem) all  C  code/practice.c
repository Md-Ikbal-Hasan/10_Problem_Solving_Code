/* C Program to find Last Occurrence of a Character in a String */

#include <stdio.h>
#include <string.h>

int main()
{
  FILE *file;
  file=fopen("E:\\hijibiji.txt","w");
  if(file==NULL)
        printf("file is not open");
  else
    printf("file is open\n");
    char str[100];
    printf("Enter a string: ");
    gets(str);
    fprintf(file,"%s",str);


  fclose(file);
  	return 0;
}
