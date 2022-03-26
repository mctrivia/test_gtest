//
// Created by mctrivia on 2022-03-10.
//

#include <stdlib.h>
#include <gmp.h>
#include "TestClass.h"
using namespace std;



TestClass::TestClass() { // NOLINT(cppcoreguidelines-pro-type-member-init)
    mpz_init(mImpl);
}

TestClass::TestClass(const TestClass &src) { // NOLINT(cppcoreguidelines-pro-type-member-init)
    mpz_init_set(mImpl,src.mImpl);
}

TestClass::TestClass(string src) { // NOLINT(cppcoreguidelines-pro-type-member-init)
    //create the bigint
    int x=mpz_init_set_str(mImpl,src.c_str(),10);
}

TestClass::~TestClass() {
    mpz_clear(mImpl);
}







TestClass& TestClass::operator = (const TestClass &src) {
    mpz_set(mImpl,src.mImpl);
    return *this;
}

TestClass& TestClass::operator = (TestClass &&src) noexcept {
    mpz_swap(mImpl,src.mImpl);
    return *this;
}

TestClass TestClass::operator + (const TestClass &b) const {
    TestClass ret;
    mpz_add(ret.mImpl,mImpl,b.mImpl);
    return ret;
}

TestClass TestClass::operator - (const TestClass &b) const {
    TestClass ret;
    mpz_sub(ret.mImpl,mImpl,b.mImpl);
    return ret;
}


std::string TestClass::toString() const {
    //convert to string
    char *cStr = mpz_get_str(0,10,mImpl);
    string ret = cStr;
    free(cStr);

    //return
    return ret;
}