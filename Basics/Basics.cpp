#include<bits/stdc++.h>
using namespace std;

int personalityNum(int sum){
    while(sum > 9){
        int temp = 0;
        while(sum > 0){
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
    }
    return sum;
}
string personality(int sum){
    switch(sum){
        case 1: return "The Leader";
        case 2: return "The Peacemaker";
        case 3: return "The Creative Communicator";
        case 4: return "The Builder";
        case 5: return "The Free Soul";
        case 6: return "The Nurturer";
        case 7: return "The Seeker";
        case 8: return "The Powerhouse";
        case 9: return "The Humanitarian";
        default: return "Invalid";
    }
}

int main(){
    int n;
    cout << "Enter your DOB: ";
    cin >> n;

    int sum = 0;

    while(n > 0){
        int digit = n % 10;
        sum += digit;
        n /= 10;
    }

    int result = personalityNum(sum);

    cout << "Personality Number: " << result << endl;
    cout << "Personality type:  " << personality(result) << endl;

    return 0;
}