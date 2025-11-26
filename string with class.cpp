#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class clsInfo {

public:

	string Firstname;
	string lastname;

	string _fullname() {
		return Firstname + " " + lastname;
	}


};

	int main() {
	
		clsInfo koko;

		koko.Firstname= "abdullah";
		koko.lastname= "ashtar";

		cout << "your fullname is : " << koko._fullname();

		return 0;
	}