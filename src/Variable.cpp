#include <iostream>

void doNothing(const int &x)
{
}

int main()
{
  int x;
  std::cout << "Enter a number" << std::endl;
  std::cin >> x;
  std::cout << "You entered: " << x << std::endl;
  return 0;
}
