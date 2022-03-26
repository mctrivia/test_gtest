#include <iostream>
#include <string>
#include "TestClass.h"

using namespace std;


int main() {
    try {

        TestClass t1{"10000"};
        t1= t1 + t1;
        std::cout << t1.toString() << std::endl;

    } catch (const exception& e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << "error thrown with ..." << std::endl;
    }

    return 0;
}
