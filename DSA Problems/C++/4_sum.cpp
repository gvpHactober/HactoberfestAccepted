#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    int n = nums.size();  
    sort(nums.begin() , nums.end());  // sort the array to use the two pointers method
    vector<vector<int>> ans;  
    set<vector<int>> store;   // to store and remove the duplicate answers
	
    for(int i = 0 ; i < n; i++){
	
        for(int j = i + 1; j < n ; j++){
		
            int new_target  =  target - nums[i] - nums[j];
            
            int x = j+1 , y = n-1;
            
            while(x < y){
			
                int sum = nums[x] + nums[y];
                
                if(sum > new_target) y--;
                else if(sum < new_target ) x++;
                else  {
                    store.insert({nums[i] , nums[j] , nums[x] , nums[y]});
                    x++;
                    y--;
                };
            }
        }
    }
	
    for(auto i : store){
        ans.push_back(i);  // store the answers in an array(ans)
    }
	
    return ans;
}

int main() {

    vector<int> v={1,0,-1,0,-2,2};
    int target=0;

    vector<int>  ans = fourSum(v,target)

    for(auto i : ans){
    	vector<int> v1 = i;
    	for(int i = 0;  i < v1.size();i++){
    		cout<<v1[i]<<" ";
    	}
    	cout<<endl;  
    }

}