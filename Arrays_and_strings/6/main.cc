#include "matrix_rotation.cc"

int main()
{
    std::vector< std::vector<int> > vec;

    int count=0;

    int dimension=6;

    for (int i=0; i < dimension; ++i)
    {
        std::vector<int> vec_temp;
        for (int j=0; j < dimension; ++j)
        {
            vec_temp.push_back(count++);
        }
        vec.push_back(vec_temp);
    }

    printMatrix(vec);

    matrixRotation(vec);

    printMatrix(vec);

    return 0;
}
