#include<iostream>
using namespace std;
class complex 
{
    int real;
    int imag;
    public:
    complex()
    {
        real = 10;
        imag = 20;
    }    
    complex(int a)
    {
        real=a;
        imag=a;
    }
    complex(int a,int b)
    {
        real=a;
        imag=b;
    }
    friend void sum(complex c1,complex c2,complex c3);
};
void sum(complex c1,complex c2,complex c3)
{
    complex c4;
    c4.real=c1.real+c2.real+c3.real;
    c4.imag=c1.imag+c2.imag+c3.imag;
    cout << "sum=" << c4.real << "+i" << c4.imag;
}
int main()
{
    complex c1;
    complex c2(20);
    complex c3(30,40);
    sum(c1,c2,c3);
    return 1;
}
