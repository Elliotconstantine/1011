#include<stdio.h>
struct student{
    long number;
    char name[20];
    int score;
};
void sortAscending(struct student arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].score > arr[j + 1].score) { // ±È½Ï³É¼¨
                struct student temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(void)
{
    int n;
    scanf("%d",n);
    struct student stu[n];
    for(int i=0;i<n;i++){
        scanf("%ld %s %d",&stu[i].number,stu[i].name,&stu[i].score);
    }
    sortAscending(stu,n);
    for (int i = 0; i < n; i++) {
        printf("%ld %s %d\n", stu[i].number, stu[i].name, stu[i].score);
    }
    return 0;
}
