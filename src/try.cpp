#include "head.h"

// Windows implementations
void WindowsWindow::render() {
    cout << "Rendering Windows Window" << endl;
}

void WindowsScrollbar::render() {
    cout << "Rendering Windows Scrollbar" << endl;
}

// Linux implementations
void LinuxWindow::render() {
    cout << "Rendering Linux Window" << endl;
}

void LinuxScrollbar::render() {
    cout << "Rendering Linux Scrollbar" << endl;
    
}

// Factory implementations
Window* WindowsFactory::createWindow() {
    return new WindowsWindow();
}

Scrollbar* WindowsFactory::createScrollbar() {
    return new WindowsScrollbar();
}

Window* LinuxFactory::createWindow() {
    return new LinuxWindow();
}

Scrollbar* LinuxFactory::createScrollbar() {
    return new LinuxScrollbar();
}
