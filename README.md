# 26-27-ComputationalComplexity-p03-PrimitiveRecursiveFunctions

A function is recursive if and only if it is composed of other primitive
functions or previously defined recursive functions. This is the fundamental
purpose of this practice.

The program simulates the power function $pow(x, y) = x^y$, built exclusively
from primitive functions and from recursive functions defined earlier in the
construction.

The program prompts the user to enter the values of the base and the exponent
via the keyboard. For each pair of values, the program evaluates the function
and displays on the screen each recursive step of the computation, together 
with the final result.

## Problem description

### Primitive functions

The primitive (basic) functions are the following:

- **Zero function** $Z: \mathbb{N} \rightarrow \mathbb{N}$, defined as
  $Z(x) = 0$.
- **Successor function** $S: \mathbb{N} \rightarrow \mathbb{N}$, defined as
  $S(x) = x + 1$.
- **Projection functions** $P_i^n: \mathbb{N}^n \rightarrow \mathbb{N}$, defined as
  $P_i^n(x_1, \dots, x_n) = x_i$, with $1 \le i \le n$.

### Formalization of recursion

New functions are obtained from previously defined ones through three operators:

**Combination.** Given $h_1: \mathbb{N}^n \rightarrow \mathbb{N}^{k_1}$ and
$h_2: \mathbb{N}^n \rightarrow \mathbb{N}^{k_2}$, their combination
$h_1 \times h_2: \mathbb{N}^n \rightarrow \mathbb{N}^{k_1 + k_2}$ is defined as

$$(h_1 \times h_2)(\vec{x}) = (h_1(\vec{x}), h_2(\vec{x}))$$

A function $h: \mathbb{N}^n \rightarrow \mathbb{N}$ is a combination of size
$1$. More than two functions are combined by nesting:
$h_1 \times h_2 \times h_3 = (h_1 \times h_2) \times h_3$.

**Composition.** Given $g: \mathbb{N}^m \rightarrow \mathbb{N}$ and a single
function (or combination) $h: \mathbb{N}^n \rightarrow \mathbb{N}^m$, the
function $f: \mathbb{N}^n \rightarrow \mathbb{N}$ is obtained by composition if

$$f(\vec{x}) = (g \circ h)(\vec{x}) = g(h(\vec{x}))$$

When $h = h_1 \times \dots \times h_m$, this is
$g(h_1(\vec{x}), \dots, h_m(\vec{x}))$.

**Primitive recursion.** Given $g: \mathbb{N}^n \rightarrow \mathbb{N}$ and
$h: \mathbb{N}^{n+2} \rightarrow \mathbb{N}$, the function
$f: \mathbb{N}^{n+1} \rightarrow \mathbb{N}$ is obtained by primitive recursion if

$$f(\vec{x}, 0) = g(\vec{x})$$

$$f(\vec{x}, y + 1) = h(\vec{x}, y, f(\vec{x}, y))$$

Therefore, a function is recursive if and only if it can be obtained from the
primitive functions, or from recursive functions previously defined, by a 
finite number of applications of composition and primitive recursion.

## Run code

```
mkdir build
cd build
cmake ..
make
/primitive-recursive-functions -help
```

## Other information

This code was developed by 
* [Cristhian Adoney Cruz Delgado](https://github.com/CristhianCruzDelgado)

Contact emails 
* <alu0101648293@ull.edu.es>

This code was designed for Computational Complexity, \
signature of the Computer Engineering degree, \
that is studied at the Univeridad de La Laguna.

_17 October 2026_

