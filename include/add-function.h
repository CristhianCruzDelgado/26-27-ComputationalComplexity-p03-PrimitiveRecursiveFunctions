/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#ifndef ADD_FUNCTION_H_
#define ADD_FUNCTION_H_

#include <memory>
#include <vector>

#include "composition-function.h"
#include "primitive-recursive-function.h"
#include "projection-function.h"
#include "recursive-function.h"
#include "successor-function.h"

class AddFunction : public PrimitiveRecursiveFunction {
 public:
  AddFunction();

 protected:
  unsigned compute(const std::vector<unsigned>&) const override;
};

#endif
