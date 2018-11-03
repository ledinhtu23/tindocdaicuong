#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n =";
	cin >> n;
		for (int i = 1; i < n; i++) {
			if (i % 2 == 0) {
				cout << "n la so chan" << n;
			}
			else {
				cout << "n la so le"; 
			}

		}
	system("pause");
	return true;
}