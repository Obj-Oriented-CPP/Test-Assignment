#include "Test.h"

Test::Test(string str){
	this->str = str;
}

string Test::getStr(){
	return str;
}

void Test::setStr(string str){
	this->str = str;
}