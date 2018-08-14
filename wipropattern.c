#include<stdio.h>
int main()
{
    int i,j,num,temp,var,k,l,x=1,y,count=0;
    printf("Enter the number: \n");
    scanf("%d",&num);
    var=num*(num+1);
    var=var-(num-1);
	temp=var;
    for (i=num; i>0; i--)
    {
	if (count)
	    for (k=0;k<count;k++)
	    printf("--");
	for (j=1; j<=i; j++)
	{
	    
	    printf("%d",x);
	    printf("*");
	    x++;
	    
	}
	for (j=1; j<=i; j++)
	{
	    printf("%d",temp++);
		if (j!=i)
	    printf("*");
	}
	    printf("\n");
	    count++;
    var=var-(i-1);
	temp=var;

    }
}
