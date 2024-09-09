class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
  long long concatenation=0;
        string sum1,sum2,sum3;
        long long value=0;
        int i=0, j=nums.size()-1;
        while(i<=j){
             sum1=to_string(nums[i]);
            sum2=to_string(nums[j]);
            if (i!=j){
            sum3=sum1+sum2;}
            else{
                sum3=sum1;
            }
            value=stoi(sum3);
            concatenation=concatenation+value;
             i++;
            j--;
        }
        return concatenation;
    }
};
