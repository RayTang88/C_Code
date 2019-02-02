//ostream运算符重载
#include <iostream>
using namespace std;
class Person
{
private:
    char name;
public:
    Person(char b)
    {
        name = b;
    }
    friend ostream& operator << (ostream& os ,Person& a);
};

ostream& operator << (ostream& os, Person& a)
{
    os << a.name;
    return os;
}
int main()
{
    Person p1('W');
    cout << p1;
    return 0;
}
