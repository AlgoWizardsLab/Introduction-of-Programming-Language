    /****
     * steps :
     * --> find out the length of arr or string;
     * --> check 1st element and last element
     *      ---> if the 1st and last element are same
     *          ----> then 1st element ++, and last element --
     * --> if not same ( 1st element and last element )
     *      ---> print not palindrome
     * loop logic :
     * for checking palindrome :
     * --> loop condition : i<= length/2;
     * ---> inside loop  increment 1st and decrement last element .
     *
     */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int half_length = n/2;
    int first_pointer = 0;
    int last_pointer =  n-1;
    
    for(int i=0; i<=half_length; i++){
        if(arr[first_pointer] != arr[last_pointer]){
            printf("NO");
            break;
        }
        first_pointer++;
        last_pointer--;
        if(i == half_length){
            printf("YES");
        }
    }


    return 0;
}