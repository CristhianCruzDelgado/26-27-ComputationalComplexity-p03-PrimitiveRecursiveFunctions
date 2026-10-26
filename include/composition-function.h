/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#ifndef COMPOSITION_FUNCTION_H_
#define COMPOSITION_FUNCTION_H_

#include <stdexcept>
#include <vector>

#include "primitive-recursive-function.h"

class CompositionFunction : public PrimitiveRecursiveFunction {
 public:
  CompositionFunction(PRFSmartPointer, std::vector<PRFSmartPointer>);

 protected:
  unsigned compute(const std::vector<unsigned>&) const override;

 private:
  unsigned validateArity(
    const PRFSmartPointer&, const std::vector<PRFSmartPointer>&) const;
  PRFSmartPointer f_;
  std::vector<PRFSmartPointer> gi_;
};

#endif
