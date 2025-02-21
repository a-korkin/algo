#include "algo.h"

int *merge_sorted_arrays(int *a, int x, int *b, int y) {
    int *result = (int *)malloc(sizeof(int) * (x + y));
    if (result == NULL) {
        fprintf(stderr, "[ERROR] failed to allocate memory");
        exit(1);
    }
    int len = (x + y) - 1;
    int i;
    int idx_a = x - 1;
    int idx_b = y - 1;
    for (i = len; i >= 0; i--)  {
        if (idx_a < 0) {
            *(result + i) = *(b + idx_b);
            idx_b--;
            continue;
        }
        if (idx_b < 0) {
            *(result + i) = *(a + idx_a);
            idx_a--;
            continue;
        }
        *(result + i) = max(*(a + idx_a), *(b + idx_b));

        if (*(a + idx_a) > *(b + idx_b)) {
            idx_a--;
        } else if (*(a + idx_a) == *(b + idx_b)) {
            idx_a--;
            idx_b--;
        } else {
            idx_b--;
        }
    }

    return result;
}
