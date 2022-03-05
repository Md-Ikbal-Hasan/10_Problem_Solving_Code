#include <stdio.h>

int main()
{
   int i, j,temp,left, middle, right, n=5, search;

    int array[5]={2,4,6,8,10};
    for(i=0;i<5;i++)
    {
        printf("%d ",array[i]);
    }
   printf("\nEnter value to search\n");
   scanf("%d", &search);

   left = 0;
   right = n - 1;
   middle = (left+right)/2;

   while (left <= right)

  {
      if (array[middle] < search)
         left = middle + 1;
      else if (array[middle] == search)
        {
         printf("%d found at index %d.\n", search, middle);
         break;
        }

      else
         right = middle - 1;



      middle = (left + right)/2;
   }
   if (left > right)
      printf("Not found! %d isn't present in the list.\n", search);

   return 0;
}

