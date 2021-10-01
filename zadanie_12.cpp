#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y, z, f1, f2, p; // p -proverka
    p = 0;
    cout << "x|y|z| f1| f2 \n";
    cout << "-------------";
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            for (z = 0; z < 2; z++)
            {
                f1 = !(x && (!y || z));      
                f2 = !(!(x && y)) || !(x && z);
                cout << "\n" << x << "|" << y << "|" << z << "| " << f1 << " | " << f2;
                if (f1 != f2)
                {
                    p = p + 1;
                }
            };
        };
    };
    cout << endl;
    if (p == 0)
        cout <<"Эквивалентны";
    else
        cout << "Не эквивалентны";
    return 0;
}
