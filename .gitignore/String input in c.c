#include<stdio.h>
#include<string.h>


int main()
{
    char str[100];
    char *rev;
    gets(str);

    rev = strrev(str);
    printf("%s",rev);

}
