#include "head.h"

namespace factory {

// Implementations of ConcreteProductA and ConcreteProductB
std::string ConcreteProductA::operation() const {
    return "Result from ConcreteProductA";
}

std::string ConcreteProductB::operation() const {
    return "Result from ConcreteProductB";
}

// Implementations of ConcreteCreatorA and ConcreteCreatorB
std::unique_ptr<Product> ConcreteCreatorA::factoryMethod() const {
    return std::make_unique<ConcreteProductA>();
}

std::unique_ptr<Product> ConcreteCreatorB::factoryMethod() const {
    return std::make_unique<ConcreteProductB>();
}

} // namespace factory
