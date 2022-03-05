#include<stdio.h>
int main()
{
    FILE *std;
    std=fopen("E:\\exam file.txt","a");
    if(std==NULL)
        printf("The file doesnt creat\n");
    else
        printf("File is created");
     char name[50]="bijoy";
     fprintf(std,"my name is %s",name);


    fclose(std);
    return 0;
}
