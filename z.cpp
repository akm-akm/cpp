#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> a;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
bool search_in_vector(int z)
{
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == z)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    long i, t, c = 0, x;
    cin >> x;

    for (i = 0; i < x; i++)
    {
        cin >> t;

        a.push_back(t);
    }
    for (i = 0; i < a.size(); i++)
    {
        for (int j = i + 1; j < a.size(); j++)
        {

            int v = gcd(a.at(i), a.at(j));
            // cout << v << endl;
            if (!(search_in_vector(v)))
            {
                a.push_back(v);
                c++;
            }
        }
    }
    cout << c;
    return 0;
}
