Algorith understading by dynamic programming

/*
(1) Count the sum of all coins that are odd-numbered.
(2) Count the sum of all coins that are even-numbered.
(3) If odd > even, take the left-most coin first. Choose all odd-numbered coins in subsequent moves.
(4) If odd < even, take the right-most coin first. Choose all even-numbered coins in subsequent moves.
*/

/* Sir, i have try to solve this problem but i can't solve this problem perfectly..*/


#include <iostream>
using namespace std;
void coin(int arr[], int n)
{
	int player1 = 0, player2 = 0;

	for (int i = 0; i < n; i += 2){
        player1 = player1+arr[i];
	}

	for (int i = 1; i < n; i += 2)
		player2 = player2 + arr[i];

    if(player1 > player2)
    {
        cout<<player1<<" player1";
    }
    else{
        cout<<player2<<" player2";
    }


}

int main()
{
	int arr[] = {18,20,15,30,10,14};
	int n = sizeof(arr);
	coin(arr, n);
	cout << endl;
	return 0;
}
