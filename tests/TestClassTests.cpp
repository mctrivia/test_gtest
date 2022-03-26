//
// Created by mctrivia on 2022-03-25.
//

#include <gmp.h>
#include "gtest/gtest.h"
#include "TestClass.h"

TEST(CoinBalanceTest,Constructors) {
    TestClass a{"5"};
    EXPECT_EQ("5",a.toString());
}