#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "enter height of the upper portion of kite:";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int sp1 = 1; sp1 <= n - i; sp1++)
			cout << "  ";
		if (i == 1)
		{
			cout << "* ";
			
			

		}
		else if (i == n)
		{
			cout << "*";
			for (int sp2 = 1; sp2 <= 2*i-3; sp2++)
				cout << "-";
			cout << "|";
			for (int sp3 = 1; sp3 <= 2*i-3; sp3++)
				cout << "-";
			cout << "*";
		}
		else
		{
			cout << "* ";
			for (int sp2 = 1; sp2 <= i - 2; sp2++)
				cout << "  ";
			cout << "| ";
			for (int sp3 = 1; sp3 <= i - 2; sp3++)
				cout << "  ";
			cout << "* ";
		}
		cout << endl;
	}
	int sp2_count = 2*n - 4;
	for (int i = 1; i <= 2 * n - 2; i++)
	{
		for (int sp1 = 1; sp1 <= i; sp1++)
			cout << " ";
		cout << "*";
		if (i != 2 * n - 2)
		{
			for (int sp2 = 1; sp2 <= sp2_count; sp2++)
				cout << " ";

			cout << "|";
			for (int sp3 = 1; sp3 <= sp2_count; sp3++)
				cout << " ";
			cout << "*";
			cout << endl;
			sp2_count = sp2_count - 1;
		}
		

	}

}
