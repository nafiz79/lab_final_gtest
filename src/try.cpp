#include "head.h"

using namespace std;

// Define static members
Singleton* Singleton::instance = nullptr;
mutex Singleton::mtx;

Singleton::Singleton() {
    // Constructor logic if needed
}

Singleton* Singleton::GetInstance() {
    lock_guard<mutex> lock(mtx);
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}

string Singleton::GetMessage() const {
    return "Hello from Singleton!";
}
