# include <iostream>
using namespace std;

void tower_of_hanoi(int N, char from_rod, char to_rod, char aux_rod)
{   
    if (N==0)
    {
        return;
    }
    tower_of_hanoi(N-1, from_rod, to_rod, aux_rod);
    cout<<"Move disk "<<N<<" From rod "<<from_rod<< " to rod "<<to_rod<<endl;
    tower_of_hanoi(N-1, aux_rod, to_rod, from_rod);

}

//Driver code
int main()
{
    int N;
    cout<<"Enter the number of the disks:";
    cin>>N;
    tower_of_hanoi(N, 'A', 'C', 'B');
    return 0;
}