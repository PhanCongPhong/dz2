#include <stdio.h>
typedef struct Line line;
struct Line
{ 
	int point_1;
	int point_2;
};
 
int main(int argc, char const *argv[])
{
	int m,n;
	printf("So dinh\n");
	scanf("%d",&n);
	printf("So canh\n");
	scanf("%d",&m);
	line L[n];
	for (int i = 0; i < m; i++)
	{
		printf("point_1(%d):", i + 1);
		scanf("%d", &L[i].point_1);
		printf("point_2(%d):", i + 1);
		scanf("%d", &L[i].point_2);
	}
	
	int result[n + 1][n + 1];
	for (int i = 0; i <= n; i++)
	{
		result[0][i]=i;
		result[i][0]=i;
	}
	for (int i = 1; i <= n; i++)
	{
		for ( int j = 1; j <= n ; j++)
		{
			result[i][j]=0;
		}	
	}
	for (int i = 0; i < m; i++)
	{
		result[L[i].point_1][L[i].point_2]=1;
	}
	for (int i = 0; i <=n ; i++)
	{    printf("\n");
		for (int j = 0; j <= n; j++)
		{
			printf("%d ",result[i][j]);
		}
		
	}
	
	return 0;
}