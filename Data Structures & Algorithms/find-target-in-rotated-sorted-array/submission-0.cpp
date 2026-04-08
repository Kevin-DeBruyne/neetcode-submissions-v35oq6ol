class Solution {
public:
    bool check(vector<int>& arr, int low, int high, int mid, int target){
	int n=arr.size();
	if(arr[mid]>=arr[low]){//left side sorted
		if(target>=arr[low] && target<=arr[mid]){
			return true;
		}
		else{
			return false;
		}
	}
	else if(arr[high]>=arr[mid]) {//right side sorted
		if(target>=arr[mid] && target<=arr[high]){
			return false;
		}
		else{
			return true;
		}			
	}
    return true;
}
int search(vector<int>& nums, int target) {
    int n=nums.size();
	int low = 0, high = n-1;
	int ans = -1;
	while (low <= high) {
		int mid = low + (high - low) / 2;
        if(nums[mid]==target){
            return mid;
        }
		// cout<<low<<":"<<high<<":"<<mid<<endl;
		if (check(nums, low, high, mid, target)) {
			ans = mid;
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
    // cout<<ans<<endl;
    // if(arr[ans]){

    // }
	if(ans==-1){
        return ans;
    }
    else{
        if(nums[ans]==target){
            return ans;
        }
        else{
            return -1;
        }
    }
}
    
};