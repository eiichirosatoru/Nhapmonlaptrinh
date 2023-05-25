#include <iostream>
#include <cctype>
#include <string>
#include <conio.h>

using namespace std;

// Hàm chuyển đổi chuỗi thành chữ hoa đầu mỗi từ
string Chuyendoi(const string& str) 
{
    string result = str;
    bool newWord = true;

    for (size_t i = 0; i < result.length(); i++) 
    {
        if (isalpha(result[i])) 
        {
            if (newWord) 
            {
                result[i] = toupper(result[i]);
                newWord = false;
            } 
            else 
            {
                result[i] = tolower(result[i]);
            }
        } 
        else 
        {
            newWord = true;
        }
    }

    return result;
}

int main() 
{
    string input;

    cout << "Nhap ho va ten: ";
    getline(cin, input);

    string converted = Chuyendoi(input);
    cout << "Ho ten sau khi sua thanh in hoa: " << converted << endl;
    
    getch();
    return 0;
}
