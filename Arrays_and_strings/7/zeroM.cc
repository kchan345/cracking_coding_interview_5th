#include <vector>
#include <iostream>
#include <unordered_map>
#include "../6/matrix_rotation.cc"

void clearRow(std::vector<std::vector<int>> &mat, std::vector<int> &rowVec)
{
    for (auto i:rowVec)
    {
        for (int j=0; j<mat[i].size(); ++j)
            mat[i][j]=0;
    }

    return;
}

void clearCol(std::vector<std::vector<int>> &mat, std::vector<int> &colVec)
{
    for (auto i:colVec)
    {
        for (int j=0; j<mat.size(); ++j)
            mat[j][i]=0;
    }
    return;
}

void zeroM(std::vector<std::vector<int>> &mat)
{
    // run through matrix once to determine location of zeros.
    int row = mat.size();
    int col = mat[0].size();

    std::vector<int> z_row(row);
    std::vector<int> z_col(col);

    std::unordered_map<int, bool> rowMap, colMap;

    for ( int i = 0; i < row; ++i)
    {
        for ( int j = 0; j < col; ++j)
        {
            if ( mat[i][j] == 0 )
            {
                if ( !rowMap[i] )
                {
                    z_row.push_back(i);
                    rowMap[i] = true;
                }
                if ( !colMap[j] )
                {
                    z_col.push_back(j);
                    colMap[j] = true;
                }
            }
        }
    }

    clearRow(mat, z_row);
    clearCol(mat, z_col);

    return;

}

