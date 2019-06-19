class Solution:
    def isValid(self, s: str) -> bool:
        s_dict = {'(': ')', '{': '}', '[': ']'}
        if len(s) % 2 != 0 :return False
        opens = []
        for i in s:
            if i in s_dict.keys():
                opens.append(i)
            elif opens and (i == s_dict[opens[-1]]):
                opens.pop()
            else:
                return False
        if opens: return False
        return True
