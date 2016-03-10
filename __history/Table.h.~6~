#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include <cstring>  // memcpy
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>    // std::sort

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
	inline void CountingSort();
	inline void BucketSort();
	inline void RadixSort();
	inline void SelectionSort();
	inline void ShellSort();
	inline void QuickSort();
	inline void HeapSort();

	void HEAPSORT(int a[], int n);
	void BUILD_MAX_HEAP(int a[], int n);
	void MAX_HEAPIFY(int a[], int i, int n);
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

inline void Table::BucketSort() {

}

void Table::MAX_HEAPIFY(int a[], int i, int n) {
	int l, r, largest, loc;
	l = 2 * i;
	r = (2 * i + 1);
	if ((l <= n) && a[l] > a[i])
		largest = l;
	else
		largest = i;
	if ((r <= n) && (a[r] > a[largest]))
		largest = r;
	if (largest != i) {
		loc = a[i];
		a[i] = a[largest];
		a[largest] = loc;
		MAX_HEAPIFY(a, largest, n);
	}
}

void Table::BUILD_MAX_HEAP(int a[], int n) {
	for (int k = n / 2; k >= 1; k--) {
		MAX_HEAPIFY(a, k, n);
	}
}

inline void Table::HeapSort() {

	BUILD_MAX_HEAP(tab, size);
	int i, temp;
	for (i = size; i >= 2; i--) {
		temp = tab[i];
		tab[i] = tab[1];
		tab[1] = temp;
		MAX_HEAPIFY(tab, 1, i - 1);
	}
}

#endif
