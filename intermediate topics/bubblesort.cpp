#include<iostream>

void sort(int nums[] , int len );

int main(int argc, char const *argv[])
{
    int nums[] = {1,5,9,3,7,10,2,4};
    int len = sizeof(nums)/sizeof(nums[0]) ;

    sort(nums , len);

    for(int element : nums){
        std::cout << element << "\n";
    }

    return 0;
}

void sort(int nums[] , int len){
    int temp;


    for(int i=0 ; i< len -1 ; i++ ){          // i are sorted elements
        for(int j=0 ; j< len -1 -i ; j++ ){   // j used for (main)inner iteration 
            if(nums[j+1] < nums[j]){
                //swap
                temp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = temp;
            }
        }
    }
}
