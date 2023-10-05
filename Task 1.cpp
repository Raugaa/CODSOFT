#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int num, guess;
    srand(time(0));
    num = rand() % 201;
    cout<<"Guess My Number Game\n\n";
    while(true)
    {
        cout<<"Enter a number between 0 to 200: ";
        cin>>guess;
        int difference = abs(guess-num);
        if(difference == 1 || difference == 2)
        {
            cout<<"Close Enough";
        }
        else if(guess > num)
        {
            cout<<"Too High";
        }
        else if(guess < num)
        {
            cout<<"Too Low";
        }
        else
        {
            cout<<"Correct! You got it Right!!\n";
            break;
        }
        cout<<"Try Again\n\n";
    }
    return 0;

}