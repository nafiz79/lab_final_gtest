#include <iostream>
#include "head.h"

using namespace std;

int main() {
    Singleton* s1 = Singleton::GetInstance();
    Singleton* s2 = Singleton::GetInstance();

    cout << s1->GetMessage() << endl;
    cout << "Both instances are same: " << boolalpha << (s1 == s2) << endl;

    return 0;
}
