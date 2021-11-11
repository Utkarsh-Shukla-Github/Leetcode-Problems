// Time Complexity - O(n*log(n)) + 2*O(n)
// Space Complexity - O(n)

class Solution {
public:
int merge(int *arr, int l, int m, int r) {
    
    int n1 = m - l + 1;
    int n2 = r - m;
    int inv_count=0,t=m+1;
    
    for(int i=l;i<=m;++i) {
        while(t<=r && arr[i] > 2LL*arr[t]) ++t;
        inv_count += (t - (m+1));
    }
    int *L = new int[n1], *R = new int[n2];

    for (int i = 0; i < n1; i++) L[i] = arr[l + i];
    for (int j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 || j < n2) {
        if (j >= n2 || (i < n1 && L[i] <= R[j])) {
            arr[k++] = L[i++];
        } else {
            arr[k++] = R[j++];
        }
    }

    delete[] L;
    delete[] R;
    return inv_count;
}

int mergeSort(int *arr, int l, int r) {
    int inv_count = 0;
    if (l < r) {
        int m = l + (r - l) / 2;
        inv_count += mergeSort(arr, l, m);
        inv_count += mergeSort(arr, m + 1, r);
        inv_count += merge(arr, l, m, r);
    }
    return inv_count;
}

int inversionCount(int *arr, int N){
    return mergeSort(arr, 0, N-1);
}

    int reversePairs(vector<int>& nums) {
        const int N = nums.size(); 
        int arr[N];
        copy(nums.begin(), nums.end(), arr);
        return mergeSort(arr, 0, N-1);
    }
};