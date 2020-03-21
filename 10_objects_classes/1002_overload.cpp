#include <iostream>

class Data 
{
private:
    int a;
    int b;
public:
    Data(int a, int b);
    ~Data();
    int sum() const;
    int operator+(const Data &d) const;
};

Data::Data(int a, int b)
{
    this->a = a;
    this->b = b;
}

Data::~Data()
{

}

int Data::sum() const
{
    return this->a + this->b;
}

// overload an operator
int Data::operator+(const Data &d) const
{
    return this->sum() + d.sum();
}

int main()
{
    Data apple = Data(3, 2);
    Data banana = Data(10, 90);
    std::cout << apple + banana << std::endl;
    return 0;
}

