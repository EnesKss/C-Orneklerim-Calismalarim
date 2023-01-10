#include<stdio.h>
#include<stdlib.h>

main() {

    printf("***********suyun durumu*************\n\n");
    
    int su;
    
    printf("sicaklik degerini girin");
    scanf("%d",&su);
    
    if(su<=0)
    {
    	printf("su suanda buz halinde");
	}
	if(su>0 && su<100)
	{
		printf("su sivi halde");
	}
	if(su>=100)
	{
		printf("su gaz halinde");
	}
	return 0;
}
