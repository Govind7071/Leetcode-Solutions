// Last updated: 29/11/2025, 19:22:40
bool isPalindrome(long long int x) {
    long long int sum = 0, temp = x;
    if (x < 0)
        return false;
    else if (x == 0)
        return true;

    else {
        while (x > 0) {
            sum = sum * 10 + x % 10;
            x = x / 10;
        }
        if (sum == temp)
            return true;
        else
            return false;
    }
}