class Solution:
    def isValid(self, s: str) -> bool:
        i = 0
        opened = []
        while i < len(s):
            if s[i] == "(" or s[i] == "[" or s[i] == "{":
                opened.append(s[i])
                i += 1
            else:
                j = len(opened)
                if j == 0:
                    return False
                else:
                    j -= 1
                if s[i] == ")" and opened[j] == "(":
                    opened.pop(j)
                elif s[i] == "]" and opened[j] == "[":
                    opened.pop(j)
                elif s[i] == "}" and opened[j] == "{":
                    opened.pop(j)
                else:
                    return False
                i += 1
        if len(opened) == 0:
            return True
        return False


if __name__ == "__main__":
    result = Solution()
    print(result.isValid("{}()[]"))
    print(result.isValid("{[()]}"))
    print(result.isValid("([)]"))
    print(result.isValid("([)"))
