#include <iostream>
#include <math.h>
using namespace std;
int secondLagest(int a[], int l)
{
    int i, temp = 0, index = -1;
    for (i = 0; i < l - 1; i++)
    {
        if (a[i] > a[temp])
        {
            index = temp;
            temp = i;
        }
    }
    return index;
} // wrong

bool isSorted(int a[], int l)
{
    bool asc = true, desc = true;
    for (int i = 0; i < l - 1; i++)
    {
        if (a[i] > a[i + 1])
            asc = false;
        if (a[i] < a[i + 1])
            desc = false;
    }

    return asc || desc;
}
void distArray(int a[], int l, int s, int e)
{
    for (int i = 0; i < l - 1; i++)
    {
        if (a[i] = a[i + 1])
        {
            int j = i;
            while (a[j] == a[j + 1])
            {
                if (j == l - 1)
                    break;
                j++;
            }
            a[i + 1] = a[j];
        }
    }
}

int rainWater(int ar[], int l)
{
    int a, left_m, right_m, sum = 0, gap;
    for (int i = 1; i < l - 1; i++)
    {
        left_m = ar[i];
        for (int j = 0; j < i; j++)
        {
            if (ar[j] > left_m)
                left_m = ar[j];
        }
        right_m = ar[i];
        for (int j = i; j < l; j++)
        {
            if (ar[j] > right_m)
                right_m = ar[j];
        }
        gap = abs(ar[i] - min(left_m, right_m));
        sum += gap;
    }
    return sum;
}
int consecOne(int ar[], int l)
{
    int c = 0, t = 0;
    for (int i = 0; i < l; i++)
    {
        if (ar[i] != 1)
        {
            t = max(t, c);
            c = 0;
        }
        else
        {
            c++;
        }
    }
    t = max(t, c);
    return t;
}
int consecOddEven(int ar[], int l)
{
    int c = 1, t = 0;
    for (int i = 0; i < l - 1; i++)
    {
        if ((ar[i] % 2 == 0 && ar[i + 1] % 2 != 0) ||
            (ar[i + 1] % 2 == 0 && ar[i] % 2 != 0))
        {
            c++;
            t = max(t, c);
        }
        else
        {
            c = 1;
        }
    }
    return t;
}

int main()
{
    int a[] = {1, 0, 1, 0, 1, 0, 1, 1};
    int ar[] = {3, 0, 2};

    cout << secondLagest(a, 6) << endl;
    cout << isSorted(ar, 7) << endl;
    cout << rainWater(ar, 3) << endl;
    cout << consecOddEven(a, 8) << endl;
    return 0;
}
