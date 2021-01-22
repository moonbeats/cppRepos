#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

template<class T>
void printArray(T* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;

}
//从小到大排序
template<class T>
void mySort(T* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] < arr[j])
			{
				T temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{

	//数组
	int arr[] = { 2, 5, 2, 1, 5,1 };
	int len = sizeof(arr) / sizeof(int);
	//数组长度
	cout << "Before sorting " << endl;
	printArray(arr, len);
	mySort(arr, len);
	cout << "After sorting" << endl;
	printArray(arr, len);

	cout << "--------------------------" << endl;
	char arr2[] = { 'f','u','k','b','s','m' };
	int len2 = sizeof(arr2) / sizeof(char);
	cout << "Before sorting " << endl;
	printArray(arr2, len2);
	mySort(arr2, len2);
	cout << "After sorting" << endl;
	printArray(arr2, len2);
	return 0;

}