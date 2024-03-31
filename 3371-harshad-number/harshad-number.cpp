class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        
        int temp = x;

        int sum = 0;
        while(temp)
        {
            int digit = temp % 10;
            sum += digit;
            temp /= 10;
        }

        if(x % sum == 0) return sum;
        return -1;
    }
};