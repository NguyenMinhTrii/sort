#include <iostream>
using namespace std;



void NhapMang(int a[100], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];

	}
}

void XuatMang(int a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";

	}
}

void Insertionsort(int a[100], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = a[i];
		int j = i-1;
		while (j >= 0 && a[j] > key )	
		{
			a[j+1] =  a[j];
			j = j-1;
		}
		a[j+1] = key;
	}
	XuatMang(a, n);
}

int main()
{
	int a[100], n;
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	NhapMang(a, n);
	Insertionsort(a, n);


}