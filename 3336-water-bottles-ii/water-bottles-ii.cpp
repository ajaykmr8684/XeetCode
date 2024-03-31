class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int emptyBottles = 0;
        int ans = numBottles;

        while(numBottles || emptyBottles - numExchange > 0)
        {
            emptyBottles += numBottles;
            numBottles = 0;


            while(emptyBottles - numExchange >= 0)
            {
                emptyBottles -= numExchange;
                numBottles++;
                numExchange++;  
            }

            ans += numBottles;

        }

        return ans;
    }
};