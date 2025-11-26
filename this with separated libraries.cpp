#pragma once
using namespace std;
class clsA
{
private:
	double _Phone;
	int _a, _b;
	int _sum;
	string _Firstname;
	string _Lastname;
	string _Fullname;


public:

	clsA(short Phone, int a, int b, string Name, string Surname, string Fullname) {

		this->_Phone = Phone;
		_a = a;
		_b = b;
		_Firstname = Name;
		_Lastname = Surname;
		_Fullname = Fullname;
	
	}

	 void SetPhone(double Phone1){
		_Phone = Phone1;
	}

	double Phone() {
		return _Phone;
	}

	
	void ab(int a1, int b1) {
		_a = a1;
		_b = b1;
	}

	
	
	int a() {
		return _a;
	}
	
	int b() {
		return _b;
	}
	
	int mysum() {

		return _a + _b;
	}
	void SetFirstname(string Name1) {
		_Firstname = Name1;
	}

	string Firstname() {
		return _Firstname;
	}
	
	void SetLastname(string Surname1) {
		_Lastname = Surname1;

	}
	
	string Lastname() {
		return _Lastname;
	}



	void Print() {
		cout << "***********Info***************";
		
		cout << "your phone number is: " << _Phone << endl;
		cout << "your num1 is: " << _a << endl;
		cout << "your num2 is: " << _b << endl;
		cout << "your sum is : " << mysum() << endl;
		cout << "your firstname is:    " << _Firstname << endl;
		cout <<"your last name is :    " <<  _Lastname << endl;
		cout << "your Fullname is :    " << _Fullname << endl;

	}


	static void Func1(clsA person)
	{

		person.Print();

	}

	void Func2()

	{
		Func1(*this);


	}




};

