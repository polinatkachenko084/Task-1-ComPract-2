#include <iostream>
#include <cmath>
#include <cstdlib>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float x;
    double y = 0, a, pi;

    pi = acos(-1.0);
    a = 0.8 * pi;

    cout << "Введіть значення x\n";
    cin >> x;

    bool cond1 = (x < 0);
    bool cond2 = (x > 1.4);
    bool cond3 = (x >= 0 && x <= 1.4);

    if (cond1 == true)
    {
        y = pow(x, 2) + 1;
        cout << "x=" << x << " y=" << y << '\n';
    }
    else if (cond2 == true)
    {
        y = x - 2.1;
        cout << "x=" << x << " y=" << y << '\n';
    }
    else if (cond3 == true)
    {
        y = cos(a * x);
        cout << "x=" << x << " y=" << y << '\n';
    }
    else
    {
        cout << "немає розв'язків\n";
    }
}


