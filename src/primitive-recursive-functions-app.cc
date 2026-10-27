/**
 * Universidad de La Laguna ULL
 * Degree: Computer Engineering
 * Signature: Computational Complexity
 * Practice 03: Primitive Recursive Functions
 * Author: Cristhian Adoney Cruz Delgado
 * Email: alu0101648293@ull.edu.es
 */

#include "primitive-recursive-functions-app.h"

constexpr std::string_view kHorizontalLine = "------------------"
  "--------------------------------------------------------------\n";

PrimitiveRecursiveFunctionsApp::PrimitiveRecursiveFunctionsApp(
    unsigned x, unsigned y) : x_(x), y_(y) {}

void PrimitiveRecursiveFunctionsApp::runApp() {
  PRFSmartPointer power_function = std::make_shared<PowerFunction>();
  std::cout << kHorizontalLine
            << "Power(" << x_ << ", " << y_ << ") = "
            << power_function->evaluate({x_, y_}) << "\n"
            << "Number of calls: "
            << power_function->getNumberOfCalls() << "\n"
            << kHorizontalLine;
}
