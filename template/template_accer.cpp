////继承。注意参数传递
//#include <iostream>
//using namespace std;
//
//template<typename T, typename Y>
//class Father
//{
//public:
//    T age;
//    Y name;
//    Father(T t1, Y y1)
//    {
//        age = t1;
//        name = y1;
//    }
//    void show()
//    {
//        cout << age << name << endl;
//    }
//
//};
//template<typename T, typename Y>
//class Father1
//{
//public:
//    T age;
//    Father1(T t1)
//    {
//        age = t1;
//    }
//    void show()
//    {
//        cout << age << endl;
//    }
//
//};
//template<typename W, typename Z>
//class Son : public Father<W, Z>
//{
//public:
//    Son(W a, Z b) : Father<W, Z>(a, b)
//    {
//
//    }
//};
//
//template<typename W, typename Z>
//class Son1 : public Father1<W, Z>
//{
//public:
//    Son1(W a) : Father1<W, Z>(a)
//    {
//
//    }
//};
//int main()
//{
//    Son<int, string> s(30,"Harden");
//    s.show();
//    Son1<float, string> s1(32.0f);
//    s1.show();
//    return 0;
//}
