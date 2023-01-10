#include <string.h>
#include <stdio.h>
 
main()
{
	int i,j;
    int sayac = 0;
    char sesli_harf[] = {'a','e','i','o','u'};
    char cumle[100];
     
    printf("Bir kelime giriniz: ");
    gets(cumle);
    {
        for ( i = 0; i < strlen(cumle); i++)
        {
            for( j = 0; j < 5; j++)
            {
                if(cumle[i] == sesli_harf[j]){
                    sayac++;
                }
            }
        }
    }
    printf("\nGirilen cumlede %d adet sesli haf vardir", sayac);
}
