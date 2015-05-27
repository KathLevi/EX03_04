//////////////////////////
//Name: Kathleen Levi
//
//Project: EX03_04 (10.4)
//
//Date: May 26, 2015
//////////////////////////

#include <iostream>
#include <string>
using namespace std;

string sort(string& s);

int main(){
    string s;
    cout << "Enter a string s: ";
    getline(cin,s);
    
    cout << "The sorted string is " << sort(s) << endl;
    
    return 0;
}

string sort(string& s){
    
    for (unsigned long int i = s.length()-1; i > 0; i--){
        char maxLetter = s[0];
        int maxCounter = 0;
        
        for (int j = 1; j <= i; j++){
            if (maxLetter < s[j]){
                maxLetter = s[j];
                maxCounter = j;
            }
        }
        if (maxCounter != i){
            s[maxCounter] = s[i];
            s[i] = maxLetter;
        }
    }
    
    
    return s;
}