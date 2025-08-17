## Given an integer x, return true if x is a palindrome, and false otherwise.

bool isPalindrome(int x) {
    if (x < 0) return false; // Negative numbers are not palindromes
    int reversed = 0;
    int original = x;
    while (x > 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    return original == reversed;
}
