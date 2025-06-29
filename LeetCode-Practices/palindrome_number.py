class PalindromeNumber(object):
    def isPalindrome(self, num):
        if num < 0:
            return False
        
        d = []
        temp = num
        while temp >= 1:
            reminder = temp % 10
            d.append(reminder)
            temp = temp // 10

        return d == d[::-1]
    
class BetterSolution(object):
    def isPalindrome(self, num):
        if num < 0 or (num % 10 == 0 and num != 0):
            return False
        
        reversed_half = 0
        while num > reversed_half:
            reversed_half = reversed_half * 10 + num % 10
            num = num // 10

        return num == reversed_half or num == reversed_half // 10

re = PalindromeNumber()
be = BetterSolution()
print(re.isPalindrome(12321))     # True
print(re.isPalindrome(12345678))  # False
print(re.isPalindrome(1221))      # True
print("**************************")
print(be.isPalindrome(12321))     # True
print(be.isPalindrome(12345678))  # False
print(be.isPalindrome(1221))      # True