/** Use this main to test exercises. See the example with 'as1.0' below. 
 *  You can add all the exercise tests inside the same main.
 *  Don't forget to add includes properly.
 * */

#include "as1.hpp"
#include <iostream>

using namespace homework;

int main() { 
    int a = 1;
    int b = 2;
    int c = 3;

    int* ptr = &a;

    std::cout << "Before: a = " << a << "\n";

    homework::swap_ptr(&a, &b, &c);

    std::cout << "After: a = " << a << "\n";
    
}

