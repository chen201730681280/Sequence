#ifndef SEQUENCE_H
#define SEQUENCE_H
#include<iostream>
using namespace std;

class Try
{
public:
  Try(string);
  int length();
  int numberOf(char);
  string longestConsecutive();
  string longestReated();
private:
  int leng;
  int acounter;
  int ccounter;
  int tcounter;
  int gcounter;
  string dna;
};
#endif
