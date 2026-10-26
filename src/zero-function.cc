/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "zero-function.h"

constexpr unsigned kZeroArity = 1;

ZeroFunction::ZeroFunction() : PrimitiveRecursiveFunction(kZeroArity) {}

unsigned ZeroFunction::compute(const std::vector<unsigned>& args) const {
  return 0;
}
