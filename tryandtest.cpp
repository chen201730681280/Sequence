#include"try.h"
#include<iostream>
using namespace std;

int main()
{
  Try m("dna.txt");
  cout<<"length: "<<m.length()<<endl;
  cout<<"A: "<<m.numberOf('A')<<endl;
  cout<<"C: "<<m.numberOf('C')<<endl;
  cout<<"T: "<<m.numberOf('T')<<endl;
  cout<<"G: "<<m.numberOf('G')<<endl;
  cout<<"The longest consecutive: "<<m.longestConsecutive()<<endl;
  return 0;
}
