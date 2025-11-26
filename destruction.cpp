#include <iostream>
#include <string>
using namespace std;
class clsinfo {


public:

	clsinfo() {
		cout << "i am  here";
	}
	~clsinfo() {
		cout << "i am  here";
	}


};


void Fun1() {
	clsinfo person;
}

void Fun2() {
	clsinfo* person2 = new clsinfo;
	delete person2; // we put it to avoid destruction for what is after it! release the object from the memory!
}


int main() {

	Fun1();
	Fun2();

	system("pause>0");
}

