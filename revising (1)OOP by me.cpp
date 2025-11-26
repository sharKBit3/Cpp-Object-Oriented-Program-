#include <iostream>
#include <string>

using namespace std;


class clsInfo {
private:

	int _ID;
	string _Firstname;
	string _Lastname;
	string _Fullname;
	string _E_mail;
	string _Phone;
	
	string _Subject;
	string _Body;
	string _SMS;
	
public:
	
	clsInfo (int ID, string Name, string Surname, string fullnamee, string email, string tele) {
		_ID = ID;
		_Firstname = Name;
		_Lastname = Surname;
		_Fullname = fullnamee;
		_E_mail = email;
		_Phone = tele;
	}
	

	int ID() {
		return 10;
	}

	string _fullname() {
		return _Fullname = _Firstname + " " + _Lastname;
	}

	void SetSendEmail(string S1, string B1){

		_Subject = S1;
		_Body = B1;
		
	}


	string SendEmail() {

		return _Subject, _Body;

	}


	void SetSMS(string SMS1){

		_SMS = SMS1;
	}

	string SMS() {

		return _SMS;

	}

	void Print() {


		cout << "INFO" << endl;
		cout << "-------------------------------------------------------------" << endl;
		cout << "your ID is: " << _ID << endl;
		cout << "your Firstname: " << _Firstname << endl;
		cout << "your _Lastname: " << _Lastname << endl;
		cout << "your fullname: " << _Fullname << endl;
		cout << "your E-mail is: " << _E_mail << "\n" << flush;
		cout << "your Phone " << _Phone << endl;
		cout << "-------------------------------------------------------------" << endl;
		
		cout << "The following message sent to my@gmail.com" << endl;
		
		cout << "Subject:  " << _Subject << endl;
		cout << "Message:  " << _Body << "\n" << endl;

		cout << "SMS Message: " << _SMS << flush;

		
		
	}


};


int main() {


	clsInfo Person1(10, "Abdullah", "Ashtar", "Abdullah-Ashtar", "abdullahashtar6@gmail.com", "095145125");

	Person1.SetSendEmail("Greeting", "Hi, how are your");
	Person1.SetSMS("Hey there");
	
	Person1.Print();



	system("pause > 0");
}