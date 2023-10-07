#include <iostream>
using namespace std;

int main()
{
	bool map [5][5]={
	{ 0 , 0 , 1 , 0 , 1}, // k=0
	{ 0 , 0 , 1 , 0 , 1}, // k=1
	{ 0 , 0 , 0 , 0 , 0}, // k=2
	{ 0 , 1 , 0 , 0 , 0}, // k=3
	{ 1 , 0 , 0 , 0 , 0}  // k=4
	};
	
	int hit = 0, turn = 0;
	
	while ( hit < 6 ){
		int row, column;
		cout << "Select your row: " << "\n";
		cin >> row;
		cout << "Select your column: " << "\n";
		cin >> column;
		
		row--;
		column--; //Subtract 1 from user input to adjust for 0-based indexing
		
		turn++;
		if ( map [row][column] == 1 ){
			map [row][column] = 0;
			hit++;
			cout << "You find "<< hit <<" treasure. Only " << 6 - hit << " left" << "\n";
		}
		else{
			cout << "You suck. Still " << 6 - hit << " left" << "\n";
		}
	}
	cout << "You won in " << turn <<" turn";
	return 0;
}
