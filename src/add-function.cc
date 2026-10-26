/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "add-function.h"

constexpr unsigned kSumArity = 2;

AddFunction::AddFunction() : PrimitiveRecursiveFunction(kSumArity) {}

unsigned AddFunction::compute(const std::vector<unsigned>& args) const {
  auto projection_1_1 = std::make_shared<ProjectionFunction>(1, 1);
  auto successor = std::make_shared<SuccessorFunction>();
  auto projection_3_3 = std::make_shared<ProjectionFunction>(3, 3);
  auto composition_s_p33 = std::make_shared<CompositionFunction>(
    successor, std::vector<PRFSmartPointer>{projection_3_3});
  auto add_function = std::make_shared<RecursiveFunction>(
    projection_1_1, composition_s_p33);
  return add_function->evaluate(args);
}
