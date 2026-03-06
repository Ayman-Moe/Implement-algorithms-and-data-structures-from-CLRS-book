
#pragma once 
#include <iostream>
using std::cout , std::string , std::size_t;

 // Contain help func to display massage about test's result  
 namespace Logger{
        inline void greenMsg(const char* msg ,const char* line="\n"){
        cout << "\033[32m" << msg << "\033[0m" << line ;
        }
        inline void redMsg(const char* msg ,const char* line="\n"){
        cout << "\033[31m" << msg << "\033[0m" << line;
        }
        inline void blueMsg(const char* msg ,const char* line="\n"){
        cout << "\033[34m" << msg << "\033[0m" << line;
        }
        template<class T> inline void greenMsg(T msg ,const char* line="\n"){
        cout << "\033[32m" << msg << "\033[0m" << line ;
        }
        template<class T> inline void redMsg(T msg ,const char* line="\n"){
        cout << "\033[31m" << msg << "\033[0m" << line;
        }
        template<class T> inline void blueMsg(T msg ,const char* line="\n"){
        cout << "\033[34m" << msg << "\033[0m" << line;
        }
        //  Display massage for accept test case
        inline void accept( const char* acceptMsg) {
           greenMsg(acceptMsg);
        }
        //  Display massage for accept test case
        inline void error(const char* errMsg )  {
            redMsg(errMsg);
        }
        //  Display massage for accept test case
        inline void explain(const char* explMsg)  {
            blueMsg(explMsg);
        }     
        template<class T> inline void displayCStyleArr(const char* arrName, const T* arr , size_t len){
           blueMsg(arrName ,"") ; blueMsg(" [ ","");  
            for (size_t i =0 ; i < len -1 ; i++){
                blueMsg(arr[i], " ," );
            }
            blueMsg(arr[len -1] ," ]\n");
         }
 };

 // Contain help func to compare the output of algorithms 
 // or data structure behave with expected output
 namespace Compare{ 

    // Some algorithms like sort Algorithms will apply  
    // it's steps on arrays . this func can use to compare 
    // the result array of it with expected output array
    // and I expect the both have same length(len) and type 
    template<class T> inline bool eqCStyleArr(T* funOutput, T* expectOutput, size_t len){
        for (size_t i =0 ; i < len ; i++ ){
            if (funOutput[i] != expectOutput[i]){
                return false;
            }
        }
        return true;
    }

 }; // namespace Compare
    