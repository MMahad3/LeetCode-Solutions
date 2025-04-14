/*There are n gas stations along a circular route, where the amount of gas at the ith station is gas[i].
You have a car with an unlimited gas tank and it costs cost[i] of gas to travel from the ith station to its next (i + 1)th station. You begin the journey with an empty tank at one of the gas stations.
Given two integer arrays gas and cost, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return -1. If there exists a solution, it is guaranteed to be unique.*/


class Solution {
    public:
        int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
            
            int total_tank = 0;
            int curr_tank = 0;
            int start = 0;
            int size = gas.size();
    
            for(int i = 0; i<size; i++){
                int diff = gas[i]-cost[i];
                total_tank += diff;
                curr_tank += diff;
    
                if(curr_tank < 0){
                    start = i+1;
                    curr_tank=0;
                }
    
            }
    
            if(total_tank < 0){
                return -1;
            }
            else {
                return start;
            }
        }
    };