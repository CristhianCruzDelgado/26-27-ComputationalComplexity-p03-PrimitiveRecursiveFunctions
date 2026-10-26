/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "primitive-recursive-function.h"

unsigned PrimitiveRecursiveFunction::evaluate(
    const std::vector<unsigned>& args) const {
  if (args.size() != arity_) {
    throw std::invalid_argument(
        "Wrong number of arguments: expected " + std::to_string(arity_) +
        ", got " + std::to_string(args.size()) + "\n");
  }
  return compute(args);
}
