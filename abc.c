# include<stdio.h>
int  main(void)
{
	int i,j,k;
	int a[100][100];
	printf("enter no. of rows\n");
	scanf("%d",&k);

	for(i=0;i<k;i++)
	{
		for(j=0;j<k-i;j++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			if(i==0)
			{
				a[0][0]=1;
				printf("%d",a[0][0]);
			}
			else
			{
				if(j==0 || j==i)
				{
					a[i][j]=1;
				}
				else
				{
					a[i][j]=a[i-1][j]+a[i-1][j-1];
				}
				
				printf("%d ",a[i][j]);
			}
		}
		printf("\n");
	}


}		
