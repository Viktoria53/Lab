// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double *mass, max = 0, sum = 0, c;
	int n, number_min = -1;

	cout << "Enter n: " << endl;
	cin >> n;
	mass = new double[n];

	cout << "Enter your massive: " << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> mass[i];
		if (mass[i] > max) max = mass[i];
		if (mass[i] < 0) number_min = i;
	}

	cout << "Your massive: " << endl;
	for (int i = 0; i < n; i++)
		cout << mass[i] << " ";

	cout << "Enter your number: " << endl;
	cin >> c;
	for (int i = 0, k = 0; i < n; i++)
	{
		if (mass[i] < c) k++;
		if (i == n - 1) cout << "k: " << k << endl;
	}

	if (number_min != -1) {
		for (int i = ++number_min; i < n; i++)
			sum += mass[i];
		cout << "Sum: " << sum << endl;
	}

	for (int j = 0, i = 0; j < n; j++)
	{
		if (fabs(max - mass[j]) <= max*0.2)
			swap(mass[j], mass[i++]);
	}

	cout << "Your new massive: " << endl;
	for (int i = 0; i < n; i++)
		cout << mass[i] << " ";

	return 0;
}