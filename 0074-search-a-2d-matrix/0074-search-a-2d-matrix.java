class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
       if (matrix.length == 0 || matrix[0].length == 0) return false;

        int rows = matrix.length;
        int cols = matrix[0].length;
        int left = 0;
        int right = rows * cols - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int midElement = matrix[mid / cols][mid % cols]; // Map 1D index to 2D

            if (midElement == target) {
                return true;       // Target found
            } else if (midElement < target) {
                left = mid + 1;    // Search right
            } else {
                right = mid - 1;   // Search left
            }
        }

        return false;
    }
}