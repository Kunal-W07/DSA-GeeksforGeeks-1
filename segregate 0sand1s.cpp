class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int i = 0;
        int h = arr.size()-1;
        while(i<h){
            if(arr[i]==1 && arr[h]==0){
                swap(arr[i],arr[h]);
                i++;
                h--;
            }else{
                if(arr[i]==0){
                    i++;
                }
                if(arr[h]==1){
                    h--;
                }
            }
        }
    }
};
