//�ݰ���� , Carry ��� X
#include<iostream>
using namespace std;

int main() {
	int a, b, sum = 0, c;
	cout << "1�ڸ� 2���� 2���� �Է��ϼ���: ";
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