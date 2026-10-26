/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "composition-function.h"

CompositionFunction::CompositionFunction(
    PRFSmartPointer f, std::vector<PRFSmartPointer> gi)
        : PrimitiveRecursiveFunction(validateArity(f, gi)),
            f_(std::move(f)), gi_(std::move(gi)) {}

unsigned CompositionFunction::compute(const std::vector<unsigned>& args) const {
  std::vector<unsigned> gi_results;
  gi_results.reserve(gi_.size());
  for (const auto& inner : gi_) {
    gi_results.push_back(inner->evaluate(args));
  }
  return f_->evaluate(gi_results);
}

unsigned CompositionFunction::validateArity(
    const PRFSmartPointer& f, const std::vector<PRFSmartPointer>& gi) const {
  if (!f) {
    throw std::invalid_argument(
        "Composition: outer function must not be null");
  }
  if (f->getArity() != gi.size()) {
    throw std::invalid_argument(
        "Composition: outer arity must equal number of inner functions");
  }
  const unsigned inner_arity = gi.front()->getArity();
  for (const auto& inner : gi) {
    if (!inner) {
      throw std::invalid_argument(
          "Composition: inner function must not be null");
    }
    if (inner->getArity() != inner_arity) {
      throw std::invalid_argument(
          "Composition: all inner functions must have the same arity");
    }
  }
  return inner_arity;
}
