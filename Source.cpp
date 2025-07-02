
#include<iostream>
#include<sstream>
#include<string>
#include<time.h>
#include<Windows.h>
#include<conio.h>

using namespace std;

void Tictactoe();

int main()
{

	Tictactoe();



	cout << "\n\n";
	system("pause");
}


void Tictactoe()
{
	HANDLE myColors = GetStdHandle(STD_OUTPUT_HANDLE);
	int Score1 = 0, Score2 = 0;
	int ColorTest, ColorTest2;
	int SpaceArray[9];
	char Array[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	bool loop = true;
	/*while (loop)
	{*/
		cout << "Welcome to tic tac toe\n";


		system("pause");
		system("cls");

		cout << "Player 1 is X         and          Player 2 is O\n\n";

		cout << "Points for Player 1 = " << Score1 << " Points for Player 2 = " << Score2 << "\n\n\n\n";

		for (int i = 0; i < 18; i++)
		{
			if (i == 0)
			{
				for (int a = 0; a < 6; a++)
				{
					cout << " ";
				}
			}
			cout << "_";
		}
		for (int i = 0; i < 9; i++)
		{
			cout << endl;
			/*if (i == 3 || i == 6 || i == 9)
			{
				for (int k = 0; k < 19; k++)
					
			}*/
			for (int j = 0; j < 5; j++)
			{
				cout << " ";
			}
			for (int a = 0; a < 19; a++)
			{
				
				if (a == 0)
				{
					cout << "|";
				}
				else if (a == 6 || a == 12)
				{
					cout << "|";
				}
				else if (a == 18)
				{
					SetConsoleTextAttribute(myColors, 15 | BACKGROUND_RED);
					cout << " ";
					SetConsoleTextAttribute(myColors, 15);
					cout << "|";
				}
					else if (i == 2 || i == 5 || i == 8)
					{
						if (a == 1)
						{
							for (int k = 0; k < 19; k++)
							{
								SetConsoleTextAttribute(myColors, 15 | BACKGROUND_RED);
								cout << "_";
							    SetConsoleTextAttribute(myColors, 15);
							}
						}
					}
				else
				{
					SetConsoleTextAttribute(myColors, 15 | BACKGROUND_RED);
					cout << " ";
					SetConsoleTextAttribute(myColors, 15);
				}
				
			}
			
		}



	/*}*/
}