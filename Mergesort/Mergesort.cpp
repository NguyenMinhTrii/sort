#include <iostream>
using namespace std;

void NhapMang(int a[], int &n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
}

void Merge(int A[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];
    
    for (i = 0; i < n1; i++)
        L[i] = A[l + i];
    for (j = 0; j < n2; j++)
        R[j] = A[m + 1 + j];

    i = 0;
    j = 0;
    k = 0;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
            
        }
        k++;
    }

    /* Copy các phần tử còn lại của mảng L vào arr nếu có */
    while (i < n1)
    {
        A[k] = L[i];
        i++;
        k++;
    }

    /* Copy các phần tử còn lại của mảng R vào arr nếu có */
    while (j < n2)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

void Mergesort(int A[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        Mergesort(A, l, m);
        Mergesort(A, m + 1, r);
        Merge(A, m, l, r);
    }
}

int main()
{
    int n, l, r, a[100];
    cout << "Nhap so luong phan tu n: ";
    cin >> n;
    NhapMang(a, n);
    Mergesort(a, 0, n - 1);
    XuatMang(a, n);
    return 0;
}