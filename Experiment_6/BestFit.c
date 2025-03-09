#include <stdio.h>
struct process {
    int p;
    int flag;
} ps[10];
struct size {
    int size;
    int alloc;
} bs[10];

int main() {
    int np, nb;

    printf("Enter the number of processes: ");
    scanf("%d", &np);

    printf("Enter the size of processes:\n");
    for (int i = 0; i < np; i++) {
        printf("Process %d: ", i);
        scanf("%d", &ps[i].p);
        ps[i].flag = 0; // Initialize the flag as not allocated
    }

    printf("Enter the number of memory blocks: ");
    scanf("%d", &nb);

    printf("Enter the size of memory blocks:\n");
    for (int i = 0; i < nb; i++) {
        printf("Block %d: ", i);
        scanf("%d", &bs[i].size);
        bs[i].alloc = 0; // Initialize the alloc as not allocated
    }
    printf("\nBest Fit:\n");
    printf("Process ID\tProcess Size\tBlock Size\n");
    // Best Fit allocation
    for (int i = 0; i < np; i++) 
    {
        int bestIndex = -1;
        for (int j = 0; j < nb; j++) 
        {
            if (bs[j].alloc == 0 && ps[i].p <= bs[j].size) 
            {
                if (bestIndex == -1 || bs[j].size < bs[bestIndex].size) 
                {
                    bestIndex = j;
                }
            }
        }
        if (bestIndex != -1) {
            ps[i].flag = 1; // Mark the process as allocated
            bs[bestIndex].alloc = 1; // Mark the block as allocated
            printf("%d\t\t%d\t\t%d\n", i, ps[i].p, bs[bestIndex].size);
        }
    }
    // Check for processes that couldn't be allocated
    for (int i = 0; i < np; i++) {
        if (ps[i].flag != 1) {
            printf("Process %d is not successfully allocated.\n", i);
        }
    }
    return 0;
}
