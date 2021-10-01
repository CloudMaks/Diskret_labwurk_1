#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y, z, f1, f2, f21, f22;
    cout << "x|y|z| f1| f2 \n";
    cout << "-------------";
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            for (z = 0; z < 2; z++)
            {
                f1 = (!x || !y) || (!(y || x));
                f21 = !((!x || !y) && !z);
                f22 = !(x && y);
                f2 = !((!f21 || f22) && (!f22 || f21));
                cout << "\n" << x << "|" << y << "|" << z << "| " << f1 << " | " << f2;
            };
        };
    };
    return 0;
}
