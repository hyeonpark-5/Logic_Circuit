//������� , ĳ�� ��� O
#include<iostream>
using namespace std;

//XOR ����
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

int main() {
	int A, B, C, c,sum = 0, Carry = 0;
	cout << "1�ڸ� 2���� 2���� Carry�� �Է��Ͻÿ�: ";
	cin >> A >> B >> C;
	c = XOR(A, B);
	sum = XOR(c, C);
	Carry = C * XOR(A, B) + AB(A, B);
	cout << "sum: " << sum << " Carry: " << Carry << endl;

}