#include <iostream>

using namespace std;
class Person
{
public:
    int age;
    Person()
    {
        age =12;
    }
};

//int main()
//{
//    //使用指针调用构造函数
//    Person * ptr = new Person;
//    cout << "age "<< ptr->age <<endl;
//    delete ptr;
//    //在构造函数中赋值
//    /*
//    Person op;
//    cout << "age" << op.age << endl;
//    */
//    return 0;
//}
