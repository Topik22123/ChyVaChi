#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    int choose;
    int Choice;
    srand (time(NULL));
    cout << "Hi Dude!Do you want to the game?\n1.Yes" << endl;
    cin >> Choice;
    if (Choice=1)
    {
        cout << "Ok lets start.\n";
        cout << "Choose your choice:\n1.Rock\n2.Scissors\n3.Paper\n";
        cin >> choose;

        int Random = rand() % 3 + 1;
        if (choose == 1)
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
        else if (choose == 2)
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
              else if (choose== 3)
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
