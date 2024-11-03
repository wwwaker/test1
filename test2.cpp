#include <iostream>
using namespace std;

/*
int fac(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum *= i;
	}
	return sum;
}
int comb(int n, int m)
{
	return fac(n) / (fac(m) * fac(n - m));
}
*/
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	/*
	int n, m;
	cin >> n >> m;
	if (m > n)
	{
		cout << "m should be less than or equal to n";

	}
	cout << comb( n , m );
	*/
	/*
	int a[20] = { 0,1 };
	for (int i = 1; i < 20; i++)
	{
		if (i == 0||i==1)
		{
			cout<<a[i]<<endl;
		}
		else
		{
			a[i] = a[i - 1] + a[i - 2];
			cout << a[i] << endl;

		}
	}
	//将n个数按照从小到大排序
	const int n = 10;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	*/
	int u = 10, v = 20;
	swap(u, v);
	cout << u << " " << v << endl;

	return 0;
}
