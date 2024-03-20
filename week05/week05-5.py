#用兩個for 迴圈,左i,右j
class Solution:
    def maxDistance(self, colors: List[int]) -> int:
        N=len(colors)#how many house in the presant
        
        ans=0#迴圈前面ans是0
        for i in range(N):#左i
            for j in range(N):#右j
                if colors[i]!=colors[j]and j-i>ans:
                    ans=j-i#renew the distance about ans
        return ans#ans拿來用
        