#include <cstdint>

#include <iostream>

#include <pl/bitmask.hpp>

#include "main.hpp"

enum class E : std::uint16_t
{
  A = 0b0000'0001,
  B = 0b0000'0010,
  C = 0b0000'0011
};

PL_ENABLE_BITMASK_OPERATORS(E)

int main()
{
  f();
  
  const E e{E::A | E::B};
  
  if (e == E::C) {
    std::cout << "ok\n";
  } else {
    std::cout << "bad\n";
  }
}

void f()
{
  std::cout << "f() called\n";
}
