//2X4 디코더
#include <iostream>
using namespace std;

//AND
int AB(int a, int b) {
	int s = 0;
	if (a == 1 && b == 1) {
		s = 1;
	}
	else {
		s = 0;
	}
	return s;
}
//NOT
int NOT(int c) {
	int n = 0;
	if (c == 0) {
		n = 1;
	}
	else {
		n = 0;
	}
	return n;
}
int main() {
	int A, B, Y0 = 0, Y1 = 0, Y2 = 0, Y3 = 0;
	cout << "2진수 2개를 입력 하시오: ";
	cin >> B >> A;
	
	Y0 = AB(NOT(A), NOT(B));
	Y1 = AB(A, NOT(B));
	Y2 = AB(NOT(A), B);
	Y3 = AB(A,B);

	cout << "Y0: " << Y0 << " Y1: " << Y1 << " Y2: " << Y2 << " Y3: " << Y3 << endl;
	return 0;

}