class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        
        // Your code here   
        int x = __builtin_popcountll(n);
        //cout << x;
        return x==1;
        
    }
};