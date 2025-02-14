/*Implement the RandomizedSet class:
RandomizedSet() Initializes the RandomizedSet object.
1) bool insert(int val) Inserts an item val into the set if not present. Returns true if the item was not present, false otherwise.
2) bool remove(int val) Removes an item val from the set if present. Returns true if the item was present, false otherwise.
3) int getRandom() Returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). 
Each element must have the same probability of being returned.
You must implement the functions of the class such that each function works in average O(1) time complexity.*/


class RandomizedSet {
    private:
        unordered_map<int, int> valtoindex;
        vector<int> values;
    public:
        RandomizedSet() {
            
        }
        
        bool insert(int val) {
    
            if(valtoindex.find(val) != valtoindex.end()){ // valtoindex.end() return a state of not found.
                return false;  //value already exist
            }
            
            values.push_back(val);
            valtoindex[val]=values.size()-1;
            return true;
        }
        
        bool remove(int val) {
            
            if(valtoindex.find(val) == valtoindex.end()){
                return false; //value already exist
            }
    
            int last = values.back();
            int idx = valtoindex[val];
    
            values[idx] = last;
            valtoindex[last] = idx; 
    
            values.pop_back();
            valtoindex.erase(val);
    
            return true;
        }
        
        int getRandom() {
            
            int random = rand() % values.size();
            return values[random];
        }
    };
    
    /**
     * Your RandomizedSet object will be instantiated and called as such:
     * RandomizedSet* obj = new RandomizedSet();
     * bool param_1 = obj->insert(val);
     * bool param_2 = obj->remove(val);
     * int param_3 = obj->getRandom();
     */