// Last updated: 16/10/2026, 10:14:41
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size()>1){
            int firstelement = INT_MIN;
            int secondelement = INT_MIN;
            int firstindex = -1;
            int secondindex = -1;
            for(int i = 0;i<stones.size();i++){
                if (stones[i]>firstelement){
                    
                    secondelement = firstelement;
                    secondindex = firstindex;
                    firstindex = i;
                    firstelement = stones[i]; 
                    
                }
                else if(stones[i]>secondelement ){
                    secondelement=stones[i];
                    secondindex = i;
                }
            }
            long long result = (long long)firstelement-secondelement;
            
            if(firstindex>secondindex){
               stones.erase(stones.begin()+firstindex);
               stones.erase(stones.begin()+secondindex);
            }
            else{
                stones.erase(stones.begin()+secondindex);
                stones.erase(stones.begin()+firstindex);
            }
            
            if(result!=0){
                stones.push_back(result);
            }

        }
        if(stones.size()==0){
            stones.push_back(0);
        }
        return stones[0];
    }
};

