
#pragma once 
#include <iostream>
using std::cout , std::string , std::size_t;

 // Contain help func to display massage about test's result  
 namespace Logger{
      constexpr const char *greenColor = "\033[32m", 
      *redColor =  "\033[31m",*blueColor = "\033[34m" , 
      *orangeColor = "\033[38;5;208m" , *reset =  "\033[0m";

        enum class  Color{
        Green, Blue, Orange, Red, Default
         };

        static const char* getColor(const Color& color){
            switch (color){
                case Color::Green : return greenColor; break;
                case Color::Red : return redColor; break;
                case Color::Blue : return blueColor; break;
                case Color::Orange : return orangeColor; break;
                default : return reset;
            }
        }
        template<class T> inline
         static void coloredMsg( const Color& color, const T msg, 
                          const char* beganSpace = "", const char* endSpace="",
                          const char* line="\n"){
                            cout << getColor(color) << beganSpace << msg  << endSpace << reset << line; 
                            cout.flush();
                         }

        //  Display massage for accept test case
        inline void accept( const char* acceptMsg) {
           coloredMsg(Color::Green, acceptMsg);
        }
        //  Display massage for accept test case
        inline void error(const char* errMsg )  {
            coloredMsg(Color::Red, errMsg);
        }
        //  Display massage for accept test case
        inline void explain(const char* explMsg)  {
            coloredMsg(Color::Orange, explMsg);
        }     
        template<class T> inline void displayCStyleArr(const char* arrName, const T* arr , size_t len){
          coloredMsg(Color::Blue, arrName, "", " : [" , "");
            for (size_t i =0 ; i < len -1 ; i++){
                coloredMsg(Color::Blue, arr[i], " ", ", " , "");
            }
            coloredMsg(Color::Blue, arr[len -1], " ", " ]");
         }
 }; // Logger

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
    