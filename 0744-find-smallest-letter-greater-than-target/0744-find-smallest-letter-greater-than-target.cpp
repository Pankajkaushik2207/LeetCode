// class Solution {
// public:
 
    // char nextGreatestLetter(vector<char>& letters, char target) {
    //     vector<int >ans;
    //     int n = letters.size()-1;
    //     for(int i = 0; i<n;i++){
    //         if(letters[i]>target){
    //             ans.push_back(letters[i]);
    //         }
    //     }
    //   return ans[0];
    // }
    
    
//     char nextGreatestLetter(vector<char>& letters, char target) {
   
    // for(char letter : letters){
    //     if(letter> target){
    //         return letter;
    //     }
    // }
    // return letter[0];
//     }
// };
        
//          char nextGreatestLetter(vector<char>& letters, char target) {
//         int i=0;
//         if(letters[i]>target){
//             return letters[i];
//         }
//         sort(letters.begin(),letters.end());
//         return letters[0];
// }
// };


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for (char letter : letters) {
            if (letter > target) {
                return letter;
            }
        }
        return letters[0];
    }
};