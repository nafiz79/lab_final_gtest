#include <gtest/gtest.h>
#include "head.h"

using namespace std;

TEST(SingletonTest, GetInstanceReturnsSamePointer) {
    Singleton* s1 = Singleton::GetInstance();
    Singleton* s2 = Singleton::GetInstance();
    EXPECT_EQ(s1, s2);
}

TEST(SingletonTest, MessageIsCorrect) {
    Singleton* s = Singleton::GetInstance();
    EXPECT_EQ(s->GetMessage(), "Hello from Singleton!");
}
