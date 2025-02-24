#ifndef ARRAY_H
#define ARRAY_H
#include"String.h"
#include<iostream>
using namespace std;
template<typename T>
class Array
{
	T* data;
	int size;
	int capacity;
	void copyArray(T* const, const T* const, int);
	bool isValidIndex(int)const;
	int getCapacity() const; 
public:
	Array();
	Array(int);
	~Array();
	int getSize() const;
	void reSize(int);
	T& operator[](int);
	void insert(int, const T&);
	void remove(int);
	void sort();
	void display();
	Array<T> findElements(Array<T>, int);
};
#endif
