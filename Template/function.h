#ifndef FUNCTION_H
#define FUNCTION_H
#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <time.h>
using namespace std;
class Complex
{
private:
	double im = 0;
	double re = 0;
public:
	Complex(double date_re, double date_im)
	{
		im = date_re;
		re = date_im;
	}
	Complex() 
	{
		re = 0;
		im = 0;
	}
	void set(double date_re, double date_im)
	{
		re = date_re;
		im = date_im;
	}

	void get(string sign)
	{
		sign = im > 0 ? "+ " : "- ";
		cout << re << " " << sign << im << "i" << endl;
	}
	int module();

	bool operator >(const Complex& second);
	friend ostream& operator <<(ostream& first, const Complex& second);

};
template <class T>
void _sort(T* arr, int size);
template <class T>
void _sort(T* arr, int size) {
	for (int i = 0; i < size; ++i) {
		for (int j = i; j > 0 and arr[j - 1] > arr[j]; --j) {
			swap(arr[j - 1], arr[j]);
		}
	}
	for (int i = 0; i < size; ++i)
		cout << arr[i] << endl;
}

#endif // !FUNCTION_H
