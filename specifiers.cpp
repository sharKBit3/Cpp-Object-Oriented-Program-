#include <iostream>
using namespace std;

class clsRoom {

private:
    int variable1 = 10;

    



protected:
    int variable2 = 30;



public:
    int variable3 = 10;
    int fucntion3() {
        return variable1 * variable2 - variable3;
    }


};


int main() {

    clsRoom Specs;

    cout << "Result : " << Specs.fucntion3();

}