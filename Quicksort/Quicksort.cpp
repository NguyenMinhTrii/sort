#include <iostream>
using namespace std;



void NhapMang(int arr[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
}

void XuatMang(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";

	}
}


/*void Quicksort (int a[], int first,int last)
{
    if (first < last)
    {
        int i = first;
        int j = last;
        int key = first;
        while (i < j)
        {
            while (a[i] < a[key] && i < last)
            {
                i++;
            }
            while (a[j] > a[key])
            {
                j--;
            }
            if (i < j)
            {
                swap(a[i] , a[j]);
            }
        }
        swap(a[key],a[j]);        
        Quicksort(a,first,j-1);
        Quicksort(a,j+1,last);    
    }
}*/

/*int partition (int arr[], int low, int high)
{
    int pivot = arr[high];  
    int left = low;
    int right = high - 1;
    while(true)
    {
        while(left <= right && arr[left] < pivot) left++; 
        while(right >= left && arr[right] > pivot) right--;
        if (left >= right)
            break;
        swap(&arr[left], &arr[right]);
        left++; 
        right--; 
    }
    swap(&arr[left], &arr[high]);
    return left; 
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}*/



int main()
{
    int arr[100], n,l,r;
    cout <<"Nhap so luong phan tu : ";
    cin >> n;
    NhapMang(arr,n);
    XuatMang(arr,n);
    return 0;
}