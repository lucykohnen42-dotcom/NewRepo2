/*******************************************
Lucy Kohnen
kohnen2@tritons.iowacentral.edu
Computer Science Fall 2026
October x, 2026
Calculating the standard deviation of values inputed from an input file and outputted into an output file. 
*******************************************/

#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

/* Steps for standard deviation 
* mean: sum of values divided by n
* square difference of each value and the mean
* sum of the square differences
* divided by n-1
* square rt of value
*/

// Prototype of function
float mean (float a, float b, float c, float d);
float stdDEV(float a, float b, float c, float d, float mean);

int main()

{

	//File input from inMeanStd.dat
	ifstream infile;
	infile.open("inMeanStd.dat");

	int a, b, c, d;

	infile >> a >> b >> c >> d; 

	infile.close();

	
	//Function call
	float meanResult = mean(a, b, c, d);
	
	//Function call 
	float stdDEVvalue = stdDEV(a, b, c, d, meanResult); 


	

	// File output 
	ofstream outfile;
	outfile.open("outMeanStd.dat");
	outfile << "Standard Deviation:" << stdDEVvalue << endl; 
	outfile.close();

	return 0;
	}

// Function definition 
float mean (float a, float b, float c, float d)
{
	return float (a + b + c + d) / 4.0f; 

}
float stdDEV(float a, float b, float c, float d, float mean)
{
	float sum = (a - mean) * (a - mean) + (b - mean) * (b - mean) + (c - mean) * (c - mean) + (d - mean) * (d - mean);

	return sqrt(sum / 4.0f);
}
