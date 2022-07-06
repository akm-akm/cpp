#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

namespace b
{

    vector<int> convert(string a)
    {
        vector<int> z;
        int l = a.length();
        for (int i = 0; i < l; i++)
        {
            z.push_back(a[i]);
            cout<<a[i]<<endl;
        }
        return z;
    }
}

int main()
{
    string n;
    cin >> n;
    vector<int> z = b::convert(n);
    int l = z.size();
    cout << endl;
    for (int i = 0; i < l; i++)
    {
       // cout << z[i];
    }
    return 0;
}