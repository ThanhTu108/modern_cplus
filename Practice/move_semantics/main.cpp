#include <iostream>


int main()
{
    std::string str = "hello";
    std::string new_str;
    std::cout << "str: " << str << "\n";
    std::cout << "new_str: " << new_str << "\n";

    // new_str = std::move(str);
    // new_str = static_cast<std::string &&>(str);
    // new_str
    std::cout << "str: " << str << "\n";
    std::cout << "new_str: " << new_str << "\n";
    return 0;
}