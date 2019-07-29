/*
 * Author : Jatin Rohilla
 * Date   : June-July-2019
 *
 * Compiler : g++ 5.1.0
 * flags    : -std=c++14
 */


#include<bits/stdc++.h>
using namespace std;

// source code here

class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> hist(128, 0);
        for (char c : t) hist[c]++;

        int remaining = t.length();
        int left = 0, right = 0, minStart = 0, minLen = numeric_limits<int>::max();
        while (right < s.length()){
            if (--hist[s[right++]] >= 0) remaining--;
            while (remaining == 0){
                if (right - left < minLen){
                    minLen = right - left;
                    minStart = left;
                }
                if (++hist[s[left++]] > 0) remaining++;
            }
        }

        return minLen < numeric_limits<int>::max() ? s.substr(minStart, minLen) : "";
    }
};

int main(){

	cout<<"Hello World";

    return 0;
}

