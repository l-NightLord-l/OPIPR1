#include <iostream>

int main() {
  int a, b, op; double result;

  std::cout << "Введіть перше число\n"; std::cin >> a;
  std::cout << "Введіть оператор\n1\t+\n2\t-\n3\t*\n4\t/\n\n"; std::cin >> op;
  std::cout << "Введіть друге число\n"; std::cin >> b;

  switch(op) {
    case 1:
      //code1
    break;
    case 2:
      //code2
    break;
    case 3:
      //code3
    break;
    case 4:
      //code4
    break;
  }
  std::cout << "Результат = " << result;
  return 0;
}