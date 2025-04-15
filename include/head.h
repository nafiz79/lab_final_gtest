#pragma once
#include <string>
#include <mutex>

using namespace std;

class Singleton {
private:
    static Singleton* instance;
    static mutex mtx;

    // Private constructor
    Singleton();

public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static Singleton* GetInstance();

    string GetMessage() const;
};
