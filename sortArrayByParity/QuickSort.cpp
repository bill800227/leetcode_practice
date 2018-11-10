class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        int i = 0;
        int j = A.size() -1;
        int tmp;
        
        
        while(i < j) {
            
            //swap if A[i] is odd and A[j] is even 
            if(A[i] % 2 > A[j] % 2) {
                
                tmp = A[i];
                A[i] = A[j];
                A[j] = tmp;
                
            }
            
            
            //if A[i] is even than i can increase
            if(A[i] % 2 == 0) {
                
                i++;
            }
            
            //if A[j] is odd than j can decrease
            if(A[j] % 2 == 1) {
                
                j--;
            }
            
            
        }
        
        
        
        return A;
    }
};