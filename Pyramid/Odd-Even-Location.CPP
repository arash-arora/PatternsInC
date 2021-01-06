#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int i,j,k,a=1;
  for(i=1;i<=7;i++)
  {
    for(j=i-1;j>0;j--)
    {
      if(i%2!=0)
      {
	k=i+j-1;
	if(k>i+j-2)
	{
	  printf("%d\t",k);
	  k--;
	}
      }
      else
	printf("%d\t",j);
    }

    printf("\n\n");
  }
getch();
}
