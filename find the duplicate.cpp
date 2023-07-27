class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        	int high, mid, low, count;
	
    high = nums.size() - 1;
    low = 1;

    while(high >= low){
        mid = (high + low)/2;
        count = 0;

        for(int n: nums) if(n <= mid) count++; 
      
        if(count <= mid) low = mid + 1; 
        else high = mid - 1;            
    }
	
    return low;
    }
};