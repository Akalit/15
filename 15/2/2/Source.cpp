#include <iostream>
#include <algorithm>
#include <iterator>
#include <deque>
#include <string>
#include <list>
#include <conio.h>

using namespace std;

void main() {	setlocale(0, "");

	deque<char>que; char user[100]; cin >> user; int vsp =0;
	
		for(int q(0); user[q] !='\0'; q++) que.emplace_front(user[q]);

		for(int q(0); q < que.size(); q++) 
			
			switch (que[q]) {
				case '(': vsp--; break;	   case ')': vsp++; break;
				case '[': vsp-=2; break;	case ']': vsp += 2; break;
				case '{': vsp -= 3; break;	 case '}': vsp += 3; break;
			case '<': vsp -= 4; break;	  case '>': vsp += 4; break;}
	
	vsp == 0 ? cout << "\tTrue" : cout << "\tFalse";

cout << endl; system("PAUSE");}
 