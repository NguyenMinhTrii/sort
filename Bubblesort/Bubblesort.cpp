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

void Bubblesort(int a[], int n)
{
    for (int i = n - 1 ; i >= 1 ; i-- )
    {
        for (int j = 0 ; j <= i-1 ; j++ )
        {
            if (a[j] > a[j+1] )
            {
                int tam = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tam;
            }
        }
    }
    
}

int main()
{
    int a[100];
    int n;
    cout <<"Nhap so luong phan tu n : ";
    cin >> n;
    NhapMang(a,n);
    Bubblesort(a,n);
    XuatMang(a,n);
    return 0;
}