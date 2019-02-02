#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<double> vecDouble = {12,21,32,21,92};
    //在数组中从插入数字
    vecDouble.push_back(100.1);
    //遍历1
    for(int i = 0; i <vecDouble.size(); i++){
        cout<<vecDouble[i]<<endl;
    }
    //遍历2
    vector<double>::iterator it;

    //排序
    sort(vecDouble.begin(), vecDouble.end());
    reverse(vecDouble.begin(), vecDouble.end());
    for(it = vecDouble.begin(); it != vecDouble.end(); ++it){
        cout <<*it <<endl;
    }


    //cout << "Hello world!" << endl;
    return 0;
}
