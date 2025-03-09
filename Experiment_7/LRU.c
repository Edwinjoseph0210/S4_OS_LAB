#include <stdio.h>

int main() {
    int i, j, n, a[50], frame[10], no, k, avail, count = 0;
    int time[10], pos;

    // Input for number of pages
    printf("\nEnter the number of pages:\n");
    scanf("%d", &n);

    // Input for page numbers
    printf("\nEnter the page numbers:\n");
    for (i = 1; i <= n; i++)
        scanf("%d", &a[i]);

    // Input for number of frames
    printf("\nEnter the number of frames:\n");
    scanf("%d", &no);

    // Initialize all frames to -1 (empty) and time array to 0
    for (i = 0; i < no; i++) {
        frame[i] = -1;
        time[i] = 0;
    }

    // Start LRU Page Replacement
    j = 0;
    printf("\tRef string\tPage frames\n");

    // Process each page
    for (i = 1; i <= n; i++) {
        printf("%d\t\t", a[i]); // Print current page reference
        avail = 0; // Initialize availability to 0 (not available)

        // Check if page is already in any frame
        for (k = 0; k < no; k++) {
            if (frame[k] == a[i]) {
                avail = 1; // Page is available
                time[k] = i; // Update the time of the page
                printf("hit");
                break;
            }
        }

        // If page is not available (page fault)
        if (avail == 0) {
            // Find the LRU page position
            pos = 0;
            for (k = 1; k < no; k++) {
                if (time[k] < time[pos])
                    pos = k;
            }

            // Replace frame with current page
            frame[pos] = a[i];
            time[pos] = i; // Update time of the page
            count++; // Increment page fault count

            for (k = 0; k < no; k++) {
                if (frame[k] != -1) {
                    printf("%d\t", frame[k]); // Print current frame contents
                } else {
                    printf("-\t"); // Print empty frame
                }
            }
        }
        printf("\n");
    }

    // Print total number of page faults
    printf("Page fault is %d", count);

    return 0;
}
