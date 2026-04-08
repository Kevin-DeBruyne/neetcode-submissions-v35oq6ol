class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int>reach(n);
        for(int i=0;i<n;i++){
            reach[i]=i+1+nums[i];
        }
        int goal=nums.size();
        for(int i=n-2;i>=0;i--){
            // cout<<nums[i]<<":"<<abs((i+1)-goal)<<endl;
            // cout<<goal<<endl;
            if(nums[i]>=abs((i+1)-goal)){
                goal=i+1;
            }
        }
        if(goal==1){
            return true;
        }
        return false;
    }
};
