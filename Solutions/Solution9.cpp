 /* write  a programe to perform bubble short on array of 10 numeric values */
 #include<stdio.h>
 #include<conio.h>
 void main()
 {
       int a[10],no,i,j,si;
       clrscr();
       printf("\n enter no. of elements:");
       scanf("%d",&no);
       printf("\n enter %d no.:",no);
       for(i=0;i<=no;i++)
       {
	      scanf("%d",&a[i]);
       }
       for(i=0;i<no-1;i++)
       {
	   for(j=0;j<no-i-1;j++)
	   {
	       if(a[j]>a[j+1])
	       {
		   si=a[j];
		   a[j]=a[j+1];
		   a[j+1]=si;
	       }
	   }
       }
       printf("\n array sorting");
       for(i=0;i<no;i++)
       {
	   printf("%d",a[i]);
       }
       getch();
}