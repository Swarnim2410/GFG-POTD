class Solution{
public:	
	int count(int arr[], int n, int x) 
	{
	    return (upper_bound(arr, arr+n, x) - arr) - (lower_bound(arr, arr+n, x) - arr);
	}
};