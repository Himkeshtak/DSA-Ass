#include <iostream>
//#include <vector>
using namespace std;

int main()
{
    // to complete asked amount in the least number of cloin and then finallly priont the number of coins
    // we have coins of 1 , 2, 5 , 10, 50  
    int amount,itr=0;
    cin>>amount;

    int total_coin_count=0;
    int coin_1=0 ,coin_2=0 ,coin_10=0 ,coin_50=0;

    while(amount != 0)
    {
        if(amount >= 50)
        {
            amount = amount - 50;
            total_coin_count++;
            coin_50++;
        }
        else if(amount < 50 && amount >= 10)
        {
            amount = amount - 10;
            total_coin_count++;
            coin_10++;
        }
        else if(amount < 10 && amount >= 2)
        {
            amount = amount - 2;
            total_coin_count++;
            coin_2++;
        }
        else if(amount < 2)
        {
            amount = amount - 1;
            total_coin_count++;
            coin_1++;
        }
        itr++;
    }

    cout<<"Total number of coins are: "<<total_coin_count<<"\n";
    cout<<"Total number of $50 coins used: "<<coin_50<<"\n";
    cout<<"Total number of $10 coins used: "<<coin_10<<"\n";
    cout<<"Total number of $2 coins used: "<<coin_2<<"\n";
    cout<<"Total number of $1 coins used: "<<coin_1<<"\n";
    cout<<"Total iterations: "<<itr;

    return 0;
}