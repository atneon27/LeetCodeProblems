class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
       if(s1==s2) return true;
        int s=0,e=s1.size()-1;
        while(s1[s]==s2[s]) s++;
        while(s1[e]==s2[e]) e--;
        swap(s1[s],s1[e]);
        return s1==s2;
    }
};