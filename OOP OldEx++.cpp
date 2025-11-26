#include <iostream>
using namespace std;

class clsPerson{

    private:
    string _Name;
    string _Surname;

    public:
    
    // set
    string setName(string Name1){
        return _Name = Name1;
    }

    string setSurname(string Surname){
        return _Surname = Surname;
    }


    //get
    string Name1(){
        return _Name;
    }

    string Surname(){
        return Surname;
    }




    string FullName(){
        return _Name + " " + _Surname;
    }


};



int main(){

    clsPerson People;

    People.setName = "Abdullah";
    People.setSurname = "Ashtar";

    cout << "your name is: " << People.setName() << endl;
    cout << "your name is: " << People.setSurname() << endl;
    cout << "your name is: " << People.FullName() << endl;
}

