#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool containsAll(string &subString, const vector<char>& arr) {
  int size= arr.size();
  bool found[size];
  for (int i = 0; i < arr.size(); ++i) {
    found[i] = false;
  }
  for(int i = 0; i < subString.size(); ++i) {
    for(int j = 0; j < arr.size(); ++j) {
      if(arr[j] == subString[i]) {
        found[j] = true;
      }
      
    }
  }
  bool result = true;
  for(int i = 0; i < size; ++i) {
    if(found[i] == false) {
      result = false;
    }
  }
  return result;
}
//You are not visible or audible for some reason
//do you want to use zoom?

//https://zoom.us/j/91641619705?pwd=emdPK0xhVUc4UlltZ2xzc0JTOVROUT09

// signing in one moment

// neither are you... sure
string getShortestUniqueSubstring( const vector<char>& arr, const string &str ) 
{
  //vector<string> subStrings;
  string shortestStringYet = "";
  int length = INT_MAX;
  for(int i = 0; i < str.size(); ++i) {
    string subString;
    for(int j = i; j < str.size(); ++j) {
        subString += str[j];
        if(containsAll(subString, arr)) {
          if(subString.size() < length) {
            length = subString.size();
            shortestStringYet = subString;
          }
        }
    }
  }
  return shortestStringYet;
}

int main() 
{
  return 0;
}

