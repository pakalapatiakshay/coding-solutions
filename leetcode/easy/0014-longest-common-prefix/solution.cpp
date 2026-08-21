class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix=strs[0];
        for(int i=1 ; i<strs.size() ; i++){
            int j=0;
            int k=0;
            while(j<prefix.size() && k<strs[i].size()){
                if(prefix[j]!=strs[i][k])
                    break;
                j++;
                k++;
            }
            prefix=prefix.substr(0,k);
        }
        return prefix;
    }
};