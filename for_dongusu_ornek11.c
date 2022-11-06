#include <stdio.h>
// girilen sayıya kadar olan tek sayıların toplamını ve çarpımını,
// çift sayıların toplamını ve çarpımını,
// tek sayıların ortalamasını ve çift sayıların ortalamasını hesaplar

int main() 

{
 
 int i;   
 int sayi;
 
 int TeklerinToplami = 0;
 int CiftlerinToplami = 0;
 
 int TeklerinCarpimi = 1;
 int CiftlerinCarpimi = 1;

 int CiftAdeti = 0,TekAdeti = 0;
 
 printf("sayi girin: ");
 scanf("%d",&sayi);
 
  for(i = 1 ; i <= sayi ; i++)
  {
     if(i % 2 == 0)
     {
      CiftlerinToplami += i;
      CiftlerinCarpimi *= i;
      CiftAdeti++;
     }
     
     else
     {
      TeklerinToplami += i;
      TeklerinCarpimi *= i;
      TekAdeti++;
     }
     
   }
   
   printf("\n%d sayisina kadar olan cift sayilarin toplami: %d\n",sayi,CiftlerinToplami);
   printf("%d sayisina kadar olan cift sayilarin carpimi: %d\n",sayi,CiftlerinCarpimi);
   printf("%d sayisina kadar olan tek sayilarin toplami: %d\n",sayi,TeklerinToplami);
   printf("%d sayisina kadar olan tek sayilarin carpimi: %d\n",sayi,TeklerinCarpimi);
   printf("%d adet cift sayi var\n",CiftAdeti);
   printf("%d adet tek sayi var\n",TekAdeti);
   printf("%d sayisina kadar olan cift sayilarin ortalamasi: %.2f\n",sayi,(float)CiftlerinToplami/CiftAdeti);
   printf("%d sayisina kadar olan tek sayilarin ortalamasi: %.2f",sayi,(float)TeklerinToplami/TekAdeti);
  
   return 0;

}