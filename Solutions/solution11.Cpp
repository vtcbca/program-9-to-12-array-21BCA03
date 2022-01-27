/* write programme to enter string, find and print the total no of
vowel in it*/
#include<stdio.h>
#include<conio.h>
void main()
{
      char a[10];
      int i,j=0;
      clrscr();
      printf("\n enter the string:");
      gets(s);
      printf("\n vowels in the string");
      for(i=0;i<strlen(s);i++)
      {
	 if(a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u')
	 {
	     j++;
	     printf("%c",a[i]);
	 }
      }
      printf("\n no. of vowels in the string:%d",j);
      printf("\n");
