#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
               char str1[99];
    int len=0,i,sum;

    printf("string ifadeyi gir ");
    scanf("%s",&str1);


    i=0;
    while(str1[i]!='\0'){
        len++;
        i++;
    }

    printf("len: %d",len);

    sum=0;

    for(i=0;i<len;i++){
        if(str1[i]=='_'){
            sum++;
        }
    }

    printf("sonuc= %d",sum+1);
}
