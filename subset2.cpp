class Solution {
public:
        void answer(vector<int> arr,vector<vector<int>> &ds,vector<int> &v,int &sum,int i,int n)
     {
         if(i>=n)
         {
              ds.push_back(v);
             return;
         }
         v.push_back(arr[i]);
         answer(arr,ds,v,sum,i+1,n);
         
         v.pop_back();
         answer(arr,ds,v,sum,i+1,n);
         return;
     }
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
          int i=0;
         int N=arr.size();
        vector<vector<int>> ds;
        vector<int> v;
        int sum=0;
        answer(arr,ds,v,sum,i,N);
           sort(ds.begin(),ds.end());
        for(int i=0;i<ds.size()-1;i++)
        {
            if(ds[i]==ds[i+1]) ds.erase(ds.begin()+i);
        }
        return ds;
    }
};