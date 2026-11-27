class Solution {
public:
    bool isPalindrome(string s) {
        string a = "";
        for(char b:s){
           if (!isalnum(b)){
            continue;
           }else{
            a += tolower(b);
           }
        }

        int l=0;
        int r=a.size()-1;
        while(l<r){
            if(a[l]!=a[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
