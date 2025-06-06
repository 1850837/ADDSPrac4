#include "Finder.h"
using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2) {
    int iterator = 0;
    
    vector<int> result;
    for(size_t j = 0; j < s2.size(); j++){
        result.push_back(-1);
    }

    for(size_t i = 1; i <= s2.size(); i++) {
        size_t found = s1.find(s2.substr(0, i), iterator);
        if (found != string::npos) {
            result[i-1] = found;
            iterator = found;
        } else {
            break;
        }
    }
    return result;
}