#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>


 //.kapi <kap� tipi> <giri� say�s�> <��k��> <giri� listesi> <kap�n�n giri�lere cevap verme s�resi>


int logTime(int *g)
{
  FILE *timelog;
  timelog= fopen("time.txt","a");
  time_t result;
  result = time(NULL);
  struct tm* brokentime = localtime(&result);
  fprintf(timelog,asctime(brokentime));             //ya cozumunu bulacaks�n ya da tek tek fonksiyon olusturacaks�n
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
        //TUM DOSYA ICER�G�N� YAZDIRMAK
        char c[1000];
        FILE *devre;
        if ((devre = fopen("devre.txt", "r")) == NULL)
        {
            printf("Dosyayi acarken hata olustu!\a\a");
            exit(1);
        }

            // reads text until newline    https://www.programiz.com/c-programming/examples/read-file
        fscanf(devre,"%[^\0]", c); //^\n olursa newline'a kadar okur, \0 oldugunda sonland�rma karakterine kadar okuyor.

        printf("%s\n\n", c);
        fclose(devre);

        goto up;
    }
    if(giris==2)
    {

        //geri d�n�cem

        goto up;

    }

    if(giris==3)
    {

        int num,*ptr;
        printf("devredeki kac elemanin degerini degistireceksiniz?");
        scanf("%d",num);
        ptr = (char*) malloc(num * sizeof(char));  // malloc hallet        //ayn� cozumu 4. maddede de yap

        for(i = 0; i < num; ++i)
        {  printf("lojik-1 yapmak istediginiz degeri/degerleri giriniz: ");
            scanf("%d", ptr + i);

        }
        free(ptr);
        //girilen degeri/degerleri 1 yapacak
        goto up;
    }

    if(giris==4)
    {

        //girilen degeri/degerleri 0 yapacak
        goto up;
    }

    if(giris==5)
    {

        //devreyi simule eder(cal�st�r�r?)
        goto up;
    }

    if(giris==6)
    {


        //girilen uclar�n degerlerini konsolda gosterir
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
        fscanf(deger,"%[^\0]", gyildiz); //^\n olursa newline'a kadar okur, \0 oldugunda sonland�rma karakterine kadar okuyor.

        printf("%s\n\n", gyildiz);
        fclose(deger);


        //t�m uclar�n degerlerini konsolda gosterir
        goto up;
    }

    if(giris==8)
    {
        //komut.txt icindeki komutlar� konsoldan icra eder
        goto up;
    }

    if(giris==9)
    {
        //benzetimden cikis yapar
        //bu komut girilene kadar olan tum komutlar� log dosyas�na tarih saat dakika olarak kaydet

        printf("\nBenzetimden cikiliyor...\n");
        exit(0);

    }





////////        char a[1000];
////////        char girisdosya[]= ".giris";
////////        char kapidosya[]=".kapi";
////////        FILE *devre;
////////        if ((devre = fopen("devre.txt", "r")) == NULL)
////////        {
////////            printf("Error! opening file");
////////            exit(1);
////////        }
////////         fscanf(devre,"%[^\0]", a);
////////
////////        char *pointer,*ptr;
////////        pointer=strstr(a,girisdosya);
////////        printf("%d\n",pointer);
////////
////////        pointer++;
////////
////////        printf("%d\n",pointer);
////////        ptr=strstr(a,"b");
////////        if(&ptr==&pointer)
////////        {
////////            printf("b karakteri bulundu");
////////        }






    return 0;
}