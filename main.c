#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>


 //.kapi <kapı tipi> <giriş sayısı> <çıkış> <giriş listesi> <kapının girişlere cevap verme süresi>


int logTime(int *g)
{
  FILE *timelog;
  timelog= fopen("time.txt","a");
  time_t result;
  result = time(NULL);
  struct tm* brokentime = localtime(&result);
  fprintf(timelog,asctime(brokentime));             //ya cozumunu bulacaksın ya da tek tek fonksiyon olusturacaksın
 // fprintf(timelog, g);

  fputs(g, timelog);
  fclose(timelog);

}



int main()
{
   int giris,i;
    printf("Lojik Devre Benzetimi Programina Hos Geldiniz...\n\n");
    printf("Program ile ne yapmak istiyorsaniz lutfen komutununun bulundugu sayiyi giriniz.\n\n");
    printf("1)Y    2)I     3)H\n\n4)L    5)S     6)G\n\n7)G*   8)K     9)C\n\n");

   up: printf(">");
    scanf("%d",&giris);
    logTime(&giris);

    if(giris==1)
    {
        //TUM DOSYA ICERİGİNİ YAZDIRMAK
        char c[1000];
        FILE *devre;
        if ((devre = fopen("devre.txt", "r")) == NULL)
        {
            printf("Dosyayi acarken hata olustu!\a\a");
            exit(1);
        }

            // reads text until newline    https://www.programiz.com/c-programming/examples/read-file
        fscanf(devre,"%[^\0]", c); //^\n olursa newline'a kadar okur, \0 oldugunda sonlandırma karakterine kadar okuyor.

        printf("%s\n\n", c);
        fclose(devre);

        goto up;
    }
    if(giris==2)
    {

        //geri dönücem

        goto up;

    }

    if(giris==3)
    {
        int num=0,sayac=0;
        printf("devredeki kac elemanin degerini degistireceksiniz?:");
        scanf("%d",&num);
        printf("Degerini degistireceginiz elemanlari giriniz:");
        for(i=0;i<(num*2);i++){
            scanf("%c",&girisler[i]);
        }
        for(i=0;i<(num*2);i++){
            if(girisler[i]!=NULL)
                sayac++;
        }
        printf("Degistirilecek olanlar\n");
        for(i=0;i<sayac;i++){
            printf("%c  ",girisler[i]);
        }
        goto up;
    }

    if(giris==4)
    {

        //girilen degeri/degerleri 0 yapacak
        goto up;
    }

    if(giris==5)
    {

        //devreyi simule eder(calıstırır?)
        goto up;
    }

    if(giris==6)
    {


        //girilen ucların degerlerini konsolda gosterir
        goto up;
    }

    if(giris==7)
    {   printf("Tum uclarin guncel seviyesi asagida listelenmistir...\n\n");
        char gyildiz[1000];
        FILE *deger;
        if ((deger = fopen("deger.txt", "r")) == NULL)
        {
            printf("Dosyayi acarken hata olustu!\a\a");
            exit(1);
        }

            // reads text until newline    https://www.programiz.com/c-programming/examples/read-file
        fscanf(deger,"%[^\0]", gyildiz); //^\n olursa newline'a kadar okur, \0 oldugunda sonlandırma karakterine kadar okuyor.

        printf("%s\n\n", gyildiz);
        fclose(deger);


        //tüm ucların degerlerini konsolda gosterir
        goto up;
    }

    if(giris==8)
    {
        //komut.txt icindeki komutları konsoldan icra eder
        goto up;
    }

    if(giris==9)
    {
        //benzetimden cikis yapar
        //bu komut girilene kadar olan tum komutları log dosyasına tarih saat dakika olarak kaydet

        printf("\nBenzetimden cikiliyor...\n");
        exit(0);

    }







    return 0;
}
