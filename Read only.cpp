#include <iostream>
using namespace std;

class Keyboard{

    private: 
    int _ID= 5;

    public:

    //SET
    void setkeyID(int a){
        return _ID = a;
    }
    //GET
    int a(){
        _ID;
    }
    
};

int main(){

    Keyboard keys;
    keys.setkeyID(10);

    cout<< keys.setkeyID;
}