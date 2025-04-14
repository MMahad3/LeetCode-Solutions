/*There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.
You are giving candies to these children subjected to the following requirements:
Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children.*/


class Solution {
    public:
        int candy(vector<int>& ratings) {
            int count=0;
            vector<int>candy(ratings.size(),1); // initialized with 1 becasue every kid should have atleast 1 candy
    
            for (int i = 1; i<ratings.size(); i++){
                if(ratings[i]>ratings[i-1]){
                    candy[i]=candy[i-1]+1;
                }
            }   
    
            for (int i=ratings.size()-2; i>=0 ;i--){
                if(ratings[i]>ratings[i+1]){
                    candy[i] = max(candy[i], candy[i+1]+1);
                }
    
            }
            int total=0;
            for(int c: candy){
                total+=c;
            }
    
    
                 return total;
        }
    };