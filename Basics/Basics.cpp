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
        case 1: return "Leader, independent, ambitious";
        case 2: return "Diplomatic, cooperative, sensitive";
        case 3: return "Creative, expressive, optimistic";
        case 4: return "Hardworking, practical, disciplined";
        case 5: return "Adventurous, energetic, freedom loving";
        case 6: return "Responsible, caring, family oriented";
        case 7: return "Analytical, spiritual, thoughtful";
        case 8: return "Powerful, confident, success driven";
        case 9: return "Compassionate, generous, humanitarian";
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