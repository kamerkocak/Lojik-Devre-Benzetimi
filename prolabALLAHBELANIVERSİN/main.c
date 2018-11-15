#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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



int logTime(char g[4])
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
	fputs("\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }
  
  if(g[0]=='h'||g[0]=='H')
  {
  	fputs(g,timelog); 
	fputs("\t",timelog);
	//buraya yukseltgenen degeri yazacaksin
	fputs("\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }
  
  if(g[0]=='l'||g[0]=='L')
  {
  	fputs(g,timelog); 
	fputs("\t",timelog);
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
	fputs("\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }
  
   if((g[0]=='g'||g[0]=='G')&&g[1]=='*')
  {
  		char GYildiz[100];
        FILE *deger;
        deger= fopen("deger.txt","r");
        fscanf(deger,"%[^\0]", GYildiz); 
		printf("%s", GYildiz);
        fclose(deger);
        	
        	
  	fputs(g,timelog); 
	fputs("\t\t\t",timelog);
	fputs(GYildiz,timelog);
	
	//buraya guncel degerler yan yana yazilacak
	fputs("\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }
  
   if((g[0]=='g'||g[0]=='G')&&g[1]!='*')
  {
  	fputs(g,timelog); 
	fputs("\t",timelog);
	//buraya hangi degerin gosterilmesini istendigi ve son guncel degeri yazilacak
	fputs("\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  }
  
  
  else
  {
    fputs(g,timelog); 
	fputs("\t",timelog);
	fputs(asctime(brokentime),timelog);
	fputs("\n",timelog);
  	
  }

	fclose(timelog);
	
	
}

int main() {
	
	int i;
    char giris[4];
    printf("Lojik Devre Benzetimi Programina Hos Geldiniz...\n\n");
    printf("Program ile ne yapmak istiyorsaniz lutfen komutunu giriniz.\n\n");
    printf("\n\t  KOMUTLAR\t\t\t\n\n");
    printf("	Y    I     H\n\n	L    S     G\n\n	G*   K     C\n\n");

    up: printf("\n>");
    gets(giris);
    logTime(giris);
    
    
    char a,b,c,d,e,f;
    char ad,bd,cd,dd,ed,fd;
    
    if(giris[0]=='Y'||giris[0]=='y')     //TUM DOSYA ICERIGINI YAZDIRMAK
    {
        char c[1000];
        FILE *devre;
        if ((devre = fopen("devre.txt", "r")) == NULL)
        {
            printf("Dosyayi acilirken hata olustu!");   // reads text until newline    https://www.programiz.com/c-programming/examples/read-file
            exit(1);
        }

        fscanf(devre,"%[^\0]", c); 
		printf("%s\n\n", c);
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
    
  	if(giris[0]=='I'||giris[0]=='i')     
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
	
	if(giris[0]=='H'||giris[0]=='h')
	{
	
		char girisH[1]; 
		scanf("%s",&girisH);
        FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("H",komut);
  		fputs("\t",komut);
  		fputs(girisH,komut);
  		fputs("\n",komut);
  		fclose(komut);
  		
        goto up;
	
	}   
	
	if(giris[0]=='L'||giris[0]=='l')
    {
        char girisL[1];
		scanf("%s",&girisL);
        FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("L",komut);
  		fputs("\t",komut);
  		fputs(girisL,komut);
  		fputs("\n",komut);
  		fclose(komut);
        goto up;
    }

    if(giris[0]=='S'||giris[0]=='s')    //devreyi simule eder(calistirir)
    {
		FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("S",komut);
  		fputs("\t",komut);
  		fputs("\n",komut);
  		fclose(komut);
        goto up;
    }
	
	 if((giris[0]=='g'|| giris[0]=='G') && giris[1]=='*')	
    {
    	 
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
		 
		goto up;
	}
	
    if((giris[0]=='g'||giris[0]=='G')&&giris[1]!='*')	//hangi uc girildi ise guncel degerini konsolda gosterir
    {
		char girisG[1];
        scanf("%s",&girisG);
        FILE *komut;
  		komut= fopen("komut.txt","a+");
  		fputs("G",komut);
  		fputs("\t",komut);
  		fputs(girisG,komut);
  		fputs("\n",komut);
  		fclose(komut);
        goto up;
        
    }
    
	
	if(giris[0]=='K'||giris[0]=='k') 	//komut.txt icindeki komutlari konsoldan icra eder??????????
    {
    	
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

    if(giris[0]=='C'||giris[0]=='c')		//benzetimden cikis yapar   //bu komut girilene kadar olanlari log dosyasyna tarih saat dakika olarak kaydet
    {	
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


