#include <iostream>
#include <string>



using namespace std;




class clsA{

private:
  int	var1 = 4;
  int var2 = 5;
  int var3 = 10;
public:

	clsA() {
		var3;
	}

	friend int myfun(clsA);
};

class clsB {


};


int myfun(clsA A1) {
	return A1.var1 + A1.var2 + A1.var3;
}





int main() {

	clsA A1;
	cout << myfun(A1);



}