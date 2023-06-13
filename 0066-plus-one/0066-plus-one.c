int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int i = digitsSize - 1;
    while (i >= 0) {
        if (digits[i] == 9) {
            digits[i] = 0;
        } else {
            digits[i] += 1;
            *returnSize = digitsSize;
            return digits;
        }
        i--;
    }
    
    int* result = (int*)malloc((digitsSize + 1) * sizeof(int));
    result[0] = 1;
    for (int j = 1; j < digitsSize + 1; j++) {
        result[j] = digits[j - 1];
    }
    
    *returnSize = digitsSize + 1;
    return result;
}