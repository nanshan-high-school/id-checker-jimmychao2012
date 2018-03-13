#include <iostream>

using namespace std;

int main()
{
    char name[12];
    int all;
    
    cout << "請輸入您的身分證字號";
    cin >> name;
    
    all = name[0] * 1 + name[1] * 9 + name[2] * 8 + name[3] * 7 + name[4] * 6 + name[5] * 5 + name[6] * 4 + name[7] * 3 + name[8] * 2 + name[9] * 1 + name[10] * 1;
    
    if (all%10 == 0)
        cout << "正確";
    else 
        cout <<"錯誤";
    return 0;
}
