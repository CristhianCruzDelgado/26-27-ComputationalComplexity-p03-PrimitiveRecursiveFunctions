cmake_minimum_required(VERSION 3.10)

project(ComputationalComplexity-p03-PrimitiveRecursiveFunctions)

file(GLOB_RECURSE SOURCES src/*.cc)

# debuging ...
# add_compile_options(-fsanitize=address -fno-omit-frame-pointer)
# add_link_options(-fsanitize=address)

add_executable(primitive-recursive-functions ${SOURCES})

target_include_directories(primitive-recursive-functions PRIVATE include)
target_compile_features(primitive-recursive-functions PRIVATE cxx_std_17)
