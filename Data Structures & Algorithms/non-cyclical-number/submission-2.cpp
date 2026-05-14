class Solution {
public:
    int sumOfDigits(int n) {
        int sum = 0;
        while (n != 0) {
            // Extract the last digit
            int last = n % 10;
            // Add last digit to sum
            sum += last*last;
            // Remove the last digit
            n /= 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        set<int>st;
        while(n!=1){
            cout<<n<<endl;
            if(st.find(n)!=st.end()){
                return false;
            }
            st.insert(n);
            n=sumOfDigits(n);
        }
        return true;
    }
};
