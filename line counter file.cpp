#include<iostream>
#include<fstream>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
     int noc=0,now=0,nol=0;
     FILE *fr;
     char ch;

   
     fr=fopen("old.txt","r");
     if(fr==NULL)
     {
          cout<<"\n Invalid File Name. \n No such File or Directory ";
          exit(0);
     }
     ch=fgetc(fr);
     while(ch!=EOF)
     {
          if(ch!=' ' && ch!='\n')
               noc++;
          if(ch==' ')
               now++;
          if(ch=='\n')
          {
               nol++;
               now++;
          }
          ch=fgetc(fr);
     }
     fclose(fr);
     cout<<" -------------------------------------";
     cout<<"\n Total No. of Characters  : "<<noc;
     cout<<"\n Total No. of Words       : "<<now;
     cout<<"\n Total No. of Lines       : "<<nol;

     return 0;
}
