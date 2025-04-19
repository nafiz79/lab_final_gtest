#include "head.h"
#include <gtest/gtest.h>
#include <sstream>
#include <functional>

using namespace std;

// Updated to accept std::function
string captureOutput(function<void()> func) {
    stringstream buffer;
    streambuf* old = cout.rdbuf(buffer.rdbuf());
    func();
    cout.rdbuf(old);
    return buffer.str();
}

// Test Windows GUI
TEST(GUITest, WindowsFactoryOutput) {
    WindowsFactory factory;
    Window* win = factory.createWindow();
    Scrollbar* bar = factory.createScrollbar();

    EXPECT_EQ(captureOutput([&]() { win->render(); }), "Rendering Windows Window\n");
    EXPECT_EQ(captureOutput([&]() { bar->render(); }), "Rendering Windows Scrollbar\n");

    delete win;
    delete bar;
}

// Test Linux GUI
TEST(GUITest, LinuxFactoryOutput) {
    LinuxFactory factory;
    Window* win = factory.createWindow();
    Scrollbar* bar = factory.createScrollbar();

    EXPECT_EQ(captureOutput([&]() { win->render(); }), "Rendering Linux Window\n");
    EXPECT_EQ(captureOutput([&]() { bar->render(); }), "Rendering Linux Scrollbar\n");

    delete win;
    delete bar;
}
//This is test method ,do not approach
//updated test_sample.cpp
