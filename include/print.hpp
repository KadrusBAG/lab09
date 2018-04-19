
#include <string>
#include <fstream>
#include <iostream>

void print(const std::string& text, std::ostream& out = std::cout);  //вывод в консоль
void print(const std::string& text, std::ofstream& out);  //вывод в файл
