#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>


 //.kapi <kapý tipi> <giriþ sayýsý> <çýkýþ> <giriþ listesi> <kapýnýn giriþlere cevap verme süresi>
struct deger_devres1{
    char c1;
    char tab[5];
    char deger1;
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


    char a,b,c,d,e,f;
    char ad,bd,cd,dd,ed,fd;



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
        FILE *ptDosya;
        if ((ptDosya = fopen("deger_devre.txt", "r")) == NULL)
        {
            printf("Dosyayi acarken hata olustu!\a\a");
            exit(1);
        }
        char ch;
        struct deger_devres1 k;
        struct deger_devres2 t;
        struct deger_devres3 x;
        struct deger_devres4 y;
        struct deger_devres5 u;
        struct deger_devres6 z;

        ptDosya=fopen("deger_devre.txt","r");
        fputs("a    0\n",ptDosya);
        fputs("b    0\n",ptDosya);
        fputs("c    1\n",ptDosya);
        fputs("d    1\n",ptDosya);
        fputs("e    1\n",ptDosya);
        fputs("f    0\n",ptDosya);
        do{
            ch=getc(ptDosya);
            printf("%c",ch);
        }while(ch!=EOF);

        ptDosya=fopen("deger_devre.txt","r");

        k.c1=getc(ptDosya);
        a=k.c1;
        fgets(k.tab, 5, ptDosya);
        k.deger1=getc(ptDosya);
        ad=k.deger1;

        t.c2=getc(ptDosya);
        b=t.c2;
        fgets(t.tab,5,ptDosya);
        t.deger2=getc(ptDosya);
        bd=t.deger2;

        x.c3=getc(ptDosya);
        c=x.c3;
        fgets(x.tab,5,ptDosya);
        x.deger3=getc(ptDosya);
        cd=x.deger3;

        y.c4=getc(ptDosya);
        d=y.c4;
        fgets(y.tab,5,ptDosya);
        y.deger4=getc(ptDosya);
        dd=y.deger4;

        u.c5=getc(ptDosya);
        e=u.c5;
        fgets(u.tab,5,ptDosya);
        u.deger5=getc(ptDosya);
        ed=u.deger5;

        z.c6=getc(ptDosya);
        f=z.c6;
        fgets(z.tab,5,ptDosya);
        z.deger6=getc(ptDosya);
        fd=z.deger6;

    }

    if(giris[0]=='h'||giris[0]=='H')
    {
        
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
