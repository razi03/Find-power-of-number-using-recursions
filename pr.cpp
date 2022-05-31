#include <iostream>
using namespace std;
int power(int n,int m) {
	if (m < 1) {
		return 1;
	}
	return n*power(n,m-1);
}
int main()
{
	while (true)
	{
		int n, m;
		cout << "\nEnter value of base: ";
		cin >> n;
		cout << "\nEnter value of power: ";
		cin >> m;
		power(n, m);
		cout << "Answer is " << power(n, m);
	}
}
	
