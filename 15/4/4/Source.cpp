#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <deque>

using namespace std;

void main () { setlocale(0,""); srand(time(NULL));

	deque<int>dq; int rnumb = rand () % 5 + 5; 
			
		for(int q(0); q < rnumb; q++) dq.emplace_back(rand () % 2);

		for(auto q : dq) cout << q << " ";

	cout << "\nКакую перевернуть ? -> "; int userPerever; cin >> userPerever;
		int userKolOrl; int kolOrl = 0; 
		do{ cout << "\nСколько вы хотите орлов ? -> "; cin >> userKolOrl; 

			for (auto q : dq) 
				if (q != 0) kolOrl++;

		} while (kolOrl > userKolOrl);

		int schotchik=0, itogOrlow=0;
		for(int q(0); q < 1000;q++) {
			for(auto &w : dq) {

					if(w == 0) schotchik++;
					
					if(schotchik == userPerever) { cout << endl;
						w = 1; schotchik=0; kolOrl++;
							for(auto q : dq) cout << q << " ";
							if (kolOrl == userKolOrl) { 
					break; } } }

			if (kolOrl == userKolOrl) { break; } }
							
cout << endl; system("PAUSE");}