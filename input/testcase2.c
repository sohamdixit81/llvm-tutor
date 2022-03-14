/*function to return length of the string*/
#include <stdio.h>
#include <string.h>
int stringLength(char*);

int main()
{
char str[100]={0};
int length;

/*call the function*/
length=stringLength(str);

printf("String length is : %d\n",length);

return 0;
}

/*function definition...*/
int stringLength(char* txt)
{
int i=0,count=0;

while(txt[i++]!='\0'){
count+=1;
}

return count;
}
