#include"Sequence.h"
using namespace std;

Sequence::Sequence(string filename)
{
    std::ifstream file;//输入流file
    file.open(filename);//打开file
    if(!file.is_open())
    {
	cout<<"wrong"<<endl;
    }
    char a=file.get();//获得字符
    int k=0;
    while(a!=EOF)//将字符转化为数字，储存ATCG的数量。
    {
 
       switch(a)
       {
	case 'A':
	   numOfa++;
           base[k++]=1;
	   break;
	case 'C':
	   numOfc++;
	   base[k++]=2;
	   break;
	case 'T':
           numOft++;
	   base[k++]=3;
	   break;
	case 'G':
	   numOfg++;
           base[k++]=4;
 	   break;
	default:
	   break;
	}
	a=file.get();
     }
}
int Sequence::length()
{
    return (numOfa+numOft+numOfc+numOfg);
}
int Sequence::numberOf(char base)
{
switch(base)
    {
        case 'A':
          return numOfa;
          break;
        case 'C':
          return numOfc;
          break;
        case 'T':
          return numOft;
          break;
        case 'G':
          return numOfg;
          break;
        default:
          break;
        }
}
string Sequence::longestConsecutive()
{
     int acounter=1;//计算现在的种类的数量
     int bcounter=1;//计算之前最长的数量
     int atype=0;//现在正在计算的种类
     int btype=0;//之前最长的种类
     int  length=numOfa+numOfc+numOft+numOfg;
     for(int i=1;i<length;i++)
     { 
	if(base[i]==base[i-1])
	{
	  acounter++;
          atype=base[i];
	}
	else
	{
	  if(acounter>bcounter)
	  {
	     bcounter=acounter;
	     btype=atype;
	     acounter=1;
	     atype=base[i];
          }
	  else
	  {
	    acounter=1;
	    atype=base[i];
	  }
        }
    }
     char c;
     switch(btype)
     {
	case 1:
	   c='A';
	   break;
	case 2:
	   c='C';
	   break;
	case 3:
	   c='T';
	   break;
	case 4:
	   c='G';
	   break;
	default:
	   break;
     }
     cout<<bcounter<<endl;
     string squ;
     squ.assign(bcounter,c);
     return squ;
}
string Sequence::longestRepeated()
{
}

