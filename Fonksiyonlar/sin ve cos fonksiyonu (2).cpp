#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	double derece,sonucsin,sonuccos;
	
	printf("dereceyi girin: ");
	scanf("%lf",&derece);
	
	sonucsin=sin(derece);
	printf("sinus: %lf\n",sonucsin);
	
	sonuccos=cos(derece);
	printf("cos: %lf",sonuccos);
	return 0;
}
