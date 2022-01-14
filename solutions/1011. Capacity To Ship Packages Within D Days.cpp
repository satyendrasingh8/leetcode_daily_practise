class Solution {
public:
    bool allocIsPossible(int mid,vector<int>& weights,int days){
        int allocDays=1,sum=0;
        
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>mid){
                allocDays++;
                sum=weights[i];
            }
        }
        if(allocDays<=days)
            return true;
        return false;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int maxCapacity=0,maxel=-1;
        int n=weights.size();
        
        for(int w:weights){
              maxCapacity+=w;
            maxel=max(maxel,w);
        }
          
        
        int low=maxel,high=maxCapacity;
    
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(allocIsPossible(mid,weights,days)){
            
                high=mid-1;
            }
            else
                low=mid+1;
        }
        return low;
    }
};
