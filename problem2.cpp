class Solution {
public:
    int getLucky(string s, int k) {
        string nums="";

        for (int i=0; i<s.size();i++){
            nums+=to_string(int(s[i])-96);
        }
        int n = 0;

        while (k!=0){
            for (int j = 0; j<nums.size(); j++){
                n+=(int(nums[j])-'0');
            }
            nums=to_string(n);
            n=0;
            k--;
        }
        int fans=stoi(nums);
        return fans;
    }
};

