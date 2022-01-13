class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        if(nums.empty()) return res;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                
                int front = j+1;
                int back = n-1;
                int target_2=target-nums[i]-nums[j];
                while(front<back){
                    int twosum=nums[front]+nums[back];
                    if(twosum<target_2) front++;
                    else if(twosum>target_2) back--;
                    else{
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                         quad[1]=nums[j];
                         quad[2]=nums[front];
                         quad[3]=nums[back];
                        res.push_back(quad);
                        //remove duplicates of 3rd number
                        while(front<back && nums[front]==quad[2]) ++front;
                        //remove duplicates of 4th number
                          while(front<back && nums[back]==quad[3]) --back;
                    }
                }
                //remove duplicates of 2rd number
                while(j+1<n && nums[j+1]==nums[j]) ++j;
            }
             //remove duplicates of 1st number
                while(i+1<n && nums[i+1]==nums[i]) ++i;
        }
        return res;
    }
};
