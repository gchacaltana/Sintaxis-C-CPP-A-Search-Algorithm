#include<iostream>
using namespace std;
int main() {
    int b = 10;
    int c = 100;
    auto f = [&](int& a) -> int {
        b += 1;
        c +=1;
        return a + b + c;
    };
    int a = 10;
    cout << f(a) << "\n";
    cout << b << "\n";
    cout << c << "\n";
    return 0;
}
