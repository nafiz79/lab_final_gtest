#ifndef HEAD_H
#define HEAD_H

#include <string>
#include <memory>

namespace factory {

// Product interface
class Product {
public:
    virtual std::string operation() const = 0;
    virtual ~Product() = default;
};

// Concrete Products
class ConcreteProductA : public Product {
public:
    std::string operation() const override;
};

class ConcreteProductB : public Product {
public:
    std::string operation() const override;
};

// Factory interface
class Creator {
public:
    virtual std::unique_ptr<Product> factoryMethod() const = 0;
    virtual ~Creator() = default;
};

// Concrete Creators
class ConcreteCreatorA : public Creator {
public:
    std::unique_ptr<Product> factoryMethod() const override;
};

class ConcreteCreatorB : public Creator {
public:
    std::unique_ptr<Product> factoryMethod() const override;
};

} // namespace factory

#endif // HEAD_H

