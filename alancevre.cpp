#include <iostream>
#define PI 3.14
using namespace std;

double daireAlani(double r)
{
    double alan = PI * r * r;
    cout << "Yaricapi girilen dairenin alani: " << alan << endl;
}

double daireCevresi(double r)
{
    double cevre = 2 * PI * r;
    cout << "Yaricapi girilen dairenin cevresi: "<< cevre;
}

int main()
{
    double r;
    cout << "Daire yaricapini giriniz: ";
    cin >> r;
    daireAlani(r);
    daireCevresi(r);
}
