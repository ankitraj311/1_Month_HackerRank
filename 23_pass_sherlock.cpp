string balancedSums(const vector<int>& arr) {
    long long total = accumulate(arr.begin(), arr.end(), 0LL);
    long long left = 0;
    for (long long x : arr) {
        long long right = total - left - x;
        if (left == right) return "YES";
        left += x;
    }
    return "NO";
}
