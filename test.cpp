#include <gtest/gtest.h>
#include "Circle.h"
#include "Square.h"
#include "Shape.h"
#include "OpenGLDrawStrategy.h"

TEST(Shape_Test, CircleArea) {
    Circle circle(2.0);
    EXPECT_DOUBLE_EQ(circle.radius(), 2);
}

TEST(Shape_Test, SquareArea) {
    Square square(3.0);
    EXPECT_DOUBLE_EQ(square.side(), 3.0);
}

TEST(Shape_Test, SquareArea) {
    Square square(4.0);
    EXPECT_DOUBLE_EQ(square.side(), 4);
}
