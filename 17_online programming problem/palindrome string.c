#include <stdio.h>
#include <string.h>

int main(){
    char string1[101];
    int i, length;
    int flag = 0;


    scanf("%s", string1);

    length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}

    if (flag==1) {
        printf("NO");
    }
    else {
        printf("YES");
    }
    return 0;
}
