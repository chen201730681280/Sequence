#include"Sequence.h"
#include<iostream>
using namespace std;

int main()
{
 Sequence m("dna.txt");
 cout<<m.length()<<endl;
 cout<<"The number of A is "<<m.numberOf('A')<<endl;
 cout<<"The number of C is "<<m.numberOf('C')<<endl;
 cout<<"The number of T is "<<m.numberOf('T')<<endl;
 cout<<"The number of G is "<<m.numberOf('G')<<endl;
 cout<<"The longest consecutive sequence is "<<m.longestConsecutive()<<endl;

 return 0;
}

