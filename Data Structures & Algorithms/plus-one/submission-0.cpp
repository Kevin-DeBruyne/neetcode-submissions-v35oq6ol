class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]<9){
            digits[n-1]++;
            return digits;
        }
        else{
            int i=n-1;
            // digits.push_back(0);
            while(digits[i]==9){
                digits[i]=0;
                i--;
            }
            if(i>=0){
                digits[i]++;
            }
            else{
                digits.insert(digits.begin(), 1);
            }
        }
        return digits;
        
    }
};
