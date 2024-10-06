#include<stdio.h>



void get_input(int n, float p[][10])
{



    for(int i =0; i<n; i++)
    {

        p[i][0] = i+1;



        printf("Enter process %d arrival time\n", i+1);

        scanf("%f", &p[i][1]);



        printf("Enter process %d burst time\n", i+1);

        scanf("%f", &p[i][2]);

    }

}





void initialize_arr(int n, float p[][10])
{



    for(int i =0; i<n; i++)
    {

        p[i][0] = i;



    }



    p[0][1]=3;

    p[1][1]=2;

    p[2][1]=5;

    p[3][1]=7;

    p[4][1]=1;



    p[0][2]=12;

    p[1][2]=4;

    p[2][2]=5;

    p[3][2]=7;

    p[4][2]=9;



    p[0][7]=12;

    p[1][7]=4;

    p[2][7]=5;

    p[3][7]=7;

    p[4][7]=9;

    for(int i =0; i<n; i++)
    {

        p[i][4] = 0;



    }



}



void print_array(int n, float p[][10])
{

    printf("Job Number:\tArrival time\tburst time:\tStart time:\tEnd time:\tWait time:\tTurnAround time:\tRemaining time\n");



    for(int i =0; i<n; i++)
    {

        printf("-----%.1f-----\t-----%.1f------\t-----%.1f-----\t-----%.1f-----\t-----%.1f-----\t-----%.1f-----\t-----%.1f-----\t-----%.1f-----\n", p[i][0], p[i][1], p[i][2],  p[i][3], p[i][4], p[i][5], p[i][6], p[i][7]);

        //printf("Process with Job Number: %f\t", p[i][0]);

        //printf("Process %d arrival time: %f\t", i+1,p[i][1]);

        //printf("Process %d burst time: %f\t\n", i+1,p[i][2]);

    }

}



void sort_array(int n, float p[][10])
{



    for(int i =0; i<n; i++)
    {



        for(int j=i+1; j<n; j++)
        {



            if(p[i][1] > p[j][1])
            {

                float temp;



                for(int k =0; k<10; k++)
                {

                    temp = p[i][k];

                    p[i][k] = p[j][k];

                    p[j][k] = temp;

                }

                //temp = p[i][1];

                //p[i][1] = p[j][1];

                //p[j][1] = temp;





            }

        }

    }

}



void rr(int n, float p[][10])
{



    float t=0;



    for(int i=0; i<6; i++)
    {

        for(int j=0; j< n; j++)
        {



            if(p[j][7] > 0)
            {

                if(i == 0)
                {
                    p[j][3] = t;
                }

                p[j][7] -= 5;

                t+=5;



                if(p[j][7] <= 0)
                {

                    p[j][4] = t; //End Time

                    p[j][5] = p[j][4] - p[j][2]- p[j][1]; //Wait Time = End Time - Burst Time + Arrival Time

                    p[j][6] = p[j][5] + p[j][2]; //TurnAround Time = Burst Time + Wait Time

                }

            }

        }

    }

    printf("\nTOTAL TIME:%.2f\n",t);



}



int main()
{



    int n=5;

    //printf("Enter the total number of jobs\n");

    //scanf("%d", &n);



    float processes[5][10];



    initialize_arr(5, processes);

    //get_input(5, processes);

    sort_array(n, processes);

    rr(5, processes);

    print_array(5, processes);



    //print_array(n, processes);

    return 0;

}
