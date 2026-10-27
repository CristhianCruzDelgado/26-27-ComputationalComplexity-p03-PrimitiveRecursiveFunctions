/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "projection-function.h"

ProjectionFunction::ProjectionFunction(unsigned index, unsigned arity)
    : PrimitiveRecursiveFunction(arity), index_(index) {
  if (index < 1 || index > arity) {
    throw std::invalid_argument(
        "Invalid projection: index must satisfy 1 <= i <= n\n");
  }
}

unsigned ProjectionFunction::compute(const std::vector<unsigned>& args) const {
  ++number_of_calls_;
  return args[index_ - 1];
}
