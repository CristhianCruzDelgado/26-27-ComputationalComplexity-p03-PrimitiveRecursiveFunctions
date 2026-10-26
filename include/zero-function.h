/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#ifndef ZERO_FUNCTION_H_
#define ZERO_FUNCTION_H_

#include <vector>

#include "primitive-recursive-function.h"

class ZeroFunction : public PrimitiveRecursiveFunction {
 public:
  ZeroFunction();

 protected:
  unsigned compute(const std::vector<unsigned>&) const override;
};

#endif
