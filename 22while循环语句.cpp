#include <iostream>
using namespace std;
int main22()
{

    //while循环

    //在屏幕中打印0~9
    int num = 0;
    while (num < 10)  //注意事项：在写循环中一定要避免死循环的出现
    {
        cout << "num = " << num << endl;
        num++;
    }



    system("pause");
    return 0;
}