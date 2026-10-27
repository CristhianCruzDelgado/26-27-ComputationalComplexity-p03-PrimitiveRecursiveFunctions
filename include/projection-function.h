/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#ifndef PROJECTION_FUNCTION_H_
#define PROJECTION_FUNCTION_H_

#include <stdexcept>
#include <vector>

#include "primitive-recursive-function.h"

class ProjectionFunction : public PrimitiveRecursiveFunction {
 public:
  ProjectionFunction(unsigned, unsigned);

 private:
  unsigned compute(const std::vector<unsigned>&) const override;
  unsigned index_;
};

#endif
