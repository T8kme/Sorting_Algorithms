#ifndef TABLE_H
#define TABLE_H

#include <iostream>
#include <cstring>  // memcpy
using namespace std;

class Tablica {
	int size;
	int* tab;

public:
	Tablica(int size, const int* t)
		: size(size), tab((int*)memcpy(new int[size], t, size*sizeof(int))) {
	}

	Tablica(const Tablica& t) : size(t.size),
		tab((int*)memcpy(new int[size], t.tab, size*sizeof(int))) {
	}

	~Tablica() {
		delete[]tab;
	}

	Tablica& operator++();
	Tablica operator++(int);
	void getTab(const char* nap);
	bool BubbleSort(int size, char* tab);
};

Tablica& Tablica:: operator++() {
	for (int i = 0; i < size; ++i)
		++tab[i];
	return *this;
}

Tablica Tablica:: operator++(int) {
	Tablica t(*this);
	++*this;
	return t;
}

void Tablica::getTab(const char* nap) {
	cout << nap;
	for (int i = 0; i < size; i++)
		cout << tab[i] << " ";
	cout << endl;
}

bool Tablica::BubbleSort(int size, char* tab) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (tab[j] > tab[j + 1])
				swap(tab[j], tab[j + 1]);
		}
	}
}

#endif
