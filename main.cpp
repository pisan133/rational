/**
 * @brief assert example (instead of using CATCH)
 * @file main.cpp
 *
 * @author Yusuf Pisan
 * @date 16 Jan 2019
 */

#include <iostream>

// forward declaration, implementation in rational_test.cpp
void testRationalAll();

int main() {
  testRationalAll();
  std::cout << "Done!" << std::endl;
  return 0;
}


