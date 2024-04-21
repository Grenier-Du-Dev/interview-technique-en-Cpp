#include <iostream>
#include "../includes/ValidPalindrome.h"


bool Solution::isPalindrome1(string s){
    
    std::string newString;
    
    for (int i = 0; i < s.length(); i++){
        if (std::isalnum(s[i]))
        {
            newString += std::tolower(s[i]);
        }
    }

    int i = 0;
    int j = newString.length() - 1;

    while (i <= j) {
        if (newString[i] != newString[j] ){
            return false;
        }
        i++;
        j--;
    }
    return true;
}



bool Solution::isPalindrome2(string s){

    int start=0;
    int end=s.size()-1;
    
    while(start<=end){
        if(!isalnum(s[start])){
            start++; 
            continue;
        }
        if(!isalnum(s[end])){
            end--;
            continue;
        }
        if(tolower(s[start])!=tolower(s[end])){
            return false;
        }else{
            start++;
            end--;
        }
    }
    return true;
}