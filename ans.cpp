class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp;
        int i;
        for(i=0;i<nums1.size();i++)
        {
            
            temp.push_back(nums1[i]);
        }
        for(i=0;i<nums2.size();i++)
        {
            temp.push_back(nums2[i]);
        }
        
        sort(temp.begin(),temp.end());
        nums1=temp;
        
    }
};
