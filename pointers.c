#include<stdio.h>
#include<string.h>
void stringmain(char *str, int start,int end)
{

    if(start>=end)
    {
        return;
    }
    char temp = str[start];
    str[start]=str[end];
    str[end]=temp;
    stringmain(str, start+1,end-1);
}
int main()
{


    char str[100]="hello everyone";
    printf("original stringn %s\n ",str);
    stringmain(str, 0,strlen(str)-1);
    printf("reverse of string %s \n ",str);
    return 0;



}
