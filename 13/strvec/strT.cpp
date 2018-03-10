#include "string.h"
#include "strVec.h"
#include <iostream>
#include <vector>
#include <cstdlib>
int main() {
    std::vector<user::String> arr;
    arr.push_back("abc");
    std::cout << "================" << std::endl;
    user::String str = "qinhan";
    std::cout << "================" << std::endl;
    arr.push_back(str);
    std::cout << "================" << std::endl;
    user::String str1 = "dashuaige";
    std::cout << "================" << std::endl;
    user::String &&p = std::move(str);
    std::cout << "================" << std::endl;
    arr.push_back(std::move(str));
    std::cout << "================" << std::endl;
    for (auto b = arr.begin(), e = arr.end(); b != e; ++b) {
        std::cout << *b << std::endl;
    }
    std::cout << "================" << std::endl;
    std::cout << "================" << std::endl;
    std::cout << "================" << std::endl;
    strVec<user::String> strarr;
    strarr.push_back("abc");
    std::cout << "================" << std::endl;
    user::String str = "qinhan";
    std::cout << "================" << std::endl;
    strarr.push_back(str);
    std::cout << "================" << std::endl;
    user::String str1 = "dashuaige";
    std::cout << "================" << std::endl;
    user::String &&p = std::move(str);
    std::cout << "================" << std::endl;
    strarr.push_back(std::move(str));
    std::cout << "================" << std::endl;
    for (auto b = strarr.begin(), e = strarr.end(); b != e; ++b) {
        std::cout << *b << std::endl;
    }
    return EXIT_SUCCESS;
}