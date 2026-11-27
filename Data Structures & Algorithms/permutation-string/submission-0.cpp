class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> mp; //use this when you dont know what kind of elements are there.
        int freq[26]={0};

        for(char num: s1){
            int index = num - 'a';
            freq[index]++;
        }

        int a = s1.size();
        for(int i=0;i<s2.size();i++){
            int windowIndex=0;
            int last = i;
            int freq1[26]={0};
            while(windowIndex<a&&last<s2.size()){
                freq1[s2[last]-'a']++;
                windowIndex++;
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
