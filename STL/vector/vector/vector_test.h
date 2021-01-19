//
// Created by NUMB on 2021/1/2.
//

#ifndef VECTOR_VECTOR_TEST_H
#define VECTOR_VECTOR_TEST_H
#include <vector>
#include <iostream>
#include "vector.h"
namespace mystl
{
namespace vector_test
{
    std::cout << "[===============================================================]\n";
    std::cout << "[----------------- Run container test : vector -----------------]\n";
    std::cout << "[-------------------------- API test ---------------------------]\n";
    int a[] = { 1,2,3,4,5 };
    mystl::vector<int> v1;
    mystl::vector<int> v2(10);
    mystl::vector<int> v3(10, 1);
    mystl::vector<int> v4(a, a + 5);
    mystl::vector<int> v5(v2);
    mystl::vector<int> v6(std::move(v2));
    mystl::vector<int> v7{ 1,2,3,4,5,6,7,8,9 };
    mystl::vector<int> v8, v9, v10;
    v8 = v3;
    v9 = std::move(v3);
    v10 = { 1,2,3,4,5,6,7,8,9 };


}
}
#endif //VECTOR_VECTOR_TEST_H
