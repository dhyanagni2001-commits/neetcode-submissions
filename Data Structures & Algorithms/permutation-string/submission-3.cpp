class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        for(int a:s1){
            freq[a-'a']++;
        }
        for(int i=0;i<s2.size();i++){
            int freq1[26]={0};
            int windowSize=0;
            int last=i;
            while(windowSize<s1.size()&&last<s2.size()){
                freq1[s2[last]-'a']++;
                windowSize++;
                last++;
            }

            if(isFreq(freq,freq1)){
                return true;
            }
        }
        return false;
    }

    bool isFreq(int freq[],int freq1[]){
        for(int i=0;i<26;i++){
            if(freq[i]!=freq1[i]){
                return false;
            }
        }
        return true;
    }
};
