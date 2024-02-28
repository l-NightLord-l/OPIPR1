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
      result = a * b;
      break;
    case 4:
      if (b == 0) {
        std::cout << "Ділення на нуль неможливе!";
        return 1;
      }
      result = a / b;
      break;
  }
  std::cout << "Результат = " << result;
  return 0;
}