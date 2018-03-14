#include <iostream>

using namespace std;

int main()
{
    char number[11], name[12];
    int all;
    
    cout << "請輸入您的身分證字號";
    cin >> number;
    
    for(int x = 0; x < 12; x++){
        name[x] = 0;
    }
    name[0] = number[0];
    for(int x = 1, y = 2; x < 12, y < 13; x++, y++){
        name[y] = number[x];
    }
    'A' == 10;
    'B' == 11;
    'C' == 12;
    'D' == 13;
    'E' == 14;
    'F' == 15;
    'G' == 16;
    'H' == 17;
    'I' == 34;
    'J' == 18;
    'K' == 19;
    'L' == 20;
    'M' == 21;
    'N' == 22;
    'O' == 35;
    'P' == 23;
    'Q' == 24;
    'R' == 25;
    'S' == 26;
    'T' == 27;
    'U' == 28;
    'V' == 29;
    'W' == 32;
    'X' == 30;
    'Y' == 31;
    'Z' == 33;
   
    all = name[0] * 1 + name[1] * 9 + name[2] * 8 + name[3] * 7 + name[4] * 6 + name[5] * 5 + name[6] * 4 + name[7] * 3 + name[8] * 2 + name[9] * 1 + name[10] * 1;
    
    if (all%10 == 0)
        cout << "正確";
    else 
        cout << "錯誤";
    
    return 0;
}
