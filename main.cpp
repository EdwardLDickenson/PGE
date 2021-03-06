#include "deps.hpp"
#include "geometry/geometry.hpp"
#include "types/types.hpp"

using namespace std;

string names[numberOfFunctions] = {	"render_chess_board",
			"render_growing_square",
			"render_bouncing_square",
			"render_square_image",
			"render_circle",
			"render_color_combinations"};

//	Should be in a text file
string descriptions[] = {	"render_chess_board: Renders a red and black chess board of dimensions equal to the window",
							"render_growing_square: Renders a white square which expands to the edge of the screen and then shrinks back to darkness",
							"render_bouncing_square: Renders a white square which bounces across the screen leaving red dots where it collides with the edge",
							"render_square_image: Renders a square with an image",
							"render_circle: Renders a white circle on a background of black",
							"render_color_combinations: Renders a square which displays all combinations of rgb colors"};

void print_descriptions()
{
	cout << "==========================================================" << endl;

	for(size_t i = 0; i < numberOfFunctions; ++i)
	{
		cout << descriptions[i] << endl;
	}

	cout << "==========================================================" << endl;
}

void cli()
{
	bool running = true;
	string input;

	while(running)
	{
		cout << "Input the name of a funciton(\"quit\" to end program or \"print_descriptions\" to see the function map): ";
		cin >> input;

		if(input == "quit" || input == "exit")
		{
			running = false;
		}

		if(input == "print_descriptions" || input == "help")
		{
				print_descriptions();
		}

		for(size_t i = 0; i < numberOfFunctions; ++i)
		{
			if(input == names[i])
			{
				functions[i]();
			}
		}
	}
}

int main(int argc, char *argv[])
{
	cout << "===\tStarting Program\t===" << endl;

	cli();

	cout << "===\tEnding Program\t\t===" << endl;

	return 0;
}



//	TODO:
//
//
//
