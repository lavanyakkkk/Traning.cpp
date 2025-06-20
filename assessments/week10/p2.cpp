#include <iostream>
using namespace std;
int RowWithMaxOnes(int matrix[][100], int N) {
    int maxofRow = -1;
    int j = N - 1; 
    for (int i = 0; i < N; i++) {
        while (j >= 0 && matrix[i][j] == 1) {
            j--;         
            maxofRow = i;  
        }
    }
    return maxofRow;
}
int main() {
    int n = 4;
    int matrix[100][100] = {
        {0, 0, 0, 1},  
        {0, 0, 1, 1},  
        {0, 1, 1, 1},  
        {0, 0, 1, 1}   
    };

    int result = RowWithMaxOnes(matrix, n);

    if (result != -1){
        cout << "Row with maximum 1's is: " << result << endl;
    }    
    else{
        cout << "no maximum" << endl;
    }
       

    return 0;
}

