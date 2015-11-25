#include "Test.h"

int main(){

	Test myTest = Test("Frankly my dear");

	cout << myTest.getStr() << endl;

	myTest.setStr("I don't give a damn!");

	cout << myTest.getStr() << endl;
	
	return 0;
}