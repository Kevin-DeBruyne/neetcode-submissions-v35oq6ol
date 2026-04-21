class Solution {
   public:
   int res=0;
   int help(int n, vector<int>&vec){
		if(n<0){
            return 0;
        }
        if(n==0){
            return 1;
        }
int twos;
int ones;
	if(vec[n-2]==-1){
		vec[n-2]=help(n-2,vec);
	}

if(vec[n-1]==-1){
		vec[n-1]=help(n-1,vec);
}
        return vec[n-1]+vec[n-2];
   }
    int climbStairs(int n) {
        vector<int>vec(n+1,-1);
        return help(n,vec);
       
    }
};
