#include"try.h"
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

Try::Try(string filename)
{
   ifstream file;
   file.open(filename);
   if(!file.is_open())
   {
    cout<<"wrong"<<endl;
   }
   leng=0;
   string a;
   while(getline(file,a))
   {
    dna += a;
   }
   leng=dna.length();
   acounter=0;
   ccounter=0;
   tcounter=0;
   gcounter=0;
   for(int i=0;i<leng;i++)
   {
      switch(dna[i])
      {
       case 'A':
        acounter++;
        break;
       case 'C':
        ccounter++;
        break;
       case 'T':
        tcounter++;
        break;
       case 'G':
        gcounter++;
        break;
       default:
        break;
     }
   }
}
int Try::length()
{
 return leng;
}
int Try::numberOf(char base)
{  
  
  switch(base)  
 {
  case 'A':
	return acounter;
	break;
  case 'C':
 	return ccounter;
	break;
  case 'T':
	return tcounter;
	break;
  case 'G':
  	return gcounter;
	break;
  }
}
string Try::longestConsecutive()
{
     int dcounter=1;//计算现在的种类的数量
     int bcounter=1;//计算之前最长的数量
     char dtype;//现在正在计算的种类
     char btype;//之前最长的种类
    
     for(int i=1;i<leng;i++)
     {
        if(dna[i]==dna[i-1])
        {
          dcounter++;
          dtype=dna[i];
        }
        else
        {
          if(dcounter>bcounter)
          {
             bcounter=dcounter;
             btype=dtype;
             dcounter=1;
             dtype=dna[i];
          }
          else
          {
            dcounter=1;
            dtype=dna[i];
          }
        }
    }
 string squ;
     squ.assign(bcounter,btype);
     return squ;

}
string Try::longestReated()
{
}

