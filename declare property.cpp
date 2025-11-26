#pragma once
#include <iostream>
#include <string>

using namespace std;


class clsStr
{

private:
	string _Value;

public:

	clsStr(string Val1) {

		_Value = Val1;

	}
	
	void SetValue(string Val2) {
		_Value = Val2;
	}
	string GetValue() {
		return _Value;
	}


	__declspec(property(get = GetValue, put = SetValue))string Value; // we declare a new value from a string type here!




	void Print() {
		cout << "Value is: " << _Value;
	}
};



