#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include <cstring>  // memcpy
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>    // std::sort
#include <stdio.h>

using namespace std;

class Table {
	int size;
	int* tab;
	vector<int>v;

public:
	Table(int size, const int* t)
		: size(size), tab((int*)memcpy(new int[size], t, size*sizeof(int))) {
	}

	Table(const Table& t) : size(t.size),
		tab((int*)memcpy(new int[size], t.tab, size*sizeof(int))) {
	}

	~Table() {
		delete[]tab;
	}

	Table& operator++();
	Table operator++(int);
	void getTab(const char* nap);
	AnsiString Table::TableToString();
	void ArrayToVector();
	inline void Sort();
	inline void BubbleSort();
	inline void InsertionSort();
	inline void MergeSort();
	inline void CountSort();
	inline void BucketSort();
	inline void RadixSort();
	inline void SelectionSort();
	inline void ShellSort();
	inline void QuickSort();
	inline void HeapSort();

private:
	void merge_sort(int arr1[], int ll, int ul);
	void merge(int arr1[], int ll1, int ul1, int ll2, int ul2);
	void countSort(int arr[], int n, int exp);
	int getMax(int arr[], int n);
	int pivot(int a[], int first, int last);
	void swap(int& a, int& b);
	void swapNoTemp(int& a, int& b);
	void quickSort(int a[], int first, int last);
};

Table& Table:: operator++() {
	for (int i = 0; i < size; ++i)
		++tab[i];
	return *this;
}

Table Table:: operator++(int) {
	Table t(*this);
	++*this;
	return t;
}

void Table::getTab(const char* nap) {
	cout << nap;
	for (int i = 0; i < size; i++)
		cout << tab[i] << " ";
	cout << endl;
}

inline AnsiString Table::TableToString() {
	AnsiString sorted = "";
	for (int i = 0; i < size; i++) {
		sorted += IntToStr(tab[i]);
		if (i != size - 1) {
			sorted += ",";
		}
	}
	return sorted;
}

void Table::ArrayToVector() {
	vector<int>v(tab, tab +sizeof tab / sizeof tab[0]);
}

inline void Table::Sort() {
	std::sort(tab, tab + size);
}

inline void Table::BubbleSort() {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (tab[j] > tab[j + 1])
				swap(tab[j], tab[j + 1]);
		}
	}
}

inline void Table::InsertionSort() {
	int temp, j;

	for (int i = 1; i < size; i++) {
		temp = tab[i];

		for (j = i - 1; j >= 0 && tab[j] > temp; j--)
			tab[j + 1] = tab[j];

		tab[j + 1] = temp;
	}
}

inline void Table::SelectionSort() {
	int pos_min,temp;

	for (int i=0; i < size - 1; i++)
	{
	    pos_min = i;//set pos_min to the current index of array

		for (int j=i+1; j < size; j++)
		{

		if (tab[j] < tab[pos_min])
				   pos_min=j;
	//pos_min will keep track of the index that min is in, this is needed when a swap happens
		}

	//if pos_min no longer equals i than a smaller value must have been found, so a swap must occur
            if (pos_min != i)
            {
                 temp = tab[i];
				 tab[i] = tab[pos_min];
				 tab[pos_min] = temp;
            }
	}
}

inline void Table::ShellSort() {
	int gap, i, j, temp;

	for (gap = size / 2; gap > 0; gap /= 2)

		for (i = gap; i < size; i++)

			for (j = i - gap; j >= 0 && tab[j] > tab[j + gap]; j -= gap) {

				temp = tab[j];

				tab[j] = tab[j + gap];

				tab[j + gap] = temp;

			}
}

void Table::merge(int arr1[], int ll1, int ul1, int ll2, int ul2) {
	int i = 0, k, ll = ll1;
	int arr3[100];
	while (ll1 <= ul1 && ll2 <= ul2) {
		if (arr1[ll1] < arr1[ll2])
			arr3[i++] = arr1[ll1++];
		else
			arr3[i++] = arr1[ll2++];
	}
	while (ll1 <= ul1)
		arr3[i++] = arr1[ll1++];
	while (ll2 <= ul2)
		arr3[i++] = arr1[ll2++];
	for (k = 0; k < i; k++)
		arr1[ll++] = arr3[k];
}

void Table::merge_sort(int arr1[], int ll, int ul) {
	int mid;
	if (ll < ul) {
		mid = (ul + ll) / 2;
		merge_sort(arr1, ll, mid);
		merge_sort(arr1, mid + 1, ul);
		merge(arr1, ll, mid, mid + 1, ul);
	}
}

inline void Table::MergeSort() {
	merge_sort(tab, 0, size - 1);
}

int Table::getMax(int arr[], int n) {
	int max = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	return max;
}

void Table::countSort(int arr[], int n, int exp) {
	int* output = new int[n];
	int i, count[10] = {0};
	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];
	for (i = n - 1; i >= 0; i--) {
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}
	for (i = 0; i < n; i++)
		arr[i] = output[i];

	delete[]output;
}

inline void Table::RadixSort() {
	int m = getMax(tab, size);
	for (int exp = 1; m / exp > 0; exp *= 10)
		countSort(tab, size, exp);
}

inline void Table::BucketSort() {

}

inline void Table::QuickSort() {
	quickSort(tab, 0, size - 1);
}

void Table::quickSort(int a[], int first, int last) {
	int pivotElement;

	if (first < last) {
		pivotElement = pivot(a, first, last);
		quickSort(a, first, pivotElement - 1);
		quickSort(a, pivotElement + 1, last);
	}
}

int Table::pivot(int a[], int first, int last) {
	int p = first;
	int pivotElement = a[first];

	for (int i = first + 1; i <= last; i++) {
		/* If you want to sort the list in the other order, change "<=" to ">" */
		if (a[i] <= pivotElement) {
			p++;
			swap(a[i], a[p]);
		}
	}

	swap(a[p], a[first]);

	return p;
}

void Table::swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void Table::swapNoTemp(int& a, int& b) {
	a -= b;
	b += a; // b gets the original value of a
	a = (b - a); // a gets the original value of b
}

inline void Table::HeapSort() {
}

#endif
