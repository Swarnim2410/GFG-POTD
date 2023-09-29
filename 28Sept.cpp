
void convertToWave(int n, vector<int>& arr)
    {
        int i=0;
        while(i<n-1)
        {
            swap(arr[i],arr[i+1]);
            i+=2;
        }
    }