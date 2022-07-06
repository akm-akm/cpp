#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
unsigned long long int fact(int n, int k = 1)
{

	if (n == 0)
		return k;
	return fact(n - 1, n * k);
}
unsigned long long int fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fib(n - 1) + fib(n - 2);
}
unsigned long long int sum(int n, int k = 0)
{
	if (n == 0)
		return k;
	return sum(n - 1, n + k);
}
bool stringPalindrome(string &k, int start, int end)
{
	if (start >= end)
		return true;
	return (k[start] == k[end]) && stringPalindrome(k, start + 1, end - 1);
}
int sumDigit(int n, int k = 0)
{
	if (n == 0)
		return k;
	return sumDigit(n / 10, k + n % 10);
}
int ropeProb(int n, int a, int b, int c)
{
	if (n == 0)
		return 0;
	if (n < 0)
		return -1;
	int res = max(
		ropeProb(n - a, a, b, c),
		max(ropeProb(n - b, a, b, c),
			ropeProb(n - c, a, b, c)));
	if (res == -1)
		return -1;
	return res + 1;
}
void subString(string s, string curr = "", int i = 0)
{
	if (i == s.length())
	{
		cout << curr << endl;
		return;
	}
	subString(s, curr, i + 1);
	subString(s, curr + s[i], i + 1);
}
double mp(double x, int n)
{
	if (n == 0)
		return 1.0;
	else if (n % 2 == 0)
		return x * mp(x, n / 2);
	else
		return x * mp(x, n / 2);
}
double myPow(double x, int n)
{
	if (n == 0)
		return 1;

	double xx = mp(x, n);
	if (n < 0)
	{
		return 1 / xx;
	}
	else
		return xx;
}
/*
void reverseString(vector<char> &s, int i = 0)
{
	if (i == s.size())
	{
		cout << "[\"";
		return;
	}
	char temp = s[i];
	s[i] = s[end];
	s[end] = temp;
	reverseString(s, i + 1);
	cout << s[i];
	if (i != 0)
	{
		cout << "\",\"";
	}
	if (i == 0)
	{
		cout << "\"]";
	}
}
*/

int jos(int n, int k)
{
	if (n == 1)
		return 0;
	return (jos(n - 1, k) + k) % n;
}

int subSum(int a[], int s, int l, int c = 0, int i = -1)
{
	if (c == s)
		return 1;

	if (c > s || i == l - 1)
		return 0;

	return subSum(a, s, l, c, i + 1) +
		   subSum(a, s, l, c + a[i], i + 1);
}
void permutation(string &s, string curr = "", int i = 0)
{
	if (i == s.length() - 1)
	{
		cout << curr << endl;
		return;
	}
	for (int j = i; j < s.length(); j++)
	{
		swap(s[i], s[j]);
		permutation(s, curr, i + 1);
		swap(s[j], s[i]);
	}
}
int main()
{
	int f = 3, fb = 4, arr[] = {10, 5, 2, 3, 6}, s = 26, ll = 10;
	string a = "AKM";
	long d = 103;
	vector<char> ss = {'h', 'e', 'l', 'l', 'o'};
	int l = a.length() - 1;
	cout << "factorial : " << fact(f) << endl;
	cout << "fibonnaci : " << fib(fb) << endl;
	cout << "sum : " << sum(fb) << endl;
	cout << "palindrome : " << stringPalindrome(a, 0, l) << endl;
	cout << "sum of digit : " << sumDigit(d) << endl;
	cout << "no. of cuts : " << ropeProb(11, 5, 3, 2) << endl;
	cout << myPow(0.00001, 2147483647) << endl;
	subString("AB");
	//	reverseString(s);
	cout << "person alive : " << jos(9, 3) << endl;
	cout << "no. of sets : " << subSum(arr, s, ll) << endl;
	permutation(a);
}
