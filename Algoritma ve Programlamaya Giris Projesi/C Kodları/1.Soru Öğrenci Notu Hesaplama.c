#include "stdio.h"
main()
{
float vize, proje1, proje2, donemOdevi, final;
int ogrenciSayisi, i;
float yilIciNot, yilSonuNot, ort;
printf("Kac ogrenci icin not hesaplanacaktir?");
scanf("%d",&ogrenciSayisi);
for(i=1; i<=ogrenciSayisi; i++)
{
printf("Vize notunu giriniz:");
scanf("%f",&vize);
printf("1.Proje notunu giriniz:");
scanf("%f",&proje1);
printf("2.Proje notunu giriniz:");
scanf("%f",&proje2);
printf("Donem odevi notunu giriniz:");
scanf("%f",&donemOdevi);
printf("Final notunu giriniz:");
scanf("%f",&final);
if((0.00>=vize || vize>=100) || (0.00>=proje1 || proje1>=100) || (0.00>=proje2 || proje2>=100) || (0.00>=donemOdevi || donemOdevi>=100) || (0.00>=final || final>=100))
{
printf("Hatali not girdiniz.");
break;
}
yilIciNot = (vize * 0.45) + (proje1 * 0.2) + (proje2 * 0.2)  + (donemOdevi * 0.15);
yilSonuNot = final*1;
ort = (yilIciNot * 0.45) + (yilSonuNot * 0.55);
if(90.00<= ort && ort<=100.00) printf("%d.ogrenci icin harf notu AA\n",i);
else if(85.00<= ort && ort<=89.99) printf("%d.ogrenci icin harf notu BA\n",i);
else if(80.00<= ort && ort<=84.99) printf("%d.ogrenci icin harf notu BB\n",i);
else if(75.00<= ort && ort<=79.99) printf("%d.ogrenci icin harf notu CB\n",i);
else if(65.00<= ort && ort<=74.99) printf("%d.ogrenci icin harf notu CC\n",i);
else if(58.00<= ort && ort<=64.99) printf("%d.ogrenci icin harf notu DC\n",i);
else if(50.00<= ort && ort<=57.99) printf("%d.ogrenci icin harf notu DD\n",i);
else if(40.00<= ort && ort<=49.99) printf("%d.ogrenci icin harf notu FD\n",i);
else printf("%d.ogrenci icin harf notu FF\n",i);
}
}

