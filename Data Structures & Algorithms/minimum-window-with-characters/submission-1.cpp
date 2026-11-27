class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> mp;
        for(char a : t){
            mp[a]++;
        }
        int count=0;
        int minLen = INT_MAX;
        int index = -1;
        int l=0;
        int r=0;

        while(r<s.size()){
           if(mp[s[r]]>0){
            count=count+1;
           } 
           mp[s[r]]--;

           while(count==t.size()){
            if(r-l+1<minLen){
                minLen=r-l+1;
                index=l;
            }
            mp[s[l]]++;
            if(mp[s[l]]>0){
                count=count-1;
            }
            l++;
           }
           r++;
        }
        if(index==-1){
            return "";
        }else{
            return s.substr(index,minLen);
        }
    }
};
