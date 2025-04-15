#include <gtest/gtest.h>
#include "head.h"

using namespace std;

TEST(ShapeFactoryTest, CircleArea) {
    auto shape = ShapeFactory::createShape("circle", 2);
    EXPECT_NEAR(shape->area(), 3.1416* 4, 0.0001);
}

TEST(ShapeFactoryTest, SquareArea) {
    auto shape = ShapeFactory::createShape("square", 3);
    EXPECT_DOUBLE_EQ(shape->area(), 9.0);
}

TEST(ShapeFactoryTest, RectangleArea) {
    auto shape = ShapeFactory::createShape("rectangle", 3, 5);
    EXPECT_DOUBLE_EQ(shape->area(), 15.0);
}

TEST(ShapeFactoryTest, InvalidShapeReturnsNullptr) {
    auto shape = ShapeFactory::createShape("triangle", 3, 5);
    EXPECT_EQ(shape, nullptr);
}
