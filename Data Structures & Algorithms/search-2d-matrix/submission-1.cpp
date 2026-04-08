class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();//rows
        int n=matrix[0].size();//columns
        // for(int i=m-1;i<m;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<matrix[j][i]<<" ";
        //     }
        //     cout<<endl;
        // }
        int low = 0, high = m-1;
        int col;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if(matrix[mid][n-1]==target){
                return true;
            }
            else if (matrix[mid][n-1]>target) {
                high = mid - 1;
            }
             else {
                low = mid + 1;
            }
        }
		int l=0;int r=n-1;
		// int target=low;
        if (low >= m) {
            return false;
        }
		while(l<=r){
            int mid = l + (r - l) / 2;
            if(matrix[low][mid]==target){
                return true;
            }
            else if (matrix[low][mid]>target) {
                r = mid - 1;
            }
               
            else {
                l = mid + 1;
            }
		}
        return false;
    }
};