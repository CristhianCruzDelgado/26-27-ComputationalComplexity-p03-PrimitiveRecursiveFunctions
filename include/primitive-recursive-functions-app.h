/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Signature: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#ifndef PRIMITIVE_RECURSIVE_FUNCTIONS_APP_H_
#define PRIMITIVE_RECURSIVE_FUNCTIONS_APP_H_

#include <iostream>
#include <string>
#include <string_view>
#include <vector>

#include "power-function.h"
#include "primitive-recursive-function.h"

class PrimitiveRecursiveFunctionsApp {
 public:
  PrimitiveRecursiveFunctionsApp() = default;
  explicit PrimitiveRecursiveFunctionsApp(unsigned, unsigned);
  void runApp();
  
 private:
  unsigned x_;
  unsigned y_;
};

#endif
