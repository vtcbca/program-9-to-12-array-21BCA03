/* write a programme to perform selection short on array of 10 numeric
values */
#include<stdio.h>
#include<conio.h>
void main();
{
    int a[10],no,i,j,so,to;
    clrscr();
    printf("\n enter no. of element:");
    scanf("%d",&no);
    for(i=0;i<no;i++)
    {
	scanf("%d",&a[i]);
    }
    for(i=0;i<no-1;i++)
    {
	so=i;
	for(j=i+1;j<no;j++)
	{
	   if(a[so]>a[j])
	   so=i;
	}
	if(so!=i)
	{
	    to=a[i];
	    a[i]=a[so];
	    a[so]=to;
	}
    }
    printf("\n sorting in assending order:");
    for(i=0;i<no;i++)
    {
	printf("\n %d",a[i]);
    }
    getch();
}
