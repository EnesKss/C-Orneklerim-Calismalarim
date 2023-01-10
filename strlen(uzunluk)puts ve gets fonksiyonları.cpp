#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h> 

int main(){
	char kelime[100];
	printf("kelimeyi girin: ");
	gets(kelime);
	printf("katar uzunlugu: %d",strlen(kelime));
	
	
	return 0;
}
