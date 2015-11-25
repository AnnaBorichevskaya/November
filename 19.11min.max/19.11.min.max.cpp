#include <iostream>
using namespace std;
int main()
{
	const int N = 20;
	int a[N] = { 0 };
	int n;
	while (true)
	{
		cout << "Enter n ( amount ) <= " << N << "  " ;
		cin >> n;
		if (n > 0 && n <= N) break;
		cout << "Error!";
	}
	cout << "Enter array elements: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "a[ " << (i + 1) << " ]";
		cin >> a[i];
	}
	system("cls");
	for (int i = 0; i < n; i++)
		cout << a[i] << ", ";
	int min = 0, max = 0;
	for (int i = 1; i < n; i++)
	{
		if (a[i] < a[min])
			min = i;
		else if (a[i] >= a[min]) 
			max = i;
	}
	cout << endl;
	if (a[min] == a[max])
		cout << "All elements are equals";
	else
	cout << " Minimum at the position - " << min+1 << endl << "Maximum at the position - " << max+1;
	system("pause");
	return 0;
}
