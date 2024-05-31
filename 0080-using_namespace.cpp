0080-using_namespace.cpp
  // using_namespace.cpp
#include <iostream>
#include <cstdlib>
// Строки C++.
#include <string>

int main()
{
  using namespace std; // Искать имена в std.

  string user_name = "user"; // Определить переменную.
  cout << "Hello, " << user_name << "!" << endl;

  user_name = "The Great Whale"; // Изменить значение переменной.
  cout << "I am " << user_name;
  return EXIT_SUCCESS; // Возвратим ОС "код успеха".
}
