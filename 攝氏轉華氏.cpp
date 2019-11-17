#include <iostream>
using namespace std;

int main() {
    cout << "請輸入攝氏溫度:";

    float cel;
    cin >> cel;

    float fah = ((cel * 9) / 5) + 32;

    cout << "華氏溫度為" << fah;
}
