/**
 *Filename:
 *Description: ++重载
 *Author:
 *Time:
 *Copyright:
 */
 #include <iostream>
 using namespace std;
 class Person
 {
 private:
    int age;
 public:
    Person()
    {
        age = 12;
    }

    friend  int operator ++ (Person& a);

 };

 int operator ++ (Person& a)
 {
    a.age = a.age +1;
    return (a.age);
 }

// int main()
// {
//    Person p1;
//    cout << ++p1 <<endl;
//    return 0;
// }
