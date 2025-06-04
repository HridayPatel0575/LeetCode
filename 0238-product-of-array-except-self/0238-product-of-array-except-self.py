class Solution:
    def productExceptSelf(self, a: List[int]) -> List[int]:
       
        n = len(a)
        result =  []
        res = 1
        
        for val in a:
            res = res * val
        c =[]
        d =[]
        for i in range(n):
            if(a[i]==0):
                d.append(1)
            if(len(d)>1):
                return [0]*n
            if(a[i]!=0):
                c.append(a[i])
            if(len(c)==0):
                res1=0
            else:
                res1 = 1
                
        for val in c:
            res1 = res1 * val 
        for i in range(n):
            if(a[i]==0):
                result.append(res1)
            else:
                result.append(int(res/a[i]))
        return result
        