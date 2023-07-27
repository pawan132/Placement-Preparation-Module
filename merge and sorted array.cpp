class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=nums1.size();
        int n2=nums2.size();
        int x=n1-m;
        int y=n2-n;
        for(int i=0;i<x;i++)
        {
            nums1.pop_back();
        }
        for(int i=0;i<y;i++)
        {
            nums2.pop_back();
        }
        for(int i=0;i<n;i++)
        {
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin(),nums1.end());
        
        
    }
};