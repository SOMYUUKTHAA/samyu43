#include<stdio.h>
#include<string.h>
#define m 1000
void main()
{
    char s1[m],s2[m],a[m],s3[m],k;
    int i,j;
    puts("\nenter two strings\n");
    gets(s1);gets(s2);
    for(i=0;s1[i]!='\0';i++)
    {
        k++;
    }
    for(i=k,j=0;s2[j]!='\0';j++,k++)
    {
    s1[k]=s2[j];
    }
    printf("\n%s",s1);
}
