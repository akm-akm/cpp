#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    double od, id, t, mt, l, fos;

    cout << "All data should be in mm\nOD - ";
    cin >> od;
    cout << "ID - ";
    cin >> id;
    cout << "torque - ";
    cin >> t;
    cout << "FOS - ";
    cin >> fos;
    mt = (16 * t) / ((3.141592 * pow(od, 3)) * (1 - pow((id / od), 4)));
    cout << "Stress - " << mt << " Mpa\n";
    cout << "Max stress - " << mt * fos<<" MPa\n";
    return 0;
}
