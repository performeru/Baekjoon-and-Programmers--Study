#include <iostream>

using namespace std;

int gcd(int a, int b) 
{
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) 
{
    return (a / gcd(a, b)) * b;  
}

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;  

    while (T--) 
    {
        int A, B;
        cin >> A >> B;  

        cout << lcm(A, B) << "\n";
    }

}