#include <iostream>
using namespace std;

class Person
{
public:
    int age;
    float high;
    Person(): age(12),high(25.12f)
    {
        age = 13;
    }
    void show()
    {
        cout << "年龄：" << age << "身高:" << high << endl;
    }
};
int main()
{
    //使用初始化列表
    Person op;
    op.show();
    return 0;
}
