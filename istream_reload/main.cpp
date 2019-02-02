//输入输出运算符重载
#include <iostream>

using namespace std;
class Person
{
private:
    float name;
    double weight;

public:
    Person()
    {
        //name = 'n';
        //weight = 0;

    }
    void show()
    {
        cout << name << endl;
        cout << weight <<endl;
    }
    friend istream& operator >>(istream& is, Person& b);
    friend ostream& operator <<(ostream& os, Person& b);
};
ostream& operator <<(ostream& os, Person& b)
{
    os << b.name << endl;
    os << b.weight << endl;
    return os;
}
istream& operator >>(istream& is, Person& b)
{
    is >> b.name >> b.weight;
    if(is.fail())
    {
        b.name = 0;
        b.weight = 0;
    }
    return is;
}
//int main()
//{
//    Person p1;
//    cin >> p1;
//    cout << p1;
//    //p1.show();
//    return 0;
//}
