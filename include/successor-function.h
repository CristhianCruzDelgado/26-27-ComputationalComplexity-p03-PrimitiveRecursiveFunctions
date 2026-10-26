/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#ifndef SUCCESSOR_FUNCTION_H_
#define SUCCESSOR_FUNCTION_H_

#include <limits>
#include <stdexcept>
#include <vector>

#include "primitive-recursive-function.h"

class SuccessorFunction : public PrimitiveRecursiveFunction {
 public:
  SuccessorFunction();

 protected:
  unsigned compute(const std::vector<unsigned>&) const override;
};

#endif
