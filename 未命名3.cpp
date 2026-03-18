#include<stdio.h>

void insertionSort(int a[], int n) {
    for (int i = 1; i < n; i++) {
        int key = a[i];      // 把第 i 个数拿出来
        int j = i - 1;
        // 把前面比 key 大的数一个个往后挪
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;      // 把 key 插进去
    }
}
int main() {
    int a[] = {9, 5, 1, 4, 3};
    int n = sizeof(a) / sizeof(a[0]);

    insertionSort(a, n);  // 数组名 a 就是 int*

    for (int i = 0; i < n; i++)
	{
    	printf("%d ", a[i]);
    }
    return 0;
}
