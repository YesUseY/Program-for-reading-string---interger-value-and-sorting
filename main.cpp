#include <iostream>
#include <fstream>

using namespace std;

struct Studentai {
string name;
int age;
};

int main()
{
    int n;
    ifstream fin("data.txt");
    fin >> n;
    Studentai S[n] = {};
for (int i = 0; i < n; i++){
    fin >> S[i].name >> S[i].age;
}
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (S[i].age > S[j].age) {
                swap(S[i], S[j]);
            }
            else if (S[i].age==S[j].age) {
                if (S[i].name > S[j].name) {
                    swap(S[i], S[j]);
                }
            }
        }
    }

    ofstream fout("rez.txt");

    for (int i = 0; i < n; i++) {
        fout << S[i].name << " ";
        fout << S[i].age << endl;
    }

    return 0;
}
