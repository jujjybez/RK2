#include <gtest/gtest.h>
#include "Circle.h"
#include "Square.h"
#include "Shape.h"
#include "OpenGLDrawStrategy.h"

TEST(Shape_Test1, Circle_Area1) {
    Circle circle(2.0);
    EXPECT_DOUBLE_EQ(circle.radius(), 2.0);
}

TEST(Shape_Test2, Square_Area2) {
    Square square(3.0);
    EXPECT_DOUBLE_EQ(square.side(), 9.0);
}

TEST(Shape_Test3, Square_Area3) {
    Square square(4.0);
    EXPECT_DOUBLE_EQ(square.side(), 4.0);
}
