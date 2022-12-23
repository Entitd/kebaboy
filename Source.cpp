#include <iostream>

using namespace std;

int main() 
{
	int a;
	int b;
	cin >> a;
	cin >> b;
	cout << "Hello !" << endl;
	int result;
	int* p;
	result = a + b;
	cout << result;
	p = &result;
}