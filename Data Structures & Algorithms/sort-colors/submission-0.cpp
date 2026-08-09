class Solution {
public:
    int partition(vector<int>& nums,int st,int end){
        int i=st-1;
        int pivot=nums[end];
        for(int j=st;j<end;j++){
            if(nums[j]<=pivot){
            i++;
            swap(nums[i],nums[j]);
            }
        }
        i++;
        swap(nums[i],nums[end]);
        return i;
    }

    void quickSort(vector<int>& nums,int st,int end){
        if(st<end){
        int pivot=partition(nums,st,end);
        quickSort(nums,st,pivot-1);
        quickSort(nums,pivot+1,end);
        }
    }

    void sortColors(vector<int>& nums) {
        int end=nums.size()-1;
        quickSort(nums,0,end);
        
    }
};