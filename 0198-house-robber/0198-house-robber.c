int rob(int* nums, int numsSize) {
    if (numsSize == 0) {
        return 0;
    }
    
    int rob1 = 0, rob2 = 0;

    for (int i = 0; i < numsSize; i++) {
        // int temp = rob1;
        // rob1 = fmax(rob2 + nums[i], rob1);
        // rob2 = temp;
        int temp= fmax(rob1 + nums[i], rob2);
        rob1=rob2;
        rob2=temp;
    }

    return rob2;
}