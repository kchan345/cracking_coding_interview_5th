#include <vector>
#include <iostream>

void printMatrix(std::vector<std::vector<int>>&);

void swap(std::vector< std::vector<int> >& vec, int x1, int y1, int x2, int y2)
{
    int temp = vec[x1][y1];
    vec[x1][y1] = vec[x2][y2];
    vec[x2][y2] = temp;

    return;
}

void matrixRotation(std::vector< std::vector<int> >& vec, int layer)
{
    if (layer <= 1)
        return;

    int i = vec.size()-layer;

    for ( unsigned int j=i; j<=layer-2; ++j)
    {
        swap(vec, i, j, j, layer-1); // a,b
        swap(vec, i, j, layer-1, layer-1); // b,c
        swap(vec, i, j, layer-1, i); // c,d
    }

    matrixRotation(vec, layer-1);

    return;
}

void matrixRotation(std::vector< std::vector<int> >& vec)
{
    matrixRotation(vec, vec.size());
    return;
}

void printMatrix(std::vector< std::vector<int> >& vec)
{
    for ( int i=0; i<vec.size(); ++i)
    {
        for (int j=0; j<vec.size(); ++j)
            std::cout << vec[i][j] << "\t";
        std::cout << std::endl;
    }

    std::cout<<std::endl;


}
