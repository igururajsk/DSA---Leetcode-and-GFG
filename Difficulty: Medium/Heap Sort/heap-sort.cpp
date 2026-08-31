// The functions should be written in a way that array become sorted
// in increasing order when heapSort() is called.

class Solution {
  public:
    // Function to sort an array using Heap Sort.
    void heapSort(vector<int>& arr) {
        // code here
        priority_queue<int> pq;
        
        for( int x : arr ){
            pq.push(x);
        }
        
        int n = arr.size();
        
        for(int i = n - 1; i >= 0 ; i--){
            arr[i] = pq.top();
            pq.pop();
        }
        
    }
};