
#include <iostream>
using namespace std;
int main() {

	char islem;m
	double a, b;
	cout << "Please enter the calculation you would like to perform:" << "\n";
	cin >> a >> islem >> b;

	switch (islem)
	{
	case'+':
		cout <<"conclusion:" << a + b;
		break;
	case'-':
		cout <<"conclusion:"<< a - b;
		break;
	case'*':
		cout <<"conclusion:" << a * b;
		break;
	case'/':
		if (b == 0)
		{
			cout << "The denominator cannot be zero; please enter it again.";
		}
		else
		{
			cout <<"conclusion:" << a / b;
		}
		break;
	}
	return 0;


}