

#pragma once

#include  "../../help_func.h"

namespace Sort{

     template<class T> inline 
        void insertionSort(T* arr , const std::size_t len);

     namespace Test{

     template<class T> inline 
        void testInsertionSort(T* inputArr , T* expectedOutputArr,const std::size_t len);

     } // namespace Test

} // namespace Sort

namespace Sort{

     template<class T> inline void insertionSort(T* arr , const std::size_t len){

        for (std::size_t i =1 ; i < len ; i++ ){
            long long j = i -1; auto key = arr[i];

            while( j >= 0 && arr[j] > key ){
                arr[j+1] = arr[j]; 
                j--;
            }
            arr[j+1] = key;
        } 
    }

} // namespace Sort

namespace Sort::Test{
         template<class T> inline 
        void testInsertionSort(T* inputArr , T* expectedOutputArr,const std::size_t len){
            Logger::explain("Explain: Run test unit for template<class T> inline void insertionSort(T* arr , const std::size_t len)");
            Logger::displayCStyleArr("Array before proccess" ,inputArr ,len ) ; 
            insertionSort(inputArr , len);
            Logger::displayCStyleArr("Array after proccess", inputArr ,len ) ;
            Logger::displayCStyleArr("Expected output", expectedOutputArr ,len ) ;

            if (Compare::eqCStyleArr(inputArr, expectedOutputArr, len )){
                Logger::accept("\t->Accept: Fuction[insertionSort] result math the expected output");
            }else{
                Logger::error("\t->Error: Fuction[insertionSort] result math the expected output");
            }
        }
} // namespace Sort::Test