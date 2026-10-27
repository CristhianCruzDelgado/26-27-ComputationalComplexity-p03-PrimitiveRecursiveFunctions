/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#ifndef RECURSIVE_FUNCTION_H_
#define RECURSIVE_FUNCTION_H_

#include <stdexcept>
#include <vector>

#include "primitive-recursive-function.h"

class RecursiveFunction : public PrimitiveRecursiveFunction {
 public:
  RecursiveFunction(PRFSmartPointer, PRFSmartPointer);

 private:
  unsigned compute(const std::vector<unsigned>&) const override;
  unsigned validateArity(const PRFSmartPointer&, const PRFSmartPointer&);
  PRFSmartPointer g_;
  PRFSmartPointer h_;
};

#endif
