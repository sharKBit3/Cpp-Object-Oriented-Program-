#include <iostream>
#include <string>



using namespace std;


class  Personalx {

public:

	virtual void Dial(string _number, string _IP) = 0;
	virtual void TextPicture(string _text) = 0;
	virtual void TextSMS(string _SMS) = 0;


};

class Personaly : public Personalx {
public:

	void Dial(string _number, string _IP) {
		cout << "number " << _number;

	};
	void TextPicture(string _text) {

	};

	void TextSMS(string _SMS) {

	};

	


};

class Personalz : public Personaly {

public:

	void Dial(string _number, string _IP) {
	};

	void TextPicture(string _text) {

	};


	void TextSMS(string _SMS) {

	};
	
	
	void TextSMS(string _SMS) {
	
	};

};


int main() {

	Personalz Per;


	Personaly* person1 = &Per;
	 person1->TextPicture();


}


