/*Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
Input:
07:05:45PM
Output:
19:05:45
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char* timeConversion(char* s) {
     char *t=(char*)malloc(10*sizeof(char));
    if(s[8]=='A')
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='0';
            s[1]='0';
        }
    }
    else
    {
        if(s[0]=='1' && s[1]=='2')
        {
            s[0]='1';
            s[1]='2';
        }
         else{
        s[0]=s[0]+1;
        s[1]=s[1]+2;
        }
    }
    for(int i=0;i<=7;i++)
        t[i]=s[i];
   return t;
}
int main()
{
    char *s,*t;
    s=(char*)malloc(10*sizeof(char));
    printf("Enter the time in HH:MM:SSAM or PM format : ");
    scanf("%s",s);
    timeConversion(s);
    t=timeConversion(s);
    printf("Military time is : %s.",t);
    return 0;
}

