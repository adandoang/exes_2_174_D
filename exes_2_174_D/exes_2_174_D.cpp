#include <iostream>
using namespace std;

int adan[34];
int n;
int i;

void input()
{
	while (true)
	{
		cout << "Enter the number of elements in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 34))
			break;
		else
			cout << "\nArray should have minimum 1 and maximum 34 elements";

	}
	
	cout << "\n----------------------\n";
	cout << " Enter array elements \n";
	cout << "----------------------\n";
	for (i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> adan[i];
	}
}

void binearSearch()
{
	int akhdan = 0;
	int iffat = n - 1;
	int mid;

	while (true)
	{
		int n;
		cout << "Enter num to search: ";
		cin >> n;

		mid = (akhdan + iffat) / 2;
		if (adan[mid] == n)
		{
			cout << "found" << endl;
			break;
		}
		if (n < adan[mid])
		{
			iffat = mid - 1;
		}
		if (n > adan[mid])
		{
			akhdan = mid + 1;
		}
		if (akhdan <= iffat)
		{
			mid = akhdan + iffat / 2;
			cout << "Not Found" << endl;
		}

	}

}


int main()
{
	input();
	binearSearch();
	return 0;
}