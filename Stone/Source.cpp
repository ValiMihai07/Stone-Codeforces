#include <iostream>
#include <string>


using namespace std;


int main()
{
	string let;
	long int n;
	long int i = 0;
	long int num = 0; 

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> let[i];
	}

	for (i = 0; i <( n-1 ); i++)
	{
		if (let[i] == let[i+1])
		{
			num = num + 1;
		}
	}

	cout << num;

	return 0;
}