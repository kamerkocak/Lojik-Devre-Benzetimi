FILE *timelog;
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
        fclose(timelog1);
