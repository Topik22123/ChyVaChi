#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    char Rock,Scissors,Paper;
    char Yes;
    srand (time(NULL));
    cout << "Hi Dude!Do you want to the game?\nPrint:Yes" << endl;
    cin >> Yes;
    if (Yes)
    {
        cout << "Ok lets start.\n";
        cout << "Choose your choice:\n1.Rock\n2.Scissors\n3.Paper\n";
        cin >> Rock >> Scissors >>Paper;

        int Random = rand() % 3 + 1;
        if (Rock)
        {
            if (Random == 3)
            {
                cout << "You loose!"<< endl;
            }
            else if (Random == 2)
                {
                    cout << "You win!" << endl;
                }
                    else
                        {
                       cout << "Draw!" << endl;
                        }


        }
        else if (Scissors)
             {
                if (Random == 1 )
                {
                    cout << "You loose!" <<endl;
                }
                else if (Random == 2)
                    {
                        cout <<"Draw!" <<endl;
                    }
                        else
                            {
                            cout <<"You win!" << endl;
                            }
             }
              else if (Paper)
                   {
                    if (Random == 1 )
                        {
                        cout << "You win!" <<endl;
                        }
                        else if (Random == 2)
                              {
                                cout <<"You loose!" <<endl;
                              }
                                else
                                 {
                                    cout <<"Draw!" << endl;
                                 }
                   }
        }
                cout << "\nGoodbye!" << endl;


    return 0;
}
