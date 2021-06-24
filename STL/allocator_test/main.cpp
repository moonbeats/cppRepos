#include <bits/stdc++.h>

#include<ext\array_allocator.h>
#include<ext\mt_allocator.h>
#include<ext\debug_allocator.h>
#include<ext\pool_allocator.h>
#include<ext\bitmap_allocator.h>
#include<ext\malloc_allocator.h>
#include<ext\new_allocator.h>

using namespace std;
int main() {
    list<string,allocator<string>> c1;
    list<string,__gnu_cxx::malloc_allocator<string>> c2;
    list<string,__gnu_cxx::__pool_alloc<string>> c3;
    list<string,__gnu_cxx::__mt_alloc<string>> c4;
    list<string,__gnu_cxx::new_allocator<string>> c5;
    list<string,__gnu_cxx::bitmap_allocator<string>> c6;
    return 0;
}
