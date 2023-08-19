class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) 
	{
	    return (upper_bound(arr, arr+n, x) - arr) - (lower_bound(arr, arr+n, x) - arr);
	}
};