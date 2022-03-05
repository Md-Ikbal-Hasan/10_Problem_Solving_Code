#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[102];
    int len,small=0,capital=0,i;
    scanf("%s",str);
    len= strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            capital++;
        }
        else if(str[i]>='a' && str[i]<='z')
            small++;
    }


    if(capital>small)
    {
        for(i=0;i<len;i++)
        {
            if(str[i]>='a' && str[i]<='z')
                str[i]-=32;
        }
        printf("%s\n",str);

    }

else if(capital<small)
    {
      for(i=0;i<len;i++)
       {
       if(str[i]>='A' && str[i]<='Z')
        str[i]+=32;
       }
       printf("%s\n",str);
    }
    else if(capital==small)
    {

       for(i=0;i<len;i++)
       {
       if(str[i]>='A' && str[i]<='Z')
        str[i]+=32;
       }
       printf("%s\n",str);
    }



    return 0;
}

