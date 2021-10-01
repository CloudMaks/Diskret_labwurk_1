#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int n = 8;
    setlocale(LC_ALL, "Russian");
    int x, y, z, f1, f11, f12;
    int *f = new int [n];
    cout << "x|y|z| f1 \n";
    cout << "-------------";
    for (x = 0; x < 2; x++)
    {
        for (y = 0; y < 2; y++)
        {
            for (z = 0; z < 2; z++)
            {
                f1 = !(!(x || !y) || !((!z || !x) && (x || z)));
                cout << "\n" << x << "|" << y << "|" << z << "| " << f1;
                if (x == 0 && y == 0 && z == 0)
                    f[0] = f1;
                if (x == 0 && y == 0 && z == 1)
                    f[1] = f1;
                if (x == 0 && y == 1 && z == 0)
                    f[2] = f1;
                if (x == 0 && y == 1 && z == 1)
                    f[3] = f1;
                if (x == 1 && y == 0 && z == 0)
                    f[4] = f1;
                if (x == 1 && y == 0 && z == 1)
                    f[5] = f1;
                if (x == 1 && y == 1 && z == 0)
                    f[6] = f1;
                if (x == 1 && y == 1 && z == 1)
                    f[7] = f1;
            }
        }
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < 8; i++)
    {  
        cout << f[i];
    }
    int krai[8];
    krai[0] = f[0];
    for (int j = 1; j < 8; j++)
    {
        n = n - 1;
        cout << endl;
        for (int i = 0; i <= n; i++)
        {
            krai[j] = f[0];
            if (f[i] == f[i + 1])
                f[i] = 0;
            else
                f[i] = 1;
            cout << f[i];
        }
    }
    cout << endl;
    int X[8] = { 0, 0, 0, 0, 1, 1, 1, 1 };
    int Y[8] = { 0, 0, 1, 1, 0, 0, 1, 1 }; 
    int Z[8] = { 0, 1, 0, 1, 0, 1, 0, 1 };
    for (int i = 0; i < 8; i++)
    {
        cout << krai[i];
    }
    cout << endl;
    string F1;
    string F = " ";
    for (int i = 0; i < 8; i++)
    {
        if (krai[i] == 1)
        {
            if (X[i] == 0 && Y[i] == 0 && Z[i] == 1)
                F1 = "z";
            if (X[i] == 0 && Y[i] == 1 && Z[i] == 0)
                F1 = "y";
            if (X[i] == 0 && Y[i] == 1 && Z[i] == 1)
                F1 = "yz";
            if (X[i] == 1 && Y[i] == 0 && Z[i] == 0)
                F1 = "x";
            if (X[i] == 1 && Y[i] == 0 && Z[i] == 1)
                F1 = "xz";
            if (X[i] == 1 && Y[i] == 1 && Z[i] == 0)
                F1 = "xy";
            if (X[i] == 1 && Y[i] == 1 && Z[i] == 1)
                F1 = "xyz";
            F = F + F1 + "+";
        }
    }
    cout << endl;
    cout << F;
    delete[]f;
    return 0;
}
