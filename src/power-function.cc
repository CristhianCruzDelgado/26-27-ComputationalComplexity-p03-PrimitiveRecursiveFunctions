/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Subject: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "power-function.h"

constexpr unsigned kPowerArity = 2;

PowerFunction::PowerFunction() : PrimitiveRecursiveFunction(kPowerArity) {}

unsigned PowerFunction::compute(const std::vector<unsigned>& args) const {
  auto zero_function = std::make_shared<ZeroFunction>();
  auto succesor_function = std::make_shared<SuccessorFunction>();
  auto one_function = std::make_shared<CompositionFunction>(
    succesor_function, std::vector<PRFSmartPointer>{zero_function});
  auto projection_1_3 = std::make_shared<ProjectionFunction>(1, 3);
  auto projection_3_3 = std::make_shared<ProjectionFunction>(3, 3);
  auto mult_function = std::make_shared<MultFunction>();
  auto composition_mult_p33_p13 = std::make_shared<CompositionFunction>(
    mult_function, std::vector<PRFSmartPointer>{projection_3_3, projection_1_3});
  auto power_function = std::make_shared<RecursiveFunction>(
    one_function, composition_mult_p33_p13);
  return power_function->evaluate(args);
}
