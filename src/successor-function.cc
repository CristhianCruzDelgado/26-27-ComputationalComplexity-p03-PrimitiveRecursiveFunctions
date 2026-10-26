/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "successor-function.h"

constexpr unsigned kSuccessorArity = 1;

SuccessorFunction::SuccessorFunction()
    : PrimitiveRecursiveFunction(kSuccessorArity) {}

unsigned SuccessorFunction::compute(const std::vector<unsigned>& args) const {
  if (args[0] == std::numeric_limits<unsigned>::max()) {
    throw std::overflow_error("Overflow: successor exceeds unsigned range\n");
  }
  return args[0] + 1;
}
