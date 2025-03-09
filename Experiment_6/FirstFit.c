#include<stdio.h>
struct process {
    int ps;
    int flag; // 0 for not allocated, 1 for allocated
} p[50];

struct sizes {
    int size;
    int alloc; // 0 for not allocated, 1 for allocated
} s[5];

int n, np;

int main() {
    printf("\nFirst Fit Algorithm\n");
    
    // Input the number of memory blocks
    printf("Enter the number of Blocks of Memory available: ");
    scanf("%d", &n);
    
    // Input the size for each block
    printf("Enter the size for %d blocks:\n", n);
    for(int i = 0; i < n; i++) {
        printf("Block %d size: ", i);
        scanf("%d", &s[i].size);
        s[i].alloc = 0; // Initialize all blocks as not allocated
    }
    
    // Input the number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &np);
    
    // Input the size of each process
    printf("Enter the size for %d processes:\n", np);
    for(int i = 0; i < np; i++) {
        printf("Process %d size: ", i);
        scanf("%d", &p[i].ps);
        p[i].flag = 0; // Initialize all processes as not allocated
    }
    
    printf("\nAllocation of blocks using first fit is as follows\n");
    printf("Process\tProcess Size\tBlock Size\n");
    
    // Allocation using First Fit
    for(int i = 0; i < np; i++) {
        for(int j = 0; j < n; j++) {
            if(p[i].flag != 1 && p[i].ps <= s[j].size && !s[j].alloc) {
                p[i].flag = 1;
                s[j].alloc = 1;
                printf("P%d\t%d\t\t%d\n", i, p[i].ps, s[j].size);
                break; // Move to the next process after allocation
            }
        }
    }
    // Check for processes that couldn't be allocated
    for(int i = 0; i < np; i++) {
        if(p[i].flag != 1) {
            printf("Process %d must wait as there is no sufficient memory\n", i);
        }
    }
    return 0;
}