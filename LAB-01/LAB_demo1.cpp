#include <iostream>
using namespace std;
void main()
{
cout << "Welcome to the wonderful world of C++!!!\n";
cout << "Lab1 \t";
cout<<"\n END\t PROGRAM\t BYE";
cout<<"Welcome in yarmouk univerity\rHellooo";
}
#include <iostream>
#include <string>

using namespace std;

string abbreviateWord(const string& word) {
    int length = word.length();
    if (length > 10) {
        return word[0] + to_string(length - 2) + word[length - 1];
    }
    return word;
}

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        string word;
        cin >> word;
        cout << abbreviateWord(word) << endl;
    }

    return 0;
}
