class Solution:
    def rotate(self, a: list[int], k: int) -> None:
        n = len(a)
        a.reverse()
        while(k>n):
            k = k - n
        a[:k] = a[:k][::-1]
        a[k:n]=a[k:n][::-1]




        