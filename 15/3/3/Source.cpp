#include <iostream>
#include <stdlib.h>
#include <deque>
#include <ctime>

using namespace std;

void main() {setlocale(0,""); srand(time(NULL));

	deque<int>d_q,pd_q,npd_q; int r_nambr = rand () % 15 + 5;
		
		for(int q(0); q < r_nambr; q++) d_q.emplace_front(rand() % 90 +10);

		for (auto q : d_q) cout << q << " ";
		cout << endl;
		for(int q(0); q < r_nambr ; q++)
			q % 2 == 0 ? npd_q.emplace_back(d_q[q]) : pd_q.emplace_back(d_q[q]); cout << endl;

		for (auto q : npd_q) cout <<" "<< q << "   "; cout << endl;
		for (auto q : pd_q) cout << "    " << q ;

cout << endl; system("PAUSE");}