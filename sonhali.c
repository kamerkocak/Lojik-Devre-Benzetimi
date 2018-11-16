#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <string.h>
#include <time.h>
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

int logTime(char g[9])//	https://en.wikibooks.org/wiki/C_Programming/time.h
{
  FILE *timelog;
  timelog= fopen("logKomut.txt","a+");
  time_t result;
  result = time(NULL);
  struct tm* brokentime = localtime(&result);

  if(g[0]=='y'||g[0]=='Y')
  {
  	fputs(g,timelog);
	fputs("\t",timelog);
	fputs("devre.txt yuklendi",timelog);
	fputs("\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }

  if(g[0]=='i'||g[0]=='I')
  {
  	fputs(g,timelog);
	fputs("\t",timelog);
	fputs("degerler atandi",timelog);
	fputs("\t\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }

  if(g[0]=='h'||g[0]=='H')
  {
  	fputs(g,timelog);
	fputs("\t",timelog);


	if((g[2]=='a')&&((g[3]!='b')||g[3]!='c'||g[3]!='d'||g[3]!='e'||g[3]!='f'))
	{
		fputs("a girisi birlendi",timelog);
		//fputs("\t\t",timelog);
	}

	if((g[2]=='b')&&((g[3]!='a')||g[3]!='c'||g[3]!='d'||g[3]!='e'||g[3]!='f'))
	{
		fputs("b girisi birlendi",timelog);
		//fputs("\t\t",timelog);
	}
	if((g[2]=='c')&&((g[3]!='b')||g[3]!='a'||g[3]!='d'||g[3]!='e'||g[3]!='f'))
	{
		fputs("c girisi birlendi",timelog);
		//fputs("\t\t",timelog);
	}
	if((g[2]=='d')&&((g[3]!='b')||g[3]!='c'||g[3]!='a'||g[3]!='e'||g[3]!='f'))
	{
		fputs("d girisi birlendi",timelog);
		//fputs("\t\t",timelog);
	}
	if((g[2]=='e')&&((g[3]!='b')||g[3]!='c'||g[3]!='d'||g[3]!='a'||g[3]!='f'))
	{
		fputs("e girisi birlendi",timelog);
		//fputs("\t\t",timelog);
	}
	if((g[2]=='f')&&((g[3]!='b')||g[3]!='c'||g[3]!='d'||g[3]!='e'||g[3]!='a'))
	{
		fputs("f girisi birlendi",timelog);
		//fputs("\t\t",timelog);
	}



	//buraya yukseltgenen degeri yazacaksin
	fputs("\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }

  if(g[0]=='l'||g[0]=='L')
  {

  	fputs(g,timelog);
	fputs("\t",timelog);


	if((g[2]=='a')&&((g[3]!='b')||g[3]!='c'||g[3]!='d'||g[3]!='e'||g[3]!='f'))
	{
		fputs("a girisi sifirlandi",timelog);
		//fputs("\t\t\t\t",timelog);
	}

	if((g[2]=='b')&&((g[3]!='a')||g[3]!='c'||g[3]!='d'||g[3]!='e'||g[3]!='f'))
	{
		fputs("b girisi sifirlandi",timelog);
		//fputs("\t\t",timelog);
	}
	if((g[2]=='c')&&((g[3]!='b')||g[3]!='a'||g[3]!='d'||g[3]!='e'||g[3]!='f'))
	{
		fputs("c girisi sifirlandi",timelog);
		//fputs("\t\t",timelog);
	}
	if((g[2]=='d')&&((g[3]!='b')||g[3]!='c'||g[3]!='a'||g[3]!='e'||g[3]!='f'))
	{
		fputs("d girisi sifirlandi",timelog);
		//fputs("\t\t",timelog);
	}
	if((g[2]=='e')&&((g[3]!='b')||g[3]!='c'||g[3]!='d'||g[3]!='a'||g[3]!='f'))
	{
		fputs("e girisi sifirlandi",timelog);
		//fputs("\t\t",timelog);
	}
	if((g[2]=='f')&&((g[3]!='b')||g[3]!='c'||g[3]!='d'||g[3]!='e'||g[3]!='a'))
	{
		fputs("f girisi sifirlandi",timelog);
		//fputs("\t\t",timelog);
	}








//buraya alcaltilan degeri yazacaksin
	fputs("\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }

  if(g[0]=='s'||g[0]=='S')
  {

  	fputs(g,timelog);
	fputs("\t",timelog);
	//buraya degerlere ne yapýldigi yazilacak
	fputs("\t\t\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }

   if((g[0]=='g'||g[0]=='G')&&g[1]=='*')
  {
  		char GYildiz[100];
        FILE *deger;
        deger= fopen("deger.txt","r");
        fscanf(deger,"%[^\0]", GYildiz);
        fclose(deger);


  	fputs(g,timelog);
	fputs("\n",timelog);
	fputs(GYildiz,timelog);

	//buraya guncel degerler yan yana yazilacak
	fputs("\t\t\t\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }

   if((g[0]=='g'||g[0]=='G')&&g[1]!='*')
  {
  	fputs(g,timelog);
	fputs("\t",timelog);
	//buraya hangi degerin gosterilmesini istendigi ve son guncel degeri yazilacak
	fputs("\t\t\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }


  if((g[0]=='k'||g[0]=='K'))
  {
    fputs(g,timelog);
	fputs("\t\t\t\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);

  }

	if((g[0])=='c'||g[0]=='C')
	{
		fputs(g,timelog);
		fputs("\t\t\t\t",timelog);
		fputs(asctime(brokentime),timelog);
		fputs("\n",timelog);

	}

	fclose(timelog);


}
int main()
{
    int i;
    char giris[9];

    //char *pch2,*pch3;


    printf("Lojik Devre Benzetimi Programina Hos Geldiniz...\n\n");
    printf("Program ile ne yapmak istiyorsaniz lutfen komutunu giriniz.\n\n");
    printf("\n\t  KOMUTLAR\t\t\t\n\n");
    printf("	Y    I     H\n\n	L    S     G\n\n	G*   K     C\n\n");

    up: printf("\n>");
    gets(giris);
    logTime(giris);


    char a,b,c,d,e,f;
    char ad,bd,cd,dd,ed,fd;



    if(giris[0]=='y'||giris[0]=='Y')
    {
        //TUM DOSYA ICERIGINI YAZDIRMAK
        /*char c[1000];
        FILE *devre;
        if ((devre = fopen("devre.txt", "r")) == NULL)
        {
            printf("Dosyayi acarken hata olustu!\a\a");
            exit(1);
        }
            // reads text until newline    https://www.programiz.com/c-programming/examples/read-file
        fscanf(devre,"%[^\0]", c);
        printf("%s\n\n", c);*/

        struct devres1 dev1;
		struct devres2 dev2;
		struct devres3 dev3;
		struct devres4 dev4;
		struct devres5 dev5;
		FILE *devre;
		if((devre = fopen("devre.txt","r"))==NULL)
		{	printf("Dosyayi acarken hata olustu!\a\a");
		exit(1);
			 }
			 fscanf(devre,"%[^#]",dev1.satir1);
			 printf("%s",dev1.satir1);
			 fscanf(devre,"%[^\n]",dev1.tab1);
			 fscanf(devre,"%[^#]",dev2.satir2);
			 printf("%s",dev2.satir2);
			 fscanf(devre,"%[^\n]",dev2.cikis);
			 fscanf(devre,"%[^#]",dev3.satir3);
			 printf("%s\n",dev3.satir3);

        fclose(devre);


        FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("Y",komut);
  		fputs("\t",komut);
  		fputs("devre.txt",komut);
  		fputs("\n",komut);
  		fclose(komut);

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

        FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("I",komut);
  		fputs("\t",komut);
  		fputs("deger.txt",komut);
  		fputs("\n",komut);
  		fclose(komut);

        goto up;
    }

    if(giris[0]=='h'||giris[0]=='H')
    {

        char *degisecekler;
        char *pch;
        int sayac=1,i;
        pch=strtok(giris," ");
        while(pch!=NULL){
            degisecekler=pch;
            sayac++;
            pch=strtok(NULL," ");
        }
       // pch2=degisecekler;

            if(degisecekler[0]=='a'){
                ad=1;
                bd=0;
                cd=1;
                dd=1;
                ed=1;
                fd=0;
            }else if(degisecekler[0]=='b'){
                ad=0;
                bd=1;
                cd=1;
                dd=1;
                ed=1;
                fd=0;
            }else if(degisecekler[0]=='f'){
                ad=0;
                bd=0;
                cd=1;
                dd=1;
                ed=1;
                fd=1;
            }else if(degisecekler[0]=='c'||degisecekler[0]=='d'||degisecekler[0]=='e'){
                ad=0;
                bd=0;
                cd=1;
                dd=1;
                ed=1;
                fd=0;
            }
        FILE *devre=fopen("deger_devre.txt","w");
        fprintf(devre,"a   %d\n",ad);
        fprintf(devre,"b   %d\n",bd);
        fprintf(devre,"c   %d\n",cd);
        fprintf(devre,"d   %d\n",dd);
        fprintf(devre,"e   %d\n",ed);
        fprintf(devre,"f   %d\n",fd);
        fclose(devre);

         FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("H",komut);
  		fputs("\t",komut);
  		fputs("\n",komut);
  		fclose(komut);

        goto up;
    }

    if(giris[0]=='l'||giris[0]=='L')
    {
        char *degisecekler;
        char *pch;
        int sayac=1,i;
        pch=strtok(giris," ");
        while(pch!=NULL){
            degisecekler=pch;
            sayac++;
            pch=strtok(NULL," ");
        }
        //pch3=degisecekler;
            if(degisecekler[0]=='c'){
                ad=0;
                bd=0;
                cd=0;
                dd=1;
                ed=1;
                fd=0;
            }else if(degisecekler[0]=='d'){
                ad=0;
                bd=0;
                cd=1;
                dd=0;
                ed=1;
                fd=0;
            }else if(degisecekler[0]=='e'){
                ad=0;
                bd=0;
                cd=1;
                dd=1;
                ed=0;
                fd=0;
            }else if(degisecekler[0]=='a'||degisecekler[0]=='b'||degisecekler[0]=='f'){
                ad=0;
                bd=0;
                cd=1;
                dd=1;
                ed=1;
                fd=0;
            }
        FILE *devre=fopen("deger_devre.txt","w");
        fprintf(devre,"a   %d\n",ad);
        fprintf(devre,"b   %d\n",bd);
        fprintf(devre,"c   %d\n",cd);
        fprintf(devre,"d   %d\n",dd);
        fprintf(devre,"e   %d\n",ed);
        fprintf(devre,"f   %d\n",fd);

        FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("L",komut);
  		fputs("\t",komut);
  		fputs("\n",komut);
  		fclose(komut);

        goto up;
    }

    if(giris[0]=='s'||giris[0]=='S')
    {
        /* FILE *timelog;
        timelog= fopen("logKomut.txt","a+");
        if(pch2!=NULL){
        if(pch2[0]=='a'){
            fputs("0ns: a 0->1                  3ns: d 1->0                 4ns: f 0->1\n",timelog);
        }else if(pch2[0]=='b'){
            fputs("0ns: b 0->1                  1ns: e 1->0                 3ns: d 1->0                 4ns: f 0->1\n",timelog);
        }else if(pch2[0]=='f'){
            fputs("0ns: f 0->1\n",timelog);
        }
        }
        fclose(timelog);


        FILE *timelog1;
        timelog1= fopen("logKomut.txt","a+");
        if(pch3!=NULL){
        if(pch3[0]=='c'){
            fputs("0ns: c 1->0\n",timelog);
        }else if(pch3[0]=='d'){
            fputs("0ns: d 1->0                  1ns: f 0->1\n",timelog);
        }else if(pch3[0]=='e'){
            fputs("0ns: e 1->0                  1ns: f 0->1\n",timelog);
        }
        }
        fclose(timelog1);*/


        //xorgate
        if(dd==0 && ed==0){
            fd=0;
        }else if(dd==0 && ed==1){
            fd=1;
        }else if(dd==1 && ed==0){
            fd=1;
        }else if(dd==1 && ed==1){
            fd=0;
        }

        //nandgate
        if(bd==0 && cd==0){
            ed=1;
        }else if(bd==0 && cd==1){
            ed=1;
        }else if(bd==1 && cd==0){
            ed=1;
        }else if(bd==1 && cd==1){
            ed=0;
        }


        //norgate
        if(ad==0 && bd==0){
            dd=1;
        }else if(ad==0 && bd==1){
            dd=0;
        }else if(ad==1 && bd==0){
            dd=0;
        }else if(ad==1 && bd==1){
            dd=0;
        }

        FILE *devre=fopen("deger_devre.txt","w");
        fprintf(devre,"a   %d\n",ad);
        fprintf(devre,"b   %d\n",bd);
        fprintf(devre,"c   %d\n",cd);
        fprintf(devre,"d   %d\n",dd);
        fprintf(devre,"e   %d\n",ed);
        fprintf(devre,"f   %d\n",fd);



        FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("S",komut);
  		fputs("\t",komut);
  		fputs("\n",komut);
  		fclose(komut);

        //devreyi simule eder(calistirir)
        goto up;
    }

    if((giris[0]=='g'||giris[0]=='G')&&giris[1]!='*')
    {
        char *uc;
        char *pch;
        int sayac=1,i;
        pch=strtok(giris," ");
        while(pch!=NULL){
            uc=pch;
            sayac++;
            pch=strtok(NULL," ");
        }
        if(uc[0]=='a'){
            printf("%d\n",ad);
        }else if(uc[0]=='b'){
            printf("%d\n",bd);
        }else if(uc[0]=='c'){
            printf("%d\n",cd);
        }else if(uc[0]=='d'){
            printf("%d\n",dd);
        }else if(uc[0]=='e'){
            printf("%d\n",ed);
        }else if(uc[0]=='f'){
            printf("%d\n",fd);
        }

        FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("G",komut);
  		fputs("\t",komut);
  		fputs("\n",komut);
  		fclose(komut);
        //girilen uclaryn degerlerini konsolda gosterir
        goto up;
    }

    if((giris[0]=='g'||giris[0]=='G') && giris[1]=='*')
    {
            // reads text until newline    https://www.programiz.com/c-programming/examples/read-file
        	printf("Tum uclarin guncel seviyesi asagida listelenmistir...\n\n");
        	char gyildiz[1000];
        	FILE *deger;
        	if ((deger = fopen("deger.txt", "r")) == NULL)
        	{
            	printf("Dosyayi acarken hata olustu!\a\a");
            	exit(1);
        	}
        	fscanf(deger,"%[^\0]", gyildiz);
        	printf("%s\n\n", gyildiz);
        	fclose(deger);

			FILE *komut;
  			komut= fopen("komut.txt","a+");
  			fputs("G*",komut);
  			fputs("\t",komut);
  			fputs("\n",komut);
  			fclose(komut);
        //tüm uclaryn degerlerini konsolda gosterir
        goto up;
    }

    if(giris[0]=='k'||giris[0]=='K')
    {
        //komut.txt icindeki komutlary konsoldan icra eder
       	char k[1000];
        FILE *komut;
        if ((komut = fopen("komut.txt", "r")) == NULL)
        {
            printf("Dosyayi acilirken hata olustu!");   // reads text until newline    https://www.programiz.com/c-programming/examples/read-file
            exit(1);
        }

        fscanf(komut,"%[^\0]", k);
		printf("\n%s\n", k);
        fclose(komut);
        goto up;
    }

    if(giris[0]=='c'||giris[0]=='C')
    {
        //benzetimden cikis yapar
        //bu komut girilene kadar olan tum komutlary log dosyasyna tarih saat dakika olarak kaydet

        FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("C",komut);
  		fputs("\t",komut);
  		fputs("\n\n",komut);
  		fclose(komut);
        printf("\nBenzetimden cikiliyor...\n");
        exit(0);
	}

  return 0;



}
