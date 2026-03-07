#pragma once

// This file contains insertion sort algorithm and its test unit
#include "../../help_func.h"

namespace Sort {

    // Template function: must be defined in header
    template<class T>
    void insertionSort(T* arr, std::size_t len) {
        for (std::size_t i = 1; i < len; i++) {
            long long j = i - 1;
            auto key = arr[i];
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }

    namespace Test {
        template<class T>
        void testInsertionSort(T* inputArr, T* expectedOutputArr, std::size_t len) {
            Logger::explain("Explain: Run test unit for insertionSort.");
            Logger::displayCStyleArr("Array before process", inputArr, len);
            insertionSort(inputArr, len);
            Logger::displayCStyleArr("Array after process", inputArr, len);
            Logger::displayCStyleArr("Expected output", expectedOutputArr, len);

            if (Compare::eqCStyleArr(inputArr, expectedOutputArr, len)) {
                Logger::accept("->Accept: Function[insertionSort] result matches expected output.");
            } else {
                Logger::error("->Error: Function[insertionSort] result does not match expected output.");
            }
        }
    } // namespace Test

} // namespace Sort