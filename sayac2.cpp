#include <stdio.h>
#include <stdlib.h>


  main(){
  	
  	int i,sayi,faktor;
  	
    printf("faktoriyeli almak istediginiz sayiyi giriniz");
    scanf("%d",&sayi);
    
    for(i=1;i<=sayi;i++)
    {
    	faktor=faktor*i;
	}
  	printf("faktoriyel sonucu= %d",faktor);
  	return 0;
  }
