#include<stdio.h>
#include<stdlib.h>

main(){
	
	int satir,sutun,i,j,k,n;
	
	printf("satir sayisi: ");
	scanf("%d",&satir);
	
	printf("sutun sayisi: ");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<satir;j++)
		{
			printf("\n  [%d][%d]---->",i,j);
			scanf("%d",&matris[i][j]);
		}
	}
	
	for(k=0;k<satir;k++)
	{
		for(n=0;n<sutun;n++)
		{
			printf(" %d ",matris[k][n]);
		}
		printf("\n");
	}
	
	
	return 0;
}
