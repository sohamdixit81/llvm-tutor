#include <stdio.h>
 
/********************************************************
    *   function name       :stringCpy
    *   Parameter           :s1,s2 : string
    *   Description         : copies string s2 into s1
********************************************************/
void stringCpy(char* s1,char* s2);
 
int main()
{
    char str1[100],str2[100];
   
    printf("Enter string 1: ");
    scanf("%[^\n]s",str1);//read string with spaces
   
    stringCpy(str2,str1);
   
    printf("String 1: %s \nString 2: %s\n",str1,str2);
    return 0;
}
 
/******** function definition *******/
void stringCpy(char* s1,char* s2)
{
    int i=0;
    while(s2[i]!='\0')
    {
        s1[i]=s2[i];
        i++;
    }
    s1[i]='\0'; /*string terminates by NULL*/
}
