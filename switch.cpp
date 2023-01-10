#include<stdio.h>
#include<stdlib.h>

 int main()
{
  int sayi1,sayi2,sonuc;
	char islem;

	sayi1=5;
	sayi2=9;
	
	printf("istenen islem nedir?\n");
	scanf("%s",&islem);
	sonuc=sayi1+sayi2;
	switch(islem)
	{
	case  '+':
	 printf("%d",sonuc);break;
}
return 0;
	
}
