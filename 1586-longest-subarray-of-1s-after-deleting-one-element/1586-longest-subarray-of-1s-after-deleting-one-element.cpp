static auto _enhancer = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // int zerocount=0;  // Number of zero's in the window.
        // int l=0;
        // int start=0;// Left end of the window.
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0)
        //         zerocount++;
        //     // Shrink the window until the zero counts come under the limit.
        //     while(zerocount>1)
        //     {
        //         if(nums[start]==0)
        //             zerocount--;
        //         start++;
        //     }
        //     l=max(l,i-start); 
        // }
        // return l;
        int start=0,i;
        int k=1;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                k--;
            if(k<0 && nums[start++]==0)
                k++;
        }
        return i-start-1;
    }
};