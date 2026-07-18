class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int minn = nums[0];
        int maxx = nums[nums.size()-1];
        int i =1;
        int gcd = 0;
        while(i<=minn){
            if(minn%i==0 && maxx%i==0){
                gcd = i;
                i++;
            }
            else i++;
        }
        return gcd;
    }
};