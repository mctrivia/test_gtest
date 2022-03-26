//
// Created by mctrivia on 2022-03-10.
//

#ifndef test_TESTCLASS_H
#define test_TESTCLASS_H

#define CoinBalanceDecimals 20



#define DECIMAL_MULT 1000000000000000000;

#include <gmpxx.h>

class TestClass {
    mpz_t mImpl;

public:
    TestClass();
    TestClass(const TestClass &src);
    explicit TestClass(std::string src);
    ~TestClass();

    TestClass& operator = (const TestClass &src);
    TestClass& operator = (TestClass &&src) noexcept;
    TestClass operator + (const TestClass &b) const;
    TestClass operator - (const TestClass &b) const;
    [[nodiscard]] std::string toString() const;

};

#endif //test_TESTCLASS_H
