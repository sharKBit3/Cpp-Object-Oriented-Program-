#include <iostream>
using namespace std;

class proJect{


    private:
    string _lost;

    public:
    void setlost(string Learing){
        _lost = Learing;
    }

    string Learing(){
        return _lost;
    }
    
};
    int  main(){

        proJect Success;
        Success.setlost("Winner");

        cout<< Success.setlost() << endl;
    }
