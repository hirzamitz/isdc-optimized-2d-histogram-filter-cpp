#include "headers/initialize_beliefs.h"

using namespace std;

vector< vector <float> > initialize_beliefs(int height, int width) {
  	vector< vector <float> > newGrid(height, vector <float> (width, 1.0 / ( (float) height * width)));
	return newGrid;
}