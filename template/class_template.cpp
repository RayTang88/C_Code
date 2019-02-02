//指针实现类模板
//#include <iostream>
//using namespace std;
//
//template<typename T,typename Y>
//class Father
//{
//public:
//    T a;
//    Y b;
//    Father(T t1, Y y2)
//    {
//        a = t1;
//        b = y2;
//
//    }
//    void show();
////    {
////        cout << a <<" "<< b << endl;
////    }
//};
//template<typename T, typename Y>//模板函数
//void Father<T, Y>::show()//类外实现函数
//{
//    cout << a << b << endl;
//}
//
//template<typename T1>//类模板
//class Father1
//{
//public:
//    T1 a;
//    Father1(T1 t1)
//    {
//        a = t1;
//    }
//    void show();
//};
//template<typename T1>//函数模板
//void Father1<T1>::show()//类外实现类内的函数
//{
//    cout << a << endl;
//}
//int main()
//{
//    int a = 24;
//    Father<int, string>* f1 = new Father<int, string>(12,"Janms harden");
//    f1->show();
//    Father1<int>* f2 = new Father1<int>(12);
//    f2->show();
//    //Father<int,string> f(12,"Janms harden");
//    //f.show();
//    delete f1;
//    delete f2;
//    return 0;
//}
