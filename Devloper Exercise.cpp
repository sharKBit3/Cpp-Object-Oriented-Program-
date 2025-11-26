#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class clsInfo {
private:

	int _ID;
	string _Firstname;
	string _Lastname;
	string _Fullname;

	string _Title;
	string _Email;
	string _Phone;

	string _Salary;
	string _Department;

public:

	clsInfo(int ID1, string Name1, string Surname1, string Fullname1, string Title1, string Email1, string Phone1, string Salary1, string Department1) {


		_ID = ID1;
		_Firstname = Name1;
		_Lastname = Surname1;
		_Fullname = Fullname1;
		_Title = Title1;
		_Email = Email1;
		_Phone = Phone1;
		_Salary = Salary1;
		_Department = Department1;

	}

	int ID() {
		 _ID;
	}

	void SetFirstname(string Name2) {
		_Firstname = Name2;
	}

	string Firstname() {
		return _Firstname;
	}

	string myFullname() {
		return _Fullname = _Firstname + " " + _Lastname;
	}


	void SetLastname(string Surname2) {
		_Lastname = Surname2;
	}

	string Lastname() {
		return _Lastname;
	}


	void SetTitle(string Title2) {
		_Title = Title2;
	}

	string Title() {
		return _Title;
	}


	void SetEmail(string Email2) {
		_Email = Email2;
	}

	string Email() {
		return _Email;
	}

	void SetPhone(string Phone2) {
		_Phone = Phone2;
	}

	string Phone() {
		return _Phone;
	}

	void SetSalary(string Salary2) {
		_Salary = Salary2;
	}

	string Salary() {
		return _Salary;
	}

	void SetDepartment(string Department2) {
		_Department = Department2;
	}

	string Department() {
		return _Department;
	}


	void Print() {
		cout << "(******************** Info **********************)" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "ID         :   " << _ID << endl;
		cout << "Firstname  :   " << _Firstname << endl;
		cout << "Lastname   :   " << _Lastname << "\n" << flush;
		cout << "Fullname   :   " << _Fullname <<endl;
		cout << "Title      :   " << _Title << endl;
		cout << "Email      :   " << _Email << endl;
		cout << "Phone      :   " << _Phone <<  endl;
		cout << "Salary     :   " << _Salary << endl;
		cout << "Department :   " <<  _Department << "\n" << flush;
		cout << "-----------------------------------------------------" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "----------------------------------------------------" << endl;
	}

	void SendMessage(string _Body, string T3) {
		cout << "This message has been sent to: " << _Email << endl;
		cout << "Title: " << T3 << endl;
		cout << "Body:  " << _Body << "\n" << flush;
	}


	void SendSMS(string Text) {
		cout << "This message has been sent to you via: " << _Phone << endl;
		cout << "Text: " << Text;
	}
	
};

class clsDev : public clsInfo {

private:

	string _Title;
	string _Department;
	string _Salary;


public:

	clsDev(int ID1, string Name1, string Surname1, string Fullname1, string Title1, string Email1, string Phone1, string Salary1, string Department1)
		: clsInfo(ID1, Name1, Surname1, Fullname1, Email1, Phone1, Title1, Department1, Salary1)
	{
		string _Title = Title1;
		string _Department = Department1;
		string _Salary = Salary1;

	}

	void SetTitle(string Title2) {
		_Title = Title2;
	}
	string Title() {
		return _Title;
	}

	void SetDepartment(string Dep2) {
		_Department = Dep2;
	}

	string Department() {
		return _Department;
	}

	void SetSalary(string Salary2) {
		_Salary = Salary2;
	}

	string Salary() {
		return _Salary;
	}


};




int main() {
	
	clsDev Developer2(23, "abdullah", "ashtar", "abdullah ashtar", "idk", "abdullahashtar6@gmail.com", "09452151", "3000", "Engineer");
	Developer2.Print();


	/*
	clsInfo Developer1(23, "abdullah", "ashtar", "abdullah ashtar", "idk", "abdullahashtar6@gmail.com", "09452151", "3000", "Engineer");
	Developer1.Print();
	Developer1.SendMessage("Something Urgent", "whatever the matter is ..");
	Developer1.SendSMS("Ive tried to call it by it wasnt be able to get in touch with you!");
	*/
	

}