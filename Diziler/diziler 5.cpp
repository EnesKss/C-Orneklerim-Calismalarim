#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int sayilar[ ]={1,2,3,4,5,6,7};
 		int faktoriyel=1;
 		int i;
 		
 		for(i=6;i>0;i--)        //6 dan baslamasinin sebebi dizi elemanlarý 0,1,2,3,4,5,6 indis olarak 7dir
 		{
 			faktoriyel=faktoriyel*sayilar[i];
			 	
		}

	printf("faktor = %d\n",faktoriyel);
		return 0;
}
