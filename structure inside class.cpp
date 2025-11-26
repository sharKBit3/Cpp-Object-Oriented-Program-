#include<iostream>
using namespace std;

class clsPerson {

    struct stAddress
    {
        string AddressLine1;
        string AddressLine2;
        string City;
        string Country;
    };

public:
    string FullName;
    stAddress Address;

    clsPerson()
    {
        FullName = "Ash";
        Address.AddressLine1 = ".........";
        Address.AddressLine2 = ".........";
        Address.City = "Aleppo";
        Address.Country = "Syria";
    }

    void PrintAddress()
    {
        cout << "\nAddress:\n";
        cout << Address.AddressLine1 << endl;
        cout << Address.AddressLine2 << endl;
        cout << Address.City << endl;
        cout << Address.Country << endl;
    }

};

int main()

{

    clsPerson Person1;
    Person1.PrintAddress();

    system("pause>0");
    return 0;
}