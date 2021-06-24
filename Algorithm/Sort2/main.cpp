#include<iostream>
#include<vector>
#include<assert.h>
#include<time.h>
#include<algorithm>
#include<chrono>
#include"Lib/redbud/io/color.h"
#define green redbud::io::state::manual << redbud::io::hfg::green
#define red   redbud::io::state::manual << redbud::io::hfg::red
using namespace std;
using namespace chrono;
class Sort {
public:
	static void swap(vector<int>& v, int i, int j) {
		int temp = v[i];
		v[i] = v[j];
		v[j] = temp;
	}
	static void printVector(vector<int>& v) {
		for (int x : v) {
			cout << x << " ";
		}
		cout << endl;

	}
};


class SelectSort :public Sort {
public:
	//1 选择排序
	static void selectSort(vector<int>& v) {
		for (int i = 0; i < v.size() - 1; i++) {
			int minPos = i;
			for (int j = i; j < v.size(); j++) {
				if (v[j] < v[minPos]) minPos = j;
			}
			swap(v, i, minPos);
		}
	}

	static void test() {
		vector<int> v = { 1,3,4,6,7,8,9 };
		cout << "call selectsort" << endl;
		selectSort(v);
		printVector(v);
	}

};


class BubbleSort :public Sort {
public:
	//2 冒泡排序
	static void bubbleSort(vector<int>& v) {
		for (int i = v.size() - 1; i > 0; i--) {
			//findMax
			for (int j = 0; j < i; j++) {
				if (v[j] > v[j + 1]) {
					swap(v, j, j + 1);
				}
			}
		}

	}
	static void test() {
		vector<int> v = { 1,3,4,6,7,8,9 };
		cout << "call bubblesort" << endl;
		bubbleSort(v);
		printVector(v);
	}

};


class InsertSort :public Sort {
public:
	//3 插入排序
	static void insertSort(vector<int>& v) {
		for (int i = 0; i < v.size() - 1; i++) {
			for (int j = i; j > 0; j--) {
				if (v[j] < v[j - 1]) {
					swap(v, j, j - 1);
				}
			}
		}

	}

	static void test() {
		vector<int> v = { 1,3,4,6,7,8,9 };
		cout << "call insertsort" << endl;
		insertSort(v);
		printVector(v);
	}

};


class QuickSort :public Sort {
public:
	//4 快速排序
	//v = {1,3,8,9,4,6,7}
	static void quickSort(vector<int>& v, int leftBound, int rightBound) {
		if (leftBound >= rightBound) return;
		int mid = partition(v, leftBound, rightBound);
		quickSort(v, leftBound, mid - 1);
		quickSort(v, mid + 1, rightBound);
	}

	static int partition(vector<int>& v, int leftBound, int rightBound) {


		int pivot = v[leftBound];
		int left = leftBound+1;
		int right = rightBound;


		while (left < right) {
			while (left < right && v[left] <= pivot) left++;
			while (left < right && v[right] >= pivot) right--;
			if (left < right) {
				swap(v, left, right);
				left++;
				right--;
			}
		}
		if (left == right && v[right] > pivot) right--;
		swap(v, leftBound, right);
		return right;



		//int pivot = v[rightBound];
		//int left = leftBound;
		//int right = rightBound - 1;
		//while (left <= right) {//小于等于
		//	while (left <= right && v[left] <= pivot) left++;//找到第一个比pivot大的数
		//	while (left <= right && v[right] > pivot) right--;//找到第一个小于等于pivot的数
		//	if (left < right) swap(v, left, right);
		//}
		////cout << "left->" << left << "right->" << right << endl;

		//swap(v, left, rightBound);

		////printVector(v);
		//return left;//left位置上的数已经到了正确位置
	}
	static void test() {
		vector<int> v = { 1,3,4,6,7,8,9 };
		quickSort(v, 0, v.size() - 1);
		printVector(v);
	}
};


class MergeSort :public Sort {
public:
	//5 归并排序
	static void mergeSort(vector<int>& v, int left, int right) {
		if (left >= right) return;

		//1 分成两半
		int mid = left + (right - left) / 2;

		//2 左边排序
		mergeSort(v, left, mid);

		//3 右边排序
		mergeSort(v, mid + 1, right);

		//4 merge
		merge(v, left, mid + 1, right);

	}

	//将两个排好序的数组的merge
	//v = {1,3,8,9,4,6,7}
	static void merge(vector<int>& v, int leftPtr, int rightPtr, int rightBound) {

		int i = leftPtr, j = rightPtr, k = 0;
		int mid = rightPtr - 1;
		vector<int> temp(rightBound - leftPtr + 1);
		while (i <= mid && j <= rightBound) {
			temp[k++] = v[i] <= v[j] ? v[i++] : v[j++];
		}
		while (i <= mid) temp[k++] = v[i++];
		while (j <= rightBound) temp[k++] = v[j++];
		for (int m = 0; m < temp.size(); m++) v[leftPtr + m] = temp[m];

	}
	static void test() {
		vector<int> v = { 1,3,4,6,7,8,9 };
		mergeSort(v, 0, v.size() - 1);
		printVector(v);
	}

};


class TEST {
public:
	static vector<int> generateRandomArray(int n, int rangeL, int rangeR) {
		assert(rangeL <= rangeR, 'rangeL <= rangeR');
		vector<int> array;
		srand(time(NULL));
		for (int i = 0; i < n; i++) {
			array.push_back(rand() % (rangeR - rangeL + 1) + rangeL);

		}
		return array;

	}

	static void check() {
		int n = 10000;
		vector<int> v = generateRandomArray(n, 0, 300000);
		vector<int> v1 = v;

		//start clock
		auto start = system_clock::now();


		//MergeSort::mergeSort(v, 0, n - 1);
		QuickSort::quickSort(v, 0, n - 1);
		//end clock
		auto end = system_clock::now();
		auto duration = duration_cast<microseconds>(end - start);
		double runtime = double(duration.count()) * microseconds::period::num / microseconds::period::den;
		cout <<"My Sort     algorithm spend: "<< runtime<< " seconds" << endl;

		// call system sort
		start = system_clock::now();
		sort(v1.begin(), v1.end());
		end = system_clock::now();
		duration = duration_cast<microseconds>(end - start);
		runtime = double(duration.count()) * microseconds::period::num / microseconds::period::den;
		cout <<"System Sort algorithm spend: "<<runtime << " seconds" << endl;

		//compare
		if (v1 == v) cout << "result :true" << endl;
		else cout << "result:false" << endl;
	}
};


int main() {
	cout << green << "============================================\n";
	TEST::check();
	//QuickSort::test();
	return 0;

}
