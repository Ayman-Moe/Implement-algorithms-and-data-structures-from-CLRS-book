#include <iostream>
 #include "include/algo/algo.h"
using namespace std;

    

int main() {
   double  out []={-42,-7,-3,0,8,15,15,23,42,99.9 };
   double arr[] = {42, -7, 0, 15, 23, -3, 15, 8, 99.9, -42};

     
    Sort::Test::testInsertionSort(arr,out,10);

return 0;
}
