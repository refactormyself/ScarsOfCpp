#include <iostream>
#include <boost/array.hpp>
#include <boost/version.hpp> 

#include "head.h"
using std::cout;

int main() {
 cout << "Hello world, we are powerful." << '\n';
 boost::array<int, 4> arr = {{1,2,3,4}};
 cout << "Yes, because we can use Boost Array> Arr[0] = " << arr[0] << '\n';

 cout << "(v1) We are using Boost: "
          << BOOST_VERSION / 100000     << "."  // major version
          << BOOST_VERSION / 100 % 1000 << "."  // minor version
          << BOOST_VERSION % 100                // patch level
          << std::endl;

 cout << "(v2) Boost version: " << BOOST_LIB_VERSION <<'\n';

 return 0;
}
