#include<iostream>
#include<vector>

vector<int> threeWayMerge(vector<int> array1, vector<int> array2, vector<int> array3)
{
        vector<int> arraysorted;
        int counterarrayOne = 0;
        int counterarrayTwo = 0;
        int counterarrayThree = 0;
        int counter = 0;
        while (counterarrayOne < array1.size() && (counterarrayTwo < array2.size() && counterarrayThree < array3.size()))
        {
                if (array1[counterarrayOne] < array2[counterarrayTwo])
                {
                        if(array1[counterarrayOne] < array3[counterarrayThree]
                        {
                                arraysorted.push_back(array1[counterarrayOne]);
                                counterarrayOne++;
                        }
                        else
                        {
                                arraysorted.push_back(array3[counterarrayThree]);
                                counterarrayThree++;
                        }
                }
                else
                {
                        if (array2[counterarrayTwo] < array3[counterarrayThree])
                        {
                                arraysorted.push_back(array2[counterarrayTwo]);
                                counterarrayTwo++;
                        }
                        counter++;
                }

                while(counterarrayOne < array1.size())
                {
                        arraysorted.push_back(array1[counterarrayOne]);
                        counter++;
                        counterarrayOne++;
                }
                while(counterarrayTwo < array2.size())
                {
                        arraysorted.push_back(array2[counterarrayTwo]);
                        counter++;
                        counterarrayTwo++;
                }
                while(counterarrayThree < array3.size())
                {
                        arraysorted.push_back(array3[counterarrayThree]);
                        counter++;
                        counterarrayThree++;
                }
        return arraysorted;
}


int main()
{
        vector<int> arr1 = {10, 20, 30, 40, 50};
        vector<int> arr2 = {15, 25, 35, 45, 55, 65, 75};
        vector<int> arrr3 ={17, 27, 37, 47, 57, 67, 77, 87,97};
        vector<int> sortedarr = threeWayMerge(arr3, arr2, arr1);

        for(int i -0; i< sortedarr.size(); i++)
        {
                cout<<sortedarr[i]<<"";
        }

        return 0;
}