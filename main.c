#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>


 //.kapi <kapı tipi> <giriş sayısı> <çıkış> <giriş listesi> <kapının girişlere cevap verme süresi>


int logTime(int *g)
{#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>


 //.kapi <kapý tipi> <giriþ sayýsý> <çýkýþ> <giriþ listesi> <kapýnýn giriþlere cevap verme süresi>
struct deger_devres1{
    char c1;
    char tab[5];
    int deger1;
};
struct deger_devres2{
    char c2;
    char tab[5];
    int deger2;
};
struct deger_devres3{
    char c3;
    char tab[5];
    int deger3;
};
struct deger_devres4{
    char c4;
    char tab[5];
    int deger4;
};
struct deger_devres5{
    char c5;
    char tab[5];
    int deger5;
};
struct deger_devres6{
    char c6;
    char tab[5];
    int deger6;
};
struct devres1{
    char satir1[40];
    char giris[8];
    char tab1[5];
    char girisch1;
    char girisch2;
};
struct devres2{
    char satir2[40];
    char cikis[8];
    char cikisch;
};
struct devres3{
    char satir3[40];
    char kapi[7];
    char tab1[5];
    char girisch1;
    char girisch2;
};
struct devres4{
    char satir4[40];
    char giris[8];
    char tab1[5];
    char girisch1;
    char girisch2;
};
struct devres5{
    char satir5[40];
    char giris[8];
    char tab1[5];
    char girisch1;
    char girisch2;
};

int logTime(int *g)
{
  FILE *timelog;
  timelog= fopen("time.txt","a");
  time_t result;
  result = time(NULL);
  struct tm* brokentime = localtime(&result);
  fprintf(timelog,asctime(brokentime));             //ya cozumunu bulacaksýn ya da tek tek fonksiyon olusturacaksýn
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

    char girisler[7];
    char kapi1[5];
    char kapi2[5];
    char kapi3[5];
    char a='a';
    char b='b';
    char c='c';
    char d='d';
    char e='e';
    char f='f';


    if(giris==1)
    {
        //TUM DOSYA ICERÝGÝNÝ YAZDIRMAK
        char c[1000];
        FILE *devre;
        if ((devre = fopen("devre.txt", "r")) == NULL)
        {
            printf("Dosyayi acarken hata olustu!\a\a");
            exit(1);
        }

            // reads text until newline    https://www.programiz.com/c-programming/examples/read-file
        fscanf(devre,"%[^\0]", c); //^\n olursa newline'a kadar okur, \0 oldugunda sonlandýrma karakterine kadar okuyor.

        printf("%s\n\n", c);
        fclose(devre);

        goto up;
    }
    if(giris==2)
    {
        FILE *deger_devre;
        if ((deger_devre = fopen("deger_devre.txt", "r")) == NULL)
        {
            printf("Dosyayi acarken hata olustu!\a\a");
            exit(1);
        }
        struct deger_devres1 k;
        deger_devre=fopen("deger_devre.txt","w");
        fputs("a    0\n",deger_devre);
        fputs("b    0\n",deger_devre);
        fputs("c    1\n",deger_devre);
        fputs("d    1\n",deger_devre);
        fputs("e    1\n",deger_devre);
        fputs("f    0\n",deger_devre);

        deger_devre=fopen("deger_devre.txt","r");
        fscanf(deger_devre,"%c",k.c1);//ÇALIŞMIYOR
        //fgets(deger_devre,"%s",k.tab);
        //fscanf(deger_devre,"%d",k.deger1);

        printf("%c",k.c1);//CALIŞMIYOR.
        //printf("%d",k.deger1);
        

       // goto up;

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



        /*ptr = (char*) malloc(num * sizeof(char));  // malloc hallet        //ayný cozumu 4. maddede de yap

        for(i = 0; i < num; ++i)
        {  printf("lojik-1 yapmak istediginiz degeri/degerleri giriniz: ");
            scanf("%d", ptr + i);

        }
        free(ptr);
        //girilen degeri/degerleri 1 yapacak*/
        goto up;
    }

    if(giris==4)
    {

        //girilen degeri/degerleri 0 yapacak
        goto up;
    }

    if(giris==5)
    {

        //devreyi simule eder(calýstýrýr?)
        goto up;
    }

    if(giris==6)
    {


        //girilen uclarýn degerlerini konsolda gosterir
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
        fscanf(deger,"%[^\0]", gyildiz); //^\n olursa newline'a kadar okur, \0 oldugunda sonlandýrma karakterine kadar okuyor.

        printf("%s\n\n", gyildiz);
        fclose(deger);


        //tüm uclarýn degerlerini konsolda gosterir
        goto up;
    }

    if(giris==8)
    {
        //komut.txt icindeki komutlarý konsoldan icra eder
        goto up;
    }

    if(giris==9)
    {
        //benzetimden cikis yapar
        //bu komut girilene kadar olan tum komutlarý log dosyasýna tarih saat dakika olarak kaydet

        printf("\nBenzetimden cikiliyor...\n");
        exit(0);

    }







    return 0;
}

 
