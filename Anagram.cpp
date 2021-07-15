#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string s1, string s2){
    std::vector<int> v_s1(26, 0),v_s2(26, 0);
    for(int i = 0; i < s1.size();i++)
        v_s1[s1[i]-'a']++;
    for(int i = 0; i < s2.size();i++)
        v_s2[s2[i]-'a']++;
    for(int i = 0; i < 26;i++)
        if(v_s1[i] != v_s2[i])
            return false;
    return true;
}

int main()
{
    string str1,str2;
    cout << "Enter String 1:\t";
    cin >> str1;
    cout << "Enter String 2:\t";
    cin >> str2;
    if(isAnagram(str1,str2))
        cout << "\nBoth Strings are Anagram.";
    else
        cout << "\nThese Strings are NOT Anagram.";
    return 0;
}
