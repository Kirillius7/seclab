#include<iostream>
#include<conio.h>
#include<string>
#include<math.h>
using namespace std;
class University {
public:
    struct fac 
    { 
        string fn;
        string ds;
        int gn;
        int sig;
    };
    fac arr[100];
    void fill(int n)
    {
        arr[n];
        for (int i = 0; i < n; ++i)
        {
            cout << "Enter facultate name:";
            cin >> arr[i].fn >> ws;
            cout << "Enter decan surname:";
            cin >> arr[i].ds;
            cout << "Enter number of groups:";
            cin >> arr[i].gn;
            cout << "Enter maximum number of students in group:";
            cin >> arr[i].sig;
            cout << endl;
        }
    }
    void out(int n)
    {
        for (int i = 0; i < n; ++i)
        {
            cout << "Facultate name:" << arr[i].fn << endl;
            cout << "Decan surname:" << arr[i].ds << endl;
            cout << "Number of groups:" << arr[i].gn << endl;
            cout << "Maximum nember of students in group:" << arr[i].sig << endl;
        }
    }
    void add_group(int n)
    {
        cout << "Enter facultate where you wish to add group:";
        string ch;
        cin >> ch;
        for (int i = 0; i < n; ++i)
            if (arr[i].fn == ch)
            {
                arr[i].gn++;
                break;
            }
    }
    void del_group(int n)
    {
        cout << "Enter facultate where you wish to delete group:";
        string ch;
        cin >> ch;
        for (int i = 0; i < n; ++i)
            if (arr[i].fn == ch)
            {
                arr[i].gn--;
                break;
            }
    }
    void calc_stud(int n)
    {
        for (int i = 0; i < n; ++i)
            cout << arr[i].fn << ":" << arr[i].gn * arr[i].sig << endl;
    }
};
int main()
{
    int n;
    cout << "How many facultets are:";
    cin >> n;
    University* a;
    a->fill(n);
    while (true)
    {
        cout << "What do you wanna do?\n";
        cout << "1.Add group.\n2.Delete group.\n3.Calculate students.\n4.Nothing.\n";
        int m;
        cin >> m;
        if (m == 1)
            a->add_group(n);
        if (m == 2)
            a->del_group(n);
        if (m == 1)
            a->calc_stud(n);
        if (m == 4)
            break;
        a->out(n);
    }
    delete a;
    return 0;
}
