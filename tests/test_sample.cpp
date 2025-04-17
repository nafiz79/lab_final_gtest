#include <gtest/gtest.h>
#include "head.h"

using namespace factory;

TEST(FactoryTest, ConcreteProductAOperation) {
    ConcreteCreatorA creator;
    auto product = creator.factoryMethod();
    EXPECT_EQ(product->operation(), "Result from ConcreteProductA");
}

TEST(FactoryTest, ConcreteProductBOperation) {
    ConcreteCreatorB creator;
    auto product = creator.factoryMethod();
    EXPECT_EQ(product->operation(), "Result from ConcreteProductB");
}
