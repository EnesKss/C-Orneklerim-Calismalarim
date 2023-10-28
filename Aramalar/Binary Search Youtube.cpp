#include<stdio.h>



bool binarySearch(int dizi[],int bas, int son, int aranan)
{
	while(son>=bas)
	{
		int orta= dizi[(bas + son)/2];
		printf("%d\n",orta);
		if(orta == aranan)
		return true;
		if(orta<aranan)
		bas++;
		if(orta > aranan)
		son--;
	}
	return false;
}



int main()
{
	int n;
	printf("dizi boyunu giridinz: ");
	scanf("%d",&n);
	int dizi[n];
	
	int i=0;
	while(i<n)
	{
		printf("sayi girin: ");
		scanf("%d",&dizi[i]);
		i++;
	}
	
	printf("aradiginiz sayiyi girin: \n");
	int aranan;
	scanf("%d",&aranan);
	
	bool sonuc=binarySearch(dizi,0,n-1,aranan);
	if(sonuc)
	printf("aranan sayi dizide var");
	else
	printf("aranan sayi dizide yok ");
	
	return 0;
}
