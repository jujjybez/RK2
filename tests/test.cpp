#include <gtest/gtest.h>
#include "Circle.h"
#include "Square.h"
#include "Shape.h"
#include "OpenGLDrawStrategy.h"

TEST(ShapeTest, CircleArea) {
    Circle circle(2.0);
    EXPECT_DOUBLE_EQ(circle.area(), 12.5663706144);
}

TEST(ShapeTest, SquareArea) {
    Square square(3.0);
    EXPECT_DOUBLE_EQ(square.area(), 9.0);
}

TEST(ShapeTest, SquareArea) {
    Square square(4.0);
    EXPECT_DOUBLE_EQ(square.area(), 11.9);
}