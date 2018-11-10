class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        vector<int> output;
        
        //write even first
        for(int i = 0; i < A.size();++i) {
        
            if(A[i] % 2 == 0) {
                
                output.push_back(A[i]);
            }
            
        }
        
        //Then write odd
        for(int i = 0; i < A.size();++i) {
            
            if(A[i] % 2 == 1) {
                
                output.push_back(A[i]);
            }
        }
    
        return output;
    }
};