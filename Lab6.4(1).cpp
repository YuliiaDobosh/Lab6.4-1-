
#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int*a , const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		a[i] = Low + rand() % (High - Low + 1);
}
void Print(int* a, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << endl;
}
int Imax(int* a, const int size)
{
	int max=-1;
	int Imax=0;
	for (int i = 0; i < size; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			Imax = i;
		}
	}return Imax;
}
int FindNull(int* a, const int size)
{
	int Inull1 =0;
	int Inull2 =0;
	
	for (int i =0; i < size; i++)
	{
		if (a[i] == 0)
		{
			Inull1 = i;
			break;
		}
	}
	for (int i = Inull1+1; i < size; i++)
	{
		if (a[i] == 0)
		{
			Inull2 = i;
			break;
		}
	}
	int d = 1;
	cout << "Inull1 = " << Inull1 << endl;
	cout << "Inull2 = " << Inull2 << endl;
	{
		for (int i = Inull1+1; i < Inull2; i++)
		{
			d *= a[i];
		}
	}return d;
}
void SortArray(int* a, int *b, const int size)
{
	int j = 0;
	for (int i = 0; i < size; i++)
	{
			if ((i % 2) == 0)
			{
				b[j] = a[i];
				j++;
			}
	}
	for (int i = 0; i < size; i++)
	{
		if ((i % 2) != 0)
		{
			b[j] = a[i];
			j++;
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));
	int n;
	int i;
	cout << "n = "; cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	int Low;
	cout << "Low= "; cin >> Low;
	int High;
	cout << "High = "; cin >> High;
	Create(a, n, Low, High);
	Print(a, n);
	cout << "Imax = " << Imax(a, n) << endl;
	cout << "a*b = " << FindNull(a, n) << endl;
	SortArray(a,b, n);
	Print(b, n);
	delete[] a;
	delete[] b;
	return 0;
}
