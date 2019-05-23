#include <stdio.h>

int min(int a,int b)
{
    return (a<b)?a:b;
}

int main(void)
{
	int a[10][10],i,j,k,n;
	printf("Enter no. of vertices: ");
	scanf("%d",&n);
	
	printf("Enter Adjacency MAtrix:\n");
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        scanf("%d",&a[i][j]);
	    }
	}
	
	for(k=0;k<n;k++)
	{
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            if(i==j)
	                a[i][j]=0;
	            else
	                a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
	        }
	    }
	}
	
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
	        printf("path %c -> %c =%d\n",'A'+i,'A'+j,a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}

