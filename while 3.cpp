#include<stdio.h>
#include<stdlib.h>

main(){
	
int sayi,faktoryel;
faktoryel=1;
sayi=5;

while(sayi>1)
{
	faktoryel=faktoryel*sayi;
	sayi--;
}
printf("%d",faktoryel);


return 0;
}
