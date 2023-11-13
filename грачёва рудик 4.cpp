#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int a = 3, b = -4, c = 9;
    double D = b * b - 4 * a * c;

    if (D > 0)
    {
        double x1 = (-b + D) / (2 * a);
        double x2 = (-b - D) / (2 * a);
        cout << "Уравнение имеет два корня: x = " << x1 << " x2 = " << x2 << endl;

    }
    else if (D <= 0)
    {
        cout << "Дискриминант: " << D << " . У уравнения нет действительных корней" << endl;

    }

    return 0;
}