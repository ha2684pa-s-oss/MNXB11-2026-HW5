#include "as1.hpp"

namespace homework {

void swap_ptr(int* a, int* b, int *c) { 
    int a2 = *a;
    int b2 = *b;
    int c2 = *c;
    *a = b2;
    *b = c2;
    *c = a2; 

}



}; // namespace homework
