#include<stdio.h>
#include<stdlib.h>

int main(){
	
//kelebek deseni
	int d1,d2,d3,d4;
	int k1,k2,k3,k4;
	for(d1=1;d1<=5;d1++)
 	{    //sað kanat üst
		for(d2=1;d2<=d1;d2++)
		{
			printf("*");
		}
		//boþluklar üst
		for(d3=1;d3<=(10-(d1*2));d3++)
		{
			printf(" ");
		}
		//solkanat üst
		for(d4=1;d4<=d1;d4++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(k1=5;k1>=0;k1--)
	{   //sað kanat alt
	 	for(k2=1;k2<k1;k2++)
		{
			printf("*");
		}
		//alt boþluklar
		for(k3=0;k3<(12-(k2*2));k3++)
		{
			printf(" ");
		}
		
		//sol kanat üst
		for(k4=1;k4<k1;k4++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
