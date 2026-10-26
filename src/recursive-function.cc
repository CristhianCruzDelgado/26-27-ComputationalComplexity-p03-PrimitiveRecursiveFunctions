/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "recursive-function.h"

RecursiveFunction::RecursiveFunction(PRFSmartPointer g, PRFSmartPointer h)
    : PrimitiveRecursiveFunction(validateArity(g, h)),
        g_(std::move(g)), h_(std::move(h)) {}

unsigned RecursiveFunction::compute(const std::vector<unsigned>& args) const {
  const std::vector<unsigned> params(args.begin(), args.end() - 1);
  const unsigned y = args.back();
  const std::size_t n = params.size();

  std::vector<unsigned> arguments_of_h(params);
  arguments_of_h.resize(n + 2);

  unsigned acc = g_->evaluate(params);
  for (unsigned i = 0; i < y; ++i) {
    arguments_of_h[n] = i;
    arguments_of_h[n + 1] = acc;
    acc = h_->evaluate(arguments_of_h);
  }
  return acc;
}

unsigned RecursiveFunction::validateArity(
    const PRFSmartPointer& g, const PRFSmartPointer& h) {
  if (!g || !h) {
    throw std::invalid_argument("Recursion: g and h must not be null");
  }
  if (g->getArity() < 1) {
    throw std::invalid_argument("Recursion: g must have arity >= 1");
  }
  if (h->getArity() != g->getArity() + 2) {
    throw std::invalid_argument("Recursion: arity of h must be arity of g + 2");
  }
  return g->getArity() + 1;
}
