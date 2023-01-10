#include<stdio.h>
#include<stdlib.h>


int main(){
	
    char ders;
    printf("ders kodu:");
    scanf("%s",&ders);
    
    switch(ders)
    {
    	case 't': printf("turkce");break;
    	case 'm':printf("matematik");break;
    	case 'f':printf("fen bilgisi");break;
	}
	
}
