//模板以及模板的具体化（注意模板调用顺序）
//#include <iostream>
//using namespace std;
//
//template<typename Y, class T>//模板交叉使用
//void fun(T t1, Y y1)
//{
//    cout << y1 <<" "<< t1 << endl;
//}
//
//struct Node
//{
//    int a;
//    float b;
//    //Node()
//    //{
//
//    //}
//};
//
//template<typename T1>//模板交叉使用
//void fun(T1 t1)
//{
//    cout << t1 << endl;
//}
//
//template<> void fun<Node>(Node n2)
//{
//    cout << n2.a <<" "<< n2.b << endl;
//}
//
//template<> void fun<float>(float n2)
//{
//    cout << n2 << endl;
//}
//
//void fun(int a)
//{
//
//}
//int main()
//{
//    Node n = {1, 2.2};
//    fun(12);
//    return 0;
//}
