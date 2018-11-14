


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{   char karakter[2];
    FILE *timelog;
  timelog= fopen("timeabc.txt","a+");
  printf("bir karakter giriniz:");
  scanf("%s",&karakter);
  fputs(karakter, timelog);
  time_t result;
  result = time(NULL);
  struct tm* brokentime = localtime(&result);
  fputs("\t",timelog);
  fprintf(timelog,asctime(brokentime));
  fputs("\n\n\n\n",timelog);
  fclose(timelog);



    return 0;
}



