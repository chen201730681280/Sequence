#ifndef SEQUENCE_H
#define SEQUENCE_H

#include<iostream>
#include<cstdlib>
#include<cmath>
#include<cstdio>
#include<fstream>
#include<cstring>
#include<string>
using namespace std;
class Sequence
{
private:
	int numOfa=0;
	int numOfc=0;
	int numOft=0;
	int numOfg=0;
	int base[1200000]={};
	enum bases
	{
	  A=1,
	  C=2,
	  T=3,
	  G=4,
 	};
public:
	Sequence(string);
        int length();
        int numberOf(char);
        string longestConsecutive();
        string longestRepeated();

};
#endif
