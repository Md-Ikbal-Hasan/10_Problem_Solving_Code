#include <stdio.h>

int main()
{
   int i, j,temp,left, middle, right, n, search, array[100];

   printf("Enter number of elements:");
   scanf("%d",&n);

   printf("Enter %d integers:\n", n);

   for (i = 0; i < n; i++)
      scanf("%d",&array[i ]);

      //for sorting the value
       for (i = 0; i <n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (array[i] < array[j])
            {
                temp =  array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    printf("sorted elements are (descending order) ::");
    for(int i=0;i<n;i++)
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
        right = middle - 1;
      else if (array[middle] == search)
        {
         printf("%d found at index %d.\n", search, middle);
         break;
        }

      else


 left = middle + 1;

      middle = (left + right)/2;
   }
   if (left > right)
      printf("Not found! %d isn't present in the list.\n", search);

   return 0;
}

