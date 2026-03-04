
#pragma once 
#include <iostream>
using std::cout , std::string , std::size_t;

 // Contain help func to display massage about test's result  
 class Result{
        const string explMsg, acceptMsg, errMsg;
    public:
        Result(const char* expl, const char* accept, const char* err)
            : explMsg(expl), acceptMsg(accept), errMsg(err) {}

        //  Display massage for accept test case
        void accept() const {
           cout << "\033[32m" << this->acceptMsg << "\033[0m" << std::endl;
        }
        //  Display massage for accept test case
        void error() const {
            cout << "\033[31m" << this->errMsg << "\033[0m" << std::endl;
        }
        //  Display massage for accept test case
        void explain() const {
            cout << this->explMsg << std::endl;
        }
 };

 // Contain help func to compare the output of algorithms 
 // or data structure behave with expected output
 namespace Compare{ 

    // Some algorithms like sort Algorithms will apply  
    // it's steps on arrays . this func can use to compare 
    // the result array of it with expected output array
    // and I expect the both have same length(len) and type 
    template<class T> bool eqCStyleArr(T* funOutput, T* expectOutput, size_t len){
        for (size_t i =0 ; i < len ; i++ ){
            if (funOutput[i] != expectOutput[i]){
                return false;
            }
        }
        return true;
    }

 }; // namespace Compare
    