#include<iostream>
using namespace std;
void sort(int* arr, int size)
{
	int temp = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	cout << "sorted array" << endl;
	cout << "{";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << ",";
	}
	cout << "}";
}

int main()
{
	int size = 0;
	int *arr;
	cout << "enter size" << endl;
	cin >> size;
	arr = new int[size];
	cout << "enter elements of array " << endl;
	for (int i = 0; i < size;i++)
	{
		cin >> arr[i];
	}
	cout << "entered elements are" << endl;
	cout << "{";
	for (int i = 0; i < size; i++)
	{
		cout << arr[i]<<",";
	}
	cout << "}";
	cout << endl;
	sort(arr, size);

}
