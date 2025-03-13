#include <stdio.h>
#include <string.h>
#define MAX_RANDEVULAR 5

struct RANDEVU {
  char adSoyad[50];
  char tarih[20];
  char saat[20];
};

int main() {
  struct RANDEVU randevular[MAX_RANDEVULAR];
  int randevuSayisi = 0, i, j;
for(i =0; i<5; i++)
  {
  printf("Randevu olusturmak icin ad-soyad, tarih ve saat bilgilerini giriniz:\n");
  printf("Ad-Soyad: ");
  scanf("%s\n",&randevular[randevuSayisi].adSoyad);
  printf("Tarih: ");
  scanf("%s\n",&randevular[randevuSayisi].tarih);
  printf("Saat: ");
  scanf("%s\n",&randevular[randevuSayisi].saat);
  if (randevuSayisi < MAX_RANDEVULAR) {
  randevuSayisi++;
    printf("Randevu olusturuldu!\n");
  } else {
    printf("Uzgunuz, bu tarihteki randevular dolmus. Lutfen baska bir tarih secin.\n");
  }
}
  printf("Randevu Listesi:\n");
  for (j = 0; j < randevuSayisi; j++) {
    printf("%s %s %s\n", randevular[j].adSoyad, randevular[j].tarih, randevular[j].saat);
  }
  return 0;
}
