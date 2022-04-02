//4X2 인코더
#include<iostream>
using namespace std;

//OR
int OR(int a, int b) {
	int o = 0;
	if (a == 0 && b == 0) {
		o = 0;
	}
	else {
		o = 1;
	}
	return o;
}

int main(){
	int D0, D1, D2, D3, B1 = 0, B2 = 0;
	cout << "4개의 2진수를 입력하시오: ";
	cin >> D0 >> D1 >> D2 >> D3;
	B1 = OR(D1, D3);
	B2 = OR(D2, D3);
	cout << "B0: " << B1 << " B1: " << B2 << endl;
	return 0;

}