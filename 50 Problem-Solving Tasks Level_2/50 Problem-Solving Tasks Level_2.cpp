#include <iostream>
using namespace std;

void PrintTableHeader() {
    cout << "\n\n\t\t\t Multiplication Table From 1 to 10 \n";
    cout << "\n\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n-------------------------------------------------------------------------------------\n";

}
string ColumnStringSeperator(int i){
    if (i < 10)
        return "   |";
    else
        return "  |";
}
void PrintTableMultiplication() {

    PrintTableHeader();
    for (int i = 1; i <= 10; i++)
    {
        cout << i << ColumnStringSeperator(i);
        for (int j = 1; j <= 10; j++)
        {
            cout <<"\t" << i * j;
        }
        cout << endl;
    }
}

int main()
{
    PrintTableMultiplication();
}

