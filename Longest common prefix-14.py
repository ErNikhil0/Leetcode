class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:  # Check for empty list
            return ""

        # Find the shortest string in the list
        min_length = min(len(s) for s in strs)

        i = 0
        while i < min_length:

            for s in strs:
                if s[i] != strs[0][i]:
                    return strs[0][:i]
            i += 1

        return strs[0][:i]
