class Solution {
    public:
    
        
        int kthGrammar(int n, int k) {
            int low = 1, high = pow(2,n-1);
            int curr = 0;
    
            while( low != high ){
                int mid = ( low + high )/2;
                if( k <= mid ){
                    high = mid;
                } else{
                    low = mid + 1;
                    curr = 1 - curr;
                }
            }
    
            return curr;
        }
    };