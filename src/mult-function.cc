/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "mult-function.h"

constexpr unsigned kMultArity = 2;

MultFunction::MultFunction() : PrimitiveRecursiveFunction(kMultArity) {}

unsigned MultFunction::compute(const std::vector<unsigned>& args) const {
  auto zero_function = std::make_shared<ZeroFunction>();
  auto projection_1_3 = std::make_shared<ProjectionFunction>(1, 3);
  auto projection_3_3 = std::make_shared<ProjectionFunction>(3, 3);
  auto add_function = std::make_shared<AddFunction>();
  auto composition_add_p33_p13 = std::make_shared<CompositionFunction>(
    add_function, std::vector<PRFSmartPointer>{projection_3_3, projection_1_3});
  auto mult_function = std::make_shared<RecursiveFunction>(
    zero_function, composition_add_p33_p13);
  return mult_function->evaluate(args);
}
