//友元函数的继承
#include <iostream>
using namespace std;
class Father
{
private:
    int age;
public:
    Father()
    {
        age = 50;
    }
    friend void show();
};
class Son : public Father
{
private:
    int age;
public:
    Son()
    {
        age = 20;
    }
};
void show()
{
    Father f1;

    cout << "friend" << f1.age <<endl;
}
int main()
{

    show();
    return 0;
}
