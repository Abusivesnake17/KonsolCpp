#include <iostream>
using namespace std;
double topla(double x, double y)
{
	cout << "Toplam: " << x + y << endl;
	return x + y;
}

double cikar(double x, double y)
{
	cout << "Cikarim: " << x - y << endl;
	return x - y;
}

double carp(double x, double y)
{
	cout << "Carpim: " << x * y << endl;
	return x * y;
}

double bol(double x, double y)
{
	cout << "Bolum: " << x / y << endl;
	return x / y;
}

int main()
{
	double a, b;
	cout << "a sayisini giriniz: ";
	cin >> a;
	cout << "b sayisini giriniz: ";
	cin >> b;
	cout << endl;
	topla(a, b);
	cikar(a, b);
	carp(a, b);
	bol(a, b);
	return 0;
}
