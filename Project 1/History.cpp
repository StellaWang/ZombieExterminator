
#include "History.h"
#include <iostream>
#include <string>
using namespace std;

History::History(int nRows, int nCols)
{
    m_rows = nRows;
    m_cols = nCols;
    int r,c;
    for (r = 1; r <= m_rows; r++)
        for (c = 1; c <= m_cols; c++)
            m_Historygrid[r-1][c-1] = '.';
}

bool History::record(int r, int c)
{
    if (r < 1  ||  c < 1  ||  r > m_rows  ||  c > m_cols)
        return false;
    else
    {
        m_diedrows = r;
        m_diedcols = c;
        
        if (m_Historygrid[m_diedrows-1][m_diedcols-1] == '.')
            m_Historygrid[m_diedrows-1][m_diedcols-1] = 'A';
        else if (m_Historygrid[m_diedrows-1][m_diedcols-1] == 'Z')
            m_Historygrid[m_diedrows-1][m_diedcols-1] = m_Historygrid[m_diedrows-1][m_diedcols-1];
        else
            m_Historygrid[m_diedrows-1][m_diedcols-1] = m_Historygrid[m_diedrows-1][m_diedcols-1] + 1;
        return true;
    }
}

void History::display() const
{
    clearScreen();
    
    int r,c;
    
    for (r = 1; r <= m_rows; r++)
    {
        for (c = 1; c <= m_cols; c++)
        {
            cout << m_Historygrid[r-1][c-1];
        }
        cout << endl;
    }
    cout << endl;
}