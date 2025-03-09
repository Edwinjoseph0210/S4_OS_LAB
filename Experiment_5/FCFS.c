#include<stdio.h>
void main()
{
    int p[30],bt[30],tot_tat=0,wt[30],n,tot_wt=0,tat[30];
    int i;
    printf("\nEnter the no.of processes \n");
    scanf("%d",&n);
    printf("Enter burst time for each process\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&bt[i]);
        p[i] = i;
    }
    printf("\n FCFS Algorithm \n");
    for(i=0;i<n;i++)
    {
        if(i==0)
        tat[i] = bt[i];
        else
        tat[i] = tat[i-1] + bt[i];
        tot_tat=tot_tat+tat[i];
    }
    wt[0]=0;
    for(i=1;i<n;i++)
    {
        wt[i]=wt[i-1]+bt[i-1];
        tot_wt = tot_wt+wt[i];
    }
    printf("\nPROCESS\t\tBURST TIME\tTURN AROUND TIME\tWAITING TIME");
    for(i=0; i<n; i++)
        printf("\nprocess[%d]\t\t%d\t\t%d\t\t%d",p[i],bt[i],tat[i],wt[i]);
    printf("\n\nTotal Turn around Time:%d",tot_tat);
    printf("\nAverage Turn around Time :%d ", tot_tat/n);
    printf("\nTotal Waiting Time:%d",tot_wt);
    printf("\nTotal avg. Waiting Time:%d",tot_wt/n);
}
