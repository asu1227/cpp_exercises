#include <iostream>

#include "port.h"

int main() {
  Port p1;
  Port p2("Abc", "Bcc", 30);
  std::cout << p1 << std::endl;
  std::cout << p2 << std::endl;
  Port p3 = p2;
  p3.Show();
  p3 += 3;
  p3.Show();
  Port p4 = p2;
  p3 -= 2;
  p3.Show();

  VintagePort vp1("Vabc", 50, "hn", 1983);
  vp1.Show();
  VintagePort vp2;
  vp2.Show();
  vp1 -= 3;
  vp2 = vp1;
  std::cout << vp2 << std::endl;

  return 0;
}