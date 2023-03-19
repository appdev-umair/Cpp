#include <iostream>
using namespace std;
int board(int a[12], int box, int player);
int main() {
	system("Color 9F");
	char x_o, box_no[9] = {'1', '2', '3','4', '5', '6', '7', '8', '9'}; 
	int box,  infy_loop = 1, loopCount = 1;
	cout << "\t\t  *****************************\n";
	cout << "\t\t\t   Tik Tak Tow" << endl;
	cout << "\t\t  *****************************\n";
	cout << "\t\t\t     |     |     " << endl;
	cout << "\t\t\t  1  |  2  |  3  " << endl;
	cout << "\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t     |     |     " << endl;
	cout << "\t\t\t  4  |  5  |  6  " << endl;
	cout << "\t\t\t_____|_____|_____" << endl;
	cout << "\t\t\t     |     |     " << endl;
	cout << "\t\t\t  7  |  8  |  9  " << endl;
	cout << "\t\t\t     |     |     " << endl << endl;
	while(infy_loop == 1){
		
		for(int player = 1; player <= 2; player++) {
			again:
			if(player==1){
				x_o = 'O';
			}
			else {
				x_o = 'X';
			}
			cout << "\t\t   Player "<<player<<" enter box number("<<x_o<<"): ";
			cin >> box;
			if(box_no[box - 1] != 'O' && box_no[box - 1] != 'X' && box >= 1 && box <= 9) {
				if(player == 1){
					box_no[box - 1] = 'O';
				}
				else {
					box_no[box - 1] = 'X';
				}
				system("cls");
				cout << "\t\t  *****************************\n";
				cout << "\t\t\t   Tik Tak Tow" << endl;
				cout << "\t\t  *****************************\n";
			
				cout << "\t\t\t     |     |     " << endl;
				cout << "\t\t\t  "<< box_no[0] <<"  |  "<< box_no[1] <<"  |  "<< box_no[2] <<"  " << endl;
				cout << "\t\t\t_____|_____|_____" << endl;
				cout << "\t\t\t     |     |     " << endl;
				cout << "\t\t\t  "<< box_no[3] <<"  |  "<< box_no[4] <<"  |  "<< box_no[5] <<"  " << endl;
				cout << "\t\t\t_____|_____|_____" << endl;
				cout << "\t\t\t     |     |     " << endl;
				cout << "\t\t\t  "<< box_no[6] <<"  |  "<< box_no[7] <<"  |  "<< box_no[8] <<"  " << endl;
				cout << "\t\t\t     |     |     " << endl << endl;
			}
			else {
				cout <<"\t\t\t Enter corrent value: " << endl;
				goto again;
			}
		
			for(int i = 0; i <= 6; i++) {
				if(box_no[i] == 'O' && box_no[i + 1] == 'O' && box_no[i + 2] == 'O') { // horizontal for player one
					cout << "\t\t\tPlayer one has won.";
					exit(0);
				} 
				else if(box_no[i] == 'X' && box_no[i + 1] == 'X' && box_no[i + 2] == 'X') { // horizontal for player two
					cout << "\t\t\tPlayer two has won.";
					exit(0);
				}
				else if(box_no[i] == 'O' && box_no[i + 3] == 'O' && box_no[i + 6] == 'O') { // vertical for player one
					cout << "\t\t\tPlayer one has won.";
					exit(0);
				}
				else if(box_no[i] == 'X' && box_no[i + 3] == 'X' && box_no[i + 6] == 'X') {
					cout << "\t\t\tPlayer two has won.";
					exit(0);
				}
				else if((box_no[0] == 'O' && box_no[4] == 'O' && box_no[8] == 'O') || (box_no[2] == 'O' && box_no[4] == 'O' && box_no[6] == 'O')){
					cout << "\t\t\tPlayer one has won.";
					exit(0);
				}
				else if((box_no[0] == 'X' && box_no[4] == 'X' && box_no[8] == 'X') || (box_no[2] == 'X' && box_no[4] == 'X' && box_no[6] == 'X')){
					cout << "\t\t\tPlayer one has won.";
					exit(0);
				}
			}
				if(loopCount == 5) {
					cout << "\t\t\tMatch is draw!";
					exit(0);
				}
		}
		loopCount++;
	}
	
	return 0;
}