#include <iostream>
#include "head.h"

using namespace factory;

void clientCode(const Creator& creator) {
    auto product = creator.factoryMethod();
    std::cout << product->operation() << std::endl;
}

int main() {
    ConcreteCreatorA creatorA;
    ConcreteCreatorB creatorB;

    std::cout << "Using CreatorA:\n";
    clientCode(creatorA);

    std::cout << "Using CreatorB:\n";
    clientCode(creatorB);

    return 0;
}
