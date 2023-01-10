#include<stdio.h>
#include<stdlib.h>

int toplam(int s1,int s2)
 {
  int s3;
  s3=s1+s2;
  return s3;
 }
 
int main() {
 
 int t,sayi1,sayi2;
 printf("1.Sayi: ");
 scanf("%d",&sayi1);
 printf("2.Sayi: ");
 scanf("%d",&sayi2);
 t=toplam(sayi1,sayi2);
 printf("Toplam: %d",t);
}
