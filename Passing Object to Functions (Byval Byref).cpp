#include <iostream>
#include <string>

using namespace std;


class clsA {

public:

	int x = 0;
	
	void print() {
		cout << x << endl;
	
	};
};


	void Function1(clsA A1) {
		A1.x = 20;
	};

	
	void Function2(clsA& A1) {
		A1.x = 200;
	};




int main() {
	
	clsA A1;
	A1.x = 10;
	A1.print();

	Function1(A1);
	cout << "Funciton1 (clsA A1) = "; // by vallllllllll;
	A1.print();

	Function2(A1);
	cout << "Function2 (clsa &A1) = "; // by ref
	A1.print();


}