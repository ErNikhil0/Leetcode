class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0 or (x % 10 == 0 and x != 0):
            return False

            b = 0
            while x > b:
                b = b * 10 + x % 10
                x /= 10

                return x == b or x == b / 10        
