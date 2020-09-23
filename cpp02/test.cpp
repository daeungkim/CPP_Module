#include <iostream>

void swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swap(int a)
{

}

int main(void)
{
    int a = 1;
    int b = 2;

    swap(a, b);
    swap(a);

    
    std::cout << "a = " << a << " b = " << b << std::endl;
}