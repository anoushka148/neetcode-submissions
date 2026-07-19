class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2) return false;
        map<int,int> freq1;
        map<int,int> freq2;
        for(int i=0;i<n1;i++){
            freq1[s[i]]++;
            freq2[t[i]]++;
        }
        int n=freq1.size();
        for(int i=0;i<n;i++){
            if(freq1!=freq2) return false;
        }
        return true;


    }
};
