#include "zeroM.cc"

int main()
{
    std::vector<std::vector<int>> mat;

    int row = 5;
    int column = 6;
    int count=0;
    
    for (int i=0; i < row; ++i)
    {
        std::vector<int> vec_temp;
        for (int j=0; j < column; ++j)
        {
            vec_temp.push_back(count++);
        }
        mat.push_back(vec_temp);
    }

    printMatrix(mat);
    zeroM(mat);
    printMatrix(mat);
    return 0;
}
