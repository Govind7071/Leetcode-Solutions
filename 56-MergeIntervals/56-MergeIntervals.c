// Last updated: 29/11/2025, 19:22:35
#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort (sort by start time)
int cmp(const void* a, const void* b) {
    int* x = *(int**)a;
    int* y = *(int**)b;
    return x[0] - y[0];
}

/**
 * Merge Intervals function (LeetCode style)
 */
int** merge(int** intervals, int intervalsSize, int* intervalsColSize,
            int* returnSize, int** returnColumnSizes) {
    if (intervalsSize == 0) {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }

    // Step 1: Sort intervals
    qsort(intervals, intervalsSize, sizeof(int*), cmp);

    // Allocate memory for result
    int** result = (int**)malloc(sizeof(int*) * intervalsSize);
    *returnColumnSizes = (int*)malloc(sizeof(int) * intervalsSize);

    int idx = 0; // index of merged result
    result[idx] = (int*)malloc(sizeof(int) * 2);
    result[idx][0] = intervals[0][0];
    result[idx][1] = intervals[0][1];
    (*returnColumnSizes)[idx] = 2;

    // Step 2: Merge
    for (int i = 1; i < intervalsSize; i++) {
        if (intervals[i][0] <= result[idx][1]) {
            // Overlap → extend the end if needed
            if (intervals[i][1] > result[idx][1]) {
                result[idx][1] = intervals[i][1];
            }
        } else {
            // No overlap → add new interval
            idx++;
            result[idx] = (int*)malloc(sizeof(int) * 2);
            result[idx][0] = intervals[i][0];
            result[idx][1] = intervals[i][1];
            (*returnColumnSizes)[idx] = 2;
        }
    }

    *returnSize = idx + 1;
    return result;
}
