// Function to perform spiral traversal
void spiralTraversal(int left, int right, int top, int bottom, int matrix[][right + 1]) {
    int i;

    while (left <= right && top <= bottom) {

        // Print the first row from the remaining rows
        for (i = left; i <= right; ++i) {
            printf("%d ", matrix[top][i]);
        }
        top++;

        // Print the last column from the remaining columns
        for (i = top; i <= bottom; ++i) {
            printf("%d ", matrix[i][right]);
        }
        right--;

        // Print the last row from the remaining rows
        if (top <= bottom) {
            for (i = right; i >= left; --i) {
                printf("%d ", matrix[bottom][i]);
            }
            bottom--;
        }

        // Print the first column from the remaining columns
        if (left <= right) {
            for (i = bottom; i >= top; --i) {
                printf("%d ", matrix[i][left]);
            }
            left++;
        }
    }
}

int main() {
    int row, col;
    scanf("%d %d", &row, &col);
    
    int matrix[row][col]; 
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int left = 0, right = col - 1, top = 0, bottom = row - 1;
    spiralTraversal(left, right, top, bottom, matrix);
    
    return 0;
}