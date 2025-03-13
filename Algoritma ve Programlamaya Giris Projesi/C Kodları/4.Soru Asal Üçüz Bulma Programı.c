#include "stdio.h"
int main() 
{
int i, a,kontrol0=0, kontrol1=0, kontrol2=0, kontrol3=0, j, k;
printf("Pozitif bir tam sayi giriniz:");
scanf("%d",&a);
for(i = 2; i <= a/2; ++i) {
if (a % i == 0) {
kontrol1 = 1;
break;
}	
}
for(j = 2; j <= (a+2) /2; ++j) {
if ((a+2) % j == 0) {
kontrol2 = 1;
break;
}	
}
for(k = 2; k <= (a+6) /2; ++k) {
if ((a+6) % k == 0) {
kontrol3 = 1;
break;
}
}
if(a == 1) {
printf("1 asal sayi degildir.\n");
kontrol0=1;
}
 else {
  if(kontrol1 == 1) {
printf("%d asal sayi degildir.\n",a);
}
else {
printf("%d asal sayidir.\n",a);
}	
}
if(kontrol2 == 0) {
printf("%d asal sayidir.\n",(a+2));
}
else {
printf("%d asal sayi degildir.\n",(a+2));
}
if(kontrol3 == 0) {
printf("%d asal sayidir.\n",(a+6));
}
else {
printf("%d asal sayi degildir.\n",(a+6));
}
 if ((kontrol0==0) && (kontrol1 == 0) && (kontrol2 ==0) && (kontrol3 == 0)) {
printf("Uc sayi da asaldir ve bu sayilara 'Asal Ucuz' denir.");
}
else
{
printf("Girilen sayi 'Asal Ucuz' tanimina uymuyor.");
}
}
