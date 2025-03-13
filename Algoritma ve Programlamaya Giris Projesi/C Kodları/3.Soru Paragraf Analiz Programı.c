#include "stdio.h"
#include "conio.h"
#include "string.h"
int main(void)
{
char metin[255];
int sesli=0, sessiz=0, kelimeSayisi=0, ePosta=0, cumleSayisi=0, k, i, a, b, x, y;
char harf;
printf("Bir metin giriniz:");
gets(metin);
for (k=0; metin[k] != '\0'; k++)
{
if (metin[k] == ' ' && metin [k+1] != ' ')
{
kelimeSayisi= kelimeSayisi +1;
}
}
if (kelimeSayisi==0) printf("Girilen metinde 1 tane kelime vardir.\n");
else printf("Girilen metinde %d tane kelime vardir.\n",kelimeSayisi+1); 
for (i=0; i<strlen(metin); i++)
{
harf = metin[i];
if(harf == 'a'||harf == 'A'||harf == 'e'||harf == 'E'||harf == 'i'||harf == 'I'||harf == 'o'||harf == 'O'||harf == 'u'||harf == 'U')
{
sesli+=1;
}
else if(harf!=' '&& harf!='.')
{
sessiz++;
}
}
char isaret1[] = {'.'};
int boyut1= (sizeof(isaret1)/sizeof(char));
for (a=0; a<=strlen(metin); a++)
{
for (b=0; b<boyut1; b++)
{
if (metin[a] == isaret1[b])
{
cumleSayisi++;
}
}
}
char isaret2[] = {'@'};
int boyut2= (sizeof(isaret2)/sizeof(char));
for (x=0; x<=strlen(metin); x++)
{
for (y=0; y<boyut2; y++)
{
if (metin[x] == isaret2[y])
{
ePosta++;
cumleSayisi= cumleSayisi-1;
}
}
}
printf("Sesli harf sayisi: %d\nSessiz harf sayisi: %d'dir.\n",sesli,sessiz);
printf("Girilen metinde %d tane cumle vardir.\n",cumleSayisi);
printf("Girilen metinde %d tane e posta adresi vardir.\n",ePosta);
getch();
}
