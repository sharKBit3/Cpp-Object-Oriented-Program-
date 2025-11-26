#include <iostream>
#include <string>

using namespace std;

class clsinfo {

private:

	string _Firstname;
	string _Lastname;

public:

	//parameterized constructor
	clsinfo(string Name, string Surname) {

		_Firstname = Name;
		_Lastname = Surname;

	}

	clsinfo(clsinfo &box) {

		_Firstname = box.myfirstname();
		_Lastname = box.mylastname();

	}


	void setmyfirstname(string firstname) {
		_Firstname = firstname;
	}

	
	string myfirstname() {
		return _Firstname;
	}

	void setmylastname(string lastname) {
		_Lastname = lastname;
	}


	string mylastname(){
		return _Lastname;
	}



	void Print() {
		
		cout << "my info here" << endl;
		cout << "------------" << endl;
		cout << "your first name is: " << _Firstname << endl;
		cout << "your lastname name is: " << _Lastname << endl;

	}



};


int main() {

	clsinfo information1("abdullah", "ashtar");
	information1.Print();

	//copy constructor 
	clsinfo information2 = information1;
	information2.Print();

}