#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <time.h>


 //.kapi <kapy tipi> <giri? sayysy> <çyky?> <giri? listesi> <kapynyn giri?lere cevap verme süresi>
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

int logTime(char g[3])
{	
 
 	
	
  FILE *timelog;
  timelog= fopen("logKomut.txt","a+");
  
  fputs(g, timelog);
  time_t result;
  result = time(NULL);
  struct tm* brokentime = localtime(&result);
  fputs("\t",timelog);
  fprintf(timelog,asctime(brokentime));
  fputs("\n\n\n\n",timelog);
  fclose(timelog);


}



int main()
{
    int i;
    char giris[3];
    printf("Lojik Devre Benzetimi Programina Hos Geldiniz...\n\n");
    printf("Program ile ne yapmak istiyorsaniz lutfen komutunu giriniz.\n\n");
    printf("\n\t  KOMUTLAR\t\t\t\n\n");
    printf("	Y    I     H\n\n	L    S     G\n\n	G*   K     C\n\n");

    up: printf(">");
    scanf("%s",&giris);
    logTime(giris);


    if(giris[0]=='y'||giris[0]=='Y')
    {
        //TUM DOSYA ICERIGINI YAZDIRMAK
        char c[1000];
        FILE *devre;
        if ((devre = fopen("devre.txt", "r")) == NULL)
        {
            printf("Dosyayi acarken hata olustu!\a\a");
            exit(1);
        }

            // reads text until newline    https://www.programiz.com/c-programming/examples/read-file
        fscanf(devre,"%[^\0]", c); //^\n olursa newline'a kadar okur, \0 oldugunda sonlandyrma karakterine kadar okuyor.

        printf("%s\n\n", c);
        fclose(devre);

        goto up;
    }
    if(giris[0]=='i'||giris[0]=='I')
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

    if(giris[0]=='h'||giris[0]=='H')
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



        /*ptr = (char*) malloc(num * sizeof(char));  // malloc hallet        //ayny cozumu 4. maddede de yap
        for(i = 0; i < num; ++i)
        {  printf("lojik-1 yapmak istediginiz degeri/degerleri giriniz: ");
            scanf("%d", ptr + i);
        }
        free(ptr);
        //girilen degeri/degerleri 1 yapacak*/
        goto up;
    }

    if(giris[0]=='l'||giris[0]=='L')
    {

        //girilen degeri/degerleri 0 yapacak
        goto up;
    }

    if(giris[0]=='s'||giris[0]=='S')
    {

        //devreyi simule eder(calistirir)
        goto up;
    }

    if(giris[0]=='g'||giris[0]=='G')
    {


        //girilen uclaryn degerlerini konsolda gosterir
        goto up;
    }

    if(giris[0]=='g'||giris[0]=='G' && giris[1]=='*')   //BURADA BIR SIKINTIVAR AMA COZCEM
    {   printf("Tum uclarin guncel seviyesi asagida listelenmistir...\n\n");
        char gyildiz[1000];
        FILE *deger;
        if ((deger = fopen("deger.txt", "r")) == NULL)
        {
            printf("Dosyayi acarken hata olustu!\a\a");
            exit(1);
        }

            // reads text until newline    https://www.programiz.com/c-programming/examples/read-file
        fscanf(deger,"%[^\0]", gyildiz); //^\n olursa newline'a kadar okur, \0 oldugunda sonlandyrma karakterine kadar okuyor.

        printf("%s\n\n", gyildiz);
        fclose(deger);


        //tüm uclaryn degerlerini konsolda gosterir
        goto up;
    }

    if(giris[0]=='k'||giris[0]=='K')
    {
        //komut.txt icindeki komutlary konsoldan icra eder
        goto up;
    }

    if(giris[0]=='c'||giris[0]=='C')
    {
        //benzetimden cikis yapar
        //bu komut girilene kadar olan tum komutlary log dosyasyna tarih saat dakika olarak kaydet

        printf("\nBenzetimden cikiliyor...\n");
        exit(0);

    }



    return 0;
}
