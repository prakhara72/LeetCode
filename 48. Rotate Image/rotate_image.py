class Solution:
    def rotate(self, matrix: List[List[int]]) -> None:
        n = len(matrix)
        for i in range(n):
            for j in range(n-1,-1,-1):
                ins_val = matrix[i].pop()
                matrix[j].insert(0,ins_val)
