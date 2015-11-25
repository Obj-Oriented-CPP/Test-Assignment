#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <string>

using namespace std;

class Test{
private:
  string str;
public:
  Test(string);
  string getStr();
  void setStr(string);
};
#endif
