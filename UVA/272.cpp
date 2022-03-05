/*#include<bits/stdc++.h>
using namespace std;
int main()
{
   int starting  = 1;
   char str[10000000];
   while(gets(str))
   {
      //``
      int len = strlen(str);
      for(int i = 0; i<len; i++)
      {

            if(str[i]=='"')
            {
               if(starting==1)
               {
                  {
                    cout<<"``";
                    starting = 0;
                  }
               }
               else if(starting == 0)
               {
                  cout<<"''";
                  starting = 1;
               }
            }

         cout<<str[i];
      }
      cout<<endl;
   }
}*/
#include <cstdio>
#include <cstring>
using namespace std;

int main() {
   char line[1024];
   bool open = true;

   while (gets(line)) {
      int len = strlen(line);

      for (int i = 0; i < len; i++) {
         if (line[i] == '"') {
            if (open)
               printf("``");
            else
               printf("''");

            open = !open;
         } else
            printf("%c", line[i]);
      }
      printf("\n");
   }

   return 0;
}
