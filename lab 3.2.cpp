#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	float x1,x2,k,disk;
	int a,b,c;
	
	printf("kat sayýlarý giriniz 3 tane: ");
	scanf("%d %d %d",&a,&b,&c);
	
	disk=(b*b)-4*a*c;
	k=sqrt(disk);
	
	if (disk>0)
	{
		x1=(-b-k)/(2*a);
		x2=(-b+k)/(2*a);
	}
	else if (disk==0)
	{
		x1=x2=-b/(2*a);
	}
	if  (disk<0)
	{
		printf("reel kök yoktur");
	}
	
	printf("kökler : %.1f %.1f",x1,x2);
	
	
	
	return 0;
}
