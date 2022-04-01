// 2진 비교기
#include<iostream>
using namespace std;

//XOR 계산기
int XOR(int a, int b) {
	int X = 0;
	if (a == 1 || b == 1) {
		X = 1;
		if (a == 1 && b == 1) {
			X = 0;
		}
	}
	else {
		X = 0;
	}
	return X;
}

//AND 게이트 계산기
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
	if (n == 0) {
		n = 1;
	}
	else {
		n= 0;
	}
	return n;
}

int main() {
	int A, B, F1 = 0, F2 = 0, F3 = 0, F4 = 0;
	cout << "2진수 2개를 입력하시오: ";
	cin >> A >> B;
	//A = B
	if (A == B) {
		//XOR, NOT
		if (XOR(A, B) == 1) {
			F1 = 0;
		}
		else {
			F1 = 1;
		}
		F2 = 0, F3 = 0, F4 = 0;
	}
	else if (A != B) {
		//XOR
		F2 = XOR(A, B);
		if (A > B) {
			//NOTB, AND
			F3 = AB(NOT(B), A);
		}
		else if (A < B) {
			//NOTA, AND
			F4 = AB(NOT(A), B);
		}
	}
	else {
		F1 = 0, F2 = 0, F3 = 0, F4 = 0;
	}

	cout << "[A = B]: " << F1 << " [A != B]: " << F2 << " [A > B]: " << F3 << " [A < B] " << F4 << endl;
	return 0;

}