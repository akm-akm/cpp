#include <iostream>
using namespace std;
class Complex
{
private:
    int real, img;

public:
    Complex(int real = 0, int img = 0)
    {
        this->real = real;
        this->img = img;
    }
    friend Complex operator+(Complex x, Complex y);
    friend ostream &operator<<(ostream &, Complex &c);
};
Complex operator+(Complex x, Complex y)
{
    Complex temp;
    temp.real = y.real + x.real;
    temp.img = y.img + x.img;
    return temp;
}
ostream &operator<<(ostream &o, Complex &c)
{
    o << c.real << " + i" << c.img << endl;
    return o;
}
int main()
{
    Complex c1(10, 3), c2(22, 32), c3;
    c3 = c1 + c2;
    cout << c3;
    return 0;
}