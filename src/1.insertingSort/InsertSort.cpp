#include <iostream>
#include <vector>
#include "../../includes/InsertSort.h"

using namespace std;


void InsertSort::insertion_sort(vector<int> &tab){

    vector<int> vec = tab;
    for (size_t i = 1; i < vec.size(); i++)
    {
        int key = vec[i];
        int j = i -1;
        while (j>=0 && vec[j] > key)
        {
            vec[j+1] = vec[j];
            j = j-1;
        }
        vec[j+1] = key;
    }
    

    for (auto &i: vec)
    {
        std::cout << "sorted array : " << i << std::endl;
    }    
}