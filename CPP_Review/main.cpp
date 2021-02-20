/* 
 * File:   main.cpp
 * Author: joaobcpatricio
 *
 * Created on 19 de fevereiro de 2021, 17:03
 */

#include <cstdlib>
#include<iostream>
#include<string>
#include<limits>
#include <vector>
#include<sstream>
#include<numeric>
#include<ctime>
#include<cmath>
#include <fstream>
#include <valarray>
#include <functional>
#include <deque>
#include <iterator>>
#include <memory>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <mutex>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <stack>
#include <queue>

#include <regex>

using namespace std;


int main(int argc, char** argv) {

    // The string to search
    string str = "The ape was at the apex";
    regex reg ("(ape)[^ ]=?");  //We want to match for ape with or without a space after it
    
    smatch matches;    // Provides useful function when you are searching a string
    
    if(regex_search(str, matches, reg) == true){    // If there is a match for the regex
        
        cout << matches.size() << " Matches" << endl;   // Output the number of matches
        
        while(regex_search(str, matches, reg)){ // Cycle through the matches
        
            cout << matches.str(1) << endl; // Get the match            
            cout << "At Index " << matches.position(1) << endl; // Get the index           
            str = matches.suffix().str();   // Eliminate the previous match and create a new string to search
        }
    }
    return 0;
}


