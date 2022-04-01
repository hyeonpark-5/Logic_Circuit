//반가산기 , Carry 고려 X
#include<iostream>
using namespace std;

int main() {
	int a, b, sum = 0, c;
	cout << "1자리 2진수 2개를 입력하세요: ";
	cin >> a >> b;
	if (a == 1 || b == 1) {
		sum = 1;
		c = 0;
		if (a == 1 && b == 1) {
			sum = 0;
			c = 1;
		}
	}
	else {
		sum = 0;
		c = 0;
	}

	cout << "sum: " << sum << " Carry: " << c << endl;
	return 0;

}