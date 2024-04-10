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

void Seclectionsort(int a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		int k = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[k])
			{
				int tam = a[j];
				a[j] = a[k];
				a[k] = tam;
			}
		}
	}
	cout << "Mang sau khi duoc sap xep Seclectionsort la : " << endl;
	XuatMang(a, n);
}

int main()
{
	int a[100], n;
	cout << "Nhap so luong phan tu n : ";
	cin >> n;
	NhapMang(a, n);
	Seclectionsort(a, n);
	return 0; 

}