class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0;

        // Sort people in ascending order
        sort(people.begin(), people.end()); // O(n log n)
        
        // Two Pointer from two ends. 
        // lightPtr is the current lightest person
        // heavyPtr is the current heaviest person
        int lightPtr = 0;
        for(int heavyPtr = people.size() - 1; heavyPtr >= 0 && lightPtr <= heavyPtr; heavyPtr--) { // O(n)
            // Put in the current lightest person if possible
            if(people[lightPtr] + people[heavyPtr] <= limit) lightPtr++;
            
            // Increment number of boats
            boats++;
        }

        return boats;
    }
};