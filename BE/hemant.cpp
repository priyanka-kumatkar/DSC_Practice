#include<bits/stdc++.h>
using namespace std;

int solve(string s) {

    string s1 = "";
    int cnt = 0;
    for(int i=0; i<s.length()-1; i++) {
        map<char, int> s1_map;
        map<char, int> s2_map;
        s1 += s[i];
        for(char x: s1) 
            s1_map[x]++;
        
        string s2 = "";
        for(int j=i+1; j<s.length(); j++) 
            s2 += s[j];
        
        for(char c: s2) 
            s2_map[c]++;

        if(s1_map.size() == s2_map.size()) 
            cnt++;
    }

    return cnt;

}

int main() {
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    cout<<"The Answers is : "<<solve(s)<<endl;
}