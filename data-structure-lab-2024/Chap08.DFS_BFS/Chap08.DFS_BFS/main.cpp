#include "Location2D.h"
#include <queue>
using namespace std;

#define MAZE_SIZE 6

char map[MAZE_SIZE][MAZE_SIZE] = {
	{'1', '1', '1', '1', '1', '1'}
	{'1', '1', '1', '1', '1', '1' }
	{'1', '1', '1', '1', '1', '1' }
	{'1', '1', '1', '1', '1', '1' }
	{'1', '1', '1', '1', '1', '1' }

};

bool isValidLoc(int r, int c)
{
	if( r < 0 c <0 r>= maze)
	else return map[r][c] == '0'

void main() {
		stack<Location2D> locStack;
		Location2D entry(1, 0);
		locStack.push(entry);

		while (locStack.empty() == false) {
			Location2D here = locStack.top();
			locstack.pop();


			int main()
			{
				deque<Location20> locdeque;
				Location2D entry(1, 0);
				locDeque.empty() == false) {

				}
				while (locdeque, empty)

					int r = here.row;
				int c = here.col;

				printf("현재 위치 = (%d, %d )", r, c);
	else {
		map[r][c] = '.';
		if (isValidLoc(r - 1, c))
			if (isValidLoc(r + 1, c))
				if (isValidLoc(r, c - 1))
					if (isValidLoc(r, c + 1))

	}

			}

			printf("미로탐색실패\n");

		}