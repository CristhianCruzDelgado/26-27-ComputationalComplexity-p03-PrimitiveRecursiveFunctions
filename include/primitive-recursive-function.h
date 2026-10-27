/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */
 
#ifndef PRIMITIVE_RECURSIVE_FUNCTION_H_
#define PRIMITIVE_RECURSIVE_FUNCTION_H_
 
#include <memory>
#include <stdexcept>
#include <string>
#include <vector>

class PrimitiveRecursiveFunction {
 public:
  explicit PrimitiveRecursiveFunction(unsigned arity) 
      : arity_(arity) {}
  virtual ~PrimitiveRecursiveFunction() = default;
  unsigned evaluate(const std::vector<unsigned>&) const;
  unsigned getArity() const { return arity_; }
  unsigned getNumberOfCalls() const { return number_of_calls_; }
 
 protected:
  virtual unsigned compute(const std::vector<unsigned>&) const = 0;
  inline static unsigned number_of_calls_ = 0;

 private:
  unsigned arity_;
};

using PRFSmartPointer = std::shared_ptr<const PrimitiveRecursiveFunction>;
 
#endif
