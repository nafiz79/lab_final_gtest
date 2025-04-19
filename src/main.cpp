#include "head.h"

int main() {
    GUIFactory* factory;

    // You can switch factory here to WindowsFactory or LinuxFactory
    factory = new WindowsFactory();

    Window* win = factory->createWindow();
    Scrollbar* bar = factory->createScrollbar();

    win->render();
    bar->render();

    delete win;
    delete bar;
    delete factory;

    return 0;
}
