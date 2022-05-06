#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	// This for randomizing values. I defined ballnum and slot number
	srand(time(0));
	int ballnum=100000, slots=17;

	//array's element numbers must be equal to ball number
	int value, numberOfRs;
 	int ballsPosition[ballnum];
	
	// Generate each ball drops L and R moves. R's are 1, L's are 0
	for (int i = 0; i < ballnum; i++) {
            numberOfRs = 0;
            for (int j = 0; j < slots; j++) {
                value = rand() % 2;
                if (value == 0) {} 
                else {numberOfRs++;}}
            ballsPosition[i] = numberOfRs; }
        
		// I made 17 slots, you can add more    
    	int positionCount0 = 0;
        int positionCount1 = 0;
        int positionCount2 = 0;
        int positionCount3 = 0;
        int positionCount4 = 0;
        int positionCount5 = 0;
        int positionCount6 = 0;
        int positionCount7 = 0;
        int positionCount8 = 0;
        int positionCount9 = 0;
        int positionCount10 = 0;
        int positionCount11 = 0;
        int positionCount12 = 0;
        int positionCount13 = 0;
        int positionCount14 = 0;
        int positionCount15 = 0;
        int positionCount16 = 0;
        
        
        int size = sizeof ballsPosition / sizeof ballsPosition[0];
        
 		// This will count number of balls
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < slots; j++) {
                if (ballsPosition[i] == j) {
                    switch (ballsPosition[i]) {
                    case 0:
                        positionCount0++;
                        break;
                    case 1:
                        positionCount1++;
                        break;
                    case 2:
                        positionCount2++;
                        break;
                    case 3:
                        positionCount3++;
                        break;
                    case 4:
                        positionCount4++;
                        break;
                    case 5:
                        positionCount5++;
                        break;
                    case 6:
                        positionCount6++;
                        break;
                    case 7:
                        positionCount7++;
                        break;
                    case 8:
                        positionCount8++;
                        break;
                    case 9:
                        positionCount9++;
                        break;
                    case 10:
                        positionCount10++;
                        break;
					case 11:
                        positionCount11++;
                        break;
                    case 12:
                        positionCount12++;
                        break;
                    case 13:
                        positionCount13++;
                        break;
                    case 14:
                        positionCount14++;
                        break;
                    case 15:
                        positionCount15++;
                        break;
                    case 16:
                        positionCount16++;
                        break; }}}}
                        
                //This will sum the ball counts in slots
                int sum = positionCount0+positionCount1+positionCount2+positionCount3+positionCount4+positionCount5+positionCount6+positionCount7+positionCount8+positionCount9+positionCount10+positionCount11+positionCount12+positionCount13+positionCount14+positionCount15+positionCount16;
        
        		//This will print what we want
        		printf("1:  %d",positionCount0);
        		printf("\n");
                printf("2:  %d",positionCount1);
                printf("\n");
                printf("3:  %d",positionCount2);
                printf("\n");
                printf("4:  %d",positionCount3);
                printf("\n");
                printf("5:  %d",positionCount4);
                printf("\n");
                printf("6:  %d",positionCount5);
                printf("\n");
                printf("7:  %d",positionCount6);
                printf("\n");
                printf("8:  %d",positionCount7);
                printf("\n");
                printf("9:  %d",positionCount8);
                printf("\n");
                printf("10: %d",positionCount9);
                printf("\n");
                printf("11: %d",positionCount10);
                printf("\n");
                printf("12: %d",positionCount11);
                printf("\n");
                printf("13: %d",positionCount12);
                printf("\n");
				printf("14: %d",positionCount13);
				printf("\n");
				printf("15: %d",positionCount14);
				printf("\n");
				printf("16: %d",positionCount15);
				printf("\n");
				printf("17: %d",positionCount16);
				printf("\n");
				printf("Created threads: %d",ballnum);	
				printf("\n");
				printf("Values in the shells: %d",sum); }

