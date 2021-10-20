/*
** ETNA PROJECT, 20/10/2021 by kwamou_b
** my_sort_intarr
** File description:
**      sort number :p
*/



void my_sort_intarr(int *array, int size)
{
    for (int i=0; i<size-1; i++)
    {
        for (int j=i+1; j<size; j++)
        {
            if (array[i]>array[j])
            {
                int x = array[i];
                array[i] = array[j];
                array[j] = x;
            }
        }
    }
};

int main() {
int arr[6] = {1,3,6,9,4,2};
my_sort_intarr(arr, 6);

 return 0;
}