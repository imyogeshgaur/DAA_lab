#include <string.h> 
#include <stdio.h>
#include <ctype.h> 

int CompareS(char *s, char *s1)
{
    if(s==NULL || s1==NULL)
        return -2;
    if(strcmp(s,s1)==0)
        return 0;
    if(tolower(s[0])==tolower(s1[0]) && tolower(s[0])==tolower((s1+1)[0]))
        CompareS(s, ++s1);
    else if(tolower(s[0])==tolower(s1[0]) && tolower(s1[0])==tolower((s+1)[0]))
        CompareS(++s, s1);
    else if(tolower(s[0])==tolower(s1[0]))
        CompareS(++s, ++s1);
    else
        return -1;
}
int main()
{
    char str[100],s[100];
    printf("Enter the first String !!! \n");
    gets(str);
    printf("Enter the Second String !!!\n");
    gets(s);
    if(CompareS(s,str)==0){
        printf("String Are Equal !!!");
    }
    else{
        printf("String are unequal !!");
    }
    return 0;
}