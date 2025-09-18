def main():
    n = int(input())
    original = []
    for _ in range(n):
        original.append(list(input().strip()))
    
    target = []
    for _ in range(n):
        target.append(list(input().strip()))
    
    def matrices_equal(a, b):
        for i in range(n):
            for j in range(n):
                if a[i][j] != b[i][j]:
                    return False
        return True
    
    def rotate_90(matrix):
        result = [[None] * n for _ in range(n)]
        for i in range(n):
            for j in range(n):
                result[i][j] = matrix[n-1-j][i]
        return result
    
    def rotate_180(matrix):
        result = [[None] * n for _ in range(n)]
        for i in range(n):
            for j in range(n):
                result[i][j] = matrix[n-1-i][n-1-j]
        return result
    
    def rotate_270(matrix):
        result = [[None] * n for _ in range(n)]
        for i in range(n):
            for j in range(n):
                result[i][j] = matrix[j][n-1-i]
        return result
    
    def reflect(matrix):
        result = [[None] * n for _ in range(n)]
        for i in range(n):
            for j in range(n):
                result[i][j] = matrix[i][n-1-j]
        return result
    
    rotated_90 = rotate_90(original)
    if matrices_equal(rotated_90, target):
        print(1)
        return
    
    rotated_180 = rotate_180(original)
    if matrices_equal(rotated_180, target):
        print(2)
        return
    
    rotated_270 = rotate_270(original)
    if matrices_equal(rotated_270, target):
        print(3)
        return
    
    reflected = reflect(original)
    if matrices_equal(reflected, target):
        print(4)
        return
    
    combo_1 = rotate_90(reflected)
    if matrices_equal(combo_1, target):
        print(5)
        return
    
    combo_2 = rotate_180(reflected)
    if matrices_equal(combo_2, target):
        print(5)
        return
    
    combo_3 = rotate_270(reflected)
    if matrices_equal(combo_3, target):
        print(5)
        return
    
    if matrices_equal(original, target):
        print(6)
        return

    print(7)

if __name__ == "__main__":
    main()
