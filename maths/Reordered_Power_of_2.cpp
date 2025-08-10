class Solution {
public:
    string getDigitCount(int n) {
    string s = to_string(n);
    sort(s.begin(), s.end());
    return s;
}

bool reorderedPowerOf2(int n) {
    string target = getDigitCount(n);
    for (int i = 0; i < 31; i++) {
        int power = 1 << i; // 2^i
        if (getDigitCount(power) == target) {
            return true;
        }
    }
    return false;
}
};