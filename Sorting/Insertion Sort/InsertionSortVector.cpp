// Algorithyms Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
class InsertionSortWithStl
{

public:
    void InsertionSort(vector<int> &vec)
    {
        for (size_t j = 1; j < vec.size(); j++)
        {
            int key = vec[j];
            int i = j - 1;

            while (i >= 0 && vec[i] > key)
            {
                vec[i + 1] = vec[i];
                i--;
            }
            vec[i + 1] = key;
        }
    }

    void InsertionSortStl(vector<int> &vec)
    {
        for (auto it = vec.begin(); it != vec.end(); it++)
        {
            // Search
            // upper_bound returns an iterator pointing to the first element in the range[first, last) whose value is larger
            // than the x.Here x is* it.
            auto const insertion_point = upper_bound(vec.begin(), it, *it);

            // insert
            // rotate perfoms left rotation.It swaps the elements in the range[first, last), in such a way that the element pointed
            // by middle becomes the new first elementand element pointed by middle - 1 becomes last element.
            rotate(insertion_point, it, it + 1);
        }
    }

    void Print(vector<int> &vec)
    {
        // for (auto a : fruits)
        //     std::cout << a << " ";
        for (unsigned i = 0; i < vec.size(); i++)
        {
            cout << vec[i] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    InsertionSortWithStl insort;
    int arr[] = {5, 2, 4, 13, 12, 6, 1, 3};
    // vector<int> arr = { 5, 2, 4, 13, 12, 6, 1, 3 };
    vector<int> vecarr(begin(arr), end(arr));
    insort.InsertionSortStl(vecarr);
    insort.Print(vecarr);

    return 0;
}
