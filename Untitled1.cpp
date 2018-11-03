#include<stdio.h>

main()
{
	int i,j,k,l,length;
	scanf("%d",&length);
	for(i=1;i<=length;i++)
	{
	if(i==1 || i==length)
		{
			for(j=1;j<=length;j++){
				printf("*");
			}
		printf("\n");
		}
	else
		{
		printf("*");
			for(k=1;k<=length-2;k++){
				printf(" ");
			}
		printf("*\n");
		}
	}
}
