# isdc-optimized-2d-histogram-filter-cpp
ISDC Project - Optimizing a 2D Histogram Filter using C++

In this project, I've applied the concepts taught in the Performance Programming in C++ lesson to optimize the 2D histogram filter.
This project includes the following files:
1. main.cpp - This implements a vector called grid. Grid is a char vector holding the color values of a 2-dimensional square grid.
2. initialize_beliefs - This function takes in the char grid and outputs the initial probabilities for each square on the grid.
3. sense - This function takes a measurement of the current grid space's color. The measurement is used to update the probabilities of each space on the grid.
4. blur - This function passes the grid through a smoothing algorithm.
5. normalize - This function normalizes the probabilities.
6. move - This function controls how the robot moves to a new space on the board, and the probabilities are updated appropriately.
7. zeros - This functions creates a grid that is initialized to zero values.
Each function is run ten-thousand times to allow us to test code performance.
