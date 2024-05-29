class Solution:
    def equalSubstring(self, s: str, t: str, maxCost: int) -> int:
        #先用python把字串的迴圈寫出來
        N=len(s)#先知道字串的長度
        for i in range(N):#字串的迴圈
            print(s[i],t[i])#字串的陣列

        return 0