vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;int c=0;
        int first=lower_bound(all(nums),target)-nums.begin();
        int second=upper_bound(all(nums),target)-nums.begin();
        if(nums[first]==target)
            arr.push_back(first);
        else
        arr.push_back(-1);
        if(nums[second-1]==target)
        arr.push_back(second-1);
        else
        arr.push_back(-1);
        return arr;

    }