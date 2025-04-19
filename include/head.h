#ifndef HEAD_H
#define HEAD_H

#include <iostream>
using namespace std;

// Interfaces
class Window {
public:
    virtual void render() = 0;
    virtual ~Window() {}
};

class Scrollbar {
public:
    virtual void render() = 0;
    virtual ~Scrollbar() {}
};

// Concrete Windows implementations
class WindowsWindow : public Window {
public:
    void render() override;
};

class WindowsScrollbar : public Scrollbar {
public:
    void render() override;
};

// Concrete Linux implementations
class LinuxWindow : public Window {
public:
    void render() override;
};

class LinuxScrollbar : public Scrollbar {
public:
    void render() override;
};

// Abstract Factory
class GUIFactory {
public:
    virtual Window* createWindow() = 0;
    virtual Scrollbar* createScrollbar() = 0;
    virtual ~GUIFactory() {}
    //This is a test mehtod, Do not approach
    //Updated head.h
};

// Concrete Factories
class WindowsFactory : public GUIFactory {
public:
    Window* createWindow() override;
    Scrollbar* createScrollbar() override;
};

class LinuxFactory : public GUIFactory {
public:
    Window* createWindow() override;
    Scrollbar* createScrollbar() override;
};

#endif
