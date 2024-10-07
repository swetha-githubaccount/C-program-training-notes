int binarySearch2D(int arr[][4], int rows, int cols, int target) {
    int low = 0;
    int high = rows * cols - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int midRow = mid / cols;
        int midCol = mid % cols;

        if (arr[midRow][midCol] == target) {
            return 1; 
        } else if (arr[midRow][midCol] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return 0; 
}