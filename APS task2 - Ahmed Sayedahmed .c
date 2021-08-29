#include <stdio.h>
#define SIZE 100000
#include <time.h>
#include <stdlib.h>
int a[SIZE];

int swap(int *a, int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int randomize(int random){
    for (random = 0; random < SIZE; random++){
        a[random] = rand();
   }
   return a[random];
}

void quick_sort(int start, int end){
    int pivot = start, i = start + 1, j = end, temp;
    if (i >= j){
        return;
    }else{
        while (i <= end && a[i] <= a[pivot]){
            i++;
        }
        while (j > start && a[j] >= a[pivot]){
            j--;
        }
        if (i > j) {
            swap(&a[pivot], &a[j]);
        }else{
            swap(&a[i], &a[j]);
        }

    }
    quick_sort(start, j - 1);
    quick_sort(j + 1, end);
}

void insertion_sort(int array[], int size) {
  int step;
  for (step = 1; step < size; step++) {
    int pivot = array[step];
    int j = step - 1;

    while (pivot < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = pivot;
  }
}

int main(){
   int start = 0, end = 99999, random;
   randomize(random);
   int t0 = clock();
   quick_sort(start, end);
   int t1 = clock();
   printf("The array is sorted using quick sort in %d seconds\n", t1 - t0);
   randomize(random);
   int t2 = clock();
   insertion_sort(a, SIZE);
   int t3 = clock();
   printf("The array is sorted using quick sort in %d seconds\n", t3 - t2);
   system("pause");
   return 0;
}
