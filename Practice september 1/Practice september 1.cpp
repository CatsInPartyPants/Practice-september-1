﻿#include <iostream>

using namespace std;

int a[10][2];

void f(int &pa, int &pb)
{
	if (pa > pb)
	{
		cout << pa;
	}
	else
	{
		cout << pb;
	}
}

void f2(int* pa)
{
	if (*pa > 0) cout << "Больше 0";
	else cout << "Меньше 0";
}

void chng(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int summOfArr(int* arr, int len)
{
	int summ = 0;
	for (int i = 0; i < len; i++)
	{
		summ += *arr;
		arr++;
	}
	return summ;
}

//заполнение двумерного массива одинаковыми числами

int& arrayFill(int index);

int& f7(int a[], int s)
{
	int im = 0;
	for (int i = 0; i < s; i++)
	{
		im = a[im] > a[i] ? im : i;
	}
	return a[im];
}

void f8(int* arr, int s, int& sum, int& comp)
{
	for (int i = 0; i < s; i++)
	{
		sum += *(arr+i);
		comp *= *(arr+i);
	}
}

int& f9(int* a, int s)
{

	int arr[2] = {0,1};
	for (int i = 0; i < s; i++)
	{
		arr[0] += *(a + i);
		arr[1] *= *(a + i);
	}
	return arr[0];
}



int main()
{
	// task 1
	// используя указатели и оператор разыменования определить большее из двух чисел

	/*
	int a = 5;
	int b = 8;
	int* pa = &a;
	int* pb = &b;
	(*pa > *pb) ? cout << *pa : cout << *pb;
	cout << endl;
	f(*pa, *pb);
	*/
	
	setlocale(LC_ALL, "");
	/*
	int a;
	cin >> a;
	int* pa = &a;

	f2(pa);
	*/


	//task Используя указатели и оператор разыменования обменять местами значения двух переменных

	/*
	int a = 6;
	int b = 9;

	chng(&a, &b);
	cout << a << " " << b << endl;
	*/
	
	//task summ of array

	/*
	int arr[5] = { 2,7,9,4,6 };

	cout << summOfArr(arr, 5) << endl;
	*/
	//function array fill
	/*
	int b = 8;
	for (int i = 0; i < 10; i++)
	{
		a[i][0] = b;
		arrayFill(i) = b;
	}

	for (int i = 0; i < 10; i++) 
	{
		cout << a[i][0] << " " << a[i][1] << endl;
	}
	*/

	//task find max element of the array and change it to 0

	/*
	int arr[5]{ 8,7,94,2,4 };
	f7(arr, 5) = 0;
	
	for(int i = 0; i< 5; i++)
	{
		cout << arr[i] << " ";
	}
	*/
	
	//int arr[5]{ 8,7,94,2,4 };
	/*
	int sum = 0;
	int comp = 1;
	f8(arr, 5, sum, comp);
	cout << sum << " " << comp << " ";
	*/

	//cout << f9(arr, 5) << " " << *(&f9(arr, 5)+1);

	// constants
	int a = 7;
	const int* pa = &a;
	int b = 0;
	pa = &b;
}

int& arrayFill(int index)
{
	return a[index][1];
}