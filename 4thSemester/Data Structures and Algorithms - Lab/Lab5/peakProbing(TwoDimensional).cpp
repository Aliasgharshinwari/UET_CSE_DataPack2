#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int ROWS = 5;
const int COLS = 5;

const int MAX_VAL = 20;
const int MIN_VAL = 1;

void init_array(int arr[] [COLS]);
void print_array(int arr[] [COLS] );
void find_peak(int arr[] [COLS]);

int main()
{
    int myArr[ROWS][COLS];

    init_array(myArr);
    print_array(myArr);
    find_peak(myArr);

    return 0;
}

void init_array(int arr[] [COLS])
{
    srand(time(0));
    for(int i=0; i<ROWS; i++)
    {
        for(int j = 0; j<COLS; j++)
            arr[i][j] = rand() % (MAX_VAL - MIN_VAL + 1) + MIN_VAL;
    }
}

void print_array(int arr[] [COLS])
{

    for(int i=0; i<ROWS; i++)
    {
        for(int j = 0; j<COLS; j++)
            cout<<arr[i][j]<<"\t";
        cout<<endl;
    }
}


void find_peak(int arr[] [COLS])
{
    int current=0;
    //int peakCounter=0;
    //int minPeakCounter = 0;
    for(int i=0; i<ROWS; i++)
        for(int j=0; j<COLS; j++)
        {
            current = arr[i][j];
            if(i == 0){
               if(current > arr[i][j-1] && current > arr[i][j+1] && current > arr[i+1][j])
                cout<<"Peak at ("<<(i+1)<<","<<(j+1)<<")"<<endl;
                continue;
            }
            else if(j == 0){
              if(current > arr[i][j+1]&& current > arr[i-1][j] && current > arr[i+1][j])
                cout<<"Peak at ("<<(i+1)<<","<<(j+1)<<")"<<endl;
                continue;
            }

            else if(j == ROWS){
              if(current > arr[i][j-1] && current > arr[i][j+1]&& current > arr[i-1][j])
                cout<<"Peak at ("<<(i+1)<<","<<(j+1)<<")"<<endl;
                continue;
            }

            else if(j == COLS){
               if(current > arr[i][j-1] && current > arr[i-1][j] && current > arr[i+1][j])
                cout<<"Peak at ("<<(i+1)<<","<<(j+1)<<")"<<endl;
                continue;
            }
            /*for(int k=i-1; k<=i+1; k++)
            {
                for(int l=j-1; l<=j+1; l++)
                {
                     if(k == i && l == j) { // Skip the current element
                        continue;
                    }

                    if(arr[k][l] < current)
                        peakCounter++;

                    if(arr[k][l] > current)
                        minPeakCounter++;
                }
            }
            if (peakCounter == 8)
                cout<<"Peak at ("<<i<<","<<j<<")"<<endl;
            if( minPeakCounter == 8)
                cout<<"Min Peak at ("<<i<<","<<j<<")"<<endl;

            peakCounter = 0;
            minPeakCounter = 0;
        */

            if(current > arr[i][j-1] && current > arr[i][j+1]&& current > arr[i-1][j] && current > arr[i+1][j])
                cout<<"Peak at ("<<(i+1)<<","<<(j+1)<<")"<<endl;
        }
}
