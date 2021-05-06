//===----------------------------------------------------------------------===//
//
// Philipp Schubert
//
//    Copyright (c) 2017 - 2021
//    Secure Software Engineering Group
//    Heinz Nixdorf Institute
//    Paderborn University
//    philipp.schubert@upb.de
//
//===----------------------------------------------------------------------===//

#include <cmath>
#include <iostream>

int main()
{
    // Specify the bounds of the integral to be computed and setup the variables
    // required for the computation.
    const long double from = 1.0;
    const long double to = 100;
    long double integral_val = 0.0;
    long double x = from;
    //const size_t N = 1000000;
    // The 'static_cast' expression just tells the compiler to convert the
    // variable 'N' from a 'size_t' type into a 'long double' data type.
    //const long double step_with =
       // std::abs(from - to) / static_cast<long double>(N);
    // Loop over the 'N' sampling points.
    for (size_t n = 0; n < to; ++n)
    {
        // Compute the function's value at the sampling point 'x' and accumulate it.

        integral_val += x;
        x++;
        //std::cout << integral_val << ", ";
    }
    // Normalize with the number of sampling points we have used.
    //integral_val = integral_val / N;
    std::cout << integral_val << '\n';
    return 0;
}
