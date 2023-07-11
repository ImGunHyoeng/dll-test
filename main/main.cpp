#include <iostream>
#include "MathLibraly.h"
using namespace std;

int main(int argc,char * argv[])
{/*
    cout << "Hello World -"<<"argc:"<<argc<<"argv[0]" << argv[0];
    if (argc > 1)
    {
        cout << "argc[1]" << argv[1];
    }*/
    // Initialize a Fibonacci relation sequence.
    //fibonacci_init(1, 1);
    //// Write out the sequence values until overflow.
    //do {
    //    std::cout << fibonacci_index() << ": "
    //        << fibonacci_current() << std::endl;
    //} while (fibonacci_next());
    //// Report count of values written before overflow.
    //std::cout << fibonacci_index() + 1 <<
    //    " Fibonacci sequence values fit in an " <<
    //    "unsigned 64-bit integer." << std::endl;
    cout << AlwaysTrue() << endl;
    return 0;
}
