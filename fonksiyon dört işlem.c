#include <stdio.h>
#include <stdlib.h>


float dortislem(float a,float b, char islem)
{
    if(islem == '+')
    {
         return a+b;

    }
    else if(islem == '-')
    {
        return a-b;
    }
    else if(islem == '*')
    {
        return a*b;
    }
    else if(islem == '/')
    {
        return a/b;
    }
    else
    {
        printf("Yanlis oparator girdiniz");
    }


}





int main()
{
   /*Klavyeden girilen iki tamsayının toplamını,farkını,çarpımını ve bölümünü gerçekleştiren C programını
   fonksiyon kullanarak yazınız*/

   int sayi1,sayi2;
   char islem;
   printf("Hangi islemi yaptirmak istiyorsunuz (+ - / *)\n");
   scanf("%c",&islem);
   printf("Lutfen 2 adet sayi giriniz\n");
   scanf("%d%d",&sayi1,&sayi2);
   printf("Islemin sonucu %.2f",dortislem(sayi1,sayi2,islem));

    return 0;
}
