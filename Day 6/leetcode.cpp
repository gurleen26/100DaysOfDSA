class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ct;
        vector<int> v;

        for(int i=0;i<arr.size();i++)
        {
            int c = 0;
            if (find(v.begin(), v.end(), arr[i]) == v.end())
            {
                v.push_back(arr[i]);
                
                for(int j=0;j<arr.size();j++){
                    if(arr[i] == arr[j]){
                        c++;
                    }
                }
                if(c!=0){
                    ct.push_back(c);
                }
            }
        }
        
        for (int i = 0; i < ct.size(); i++) {
            for (int j = i + 1; j < ct.size(); j++) {
                if (ct[i] == ct[j]) {
                    return false; // duplicate frequency
                }
            }
        }
        return true;
    }
};