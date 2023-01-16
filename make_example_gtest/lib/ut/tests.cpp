#include <gtest/gtest.h>
#include <CustomLib/classFromLibrary.h>

TEST(First_set_of_tests, first_test_case) {
    classFromLibrary cfl;

    EXPECT_EQ(cfl.returnTrue("whatever") , true);
}

TEST(First_set_of_tests, second_test_case) {
    classFromLibrary cfl;

    std::string input("whatever");
    std::string expected_output(input);

    EXPECT_EQ(cfl.returnEchoString(input) , expected_output);
}