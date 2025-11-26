#include <iostream>
#include <string>

using namespace std;

#include <iostream>
#include <string>

using namespace std;


class clsInfo {
private:

	int _ID;
	string _Firstname;
	string _Lastname;
	string _Fullname;

	string _Email;
	string _Phone;

	

public:

	clsInfo(int ID1, string Name1, string Surname1, string Fullname1, string Email1, string Phone1) {


		_ID = ID1;
		_Firstname = Name1;
		_Lastname = Surname1;
		_Fullname = Fullname1;
		_Email = Email1;
		_Phone = Phone1;
		

	}

	int ID() {
		return _ID;
	}

	void SetFirstname(string Name2) {
		_Firstname = Name2;
	}

	string Firstname() {
		return _Firstname;
	}

	string myFullname() {
		return _Fullname;
	}


	void SetLastname(string Surname2) {
		_Lastname = Surname2;
	}

	string Lastname() {
		return _Lastname;
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

	

	

	void Print() {
		cout << "\n";
		cout << "(******************** Info **********************)" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "ID         :   " << _ID << endl;
		cout << "Firstname  :   " << _Firstname << endl;
		cout << "Lastname   :   " << _Lastname << "\n" << flush;
		cout << "Fullname   :   " << _Fullname <<endl;
		cout << "Email      :   " << _Email << endl;
		cout << "Phone      :   " << _Phone <<  endl;
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

class clsEmployee : public clsInfo {

private:

	string _Title;
	string _Department;
	string _Salary;


public:

	clsEmployee(int ID1, string Name1, string Surname1, string Fullname1, string Email1, string Phone1, string Title, string Department, string Salary)
		: clsInfo(ID1, Name1, Surname1, Fullname1, Email1, Phone1)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;

	}

	void SettTitle(string Title1) {
		_Title = Title1;
	}

	string Title() {
		return _Title;
	}

	void SetDepartment(string Department1) {
		_Department = Department1;

	}

	string Department() {
		return _Department;

	}
	void SetSalary(string Salary1) {
		_Salary = Salary1;

	}
	string Salary() {
		return _Salary;

	}
	void Print() {
		cout << "\n";
		cout << "(******************** Info **********************)" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "ID         :   " << ID() << endl;
		cout << "Firstname  :   " << Firstname() << endl;
		cout << "Lastname   :   " << Lastname() << "\n" << flush;
		cout << "Fullname   :   " << myFullname() << "\n" << flush;
		cout << "Email      :   " << Email() << endl;
		cout << "Phone      :   " << Phone() << endl;
		
		cout << "Title      :   " << _Title << endl;
		cout << "Department :   " << _Department << endl;
		cout << "Salary     :   " << _Salary << endl;
		cout << "-----------------------------------------------------" << flush;
		cout << "----------------------------------------------------" << endl;
		cout << "----------------------------------------------------" << endl;
	}




};

class clsDev : public clsEmployee {

private:

	string _MainProgrammingLanguage;


public:

	clsDev(int ID1, string Name1, string Surname1, string Fullname1, string Email1, string Phone1, string Title1, string Department1, string Salary1, string MainProgrammingLanguage)
		: clsEmployee(ID1, Name1, Surname1, Fullname1, Email1, Phone1, Title1, Department1, Salary1)
	{
		 _MainProgrammingLanguage = MainProgrammingLanguage;
	}

	void SetMainProgrammingLanguage(string MainProgrammingLanguage2) {
		_MainProgrammingLanguage = MainProgrammingLanguage2;
	}

	string MainProgrammingLanguage() {
		return _MainProgrammingLanguage;
	}

	void Print() {
		cout << "\n";
		cout << "(******************** Info **********************)" << endl;
		cout << "----------------------------------------------------" << endl;
		cout << "ID         :   " << ID() << endl;
		cout << "Firstname  :   " << Firstname() << endl;
		cout << "Lastname   :   " << Lastname() << "\n" << flush;
		cout << "Fullname   :   " << myFullname() << "\n" << flush;
		cout << "Email      :   " << Email() << endl;
		cout << "Phone      :   " << Phone() << endl;
		cout << "Title      :   " << Title() << endl;
		cout << "Salary     :   " << Salary() << endl;
		cout << "Department :   " << Department() << endl;
		cout << "MainProgrammingLanguage     :   " << _MainProgrammingLanguage << endl;
		cout << "-----------------------------------------------------" << flush;
		cout << "----------------------------------------------------" << endl;
		cout << "----------------------------------------------------" << endl;
	}




};



int main() {
	/* 
	
	clsInfo Developer1(23, "abdullah", "ashtar", "abdullah ashtar", "abdullahashtar6@gmail.com", "09452151");
	Developer1.SendMessage("Something Urgent", "whatever the matter is ..");
	Developer1.SendSMS("Ive tried to call it by it wasnt be able to get in touch with you!");
	*/
	
	/*
	clsDev Developer3(542, "abdullah", "ashtar", "abdullah ashtar", "@gmail.com", "0955152", "idk", "Engineer", "3000", "Cpp");
	*/
	

	
	clsEmployee d(542, "Abdullah", "Ashtar", "Abdullah Ashtar", "@gmail.com", "0955152",
		"Developer", "IT", "3000");
	d.Print();


	system("pause>0");
	

}